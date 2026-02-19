# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

# Run unit tests through Verilator simulation.
# Usage: run_tests.sh [--sim SIM_BINARY] [--hexdir HEX_DIR] [--filter PATTERN][--timeout SECONDS]
#
# Expects to be run from the verilator/ directory (or paths adjusted via flags).
# Each test writes its own log file.
# Exit code: 0 if all tests pass, 1 otherwise.

set -euo pipefail

SIM_BINARY="obj_dir/Vtb_croc_soc"
HEX_DIR="../sw/bin"
FILTER="test_*"
TIMEOUT=120

while [[ $# -gt 0 ]]; do
    case "$1" in
        --sim)     SIM_BINARY="$2"; shift 2 ;;
        --hexdir)  HEX_DIR="$2";   shift 2 ;;
        --filter)  FILTER="$2";    shift 2 ;;
        --timeout) TIMEOUT="$2";   shift 2 ;;
        -h|--help)
            echo "Usage: $0 [--sim SIM_BINARY] [--hexdir HEX_DIR] [--filter PATTERN] [--timeout SECONDS]"
            exit 0
            ;;
        *) echo "Unknown option: $1" >&2; exit 1 ;;
    esac
done

if [[ ! -x "$SIM_BINARY" ]]; then
    echo "Error: Simulator binary not found or not executable: $SIM_BINARY" >&2
    exit 1
fi

# Find all test hex files from pattern
shopt -s nullglob
hex_files=("$HEX_DIR"/${FILTER}.hex)
shopt -u nullglob

if [[ ${#hex_files[@]} -eq 0 ]]; then
    echo "Error: No test hex files matching '${FILTER}.hex' found in $HEX_DIR" >&2
    exit 1
fi

echo "Found ${#hex_files[@]} test(s) to run"
echo "========================================="

passed=0
failed=0
declare -a results=()

for hex in "${hex_files[@]}"; do
    test_name=$(basename "$hex" .hex)
    log_file="${test_name}.log"

    printf "Running %-30s ... " "$test_name"

    # Run simulation with timeout, capture log, don't exit on failure
    if timeout "$TIMEOUT" "$SIM_BINARY" "+binary=$hex" > "$log_file" 2>&1; then
        sim_exit=0
    else
        sim_exit=$?
    fi

    # Check for timeout (exit code 124 from timeout command)
    if [[ $sim_exit -eq 124 ]]; then
        echo "FAIL (timeout after ${TIMEOUT}s)"
        results+=("FAIL $test_name (timeout after ${TIMEOUT}s)")
        ((failed++)) || true
        continue
    fi

    # Check for SUCCESS/FAIL in the log
    if grep -q '\[JTAG\] Simulation finished: SUCCESS' "$log_file"; then
        echo "PASS"
        results+=("PASS $test_name")
        ((passed++)) || true
    else
        # Try to extract the return code from the FAIL line
        fail_line=$(grep '\[JTAG\] Simulation finished: FAIL' "$log_file" 2>/dev/null || true)
        if [[ -n "$fail_line" ]]; then
            rc=$(echo "$fail_line" | sed -n 's/.*return code \(0x[0-9a-fA-F]*\).*/\1/p')
            echo "FAIL (rc=${rc:-?})"
            results+=("FAIL $test_name (rc=${rc:-?})")
        else
            echo "FAIL (no result line, sim exit=$sim_exit)"
            results+=("FAIL $test_name (no result line, sim exit=$sim_exit)")
        fi
        ((failed++)) || true
    fi
done

echo "========================================="
echo "Summary: ${passed} passed, ${failed} failed, $((passed + failed)) total"
echo ""

if [[ $failed -gt 0 ]]; then
    echo "Failed tests:"
    for r in "${results[@]}"; do
        if [[ "$r" == FAIL* ]]; then
            echo "  - ${r#FAIL }"
        fi
    done
    exit 1
fi

echo "All tests passed."
exit 0
