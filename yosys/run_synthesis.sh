#!/bin/bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>
# - Thomas Benz     <tbenz@iis.ee.ethz.ch>
#
# Synthesize RTL to gate-level netlist using Yosys

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
Yosys Synthesis Script

Usage:
    ./run_synthesis.sh [OPTIONS]

Options:
    --help, -h          Show this help message
    --dry-run, -n       Only print commands instead of executing
    --verbose, -v       Print commands while executing
    --synth             Synthesize ${TOP_DESIGN}
    --open              Open Yosys
    --flist             Regenerate flist (src/croc.flist)

Environment Variables:
    TOP_DESIGN          Top module name (default: ${TOP_DESIGN})

Inputs:
    - RTL file list: src/croc.flist
    - PDK Liberty files (auto-discovered)

Outputs:
    - Netlist: out/${TOP_DESIGN}_yosys.v
    - Debug netlist: out/${TOP_DESIGN}_yosys_debug.v
    - Reports: reports/*.rpt
    - Log: ${TOP_DESIGN}.log

Example:
    # Basic run
    ./run_synthesis.sh --synth

    # Override top module
    TOP_DESIGN=my_chip ./run_synthesis.sh --synth

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


run_yosys() {
    run_cmd "echo [INFO][Yosys] Synthesizing ${TOP_DESIGN}"
    run_cmd "yosys \
        -c scripts/yosys_synthesis.tcl 2>&1 | \
        TZ=UTC gawk '{ print strftime(\"[%Y-%m-%d %H:%M %Z]\"), \$0 }' | \
        tee ${TOP_DESIGN}.log | \
        gawk -f scripts/filter_output.awk"
}


open_yosys() {
    run_cmd "echo [INFO][Yosys] Open Yosys"
    run_cmd "yosys -C"
}


generate_flist() {
    run_cmd "echo [INFO][Bender] Generate src/croc.flist"
    run_cmd "bender \
        script flist-plus \
        -t asic \
        -t ihp13 \
        -t rtl \
        -t synthesis \
        -D VERILATOR=1 \
        -D SYNTHESIS=1 \
        -D COMMON_CELLS_ASSERTS_OFF=1 \
        > src/croc.flist"

    run_cmd "echo [INFO][Bender] Remove absolute paths"
    run_cmd "sed -i 's|${CROC_ROOT}|..|g' src/croc.flist"

    run_cmd "echo [INFO][Bender] File list generated: src/croc.flist"
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
        --flist)
            generate_flist
            shift
            ;;
        --synth)
            run_yosys
            shift
            ;;
        --open)
            open_yosys
            shift
            ;;
        # Error handling
        *)
            echo "[ERROR] Unknown option: $1 (use --help for usage)" >&2
            exit 1
            ;;
    esac
done
