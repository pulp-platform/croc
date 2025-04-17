#!/bin/bash

# Default board is genesys2
BOARD="genesys2"

# Parse command line arguments
while getopts "b:" opt; do
  case ${opt} in
    b )
      BOARD=$OPTARG
      ;;
    \? )
      echo "Usage: $0 [-b board_type]"
      echo "Supported boards: genesys2, artyz720"
      exit 1
      ;;
  esac
done

# Validate board selection
if [[ "$BOARD" != "genesys2" && "$BOARD" != "artyz720" ]]; then
    echo "Error: Unsupported board type '$BOARD'"
    echo "Supported boards: genesys2, artyz720"
    exit 1
fi

# Generate the TCL script
bender script vivado -t fpga -t rtl -t $BOARD > scripts/add_sources.$BOARD.tcl

# Build Clkwiz
mkdir -p build/$BOARD.clkwiz
cd build/$BOARD.clkwiz && \
    vitis-2022.1 vivado -mode batch -log ../$BOARD.clkwiz.log -jou ../$BOARD.clkwiz.jou \
    -source ../../scripts/impl_ip.tcl \
    -tclargs $BOARD clkwiz \
    && cd ../..

# Build VIO
mkdir -p build/$BOARD.vio
cd build/$BOARD.vio && \
    vitis-2022.1 vivado -mode batch -log ../$BOARD.vio.log -jou ../$BOARD.vio.jou \
    -source ../../scripts/impl_ip.tcl \
    -tclargs $BOARD vio \
    && cd ../..

# Build top croc module
mkdir -p build/$BOARD.croc
cd build/$BOARD.croc && \
    vitis-2022.1 vivado -mode batch -log ../croc.$BOARD.log -jou ../croc.$BOARD.jou \
    -source ../../scripts/impl_sys.tcl \
    -tclargs $BOARD croc \
    ../$BOARD.clkwiz/out.xci \
    ../$BOARD.vio/out.xci