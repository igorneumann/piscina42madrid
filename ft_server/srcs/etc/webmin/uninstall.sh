#!/bin/sh
printf "Are you sure you want to uninstall Webmin? (y/n) : "
read answer
printf "\n"
if [ "$answer" = "y" ]; then
	/etc/webmin/stop
	echo "Running uninstall scripts .."
	(cd "/usr/local/webmin" ; WEBMIN_CONFIG=/etc/webmin WEBMIN_VAR=/var/webmin LANG= "/usr/local/webmin/run-uninstalls.pl")
	echo "Deleting /usr/local/webmin .."
	rm -rf "/usr/local/webmin"
	echo "Deleting /etc/webmin .."
	rm -rf "/etc/webmin"
	echo "Done!"
fi
