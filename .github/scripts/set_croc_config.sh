#!/bin/bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>
#
# Set localparam values in croc_pkg.sv
# Usage: set_croc_config.sh [PARAM=VALUE ...]
#
# With no arguments, restores croc_pkg.sv using `git restore`.
# With arguments, sets each localparam bit PARAM to 1'bVALUE.
#
# Examples:
#   set_croc_config.sh                     # restore defaults
#   set_croc_config.sh iDMAEnable=1        # enable iDMA
#   set_croc_config.sh iDMAEnable=0        # disable iDMA

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
CROC_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"
PKG_FILE="$CROC_ROOT/rtl/croc_pkg.sv"

# no arguments: use git restore
if [[ $# -eq 0 ]]; then
    git -C "$CROC_ROOT" restore rtl/croc_pkg.sv
    echo "[INFO] Restored croc_pkg.sv to default"
    exit 0
fi

# process PARAM=VALUE pairs
for arg in "$@"; do
    if [[ "$arg" != *=* ]]; then
        echo "Error: Invalid argument '$arg' (expected format: PARAM=VALUE)" >&2
        exit 1
    fi

    PARAM="${arg%%=*}"
    VALUE="${arg#*=}"

    if [[ "$VALUE" == "0" || "$VALUE" == "1" ]]; then
        VALUE="1'b${VALUE}"
    fi

    # put RHS with equal sign into capture group, match PARAM and replace RHS with VALUE
    sed -i -E "s/(localparam\s+[a-zA-Z0-9_]+\s+${PARAM}\s*=)\s*[0-9a-z_']+;/\1 ${VALUE};/" "$PKG_FILE"

    if grep -q -E "localparam\s+[a-zA-Z0-9_]+\s+${PARAM}\s*=\s*${VALUE};" "$PKG_FILE"; then
        echo "[INFO] ${PARAM} set to ${VALUE}"
    else
        echo "[ERROR] Failed to set ${PARAM} (parameter not found in croc_pkg.sv)" >&2
        echo "[INFO] Restoring croc_pkg.sv to default" >&2
        #git -C "$CROC_ROOT" restore "$PKG_FILE"
        exit 1
    fi
done
