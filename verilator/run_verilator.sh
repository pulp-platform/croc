#!/bin/bash
# Copyright 2026 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51
# Authors:
#
# - Enrico Zelioli  <ezelioli@iis.ee.ethz.ch>

# Set variables
VERILATOR=${VERILATOR:-verilator}
BINARY=${BINARY:-"../sw/bin/helloworld.hex"}

# Clean up generated files
[ -d ./obj_dir     ] && rm -r ./obj_dir
[ -f croc.fst      ] && rm croc.fst
[ -f croc.log      ] && rm croc.log
[ -f croc.fst.hier ] && rm croc.fst.hier

# Verilate design
${VERILATOR} \
    -Wno-fatal \
    -Wno-style \
    -Wno-BLKANDNBLK \
    -Wno-WIDTHEXPAND \
    -Wno-WIDTHTRUNC \
    -Wno-WIDTHCONCAT \
    -Wno-ASCRANGE \
    --binary \
    -j 0 \
    --timing \
    --autoflush \
    --trace-fst \
    --trace-threads 2 \
    --trace-structs \
    --unroll-count 1 \
    --unroll-stmts 1 \
    --x-assign fast \
    --x-initial fast \
    -O3 \
    --top tb_croc_soc \
    -f croc.f

# Run simulation
if [ ! -f "${BINARY}" ]; then
    echo "Cannot open binary file '${BINARY}'"
else
    obj_dir/Vtb_croc_soc +binary="${BINARY}" | tee croc.log
fi
