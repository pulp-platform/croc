#!/bin/sh
# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

IMG=hpretl/iic-osic-tools:2024.10

docker pull $IMG

env UID=$(id -u) GID=$(id -g) docker compose run \
  -e PS1="\[\033[01;32m\]docker-osic: \[\033[00m\]\[\033[01;34m\]\w\[\033[00m\] $" \
  -v /tmp/.X11-unix:/tmp/.X11-unix \
  pulp-docker
