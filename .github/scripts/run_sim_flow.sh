#!/bin/bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>
#
# Two-phase Verilator simulation flow:
#   Phase 1 (default): Build software, build Verilator model, run helloworld
#   Phase 2 (iDMA on): Enable iDMA, build Verilator model, run all unit tests

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
CROC_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"

cd "$CROC_ROOT"

echo "============================================="
echo "Phase 1: default config — helloworld"
echo "============================================="

# ensure default config (iDMA off)
"$SCRIPT_DIR/set_croc_config.sh"

# build software
make -C sw

# build verilator simulation and run helloworld
cd verilator
./run_verilator.sh --build 
./run_verilator.sh --run ../sw/bin/helloworld.hex
cd "$CROC_ROOT"

# verify helloworld output
"$SCRIPT_DIR/check_sim.sh" verilator/croc.log

echo ""
echo "============================================="
echo "Phase 2: iDMA enabled — unit tests"
echo "============================================="

# enable iDMA
"$SCRIPT_DIR/set_croc_config.sh" iDMAEnable=1

# rebuild Verilator model with iDMA enabled
cd verilator
./run_verilator.sh --build

# run all unit tests
"$SCRIPT_DIR/run_tests.sh"
cd "$CROC_ROOT"

# restore defaults
"$SCRIPT_DIR/set_croc_config.sh"

echo ""
echo "============================================="
echo " Simulation completed"
echo "============================================="
