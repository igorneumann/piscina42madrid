# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineumann <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 17:07:19 by ineumann          #+#    #+#              #
#    Updated: 2020/02/02 20:05:59 by ineumann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM debian:buster

# Instalar apt-utils y debconf-utils para configuracion, systemctl y Actualizar Debian
RUN apt-get update && \
	apt-get install -y apt-utils make golang curl wget

# Instalar nginx y php
RUN apt-get install -y nginx \
	php php-cli php-fpm php-cgi php-mbstring php-zip php-mysql openssl

# Instalar SQL
RUN apt-get install -y mariadb-server

# Configurar carpeta
WORKDIR /var/www/

# Instalar PHPMyAdmin y wordpress
COPY srcs/html/ /var/www/html/
COPY srcs/sites-available/default /etc/nginx/sites-available/default
COPY srcs/phpmyadmin.sql ./
COPY srcs/webmin /tmp/webmin

# Dar permisos
RUN chmod 755 -R -c /var/www

#instalar certificado
RUN cd /tmp && wget https://github.com/FiloSottile/mkcert/archive/v1.0.0.tar.gz && tar xzvf /tmp/v1.0.0.tar.gz
RUN cd /tmp/mkcert-1.0.0 && make
RUN cd /tmp/mkcert-1.0.0/bin && chmod +x mkcert
RUN cd /tmp/mkcert-1.0.0/bin && cp mkcert /usr/bin/
RUN cd /etc/ssl/certs/ && mkcert -install && mkcert localhost

#expose ports
EXPOSE 80 443 10000

#Start nginx
ENTRYPOINT 	service nginx start && \
			service php7.3-fpm start && \
			service mysql start && \
			mysql -u root < phpmyadmin.sql && \
			sleep infinity && \
			wait
