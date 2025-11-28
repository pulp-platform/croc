#!/bin/bash

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
