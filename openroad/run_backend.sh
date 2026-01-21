#!/bin/bash
# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>
# - Thomas Benz     <tbenz@iis.ee.ethz.ch>
#
# OpenROAD Backend Flow Script
# Runs the complete backend flow or individual steps

set -e  # Exit on error
set -u  # Error on undefined vars

################
# Setup
################
# Source environment
source "../env.sh"


##############################
# Helper Functions (inline)
##############################

show_help() {
    cat << EOF
OpenROAD Backend Flow Script

Usage:
    ./run_backend.sh [OPTIONS]

Options:
    --help, -h          Show this help message
    --dry-run, -n       Only print commands instead of executing
    --verbose, -v       Print commands while executing
    --all               Run entire backend flow (stages 01-05)
    --floorplan         Stage 01: Initialize, floorplan, and power grid
    --placement         Stage 02: Repair netlist and placement
    --cts               Stage 03: Clock tree synthesis
    --routing           Stage 04: Global and detailed routing
    --finishing         Stage 05: Filler cells and output generation
    --run script        Run a script and exit (e.g., scripts/startup.tcl)
    --open script       Open GUI and execute script (e.g., scripts/startup.tcl)

Environment Variables:
    PROJ_NAME       - Project name (default: croc)
    TOP_DESIGN      - Top module name (default: croc_chip)

Examples:
    # Run entire backend flow
    ./run_backend.sh --all

    # Run only floorplan step
    ./run_backend.sh --floorplan

Inputs:
    - Synthesized netlist: yosys/${PROJ_NAME}_yosys.v
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
    run_cmd "echo [INFO][OpenROAD] Running $1"
    run_cmd "mkdir -p logs"
    logfile="logs/$(basename -s .tcl $1).log"
    run_cmd "openroad -exit $1 \
        -log $logfile \
        2>&1 | TZ=UTC gawk '{ print strftime(\"[%H:%M %Z]\"), \$0 }'"
}

open_openroad_script() {
    run_cmd "echo [INFO][OpenROAD] Open the GUI and run $1"
    run_cmd "mkdir -p logs"
    logfile="logs/$(basename -s .tcl $1).log"
    run_cmd "openroad -gui $1 \
        -log $logfile \
        2>&1 | TZ=UTC gawk '{ print strftime(\"[%H:%M %Z]\"), \$0 }'"
}


####################
# Parse Arguments
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
            run_openroad_script "scripts/01_floorplan.tcl"
            shift
            ;;
        --placement)
            run_openroad_script "scripts/02_placement.tcl"
            shift
            ;;
        --cts)
            run_openroad_script "scripts/03_cts.tcl"
            shift
            ;;
        --routing)
            run_openroad_script "scripts/04_routing.tcl"
            shift
            ;;
        --finishing)
            run_openroad_script "scripts/05_finishing.tcl"
            shift
            ;;
        --all)
            run_openroad_script "scripts/01_floorplan.tcl"
            run_openroad_script "scripts/02_placement.tcl"
            run_openroad_script "scripts/03_cts.tcl"
            run_openroad_script "scripts/04_routing.tcl"
            run_openroad_script "scripts/05_finishing.tcl"
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
