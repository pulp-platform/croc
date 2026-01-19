#!/bin/bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>
# - Thomas Benz     <tbenz@iis.ee.ethz.ch>
#
# Environment setup for Croc SoC ASIC flow
# This file is sourced by all scripts to set up tool paths and PDK location

# Determine repository root
if [[ -n "${BASH_SOURCE[0]}" ]]; then
    export CROC_ROOT=$(realpath $(dirname "${BASH_SOURCE[0]}"))
else
    export CROC_ROOT=$(pwd)
fi
echo "[INFO][ENV] Croc root: $CROC_ROOT"


###################
# PDK Discovery
###################
# priority: technology/ over ihp13/pdk/

if [[ -d "${CROC_ROOT}/technology" ]]; then

    echo "[INFO][ENV] Init tech from ETHZ DZ cockpit"
    export PDK_ROOT="$CROC_ROOT/technology"
    export KLAYOUT_PATH="$CROC_ROOT/klayout/.klayout"
    export PDK_DIR_LEF_TECH="$PDK_ROOT/lef"
    export PDK_DIR_LEF_CELLS="$PDK_ROOT/lef"
    export PDK_DIR_LEF_SRAMS="$PDK_ROOT/lef"
    export PDK_DIR_LEF_IOS="$PDK_ROOT/lef"
    export PDK_DIR_LEF_BOND="$CROC_ROOT/ihp13/bondpad/lef"
    export PDK_DIR_GDS_CELLS="$PDK_ROOT/gds"
    export PDK_DIR_GDS_SRAMS="$PDK_ROOT/gds"
    export PDK_DIR_GDS_IOS="$PDK_ROOT/gds"
    export PDK_DIR_GDS_BOND="$CROC_ROOT/ihp13/bondpad/gds"

elif [[ -d "${CROC_ROOT}/ihp13/pdk" ]]; then

    echo "[INFO][ENV] Init tech from Github PDK"
    export PDK_ROOT="$CROC_ROOT/ihp13/pdk"
    export KLAYOUT_PATH="$PDK_ROOT/ihp-sg13g2/libs.tech/klayout"
    export PDK_DIR_LEF_TECH="$PDK_ROOT/ihp-sg13g2/libs.ref/sg13g2_stdcell/lef"
    export PDK_DIR_LEF_CELLS="$PDK_ROOT/ihp-sg13g2/libs.ref/sg13g2_stdcell/lef"
    export PDK_DIR_LEF_SRAMS="$PDK_ROOT/ihp-sg13g2/libs.ref/sg13g2_sram/lef"
    export PDK_DIR_LEF_IOS="$PDK_ROOT/ihp-sg13g2/libs.ref/sg13g2_io/lef"
    export PDK_DIR_LEF_BOND="$CROC_ROOT/ihp13/bondpad/lef"
    export PDK_DIR_GDS_CELLS="$PDK_ROOT/ihp-sg13g2/libs.ref/sg13g2_stdcell/gds"
    export PDK_DIR_GDS_SRAMS="$PDK_ROOT/ihp-sg13g2/libs.ref/sg13g2_sram/gds"
    export PDK_DIR_GDS_IOS="$PDK_ROOT/ihp-sg13g2/libs.ref/sg13g2_io/gds"
    export PDK_DIR_GDS_BOND="$CROC_ROOT/ihp13/bondpad/gds"

    # Apply PDK patches required for filling
    if [ ! -f ${CROC_ROOT}/ihp13/pdk.patched ]; then
        git -C ${PDK_ROOT} apply ../patches/0001-Filling-improvements.patch
        touch ${CROC_ROOT}/ihp13/pdk.patched
        echo "[INFO][ENV] Applied all PDK patches"
    else
        echo "[INFO][ENV] PDK patches already applied"
    fi

else
    echo "[WARNING][ENV] PDK not found. Set PDK_ROOT and KLAYOUT_PATH or ensure ihp13/pdk/ exists"
    export PDK_ROOT=""  # Set to empty to avoid unbound variable error
    export KLAYOUT_PATH="" # Set to empty to avoid unbound variable error
fi

echo "[INFO][ENV] PDK root: $PDK_ROOT"
echo "[INFO][ENV] KLayout path: $KLAYOUT_PATH"

export PDK=ihp-sg13g2


######################
# Project Settings
######################
export PROJ_NAME="${PROJ_NAME:-croc}"
export TOP_DESIGN="${TOP_DESIGN:-croc_chip}"
export DUT_DESIGN="${DUT_DESIGN:-croc_soc}"


###################
# Netlist Paths
###################
export NETLIST="${CROC_ROOT}/yosys/${TOP_DESIGN}_yosys.v"
export NETLIST_DEBUG="${CROC_ROOT}/yosys/${TOP_DESIGN}_yosys_debug.v"

