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


################
# Setup
################
# Source environment
source "../env.sh"


###############
# Technology
###############

lef_files="$(find "$PDK_DIR_LEF_TECH" -name 'sg13g2_stdcell.lef' -exec realpath {} \;) \
     $(find "$PDK_DIR_LEF_CELLS" -name 'sg13g2_tech.lef' -exec realpath {} \;) \
     $(find "$PDK_DIR_LEF_SRAMS" -name 'RM_IHPSG13*.lef' -exec realpath {} \;) \
     $(find "$PDK_DIR_LEF_IOS" -name 'sg13g2_io.lef' -exec realpath {} \;) \
     $(find "$PDK_DIR_LEF_BOND" -name '*.lef' -exec realpath {} \;)"

gds_files="$(find "$PDK_DIR_GDS_CELLS" -name 'sg13g2_stdcell.gds' -exec realpath {} \;) \
     $(find "$PDK_DIR_GDS_SRAMS" -name 'RM_IHPSG13*.gds' -exec realpath {} \;) \
     $(find "$PDK_DIR_GDS_IOS" -name 'sg13g2_io.gds' -exec realpath {} \;) \
     $(find "$PDK_DIR_GDS_BOND" -name '*.gds' -exec realpath {} \;)"


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
        echo $1
    else
        eval $1
    fi
}


def_to_gds() {
    run_cmd "mkdir -p out"
    run_cmd "echo [INFO][KLayout] Running LEF/DEF to stream"
    run_cmd "klayout -zz \
        -rd gds_allow_empty=True \
        -rd design_name=\"$TOP_DESIGN\" \
        -rd in_def=\"../openroad/out/croc.def\" \
        -rd layer_map=\"$KLAYOUT_PATH/tech/sg13g2.map\" \
        -rd lef_files=\"$lef_files\" \
        -rd gds_files=\"$gds_files\" \
        -rd out_file=\"out/croc_chip.gds.gz\" \
        -rm scripts/def2stream.py" \
        > out/def2stream.log
}


gen_seal_ring() {
    run_cmd "echo [INFO][KLayout] Creating seal ring"
    run_cmd "die_um=($(grep DIEAREA ../openroad/out/croc.def | grep -oE '[0-9]+' | tail -n 2 | xargs))"
    run_cmd "die_width=$(( ${die_um[-2]} / 1000 ))"
    run_cmd "die_height=$(( ${die_um[-1]} / 1000 ))"
    run_cmd "seal_width=$(( $die_width + 2 * $SEAL_RING_SPACE ))"
    run_cmd "seal_height=$(( $die_width + 2 * $SEAL_RING_SPACE ))"
    run_cmd "echo [INFO][KLayout] Read ../openroad/out/croc.def - die area: ${die_width} um x ${die_height} um"
    run_cmd "echo [INFO][KLayout] Chip dimensions with seal: ${seal_width} um x ${seal_height} um"
    run_cmd "klayout -n sg13g2 -zz \
        -r $KLAYOUT_PATH/tech/scripts/sealring.py \
        -rd width=$seal_width  \
        -rd height=$seal_height \
        -rd output=out/seal_ring.gds.gz \
        > out/gen_seal.log"
}


merge_seal_ring() {
    run_cmd "echo [INFO][KLayout] Merging seal ring"
    run_cmd "klayout -zz \
        -rm scripts/merge_sealring.py \
        -rd chip_gds=out/croc_chip.gds.gz \
        -rd seal_gds=out/seal_ring.gds.gz \
        -rd dx_um=$SEAL_RING_SPACE \
        -rd dy_um=$SEAL_RING_SPACE \
        -rd top_name=${TOP_DESIGN}_sealed \
        -rd out_gds=out/croc_chip.sealed.gds.gz \
        > out/merge_seal.log"
}


fill_metal() {
    run_cmd "echo [INFO][KLayout] Filling M1-M5 and TM1"
    run_cmd "klayout -n sg13g2 -zz \
        -r $KLAYOUT_PATH/tech/scripts/filler.py \
        -rd output_file=out/croc_chip.metfilled.gds.gz \
        -rd no_topmetal_2 \
        -rd no_activ \
        out/croc_chip.sealed.gds.gz \
        > out/merge_seal.log"
}


fill_activ() {
    run_cmd "echo [INFO][KLayout] Filling M1-M5 and TM1"
    run_cmd "klayout -n sg13g2 -zz \
        -r $KLAYOUT_PATH/tech/scripts/filler.py \
        -rd output_file=out/croc_chip.filled.gds.gz \
        -rd no_topmetal_2 \
        -rd no_topmetal_1 \
        -rd no_metal \
        out/croc_chip.metfilled.gds.gz"
}


####################
# Parse Arguments
####################

DRYRUN=0

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
