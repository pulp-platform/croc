#!/bin/bash
# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# OpenROAD Backend Flow Script
# Runs the complete backend flow or individual steps

set -e  # Exit on error
set -u  # Error on undefined vars

################
### Setup
################
# Source environment
source "../env.sh"

# Create output directories
mkdir -p "${OR_OUT}"
mkdir -p "${OR_REPORTS}"
mkdir -p "${OR_SAVE}"


##############################
### Helper Functions (inline)
##############################

show_help() {
    cat << EOF
OpenROAD Backend Flow Script

Usage:
    ./run_backend.sh [OPTIONS]

Options:
    --help, -h          Show this help message
    --dry-run, -n       Don't actually run any command; just print them
    --verbose, -v       Print commands before executing them
    --all               Run entire backend (stages 01-05)
    --floorplan         Initialize, floorplan, and power grid (stage 01)
    --placement         Repair netlist and placement (stage 02)
    --cts               Clock tree synthesis (stage 03)
    --routing           Global and detailed routing (stage 04)
    --finishing         Filler cells and output generation (stage 05)
    --run script        Run a script relativ to the script direction (e.g., startup)
    --open script       Open GUI and execute a script (e.g., startup)

Environment Variables:
    PROJ_NAME       - Project name (default: croc)
    TOP_DESIGN      - Top module name (default: croc_chip)

Examples:
    # Run entire backend flow
    ./run_backend.sh --all

    # Run only floorplan step
    ./run_backend.sh --floorplan

Inputs:
    - Synthesized netlist: ${NETLIST}
    - Constraints: openroad/src/constraints.sdc
    - PDK libraries: Auto-discovered from ${PDK_ROOT}

Outputs:
    - Checkpoints: openroad/save/*.zip
    - Reports: openroad/reports/
    - Final outputs: openroad/out/

EOF
    exit 0
}


run_cmd() {
    if [ "$DRYRUN" = 1 ]; then
        echo $1
    else
        eval $1
    fi
}

run_openroad_script() {
    run_cmd "echo [INFO][OpenROAD] Runnin $1"
    run_cmd "openroad \
        -no_init \
        -exit \
        scripts/$1.tcl \
        -log reports/$1.log \
        2>&1 | TZ=UTC gawk '{ print strftime(\"[%Y-%m-%d %H:%M %Z]\"), \$0 }'"
}

open_openroad_script() {
    run_cmd "echo [INFO][OpenROAD] Open the GUI and run $1"
    run_cmd "openroad \
        -no_init \
        -gui \
        scripts/$1.tcl \
        -log reports/$1.log \
        2>&1 | TZ=UTC gawk '{ print strftime(\"[%Y-%m-%d %H:%M %Z]\"), \$0 }'"
}


####################
### Parse Arguments
####################

DRYRUN=0

# default action if no argument is given
if [ $# -eq 0 ]; then
    show_help
    return 0
fi

# check for global arguments
for arg in "$@"; do
    [[ "$arg" == -v || "$arg" == --verbose ]] && set -x
    [[ "$arg" == -n || "$arg" == --dry-run ]] && DRYRUN=1
done

# parse arguments
while [[ $# -gt 0 ]]; do
    case "$1" in
        --help|-h)
            show_help
            ;;
        --verbose|-v)
            shift
            ;;
        --dry-run|-n)
            shift
            ;;
        # script-specific commands
        --floorplan)
            run_openroad_script "01_floorplan"
            shift
            ;;
        --placement)
            run_openroad_script "02_placement"
            shift
            ;;
        --cts)
            run_openroad_script "03_cts"
            shift
            ;;
        --routing)
            run_openroad_script "04_routing"
            shift
            ;;
        --finishing)
            run_openroad_script "05_finishing"
            shift
            ;;
        --all)
            run_openroad_script "01_floorplan"
            run_openroad_script "02_placement"
            run_openroad_script "03_cts"
            run_openroad_script "04_routing"
            run_openroad_script "05_finishing"
            shift
            ;;
        --run)
            run_openroad_script "$2"
            shift 2
            ;;
        --open)
            open_openroad_script "$2"
            shift 2
            ;;
        # Error handling
        *)
            echo "[ERROR] Unknown option: $1 (use --help for usage)" >&2
            exit 1
            ;;
    esac
done
