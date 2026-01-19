#!/bin/bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Thomas Benz     <tbenz@iis.ee.ethz.ch>

set -e  # Exit on error
set -u  # Error on undefined vars

################
# Helpers
################

show_help() {
    cat << EOF
Checks Coordinator

Usage:
    scripts/run_checks.sh [OPTIONS]

Options:
    --help, -h          Show this help message
    --dry-run, -n       Only print commands instead of executing
    --verbose, -v       Print commands while executing
    --sv                Lint SystemVerilog files
    --license           Lint license headers
    --python            Lint and format python files
    --cxx               Lint and format C code

Example:
    scripts/run_checks.sh --sv --license --python --cxx

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


lint_sv() {
    run_cmd "echo [INFO][Verible] Check SystemVerilog sources"
    run_cmd "verible-verilog-lint $(find . -name '*.sv' -exec realpath {} \;) --lint_fatal --waiver_files scripts/verible.waver"
}


lint_license() {
    run_cmd "echo [INFO][Verible] Check license headers"
    run_cmd "python3 scripts/lint_license.py scripts/license_cfg.yml"
}


lint_and_format_python() {
    run_cmd "echo -e [INFO][Black] Formatting Python Code..."
    run_cmd "black */*.py"
}


lint_and_format_c() {
    run_cmd "echo -e [INFO][ClangFormat] Formatting C Code..."
    run_cmd "python scripts/run_clang_format.py -ir sw/ --clang-format-executable=clang-format"
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
        --sv)
            lint_sv
            shift
            ;;
        --license)
            lint_license
            shift
            ;;
        --python)
            lint_and_format_python
            shift
            ;;
        --cxx)
            lint_and_format_c
            shift
            ;;
        # Error handling
        *)
            echo "[ERROR] Unknown option: $1 (use --help for usage)" >&2
            exit 1
            ;;
    esac
done
