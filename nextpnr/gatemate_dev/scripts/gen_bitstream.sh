#!/bin/sh
# Copyright (c) 2025 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Thomas Benz <tbenz@iis.ee.ethz.ch>

# prepare flist
bender script flist-plus \
    -t gatemate \
    -t synthesis \
    -D COMMON_CELLS_ASSERTS_OFF=1 \
    -D SYNTHESIS=1 \
    -D VERILATOR=1 \
    > croc_gm.flist

# run synthesis
mkdir out
yosys -s scripts/yosys.ys

# run PnR for gatemate dev board in typical conditions. use router 2 as router 1 does not converge
nextpnr-himbaechel \
    --device CCGM1A1 \
    --json out/croc_yosys_gm.json \
    --vopt time_mode=2 \
    --vopt out=out/croc_yosys_gm.config \
    --vopt ccf=src/croc_gm.ccf \
    --router router2

# create binary bitstream
gmpack out/croc_yosys_gm.config out/croc_yosys_gm.bit
