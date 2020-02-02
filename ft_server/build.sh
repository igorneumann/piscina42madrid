docker stop prueba
docker system prune -a
docker build -t "prueba" .
docker container run -d -p 80:80 -p 443:443 -p 10000:10000 --name="prueba" prueba
docker exec -it prueba /tmp/webmin/setup.sh /usr/local/webmin -p
open http://localhost
