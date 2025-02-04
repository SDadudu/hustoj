#!/bin/bash

OSRS=`lsb_release -rs`
 
cd /home/judge/src/install || exit 1；
dpkg --configure -a
while ! apt-get install -y docker.io containerd
do
		service docker start
		echo "Network fail, retry... you might want to make sure docker.io is available in your apt source"
done

cat > /etc/docker/daemon.json <<EOF
{
	"registry-mirrors": [
 				"https://yczv4b52.mirror.aliyuncs.com",
				"https://docker.m.daocloud.io",
				"https://huecker.io",
				"https://dockerhub.timeweb.cloud",
			        "https://registry.cn-hangzhou.aliyuncs.com",
	   			"https://hub.geekery.cn",
       				"https://dockerpull.com",
	   			"https://docker.1panel.dev",
       				"https://docker.5z5f.com"
    	],
	"live-restore": true,
	"log-opts": {
		"max-size": "512m",
		"max-file": "3"
	}
}
EOF

bash add_dns_to_docker.sh

systemctl enable docker
service docker start
if ! docker build -t hustoj .
then
    	echo "Network fail, retry... you might want to make sure https://hub.docker.com/ is available"
	echo "Docker image failed, try download from temporary site ... "
	while ! wget -O hustoj.docker.tar.bz2  http://dl3.hustoj.com/docker/hustoj.docker.$OSRS.tar.bz2
 	do
  		echo "Download archive image file fail , try again..."
  	done
	bzip2 -d hustoj.docker.tar.bz2
	#docker load < hustoj.docker.tar
        if docker import hustoj.docker.tar hustoj 
	then
 	    rm	hustoj.docker.tar
        fi
fi
 
sed -i "s/OJ_USE_DOCKER=0/OJ_USE_DOCKER=1/g" /home/judge/etc/judge.conf
sed -i "s/OJ_PYTHON_FREE=0/OJ_PYTHON_FREE=1/g" /home/judge/etc/judge.conf
sed -i "s|OJ_DOCKER_PATH=/usr/bin/podman|OJ_DOCKER_PATH=/usr/bin/docker|g" /home/judge/etc/judge.conf
pkill -9 judged
/usr/bin/judged
