#!/bin/bash
# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Synthesize RTL to gate-level netlist using Yosys

set -e  # Exit on error
set -u  # Error on undefined vars

################
### Setup
################
script_dir=$(realpath $(dirname "${BASH_SOURCE[0]}"))
croc_root=$(realpath "${script_dir}/..")

# Source environment
source "${croc_root}/env.sh"

##############################
### Helper Functions (inline)
##############################
show_help() {
    cat << EOF
Yosys Synthesis Script

Usage:
    ./run_synthesis.sh [OPTIONS]

Options:
    --help, -h          Show this help message

Environment Variables:
    TOP_DESIGN          Top module name (default: croc_chip)
    YOSYS               Path to Yosys binary (default: yosys)
    SV_FLIST            Path to file list (default: ../croc.flist)

Inputs:
    - RTL file list: ${CROC_ROOT}/croc.flist
    - PDK Liberty files (auto-discovered)
    - Synthesis scripts: yosys/scripts/yosys_synthesis.tcl

Outputs:
    - Netlist: yosys/out/${TOP_DESIGN}_yosys.v
    - Debug netlist: yosys/out/${TOP_DESIGN}_yosys_debug.v
    - Reports: yosys/reports/*.rpt
    - Log: yosys/${TOP_DESIGN}.log

Example:
    # Basic run
    ./run_synthesis.sh

    # Override top module
    TOP_DESIGN=my_chip ./run_synthesis.sh
EOF
    exit 0
}

####################
### Parse Arguments
####################
if [[ "${1:-}" == "--help" ]] || [[ "${1:-}" == "-h" ]]; then
    show_help
fi

################
### Main Script
################
echo "[INFO] Starting Yosys synthesis for ${TOP_DESIGN}"

# File list
SV_FLIST="${SV_FLIST:-${croc_root}/croc.flist}"
echo "[INFO] Using file list: ${SV_FLIST}"

# Create output directories
mkdir -p "${YOSYS_OUT}"
mkdir -p "${YOSYS_TMP}"
mkdir -p "${YOSYS_REPORTS}"

# Output files
logfile="${YOSYS_DIR}/${TOP_DESIGN}.log"

# Check Yosys is available
command -v "${YOSYS}" &>/dev/null || { echo "[ERROR] Yosys not found: ${YOSYS}" >&2; exit 1; }

# Run Yosys synthesis
echo "[INFO] Running Yosys synthesis..."
echo "[INFO]   Top module: ${TOP_DESIGN}"
echo "[INFO]   PDK: ${PDK_ROOT}"

cd "${YOSYS_DIR}"

# Set environment for TCL script
export SV_FLIST
export TOP_DESIGN
export TMP="${YOSYS_TMP}"
export OUT="${YOSYS_OUT}"
export REPORTS="${YOSYS_REPORTS}"

# Run Yosys with timestamped logging
if ${YOSYS} -c "${YOSYS_DIR}/scripts/yosys_synthesis.tcl" 2>&1 | \
    TZ=UTC gawk '{ print strftime("[%Y-%m-%d %H:%M %Z]"), $0 }' | \
    tee "${logfile}" | \
    gawk -f "${YOSYS_DIR}/scripts/filter_output.awk"; then

    echo "[SUCCESS] Synthesis complete!"
    echo "[INFO] Output netlist: ${YOSYS_OUT}/${TOP_DESIGN}_yosys.v"
    echo "[INFO] Debug netlist: ${YOSYS_OUT}/${TOP_DESIGN}_yosys_debug.v"
    echo "[INFO] Reports: ${YOSYS_REPORTS}/"
    echo "[INFO] Log file: ${logfile}"
else
    echo "[ERROR] Synthesis failed! Check log: ${logfile}" >&2
fi
