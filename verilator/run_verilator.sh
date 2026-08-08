#!/bin/bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Thomas Benz     <tbenz@iis.ee.ethz.ch>

set -euo pipefail


DRYRUN=0
for arg in "$@"; do
    [[ "$arg" == -n || "$arg" == --dry-run ]] && DRYRUN=1
done

if [[ "$DRYRUN" -eq 1 ]]; then
    export CROC_SKIP_TECH_SETUP=1
fi

VERILATOR_JOBS="${VERILATOR_JOBS:-4}"
if ! [[ "$VERILATOR_JOBS" =~ ^[1-9][0-9]*$ ]]; then
    echo "[ERROR][Verilator] VERILATOR_JOBS must be a positive integer: $VERILATOR_JOBS" >&2
    exit 1
fi

################
# Setup
################
# Source environment
source "../env.sh"


################
# Helpers
################

show_help() {
    cat << EOF
Verilator Coordinator

Usage:
    ./run_verilator.sh [OPTIONS]

Options:
    --help, -h          Show this help message
    --dry-run, -n       Only print commands instead of executing
    --verbose, -v       Print commands while executing
    --flist             Regenerate RTL and Yosys-netlist file lists
    --flist-rtl         Regenerate croc_rtl.f
    --flist-netlist     Regenerate croc_netlist_yosys.f
    --build, --build-rtl
                        Build the RTL simulation binary
    --build-netlist     Build the Yosys-netlist simulation binary
    --run BINARY        Run the RTL simulation binary
    --run-netlist BINARY
                        Run the Yosys-netlist simulation binary

Example:
    # Build and run RTL simulation with a given binary
    ./run_verilator.sh --build --run ../sw/bin/helloworld.hex

    # Build and run the post-Yosys netlist simulation
    ./run_verilator.sh --build-netlist --run-netlist ../sw/bin/helloworld.hex

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


build_rtl_verilator() {
    if [ "$RTL_FLIST_GENERATED" = 0 ]; then
        generate_rtl_flist
    fi

    run_cmd "echo [INFO][Verilator] Build RTL simulation"
    run_cmd "verilator \
        -Wno-fatal \
        -Wno-style \
        -Wno-BLKANDNBLK \
        -Wno-WIDTHEXPAND \
        -Wno-WIDTHTRUNC \
        -Wno-WIDTHCONCAT \
        -Wno-ASCRANGE \
        --binary \
        -j $VERILATOR_JOBS \
        --timing \
        --autoflush \
        --trace-fst \
        --trace-threads 2 \
        --trace-structs \
        --unroll-count 1 \
        --unroll-stmts 1 \
        --x-assign fast \
        --x-initial fast \
        -O3 \
        --top tb_croc_soc \
        --Mdir obj_dir_rtl \
        -f croc_rtl.f 2>&1 | \
        tee ${PROJ_NAME}_rtl_build.log"
}

build_netlist_verilator() {
    if [ "$NETLIST_FLIST_GENERATED" = 0 ]; then
        generate_netlist_flist
    fi

    if [[ "$DRYRUN" -eq 0 && ! -f ../yosys/out/netlist_debug.v ]]; then
        echo "[ERROR][Verilator] Missing ../yosys/out/netlist_debug.v. Run Yosys synthesis first." >&2
        exit 1
    fi

    run_cmd "echo [INFO][Verilator] Build Yosys-netlist simulation"
    run_cmd "verilator \
        -Wno-fatal \
        -Wno-style \
        -Wno-BLKANDNBLK \
        -Wno-WIDTHEXPAND \
        -Wno-WIDTHTRUNC \
        -Wno-WIDTHCONCAT \
        -Wno-ASCRANGE \
        --binary \
        -j $VERILATOR_JOBS \
        --timing \
        --autoflush \
        --unroll-count 1 \
        --unroll-stmts 1 \
        --x-assign fast \
        --x-initial fast \
        -O3 \
        --top tb_croc_soc \
        --Mdir obj_dir_netlist_yosys \
        -f croc_netlist_yosys.f \
        -f technology_netlist_yosys.f 2>&1 | \
        tee ${PROJ_NAME}_netlist_yosys_build.log"
}

generate_rtl_flist() {
    run_cmd "echo [INFO][Bender] Generate croc_rtl.f"
    run_cmd "bender \
        script flist-plus \
        -t rtl \
        -t verilator \
        -t synthesis \
        ${BENDER_PDK_ARGS} \
        -D VERILATOR=1 \
        -D COMMON_CELLS_ASSERTS_OFF=1 \
        > croc_rtl.f"

    run_cmd "echo [INFO][Bender] Remove absolute paths"
    run_cmd "sed -i 's|${CROC_ROOT}|..|g' croc_rtl.f"

    run_cmd "echo [INFO][Bender] File list generated: croc_rtl.f"
    RTL_FLIST_GENERATED=1
}

generate_netlist_flist() {
    run_cmd "echo [INFO][Bender] Generate croc_netlist_yosys.f"
    run_cmd "bender \
        script flist-plus \
        -t netlist_yosys \
        -t verilator \
        -t synthesis \
        ${BENDER_PDK_ARGS} \
        -D VERILATOR=1 \
        -D COMMON_CELLS_ASSERTS_OFF=1 \
        > croc_netlist_yosys.f"

    run_cmd "echo [INFO][Bender] Remove absolute paths"
    run_cmd "sed -i 's|${CROC_ROOT}|..|g' croc_netlist_yosys.f"

    run_cmd "echo [INFO][Bender] File list generated: croc_netlist_yosys.f"
    NETLIST_FLIST_GENERATED=1
}

run_rtl_binary() {
    run_cmd "echo [INFO][Verilator] Run RTL simulation"
    run_cmd "obj_dir_rtl/Vtb_croc_soc +binary="$1" | tee ${PROJ_NAME}_rtl.log"
}

run_netlist_binary() {
    run_cmd "echo [INFO][Verilator] Run Yosys-netlist simulation"
    run_cmd "obj_dir_netlist_yosys/Vtb_croc_soc +binary="$1" | tee ${PROJ_NAME}_netlist_yosys.log"
}

####################
# Parse Arguments
####################

RTL_FLIST_GENERATED=0
NETLIST_FLIST_GENERATED=0

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
            generate_rtl_flist
            generate_netlist_flist
            shift
            ;;
        --flist-rtl)
            generate_rtl_flist
            shift
            ;;
        --flist-netlist)
            generate_netlist_flist
            shift
            ;;
        --build|--build-rtl)
            build_rtl_verilator
            shift
            ;;
        --build-netlist)
            build_netlist_verilator
            shift
            ;;
        --run)
            run_rtl_binary $2
            shift 2
            ;;
        --run-netlist)
            run_netlist_binary $2
            shift 2
            ;;
        # Error handling
        *)
            echo "[ERROR] Unknown option: $1 (use --help for usage)" >&2
            exit 1
            ;;
    esac
done
