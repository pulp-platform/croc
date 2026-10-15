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
# - KLayout GDS export, sealing, and minimal DRC

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
CROC_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"

cd "$CROC_ROOT"

record_stage() {
    local stage="$1" cwd="$2"
    shift 2
    python3 "$SCRIPT_DIR/record_ci.py" stage --report backend --stage "$stage" --cwd "$cwd" -- "$@"
}

echo "============================================="
echo " Preparing public PDK GDS"
echo "============================================="
scripts/download_gds.sh

echo "============================================="
echo " Step 1: Yosys synthesis"
echo "============================================="
record_stage synthesis yosys ./run_synthesis.sh --synth

echo ""
echo "============================================="
echo " Step 2: OpenROAD P&R"
echo "============================================="
record_stage floorplan openroad ./run_backend.sh --floorplan
record_stage placement openroad ./run_backend.sh --placement
record_stage cts openroad ./run_backend.sh --cts
record_stage routing openroad ./run_backend.sh --routing
record_stage finishing openroad ./run_backend.sh --finishing
(
    cd openroad
    source ../env.sh
    openroad -exit -python "$SCRIPT_DIR/report_metrics.py"
)
test -s ci-results/design.json

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
record_stage gds-seal klayout ./run_finishing.sh --gds --seal

echo ""
echo "============================================="
echo " Step 4: KLayout minimal DRC"
echo "============================================="
record_stage drc klayout ./run_drc.sh --minimal --jobs 1

cd "$CROC_ROOT"

echo ""
echo "============================================="
echo " Full flow completed"
echo "============================================="
