#!/bin/sh

IMG=hpretl/hpretl/iic-osic-tools:pulp

docker pull $IMG

env UID=${UID} GID=${GID} docker-compose run \
  -e PS1="\[\033[01;32m\]docker-osic: \[\033[00m\]\[\033[01;34m\]\w\[\033[00m\] $" \
  -e DISPLAY=$DISPLAY \
  -v /tmp/.X11-unix:/tmp/.X11-unix \
  pulp-docker