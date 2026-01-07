#!/bin/bash
# Copyright 2026 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51
# Authors:
#
# - Enrico Zelioli  <ezelioli@iis.ee.ethz.ch>

# Set variables
VIVADO=${VIVADO:-"vitis-2022.1 vivado"}

# Clean up generated files
rm -rf build/
rm -rf out/
mkdir build
mkdir out
mkdir build/genesys2.clkwiz
mkdir build/genesys2.vio
mkdir build/genesys2.croc

# Implement clock wizard IP
cd build/genesys2.clkwiz
${VIVADO} -mode batch -source ../../scripts/impl_ip.tcl \
    -tclargs genesys2 clkwiz
cd ../..

# Implement VirtualIO IP
cd build/genesys2.vio
${VIVADO} -mode batch -source ../../scripts/impl_ip.tcl \
    -tclargs genesys2 vio
cd ../..

# Implement Croc
cd build/genesys2.croc
${VIVADO} -mode batch -source ../../scripts/impl_sys.tcl \
    -tclargs genesys2 croc ../genesys2.clkwiz/out.xci ../genesys2.vio/out.xci
