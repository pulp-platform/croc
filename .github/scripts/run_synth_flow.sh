#!/bin/bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>
#
# Two-phase Yosys synthesis flow:
#   Phase 1 (default): Synthesize with iDMA disabled (default config), PROJ_NAME=croc
#   Phase 2 (iDMA on): Synthesize with iDMA enabled,                   PROJ_NAME=croc_idma

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
CROC_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"

cd "$CROC_ROOT"

echo "============================================="
echo "Phase 1: default config — synthesis (croc)"
echo "============================================="

# Ensure default config (iDMA off)
"$SCRIPT_DIR/set_croc_config.sh"

cd yosys
./run_synthesis.sh --synth

echo ""
tail -n 40 reports/croc_area.rpt

cd "$CROC_ROOT"

echo ""
echo "============================================="
echo "Phase 2: iDMA enabled — synthesis (croc_idma)"
echo "============================================="

# Enable iDMA
"$SCRIPT_DIR/set_croc_config.sh" iDMAEnable=1

cd yosys
PROJ_NAME=croc_idma ./run_synthesis.sh --synth

echo ""
tail -n 40 reports/croc_idma_area.rpt

cd "$CROC_ROOT"

# Restore defaults
"$SCRIPT_DIR/set_croc_config.sh"

echo ""
echo "============================================="
echo " Synthesis completed"
echo "============================================="
