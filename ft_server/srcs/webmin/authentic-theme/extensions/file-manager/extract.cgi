#!/usr/bin/perl

#
# Authentic Theme (https://github.com/authentic-theme/authentic-theme)
# Copyright Ilia Rostovtsev <programming@rostovtsev.io>
# Licensed under MIT (https://github.com/authentic-theme/authentic-theme/blob/master/LICENSE)
#
use strict;

use File::Basename;

our (%in, %text, $cwd, $path);

do(dirname(__FILE__) . '/file-manager-lib.pl');

my @entries_list = get_entries_list();
my %errors;
my $status;
my $status_gpg;
my $pparam;
my $iname;
my $gpg;
my $password = $in{'password'};
my $delete   = $in{'delete'};

foreach my $name (@entries_list) {
    my $no_command;
    $status     = 0;
    $status_gpg = 0;
    $gpg        = 0;
    $iname      = $name;
    if (string_ends_with($name, '.gpg') || string_ends_with($name, '.pgp')) {
        my $gpgpath = get_gpg_path();
        $gpg = 1;
        $name =~ s/\.(gpg|pgp)$//;
        my $pparam_gpg;
        if ($password) {
            my $gpg_ver = get_gpg_version($gpgpath);
            if ($gpg_ver ge '2.1') {
                $pparam_gpg = " --pinentry-mode loopback ";
            } else {
                $pparam_gpg = " --yes --batch  ";
            }
            $pparam_gpg .= "  --passphrase-fd 0 ";
        }

        $status_gpg = "cd @{[quotemeta($cwd)]} && $gpgpath $pparam_gpg --output @{[quotemeta($name)]} --decrypt " .
          quotemeta("$cwd/$iname");

        open my $fh => "| $status_gpg" or $no_command = 1;
        print $fh $password;
        close $fh;
        $status_gpg = $?;
        if (!has_command($gpgpath) || $no_command) {
            $errors{ $text{'theme_xhred_global_error'} } = text('theme_xhred_global_no_such_command', $gpgpath);
        }
    }

    my $archive_type = mimetype($cwd . '/' . $name);
    if ($archive_type =~ /x-tar/ || $archive_type =~ /x-compressed-tar/) {
        $status = system("tar xpf " . quotemeta("$cwd/$name") . " -C " . quotemeta($cwd));
    } elsif ($archive_type =~ /x-bzip/) {
        system("tar xjfp " . quotemeta("$cwd/$name") . " -C " . quotemeta($cwd));
    } elsif ($archive_type =~ /\/gzip/) {
        my $gz_cmd = has_command('gunzip') || has_command('gzip');
        system("$gz_cmd -d -f -k " . quotemeta("$cwd/$name"));
    } elsif ($archive_type =~ /x-xz/) {
        my $xz = has_command('xz');
        system("$xz -d -f -k " . quotemeta("$cwd/$name"));
    } elsif ($archive_type =~ /x-7z/) {
        if ($password) {
            $pparam = (" -p" . quotemeta($password) . " ");
        }
        $status = system("7z x -aoa " . quotemeta("$cwd/$name") . " -o" . quotemeta($cwd) . $pparam);
    } elsif ($archive_type =~ /\/zip/) {
        if ($password) {
            $pparam = (" -P " . quotemeta($password) . " ");
        }
        my $unzip_out = `unzip --help`;
        my $uu        = ($unzip_out =~ /-UU/ ? '-UU' : undef);
        $status = system("unzip $pparam $uu -q -o " . quotemeta("$cwd/$name") . " -d " . quotemeta($cwd));

    } elsif ($archive_type =~ /\/x-rar|\/vnd\.rar/) {
        if ($password) {
            $pparam = (" -p " . quotemeta($password) . " ");
        }
        if (has_command('unar')) {
            $status = system("unar $pparam -r " . quotemeta("$cwd/$name") . " -o " . quotemeta($cwd));
            if ($status == 512) {
                $status = 65280;
            }
        } else {
            $pparam =~ s/(?<=.)\s//;
            $status = system("unrar $pparam x -r -y -o+ " . quotemeta("$cwd/$name") . " " . quotemeta($cwd));
        }
    } elsif ($archive_type =~ "/x-rpm" || $archive_type =~ /\/x-deb/) {
        my $dir  = fileparse("$cwd/$name", qr/\.[^.]*/);
        my $path = quotemeta("$cwd/$dir");
        system("mkdir $path");
        if ($archive_type =~ /\/x-rpm/) {
            system("(rpm2cpio " . quotemeta("$cwd/$name") . " | (cd " . $path . "; cpio -idmv))");
        } else {
            system("dpkg -x " . quotemeta("$cwd/$name") . " " . $path);
        }
    }

    if (!%errors && ($delete || $gpg) && ($status == 0 && $status_gpg == 0)) {
        unlink_file("$cwd/$name");
        if ($delete && $gpg) {
            unlink_file("$cwd/$iname");
        }
    }

    if ($status != 0 || $status_gpg != 0) {
        if ($gpg) {
            if ($status_gpg == 512) {
                $errors{ $name } = $text{'filemanager_archive_gpg_private_error'};
            }
        } elsif ($status == 1280 || $status == 65280) {
            $errors{ $name } = $text{'filemanager_archive_password_required'};
        } elsif ($status == 256 || $status == 512 || $status == 768) {
            $errors{ $name } = $text{'filemanager_archive_password_wrong'};
        } elsif ($status == 2304 || $status == 2560) {
            $errors{ $name } = $text{'filemanager_archive_file_not_found'};
        }
    }
}

redirect_local(
           'list.cgi?path=' . urlize($path) . '&module=' . $in{'module'} . '&error=' . get_errors(\%errors) . extra_query());
