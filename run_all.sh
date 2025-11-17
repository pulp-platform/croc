#!/bin/bash
# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Master Orchestrator for Croc SoC ASIC Flow
# Runs the complete flow: file list generation, synthesis, and backend

set -e  # Exit on error
set -u  # Error on undefined vars

################
### Setup
################
script_dir=$(realpath $(dirname "${BASH_SOURCE[0]}"))
cd "${script_dir}"

# Source environment
source "${script_dir}/env.sh"

##############################
### Helper Functions (inline)
##############################

show_help() {
    cat << EOF
Croc SoC ASIC Flow - Master Orchestrator

Usage:
    ./run_all.sh [OPTIONS]

Options:
    --help, -h          Show this help message
    --flist             Run synthesis file list re-generation
    --synthesis         Run synthesis (use existing croc.flist)
    --backend           Run backend (use existing netlist)

Environment Variables:
    PROJ_NAME       - Project name (default: croc)
    TOP_DESIGN      - Top module name (default: croc_chip)
    YOSYS           - Path to Yosys binary
    OPENROAD        - Path to OpenROAD binary
    BENDER          - Path to Bender binary

Flow Steps:
    1. Generate file list (using Bender)
    2. Synthesis (Yosys)
    3. Backend (OpenROAD)
       - Floorplan and power grid
       - Placement
       - Clock tree synthesis
       - Routing
       - Finishing

Outputs:
    - File list:   croc.flist
    - Netlist:     yosys/out/${TOP_DESIGN}_yosys.v
    - Checkpoints: openroad/save/*.zip
    - Final DEF:   openroad/out/${PROJ_NAME}.def
    - Final ODB:   openroad/out/${PROJ_NAME}.odb
    - Final Verilog: openroad/out/${PROJ_NAME}.v
EOF
    exit 0
}

generate_flist() {
    echo "[INFO] Using Bender to generate croc.flist"

    command -v "${BENDER}" &>/dev/null || { echo "[ERROR] Bender not found: ${BENDER}" >&2; exit 1; }

    ${BENDER} script flist-plus \
        -t asic -t ihp13 -t rtl -t synthesis \
        -D VERILATOR=1 -D SYNTHESIS=1 -D COMMON_CELLS_ASSERTS_OFF=1 \
        > croc.flist

    echo "[SUCCESS] File list generated: croc.flist"
}


####################
### Parse Arguments
####################

while [[ $# -gt 0 ]]; do
    case "$1" in
        --help|-h)
            show_help
            ;;
        --flist)
            generate_flist
            shift
            ;;
        --synthesis)
            [[ -f "croc.flist" ]] || { echo "[ERROR] croc.flist not found. Run with --flist to generate it." >&2; exit 1; }
            yosys/run_synthesis.sh
            shift
            ;;
        --backend)
            [[ -f "${NETLIST}" ]] || { echo "[ERROR] Netlist not found: ${NETLIST}. Run with --synthesis to generate it." >&2; exit 1; }
            openroad/run_backend.sh --all
            shift
            ;;
        *)
            echo "[ERROR] Unknown option: $1 (use --help for usage)" >&2
            exit 1
            ;;
    esac
done

