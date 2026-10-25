#!/bin/bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>
# - Thomas Benz     <tbenz@iis.ee.ethz.ch>
#
# Environment setup for Croc SoC ASIC flow
# This file is sourced by all scripts to set up tool paths and PDK location

# Determine repository root
export CROC_ROOT="$(realpath "$(dirname "${BASH_SOURCE[0]}")")"
echo "[INFO][ENV] Croc root: $CROC_ROOT"


######################
# Project Settings
######################
export PROJ_NAME="${PROJ_NAME:-croc}"
export TOP_DESIGN="${TOP_DESIGN:-croc_chip}"

# KLayout tooling comes from the pinned IHP SG13CMOS5L submodule
export KLAYOUT_PATH="$CROC_ROOT/ihp13/sg13cmos5l/libs.tech/klayout"
export KLAYOUT_TECH="sg13cmos5l"
export PDK_LAYER_MAP_FILE="$KLAYOUT_PATH/tech/sg13cmos5l.map"


###################
# PDK Discovery
###################
# `technology/` is the active PDK directory. It contains Liberty, LEF,
# Verilog, and GDS files. Cockpit provides it on ETH systems; elsewhere,
# env.sh creates a link to ihp13/pdk.

if [[ "${CROC_SKIP_TECH_SETUP:-0}" != "1" ]]; then
    if ! "$CROC_ROOT/scripts/setup_technology.sh" --quiet; then
        return 1 2>/dev/null || exit 1
    fi
else
    echo "[INFO][ENV] Skipping technology setup"
fi

echo "[INFO][ENV] KLayout path: $KLAYOUT_PATH"
