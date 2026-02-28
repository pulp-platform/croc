#!/bin/sh
# Copyright (c) 2025 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Thomas Benz <tbenz@iis.ee.ethz.ch>

# prepare flist
bender script flist-plus \
    -t ecp5 \
    -t synthesis \
    -D COMMON_CELLS_ASSERTS_OFF=1 \
    -D SYNTHESIS=1 \
    -D VERILATOR=1 \
    > croc_ecp5.flist

# run synthesis
mkdir out
yosys -s scripts/yosys.ys

# PnR for the OrangeCrab FPGA
nextpnr-ecp5 \
    --85k \
    --package CSFBGA285 \
    --json out/croc_yosys_ecp5.json \
    --textcfg out/croc_yosys_ecp5.config

# create binary bitstream
ecppack out/croc_yosys_ecp5.config out/croc_yosys_ecp5.bit
