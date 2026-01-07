#!/bin/bash
# Copyright 2026 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51
# Authors:
#
# - Enrico Zelioli  <ezelioli@iis.ee.ethz.ch>

# Set variables
OPENROAD=${OPENROAD:-openroad}
QT_QPA_PLATFORM=${QT_QPA_PLATFORM:-"offscreen"}

# Clean up generated files
[ -f croc.log ] && rm croc.log
rm -rf reports/
rm -rf out/
rm -rf save/
mkdir reports
mkdir out
mkdir save

# Run OpenRoad
QT_QPA_PLATFORM="offscreen" ${OPENROAD} scripts/chip.tcl -log croc.log 2>&1 | TZ=UTC gawk '{ print strftime("[%Y-%m-%d %H:%M %Z]"), $0 }'

