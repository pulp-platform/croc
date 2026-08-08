#! /bin/bash
# Copyright 2026 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51
#
# Authors:
# - Thomas Benz  <tbenz@iis.ee.ethz.ch>

# KLayout batch mode to create the sealring and metal fill

set -e  # Exit on error
set -u  # Error on undefined vars


DRYRUN=0
for arg in "$@"; do
    [[ "$arg" == -n || "$arg" == --dry-run ]] && DRYRUN=1
done

if [[ "$DRYRUN" -eq 1 ]]; then
    export CROC_SKIP_TECH_SETUP=1
fi

################
# Setup
################
# Source environment
source "../env.sh"


###############
# Technology
###############

SEAL_RING_SPACE=42

##############################
# Helper Functions (inline)
##############################

show_help() {
  cat <<EOF
Finishing (KLayout) Coordinator

Usage: ./run_finishing.sh [OPTIONS]

Options:
    --help, -h          Show this help message
    --dry-run, -n       Only print commands instead of executing
    --verbose, -v       Print commands while executing
    --gds               Convert DEF to GDS
    --seal              Create seal ring and merge it with GDS
    --fill-metal        Add metal filling to sealed GDS
    --fill-activ        Add activ filling to metal-filled GDS (takes a long time)
    --fill              Add metal and activ filling to sealed GDS (takes a long time)

Examples:
    # Convert DEF to GDS
    ./run_finishing.sh --gds

    # Convert DEF to GDS and add seal ring
    ./run_finishing.sh --gds --seal

EOF
    exit 0
}


run_cmd() {
    if [ "$DRYRUN" = 1 ]; then
        printf '%s\n' "$1"
    else
        eval $1
    fi
}


supports_split_topmetal_fill() {
    grep -q "no_topmetal_1" "$KLAYOUT_PATH/tech/scripts/filler.py"
}


collect_def_to_gds_inputs() {
    lef_files="$(find "$PDK_DIR_LEF_TECH" -name "$PDK_TECH_LEF_FILE" -exec realpath {} \;) \
         $(find "$PDK_DIR_LEF_CELLS" -name "$PDK_STDCELL_LEF_FILE" -exec realpath {} \;) \
         $(find "$PDK_DIR_LEF_SRAMS" -name 'RM_IHPSG13*.lef' -exec realpath {} \;) \
         $(find "$PDK_DIR_LEF_IOS" -name "$PDK_IO_LEF_FILE" -exec realpath {} \;) \
         $(find "$PDK_DIR_LEF_BOND" -name "$PDK_BONDPAD_LEF" -exec realpath {} \;)"

    local required_gds_files=(
        "$PDK_DIR_GDS_CELLS/$PDK_STDCELL_GDS_FILE"
        "$PDK_DIR_GDS_SRAMS/RM_IHPSG13_1P_512x32_c2_bm_bist.gds"
        "$PDK_DIR_GDS_IOS/$PDK_IO_GDS_FILE"
        "$PDK_DIR_GDS_BOND/$PDK_BONDPAD_GDS"
    )

    gds_files="${required_gds_files[*]}"
    [[ "$DRYRUN" -eq 1 ]] && return 0

    local missing_gds=0
    for gds_file in "${required_gds_files[@]}"; do
        if [[ ! -f "$gds_file" ]]; then
            missing_gds=1
            break
        fi
    done

    if [[ "$missing_gds" -eq 1 && "$CROC_TECHNOLOGY_VIEW" == "public mirror" ]]; then
        echo "[INFO][KLayout] Downloading missing public PDK GDS"
        "$CROC_ROOT/scripts/download_gds.sh"
    fi

    for gds_file in "${required_gds_files[@]}"; do
        if [[ ! -f "$gds_file" ]]; then
            echo "[ERROR][KLayout] Missing required GDS: $gds_file" >&2
            exit 1
        fi
    done

    gds_files="$(find "$PDK_DIR_GDS_CELLS" -name "$PDK_STDCELL_GDS_FILE" -exec realpath {} \;) \
         $(find "$PDK_DIR_GDS_SRAMS" -name 'RM_IHPSG13*.gds' -exec realpath {} \;) \
         $(find "$PDK_DIR_GDS_IOS" -name "$PDK_IO_GDS_FILE" -exec realpath {} \;) \
         $(find "$PDK_DIR_GDS_BOND" -name "$PDK_BONDPAD_GDS" -exec realpath {} \;)"
}


def_to_gds() {
    collect_def_to_gds_inputs
    run_cmd "mkdir -p out"
    run_cmd "echo [INFO][KLayout] Running LEF/DEF to stream"
    run_cmd "klayout -nc -rx -zz \
        -rd gds_allow_empty=True \
        -rd design_name=\"$TOP_DESIGN\" \
        -rd in_def=\"../openroad/out/${PROJ_NAME}.def\" \
        -rd layer_map=\"$PDK_LAYER_MAP_FILE\" \
        -rd lef_files=\"$lef_files\" \
        -rd gds_files=\"$gds_files\" \
        -rd out_file=\"out/${PROJ_NAME}.gds.gz\" \
        -rm scripts/def2stream.py \
        > out/def2stream.log"
}


