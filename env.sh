#!/bin/bash
# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Environment setup for Croc SoC ASIC flow
# This file is sourced by all scripts to set up tool paths and PDK location

# Determine repository root
if [[ -n "${BASH_SOURCE[0]}" ]]; then
    export CROC_ROOT=$(realpath $(dirname "${BASH_SOURCE[0]}"))
else
    export CROC_ROOT=$(pwd)
fi

################
## Tool Paths ##
################
export BENDER="${BENDER:-bender}"
export PYTHON3="${PYTHON3:-python3}"
export YOSYS="${YOSYS:-yosys}"
export OPENROAD="${OPENROAD:-openroad}"
export KLAYOUT="${KLAYOUT:-klayout}"
export VERILATOR="${VERILATOR:-/foss/tools/bin/verilator}"
export VSIM="${VSIM:-vsim}"

################
## PDK Discovery (priority: PDK_ROOT → technology/ → ihp13/pdk/)
################
if [[ -z "${PDK_ROOT:-}" ]]; then
    if [[ -d "${CROC_ROOT}/technology" ]]; then
        export PDK_ROOT="${CROC_ROOT}/technology"
    elif [[ -d "${CROC_ROOT}/ihp13/pdk" ]]; then
        export PDK_ROOT="${CROC_ROOT}/ihp13/pdk"
    else
        echo "[WARNING] PDK not found. Set PDK_ROOT or ensure ihp13/pdk/ exists"
        export PDK_ROOT=""  # Set to empty to avoid unbound variable error
    fi
else
    # PDK_ROOT was already set, export it to ensure it's available
    export PDK_ROOT
fi

################
## Project Settings ##
################
export PROJ_NAME="${PROJ_NAME:-croc}"
export TOP_DESIGN="${TOP_DESIGN:-croc_chip}"
export DUT_DESIGN="${DUT_DESIGN:-croc_soc}"

################
## Directory Structure ##
################
# Yosys
export YOSYS_DIR="${CROC_ROOT}/yosys"
export YOSYS_OUT="${YOSYS_DIR}/out"
export YOSYS_REPORTS="${YOSYS_DIR}/reports"
export YOSYS_TMP="${YOSYS_DIR}/tmp"

# OpenROAD
export OR_DIR="${CROC_ROOT}/openroad"
export OR_OUT="${OR_DIR}/out"
export OR_REPORTS="${OR_DIR}/reports"
export OR_SAVE="${OR_DIR}/save"

# KLayout
export KLAYOUT_DIR="${CROC_ROOT}/klayout"

# Software
export SW_DIR="${CROC_ROOT}/sw"
export SW_BIN="${SW_DIR}/bin"

################
## Netlist Paths ##
################
export NETLIST="${YOSYS_OUT}/${TOP_DESIGN}_yosys.v"
export NETLIST_DEBUG="${YOSYS_OUT}/${TOP_DESIGN}_yosys_debug.v"

################
## PDK Paths (derived from PDK_ROOT) ##
################
# Check if using ETHZ DZ cockpit or GitHub PDK
if [[ -d "${CROC_ROOT}/technology" ]]; then
    # ETHZ DZ cockpit layout
    export PDK_VARIANT="ethz_cockpit"
    export PDK="${PDK_ROOT}"
else
    # GitHub PDK layout
    export PDK_VARIANT="github"
    export PDK="${PDK_ROOT}/ihp-sg13g2"
fi
