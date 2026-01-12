#!/bin/bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

set -e  # Exit on error
set -u  # Error on undefined vars


################
### Setup
################
# Source environment
source "../env.sh"


################
### Helpers
################

show_help() {
    cat << EOF
Verilator Coordinator

Usage:
    ./run_verilator.sh [OPTIONS]

Options:
    --help, -h          Show this help message
    --dry-run, -n       Don't actually run any command; just print them
    --verbose, -v       Print commands before executing them
    --build             Build croc_soc Verilator binary
    --run BINARY        Run binary in Verilator

Example:
    ./run_verilator.sh --build --run ../sw/bin/helloworld.hex

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


build_verilator() {
    run_cmd "verilator \
        -Wno-fatal \
        -Wno-style \
        -Wno-BLKANDNBLK \
        -Wno-WIDTHEXPAND \
        -Wno-WIDTHTRUNC \
        -Wno-WIDTHCONCAT \
        -Wno-ASCRANGE \
        --binary \
        -j 0 \
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
        -f croc.f"
}


generate_flist() {
    run_cmd "echo [INFO][Bender] Generate croc.f"
    run_cmd "bender \
        script flist-plus \
        -t rtl \
        -t verilator \
        -t synthesis \
        -D VERILATOR=1 \
        -D COMMON_CELLS_ASSERTS_OFF=1 \
        > croc.f"

    run_cmd "echo [INFO][Bender] Remove absolute paths"
    run_cmd "sed -i 's|${CROC_ROOT}|..|g' croc.f"

    run_cmd "echo [INFO][Bender] File list generated: croc.f"
}

run_binary() {
    obj_dir/Vtb_croc_soc +binary="$1" | tee croc.log
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
        --flist)
            generate_flist
            shift
            ;;
        --build)
            build_verilator
            shift
            ;;
        --run)
            run_binary $2
            shift 2
            ;;
        # Error handling
        *)
            echo "[ERROR] Unknown option: $1 (use --help for usage)" >&2
            exit 1
            ;;
    esac
done
