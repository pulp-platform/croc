#!/bin/bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Michael Rogenmoser <michaero@iis.ee.ethz.ch>


set -e  # Exit on error
set -u  # Error on undefined vars


################
# Setup
################
# Source environment
source "../env.sh"

VLOGAN=${VLOGAN:-vlogan}
VCS=${VCS:-vcs}

VCS_SCRIPT_ARGS="-assert svaext +v2k -kdb -override_timescale=1ns/10ps -debug_access+all"
VCS_COMPILE_ARGS="-kdb -lca -sverilog -full64 -j8 -l compile.log +vcs+fsdbon -debug_access+all +lint=TFIPC-L +lint=PCWM +warn=noCWUC +warn=noUII-L -override_timescale=1ns/10ps"

mkdir -p reports

################
# Helpers
################

show_help() {
    cat << EOF
VCS Coordinator

Usage:
    ./run_vcs.sh [OPTIONS]

Options:
    --help, -h              Show this help message
    --dry-run, -n           Only print commands instead of executing
    --verbose, -v           Print commands while executing
    --flist                 Regenerate compile scripts (compile_rtl.sh, compile_netlist_yosys.sh, compile_netlist_openroad.sh)
    --build                 Compile Croc RTL in VCS
    --build-netlist-yosys   Compile Croc post-Yosys-synthesis netlist in VCS
    --build-netlist-openroad Compile Croc post-OpenROAD netlist in VCS
    --run BINARY            Run binary in VCS

Example:
    # Build and run RTL simulation with given binary
    ./run_vcs.sh --build --run ../sw/bin/helloworld.hex

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


generate_rtl_flist() {
    run_cmd "echo [INFO][Bender] Generate compile_rtl.sh"
    run_cmd "bender \
        script vcs \
        -t rtl \
        -t vcs \
        -t simulation \
        -t verilator \
        -DSYNTHESIS \
        -DSIMULATION \
        --vlog-arg=\"${VCS_SCRIPT_ARGS}\" \
        --vlogan-bin=\"${VLOGAN}\" \
        > compile_rtl.sh"

    run_cmd "echo [INFO][Bender] Remove absolute paths"
    run_cmd "sed -i 's|${CROC_ROOT}|..|g' compile_rtl.sh"
    run_cmd "chmod +x compile_rtl.sh"

    run_cmd "echo [INFO][Bender] File list generated: compile_rtl.sh"
}


generate_netlist_yosys_flist() {
    run_cmd "echo [INFO][Bender] Generate compile_netlist_yosys.sh"
    run_cmd "bender \
        script vcs \
        -t ihp13 \
        -t vcs \
        -t simulation \
        -t verilator \
        -t netlist_yosys \
        -DSYNTHESIS \
        -DSIMULATION \
        --vlog-arg=\"${VCS_SCRIPT_ARGS}\" \
        --vlogan-bin=\"${VLOGAN}\" \
        > compile_netlist_yosys.sh"

    run_cmd "echo [INFO][Bender] Append tech compilation"
    run_cmd "cat compile_tech.sh >> compile_netlist_yosys.sh"

    run_cmd "echo [INFO][Bender] Remove absolute paths"
    run_cmd "sed -i 's|${CROC_ROOT}|..|g' compile_netlist_yosys.sh"
    run_cmd "chmod +x compile_netlist_yosys.sh"

    run_cmd "echo [INFO][Bender] File list generated: compile_netlist_yosys.sh"
}


generate_netlist_openroad_flist() {
    run_cmd "echo [INFO][Bender] Generate compile_netlist_openroad.sh"
    run_cmd "bender \
        script vcs \
        -t ihp13 \
        -t vcs \
        -t simulation \
        -t verilator \
        -t netlist_openroad \
        -DSYNTHESIS \
        -DSIMULATION \
        --vlog-arg=\"${VCS_SCRIPT_ARGS}\" \
        --vlogan-bin=\"${VLOGAN}\" \
        > compile_netlist_openroad.sh"

    run_cmd "echo [INFO][Bender] Append tech compilation"
    run_cmd "cat compile_tech.sh >> compile_netlist_openroad.sh"

    run_cmd "echo [INFO][Bender] Remove absolute paths"
    run_cmd "sed -i 's|${CROC_ROOT}|..|g' compile_netlist_openroad.sh"
    run_cmd "chmod +x compile_netlist_openroad.sh"

    run_cmd "echo [INFO][Bender] File list generated: compile_netlist_openroad.sh"
}


compile_rtl() {
    run_cmd "echo [INFO][VCS] Compile RTL"
    run_cmd "./compile_rtl.sh > reports/compile_rtl.log 2>&1"
    run_cmd "${VCS} ${VCS_COMPILE_ARGS} -o tb_croc_soc.sim tb_croc_soc > reports/elaborate_rtl.log 2>&1"

    run_cmd "echo [INFO][VCS] Check reports/elaborate_rtl.log"
    run_cmd "echo --- VCS compilation report ---       > reports/compile_rtl.rpt"
    run_cmd "echo Errors:                             >> reports/compile_rtl.rpt"
    run_cmd "grep Error reports/elaborate_rtl.log     >> reports/compile_rtl.rpt || true"
    run_cmd "echo                                     >> reports/compile_rtl.rpt"
    run_cmd "echo Warnings:                           >> reports/compile_rtl.rpt"
    run_cmd "grep Warning reports/elaborate_rtl.log   >> reports/compile_rtl.rpt || true"

    run_cmd "echo [INFO][VCS] RTL compilation done"
}


compile_netlist_yosys() {
    run_cmd "echo [INFO][VCS] Compile Yosys post-synthesis netlist"
    run_cmd "./compile_netlist_yosys.sh > reports/compile_netlist_yosys.log 2>&1"
    run_cmd "${VCS} ${VCS_COMPILE_ARGS} -o tb_croc_soc_yosys.sim tb_croc_soc > reports/elaborate_netlist_yosys.log 2>&1"

    run_cmd "echo [INFO][VCS] Yosys netlist compilation done"
}


compile_netlist_openroad() {
    run_cmd "echo [INFO][VCS] Compile OpenROAD post-synthesis netlist"
    run_cmd "./compile_netlist_openroad.sh > reports/compile_netlist_openroad.log 2>&1"
    run_cmd "${VCS} ${VCS_COMPILE_ARGS} -o tb_croc_soc_openroad.sim tb_croc_soc > reports/elaborate_netlist_openroad.log 2>&1"

    run_cmd "echo [INFO][VCS] OpenROAD netlist compilation done"
}


run_vcs() {
    run_cmd "./tb_croc_soc.sim \
        +fsdb+all=on \
        +binary=$1 \
        -l transcript.log"
}


run_vcs_yosys() {
    run_cmd "./tb_croc_soc_yosys.sim \
        +fsdb+all=on \
        +binary=$1 \
        -l transcript.log"
}


run_vcs_openroad() {
    run_cmd "./tb_croc_soc_openroad.sim \
        +fsdb+all=on \
        +binary=$1 \
        -l transcript.log"
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
            generate_rtl_flist
            generate_netlist_yosys_flist
            generate_netlist_openroad_flist
            shift
            ;;
        --build)
            compile_rtl
            shift
            ;;
        --build-netlist-yosys)
            compile_netlist_yosys
            shift
            ;;
        --build-netlist-openroad)
            compile_netlist_openroad
            shift
            ;;
        --run)
            run_vcs $2
            shift 2
            ;;
        --run-yosys)
            run_vcs_yosys $2
            shift 2
            ;;
        --run-openroad)
            run_vcs_openroad $2
            shift 2
            ;;
        # Error handling
        *)
            echo "[ERROR] Unknown option: $1 (use --help for usage)" >&2
            exit 1
            ;;
    esac
done
