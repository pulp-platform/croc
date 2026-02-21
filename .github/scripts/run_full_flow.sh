#!/bin/bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>
#
# Full backend flow: 
# - Yosys synthesis
# - OpenROAD P&R
# - KLayout GDS export

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
CROC_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"

cd "$CROC_ROOT"

echo "============================================="
echo " Step 1: Yosys synthesis"
echo "============================================="
cd yosys
./run_synthesis.sh --synth
cd "$CROC_ROOT"

echo ""
echo "============================================="
echo " Step 2: OpenROAD P&R"
echo "============================================="
cd openroad
./run_backend.sh --all
cd "$CROC_ROOT"

echo ""
echo "============================================="
echo " Checking OpenROAD logs for errors"
echo "============================================="
LOG_DIR="$CROC_ROOT/openroad/logs"
ERROR_FOUND=0
for log in "$LOG_DIR"/*.log; do
    if grep -q "\[ERROR" "$log"; then
        echo "ERROR: [ERROR] found in $log:"
        grep "\[ERROR" "$log"
        ERROR_FOUND=1
    fi
done
if [ "$ERROR_FOUND" -eq 1 ]; then
    echo "OpenROAD log check FAILED."
    exit 1
fi
echo "OpenROAD passed (no [ERROR] found)."

echo ""
echo "============================================="
echo " Step 3: KLayout GDS export"
echo "============================================="
cd klayout
./run_finishing.sh --gds --seal
cd "$CROC_ROOT"

echo ""
echo "============================================="
echo " Full flow completed"
echo "============================================="
