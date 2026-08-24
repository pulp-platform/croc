#!/usr/bin/env bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
CROC_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
DRYRUN=0
MODE="full"
MODE_SELECTED=0
JOBS="${DRC_JOBS:-1}"

show_help() {
    cat <<'EOF'
KLayout DRC coordinator

Usage: ./run_drc.sh [OPTIONS]

Options:
    --minimal           Check the sealed layout during implementation
    --full              Check the sealed layout before tapeout (default)
    --jobs N            Run at most N DRC tables concurrently (default: 1)
    --dry-run, -n       Print the planned command without changing files
    --verbose, -v       Print commands while executing
    --help, -h          Show this help message

Use --minimal after OpenROAD and during floorplan or routing iteration. It
catches common geometry errors quickly and is suitable for regular CI; it is
not a tapeout signoff check. Use --full for the final pre-tapeout review; it
runs slower, stricter checks for manufacturing risks.

Both modes use klayout/out/<PROJ_NAME>.sealed.gds.gz and top cell
<TOP_DESIGN>_sealed. Results are written to klayout/drc-minimal or
klayout/drc-full.
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        --help|-h) show_help; exit 0 ;;
        --dry-run|-n) DRYRUN=1; shift ;;
        --verbose|-v) set -x; shift ;;
        --minimal|--full)
            if [[ "$MODE_SELECTED" -eq 1 ]]; then
                echo "[ERROR][KLayout] Select only one DRC mode" >&2
                exit 2
            fi
            MODE="${1#--}"
            MODE_SELECTED=1
            shift
            ;;
        --jobs)
            [[ $# -ge 2 ]] || { echo "[ERROR][KLayout] --jobs requires a value" >&2; exit 2; }
            JOBS="$2"
            shift 2
            ;;
        *)
            echo "[ERROR][KLayout] Unknown option: $1 (use --help for usage)" >&2
            exit 2
            ;;
    esac
done

if [[ ! "$JOBS" =~ ^[1-9][0-9]*$ ]]; then
    echo "[ERROR][KLayout] --jobs must be a positive integer" >&2
    exit 2
fi
if [[ "$DRYRUN" -eq 1 ]]; then
    export CROC_SKIP_TECH_SETUP=1
fi
source "$CROC_ROOT/env.sh"

GDS_PATH="$SCRIPT_DIR/out/${PROJ_NAME}.sealed.gds.gz"
TOP_CELL="${TOP_DESIGN}_sealed"
RUN_DIR="$SCRIPT_DIR/drc-$MODE"
DRC_RUNNER="$KLAYOUT_PATH/tech/drc/run_drc.py"

# The upstream runner builds a shell command from these values.
for value in "$GDS_PATH" "$TOP_CELL" "$RUN_DIR"; do
    if [[ ! "$value" =~ ^[A-Za-z0-9_./:@%+,=-]+$ ]]; then
        echo "[ERROR][KLayout] DRC path contains unsupported characters: $value" >&2
        exit 1
    fi
done

if [[ "$DRYRUN" -eq 0 ]]; then
    [[ -f "$DRC_RUNNER" ]] || {
        echo "[ERROR][KLayout] DRC runner not found: $DRC_RUNNER" >&2
        exit 1
    }
    [[ -f "$GDS_PATH" ]] || {
        echo "[ERROR][KLayout] Input GDS not found: $GDS_PATH" >&2
        exit 1
    }
    mkdir -p "$RUN_DIR"
fi

command=(
    python3 "$DRC_RUNNER"
    "--path=$GDS_PATH"
    "--topcell=$TOP_CELL"
    "--run_dir=$RUN_DIR"
    "--mp=$JOBS"
    --density_thr=1
)
if [[ "$MODE" == "minimal" ]]; then
    command+=(--no_recommended --no_offgrid --no_density --disable_extra_rules)
    echo "[INFO][KLayout] Running minimal DRC on $TOP_CELL with $JOBS worker(s)"
else
    command+=(--antenna)
    echo "[INFO][KLayout] Running full DRC on $TOP_CELL with $JOBS worker(s)"
fi

if [[ "$DRYRUN" -eq 1 ]]; then
    printf '%q ' "${command[@]}"
    printf '\n'
    exit 0
fi

coordinator_log="$RUN_DIR/drc-coordinator.log"
set +e
"${command[@]}" 2>&1 | tee "$coordinator_log"
run_status=${PIPESTATUS[0]}
set -e
if [[ "$run_status" -ne 0 ]]; then
    exit "$run_status"
fi
if grep -Fq " generated an exception:" "$coordinator_log"; then
    echo "[ERROR][KLayout] One or more parallel DRC checks failed; see $coordinator_log" >&2
    exit 1
fi
