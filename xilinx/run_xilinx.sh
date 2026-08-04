#!/bin/bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Thomas Benz     <tbenz@iis.ee.ethz.ch>
# - Enrico Zelioli  <ezelioli@iis.ee.ethz.ch>

set -e  # Exit on error
set -u  # Error on undefined vars


################
# Setup
################
# Source environment
source "../env.sh"

# Select IIS-internal tool commands if we run on IIS machines
if [ -f /etc/iis.version ]; then
    VIVADO=${VIVADO:-"vitis-2022.1 vivado"}
else
    VIVADO=${VIVADO:-"vivado"}
fi

mkdir -p build
mkdir -p out


################
# Helpers
################

show_help() {
    cat << EOF
Xilinx Coordinator

Usage:
    ./run_xilinx.sh [OPTIONS]

Options:
    --help, -h              Show this help message
    --dry-run, -n           Only print commands instead of executing
    --verbose, -v           Print commands while executing
    --target <board>        Target board: genesys2 (default), basys3
    --flist                 Regenerate compile script reading sources
    --clkwiz                Implement clock wizard IP
    --vio                   Implement VirtualIO IP
    --croc                  Implement Croc SoC only
    --all                   Implement clkwiz, vio, and Croc SoC

Example:
    ./run_xilinx.sh --all
    ./run_xilinx.sh --target basys3 --all

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


generate_flist() {
    run_cmd "echo [INFO][Bender] Generate add_sources.${TARGET}.tcl"
    run_cmd "bender \
        script vivado \
        -t ${TARGET} \
        -t synthesis \
        -D COMMON_CELLS_ASSERTS_OFF=1 \
        > scripts/add_sources.${TARGET}.tcl"

    run_cmd "echo [INFO][Bender] Remove absolute paths"
    run_cmd "sed -i 's|${CROC_ROOT}|../../..|g' scripts/add_sources.${TARGET}.tcl"

    run_cmd "echo [INFO][Bender] File list generated: add_sources.${TARGET}.tcl"
}


impl_clockwiz() {
    mkdir -p build/${TARGET}.clkwiz
    run_cmd "echo [INFO][VIVADO] Implement clock wizard IP [${TARGET}]"
    run_cmd "cd build/${TARGET}.clkwiz"
    run_cmd "${VIVADO} -mode batch -source ../../scripts/impl_ip.tcl \
        -tclargs ${TARGET} clkwiz > ../../clkwiz.${TARGET}.log"
    run_cmd "cd ../.."
}


impl_vio() {
    mkdir -p build/${TARGET}.vio
    run_cmd "echo [INFO][VIVADO] Implement VirtualIO IP [${TARGET}]"
    run_cmd "cd build/${TARGET}.vio"
    run_cmd "${VIVADO} -mode batch -source ../../scripts/impl_ip.tcl \
        -tclargs ${TARGET} vio > ../../vio.${TARGET}.log"
    run_cmd "cd ../.."
}


impl_croc() {
    mkdir -p build/${TARGET}.croc
    run_cmd "echo [INFO][VIVADO] Implement Croc [${TARGET}]"
    run_cmd "cd build/${TARGET}.croc"
    run_cmd "${VIVADO} -mode batch -source ../../scripts/impl_sys.tcl \
        -tclargs ${TARGET} croc ../${TARGET}.clkwiz/out.xci ../${TARGET}.vio/out.xci > ../../croc.${TARGET}.log"
    run_cmd "cd ../.."
}


####################
# Parse Arguments
####################

DRYRUN=0
TARGET="genesys2"

# default action if no argument is given
if [ $# -eq 0 ]; then
    show_help
    return 0
fi

# check for global arguments (first pass, order-independent)
args=("$@")
for ((i=0; i<${#args[@]}; i++)); do
    [[ "${args[i]}" == -v || "${args[i]}" == --verbose ]] && set -x
    [[ "${args[i]}" == -n || "${args[i]}" == --dry-run ]] && DRYRUN=1
    [[ "${args[i]}" == --target ]] && TARGET="${args[i+1]}"
done

case "$TARGET" in
    genesys2|basys3) ;;
    *) echo "[ERROR] Unknown target: $TARGET (expected genesys2 or basys3)" >&2; exit 1 ;;
esac

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
        --target)
            TARGET="$2"
            shift 2
            ;;
        # script-specific commands
        --flist)
            generate_flist
            shift
            ;;
        --clkwiz)
            impl_clockwiz
            shift
            ;;
        --vio)
            impl_vio
            shift
            ;;
        --croc)
            impl_croc
            shift
            ;;
        --all)
            generate_flist
            impl_clockwiz
            impl_vio
            impl_croc
            shift
            ;;
        # Error handling
        *)
            echo "[ERROR] Unknown option: $1 (use --help for usage)" >&2
            exit 1
            ;;
    esac
done
