#!/bin/bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>
#
# Two-phase Verilator simulation flow for RTL or post-Yosys netlists:
#   Phase 1 (default): Run helloworld and print_config
#   Phase 2 (iDMA on): Run all unit tests

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
CROC_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"

show_help() {
    cat <<EOF
Usage: $0 [--rtl|--netlist]

    --rtl       Build and simulate RTL (default)
    --netlist   Simulate the default and iDMA post-Yosys netlists
EOF
}

simulation_mode="rtl"
if [[ $# -gt 1 ]]; then
    show_help >&2
    exit 1
fi

case "${1:-}" in
    ""|--rtl)
        ;;
    --netlist)
        simulation_mode="netlist"
        ;;
    -h|--help)
        show_help
        exit 0
        ;;
    *)
        echo "[ERROR] Unknown argument: $1" >&2
        show_help >&2
        exit 1
        ;;
esac

cd "$CROC_ROOT"

if [[ "$simulation_mode" == "rtl" ]]; then
    # Always restore the checked-in default after a configuration-specific run.
    trap '"$SCRIPT_DIR/set_croc_config.sh"' EXIT

    build_option="--build"
    run_option="--run"
    simulation_binary="obj_dir_rtl/Vtb_croc_soc"
    simulation_log="croc_rtl.log"
else
    export CROC_PDK=sg13cmos5l

    default_netlist="yosys/out/croc_yosys_debug.v"
    idma_netlist="yosys/out/croc_idma_yosys_debug.v"
    for required_file in \
        "$default_netlist" \
        "$idma_netlist" \
        "sw/bin/helloworld.hex" \
        "sw/bin/test/print_config.hex"; do
        if [[ ! -f "$required_file" ]]; then
            echo "[ERROR] Missing netlist simulation input: $required_file" >&2
            exit 1
        fi
    done

    build_option="--build-netlist"
    run_option="--run-netlist"
    simulation_binary="obj_dir_netlist_yosys/Vtb_croc_soc"
    simulation_log="croc_netlist_yosys.log"
fi

echo "============================================="
echo "Phase 1: default config — helloworld"
echo "============================================="

if [[ "$simulation_mode" == "rtl" ]]; then
    "$SCRIPT_DIR/set_croc_config.sh"
    make -C sw
else
    cp "$default_netlist" yosys/out/netlist_debug.v
fi

cd verilator
./run_verilator.sh "$build_option"
./run_verilator.sh "$run_option" ../sw/bin/helloworld.hex
grep -q "\[UART\] Hello World from Croc!" "$simulation_log"

./run_verilator.sh "$run_option" ../sw/bin/test/print_config.hex
"$SCRIPT_DIR/check_sim.sh" "$simulation_log"
grep -q "\[JTAG\] Simulation finished: SUCCESS" "$simulation_log"

cd "$CROC_ROOT"

echo ""
echo "============================================="
echo "Phase 2: iDMA enabled — unit tests"
echo "============================================="

if [[ "$simulation_mode" == "rtl" ]]; then
    "$SCRIPT_DIR/set_croc_config.sh" iDMAEnable=1
else
    cp "$idma_netlist" yosys/out/netlist_debug.v
fi

cd verilator
./run_verilator.sh "$build_option"

"$SCRIPT_DIR/run_tests.sh" --sim "$simulation_binary"
cd "$CROC_ROOT"

echo ""
echo "============================================="
echo " Simulation completed"
echo "============================================="
