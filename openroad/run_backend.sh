#!/bin/bash
# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# OpenROAD Backend Flow Script
# Runs the complete backend flow or individual steps

set -e  # Exit on error
set -u  # Error on undefined vars

################
### Setup
################
script_dir=$(realpath $(dirname "${BASH_SOURCE[0]}"))
croc_root=$(realpath "${script_dir}/..")

# Source environment
source "${croc_root}/env.sh"

##############################
### Helper Functions (inline)
##############################

show_help() {
    cat << EOF
OpenROAD Backend Flow Script

Usage:
    ./run_backend.sh [OPTIONS]

Options:
    --all                  Run entire backend flow
    --step <name>          Run specific step only
    --from <name>          Run from specific step to the end
    --help, -h             Show this help message

Steps:
    floorplan    - Initialize, floorplan, and power grid (stage 01)
    placement    - Repair netlist and placement (stage 02)
    cts          - Clock tree synthesis (stage 03)
    routing      - Global and detailed routing (stage 04)
    finishing    - Filler cells and output generation (stage 05)

Environment Variables:
    PROJ_NAME       - Project name (default: croc)
    TOP_DESIGN      - Top module name (default: croc_chip)
    OPENROAD        - Path to OpenROAD binary (default: openroad)
    NETLIST         - Path to synthesized netlist

Examples:
    # Run entire backend flow
    ./run_backend.sh --all

    # Run only floorplan step
    ./run_backend.sh --step floorplan

    # Run from placement to the end
    ./run_backend.sh --from placement

Inputs:
    - Synthesized netlist: ${NETLIST}
    - Constraints: openroad/src/constraints.sdc
    - PDK libraries: Auto-discovered from ${PDK_ROOT}

Outputs:
    - Checkpoints: openroad/save/*.zip
    - Reports: openroad/reports/
    - Final outputs: openroad/out/
EOF
    exit 0
}

################
### Parse Arguments
################
mode=""
step_name=""

while [[ $# -gt 0 ]]; do
    case "$1" in
        --help|-h)
            show_help
            ;;
        --all)
            mode="all"
            shift
            ;;
        --step)
            mode="step"
            step_name="${2:-}"
            [[ -z "${step_name}" ]] && { echo "[ERROR] --step requires a step name" >&2; exit 1; }
            shift 2
            ;;
        --from)
            mode="from"
            step_name="${2:-}"
            [[ -z "${step_name}" ]] && { echo "[ERROR] --from requires a step name" >&2; exit 1; }
            shift 2
            ;;
        *)
            { echo "[ERROR] Unknown option: $1 (use --help for usage)" >&2; exit 1; }
            ;;
    esac
done

if [[ -z "${mode}" ]]; then
    echo "[ERROR] No mode specified. Use --all, --step, or --from (use --help for usage)" >&2
    exit 1
fi

################
### Step Definitions
################
# Map step names to TCL scripts and checkpoint names
declare -A step_to_tcl=(
    [floorplan]="01_floorplan.tcl"
    [placement]="02_placement.tcl"
    [cts]="03_cts.tcl"
    [routing]="04_routing.tcl"
    [finishing]="05_finishing.tcl"
)

declare -A step_to_input_checkpoint=(
    [floorplan]=""  # No input checkpoint (reads netlist directly)
    [placement]="01_${PROJ_NAME}.floorplan"
    [cts]="02_${PROJ_NAME}.placed"
    [routing]="03_${PROJ_NAME}.cts"
    [finishing]="04_${PROJ_NAME}.routed"
)

# All steps in order
all_steps=(floorplan placement cts routing finishing)


################
### Main Script
################
echo "[INFO] OpenROAD Backend Flow"
echo "[INFO] Project: ${PROJ_NAME}, Top: ${TOP_DESIGN}"
echo "[INFO] PDK: ${PDK_ROOT}"

# Create output directories
mkdir -p "${OR_OUT}"
mkdir -p "${OR_REPORTS}"
mkdir -p "${OR_SAVE}"

# Check OpenROAD is available
command -v "${OPENROAD}" &>/dev/null || { echo "[ERROR] OpenROAD not found: ${OPENROAD}" >&2; exit 1; }
echo "[INFO] Using OpenROAD: $(command -v ${OPENROAD})"

# Change to OpenROAD directory
cd "${OR_DIR}"

# Export environment variables for TCL scripts
export PROJ_NAME
export TOP_DESIGN
export NETLIST
export SAVE="${OR_SAVE}"
export REPORTS="${OR_REPORTS}"
export OUT="${OR_OUT}"

# Function to run a single step
run_step() {
    local step="$1"
    local tcl_script="${step_to_tcl[$step]}"
    local input_checkpoint="${step_to_input_checkpoint[$step]}"

    echo "[INFO] ========================================="
    echo "[INFO] Running step: ${step}"
    echo "[INFO] TCL script: ${tcl_script}"

    if [[ -n "${input_checkpoint}" ]]; then
        echo "[INFO] Input checkpoint: ${input_checkpoint}"
        export INPUT_CHECKPOINT="${input_checkpoint}"

        # Verify checkpoint exists
        if [[ ! -f "${OR_SAVE}/${input_checkpoint}.zip" ]]; then
            echo "[ERROR] Input checkpoint not found: ${OR_SAVE}/${input_checkpoint}.zip" >&2
            exit 1
        fi
    else
        # First stage (floorplan) - check netlist exists
        if [[ ! -f "${NETLIST}" ]]; then
            echo "[ERROR] Input netlist not found: ${NETLIST}" >&2
            exit 1
        fi
        echo "[INFO] Input netlist: ${NETLIST}"
    fi

    # Run OpenROAD with the TCL script
    echo "[INFO] Executing OpenROAD..."
    if ${OPENROAD} -no_init -exit "scripts/${tcl_script}"; then
        echo "[SUCCESS] Step '${step}' completed successfully"
    else
        echo "[ERROR] Step '${step}' failed!" >&2
        exit 1
    fi
}

# Execute based on mode
case "${mode}" in
    all)
        echo "[INFO] Running entire backend flow (all steps)"
        for step in "${all_steps[@]}"; do
            run_step "${step}"
        done
        echo "[SUCCESS] Complete backend flow finished!"
        ;;

    step)
        if [[ -z "${step_to_tcl[$step_name]:-}" ]]; then
            echo "[ERROR] Invalid step: $step_name. Valid steps: ${all_steps[*]}" >&2
            exit 1
        fi
        echo "[INFO] Running single step: ${step_name}"
        run_step "${step_name}"
        ;;

    from)
        if [[ -z "${step_to_tcl[$step_name]:-}" ]]; then
            echo "[ERROR] Invalid step: $step_name. Valid steps: ${all_steps[*]}" >&2
            exit 1
        fi
        echo "[INFO] Running from step '${step_name}' to the end"

        # Find starting index
        start_idx=0
        for i in "${!all_steps[@]}"; do
            if [[ "${all_steps[$i]}" == "${step_name}" ]]; then
                start_idx=$i
                break
            fi
        done

        # Run from starting step to the end
        for ((i=start_idx; i<${#all_steps[@]}; i++)); do
            run_step "${all_steps[$i]}"
        done
        echo "[SUCCESS] Backend flow from '${step_name}' finished!"
        ;;
esac

echo "[INFO] ========================================="
echo "[INFO] Backend flow complete"
echo "[INFO] Checkpoints: ${OR_SAVE}/"
echo "[INFO] Reports: ${OR_REPORTS}/"
echo "[INFO] Final outputs: ${OR_OUT}/"
echo "[INFO] ========================================="