derive_seal_dimensions() {
    local die_um
    read -r -a die_um < <(grep DIEAREA "../openroad/out/${PROJ_NAME}.def" | grep -oE '[0-9]+' | tail -n 2 | xargs)

    die_width=$(( die_um[-2] / 1000 ))
    die_height=$(( die_um[-1] / 1000 ))
    seal_width=$(( die_width + 2 * SEAL_RING_SPACE ))
    seal_height=$(( die_height + 2 * SEAL_RING_SPACE ))
}

generate_seal_ring() {
    local width="$1"
    local height="$2"

    run_cmd "klayout -nc -rx -zz \
        -r scripts/generate_seal_ring.py \
        -rd width=$width  \
        -rd height=$height \
        -rd output=out/seal_ring.gds.gz \
        > out/gen_seal.log"
}

gen_seal_ring() {
    run_cmd "echo [INFO][KLayout] Creating seal ring"

    if [[ "$DRYRUN" -eq 1 ]]; then
        run_cmd 'die_um=($(grep DIEAREA ../openroad/out/${PROJ_NAME}.def | grep -oE "[0-9]+" | tail -n 2 | xargs))'
        run_cmd 'die_width=$(( die_um[-2] / 1000 ))'
        run_cmd 'die_height=$(( die_um[-1] / 1000 ))'
        run_cmd "seal_width=\$(( die_width + 2 * SEAL_RING_SPACE ))"
        run_cmd "seal_height=\$(( die_height + 2 * SEAL_RING_SPACE ))"
        run_cmd 'echo [INFO][KLayout] Read ../openroad/out/${PROJ_NAME}.def - die area: ${die_width} um x ${die_height} um'
        run_cmd 'echo [INFO][KLayout] Chip dimensions with seal: ${seal_width} um x ${seal_height} um'
        generate_seal_ring '$seal_width' '$seal_height'
        return
    fi

    derive_seal_dimensions
    run_cmd "echo [INFO][KLayout] Read ../openroad/out/${PROJ_NAME}.def - die area: ${die_width} um x ${die_height} um"
    run_cmd "echo [INFO][KLayout] Chip dimensions with seal: ${seal_width} um x ${seal_height} um"
    generate_seal_ring "$seal_width" "$seal_height"
}


merge_seal_ring() {
    run_cmd "echo [INFO][KLayout] Merging seal ring"
    run_cmd "klayout -nc -rx -zz \
        -rm scripts/merge_sealring.py \
        -rd chip_gds=out/${PROJ_NAME}.gds.gz \
        -rd seal_gds=out/seal_ring.gds.gz \
        -rd dx_um=$SEAL_RING_SPACE \
        -rd dy_um=$SEAL_RING_SPACE \
        -rd top_name=${TOP_DESIGN}_sealed \
        -rd out_gds=out/${PROJ_NAME}.sealed.gds.gz \
        > out/merge_seal.log"
}


fill_metal() {
    run_cmd "echo [INFO][KLayout] Filling routing metals for $CROC_PDK"
    if [[ "$CROC_PDK" == "sg13cmos5l" ]]; then
        fill_flags="-rd no_activ"
    elif supports_split_topmetal_fill; then
        fill_flags="-rd no_topmetal_2 -rd no_activ"
    else
        fill_flags="-rd no_topmetal -rd no_activ"
    fi
    run_cmd "klayout -n $KLAYOUT_TECH -zz \
        -r $KLAYOUT_PATH/tech/scripts/filler.py \
        -rd output_file=out/${PROJ_NAME}.metfilled.gds.gz \
        $fill_flags \
        out/${PROJ_NAME}.sealed.gds.gz \
        > out/merge_seal.log"
}


fill_activ() {
    run_cmd "echo [INFO][KLayout] Filling active layers for $CROC_PDK"
    if [[ "$CROC_PDK" == "sg13cmos5l" ]]; then
        fill_flags="-rd no_metal"
    elif supports_split_topmetal_fill; then
        fill_flags="-rd no_topmetal_2 -rd no_topmetal_1 -rd no_metal"
    else
        fill_flags="-rd no_topmetal -rd no_metal"
    fi
    run_cmd "klayout -n $KLAYOUT_TECH -zz \
        -r $KLAYOUT_PATH/tech/scripts/filler.py \
        -rd output_file=out/${PROJ_NAME}.filled.gds.gz \
        $fill_flags \
        out/${PROJ_NAME}.metfilled.gds.gz"
}


####################
# Parse Arguments
####################

# default action if no argument is given
if [ $# -eq 0 ]; then
    show_help
    return 0
fi

# check for global arguments
for arg in "$@"; do
    [[ "$arg" == -v || "$arg" == --verbose ]] && set -x
    [[ "$arg" == -n || "$arg" == --dry-run ]] && DRYRUN=1
done

# parse arguments
while [[ $# -gt 0 ]]; do
    case "$1" in
        --help|-h)
            show_help
            ;;
        --verbose|-v)
            shift
            ;;
        --dry-run|-n)
            shift
            ;;
        # script-specific commands
        --gds)
            def_to_gds
            shift
            ;;
        --seal)
            gen_seal_ring
            merge_seal_ring
            shift
            ;;
        --fill-metal)
            fill_metal
            shift
            ;;
        --fill-activ)
            fill_activ
            shift
            ;;
        --fill)
            fill_metal
            fill_activ
            shift
            ;;
        # Error handling
        *)
            echo "[ERROR] Unknown option: $1 (use --help for usage)" >&2
            exit 1
            ;;
    esac
done
