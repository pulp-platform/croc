#!/bin/bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Thomas Benz <tbenz@iis.ee.ethz.ch>

set -e  # Exit on error
set -u  # Error on undefined vars


################
# Setup
################
# Source environment
source "../env.sh"

export GITHUB_REPOSITORY="${GITHUB_REPOSITORY:-localhost}" # Get commit in CI run


################
# Helpers
################

show_help() {
    cat << EOF
ArtistIC Coordinator

Usage:
    ./run_artistic.sh [OPTIONS]

Options:
    --help, -h          Show this help message
    --dry-run, -n       Only print commands instead of executing
    --verbose, -v       Print commands while executing
    --logo SRC_FILE     Create an ASIC art on the top metal layer from 'artistic/src/logo_chip.svg'
                        The source file is seen relative to the 'klayout/out' directory.
    --render            Render the logo-enhanced GDS
    --outline           Annotate the render with module oulines defined in 'artistic/src/croc_modules.json'
    --render-map        Render and generate an OpenStreetMap DB
    --cleanup           Cleanup intermittent files

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


prepare_logo() {
    run_cmd "echo [INFO] Preparing logo"

    # customize logo
    run_cmd "mkdir -p meerkat_work"
    run_cmd "sed 's/#DATE#/$(date '+%Y-%m-%d')/g' src/logo_chip.svg > meerkat_work/croc_logo.svg"
    run_cmd "sed -i 's/#HASH#/$(git rev-parse --short HEAD)/g' meerkat_work/croc_logo.svg"
    run_cmd "sed -i 's|#REPO#|gh.io/$GITHUB_REPOSITORY|g' meerkat_work/croc_logo.svg"

    run_cmd "inkscape meerkat_work/croc_logo.svg \
        -w 660 \
        -h 660 \
        -o meerkat_work/croc_logo.png \
        > /dev/null 2>&1"

    run_cmd "convert meerkat_work/croc_logo.png \
        -dither FloydSteinberg \
        -remap pattern:gray50 \
        meerkat_work/croc_logo.mono.png \
        > /dev/null"
}


create_logo() {
    run_cmd "echo [INFO][Meerkat] Preparing top metal export"

    run_cmd "python3 artistic/scripts/meerkat_interface.py \
        -i ../../klayout/out/$1 \
        -m croc_tm.gds.gz \
        -g croc_logo.gds \
        -o croc_chip.gds.gz \
        -w meerkat_work \
        -l 134"

    run_cmd "echo [INFO][Meerkat] Export top metal"
    run_cmd "cd meerkat_work"
    run_cmd "klayout -zz -rm ../artistic/scripts/export_top_metal.py"
    run_cmd "gzip -f -d croc_tm.gds.gz"
    run_cmd "cd .."

    run_cmd "echo [INFO][Meerkat] Create logo"
    run_cmd "python3 artistic/scripts/meerkat.py \
        -i meerkat_work/croc_logo.mono.png \
        -g meerkat_work/croc_tm.gds \
        -l 134 \
        -n croc \
        -s meerkat_work/croc_logo.svg \
        -o meerkat_work/croc_logo.gds \
        > meerkat_work/meerkat.log"

    run_cmd "echo [INFO] Merge logo with chip"
    run_cmd "cd meerkat_work"
    run_cmd "klayout -zz -rm ../artistic/scripts/merge_logo.py"
    run_cmd "cd .."
}


render() {
    run_cmd "mkdir -p renderics"
    run_cmd "echo [INFO][RenderICs] Run $1 for $2.json"
    run_cmd "make -C artistic $1 CFG_FILE=../src/$2.json > renderics/$2_$1.log 2>&1"
}


finish_render() {
    run_cmd "echo [INFO][RenderICs] Convert output files"
    run_cmd "cp renderics/DPI__croc_0-0.png renderics/croc_render.png"
    run_cmd "cp renderics/PDF__croc_0-0.pdf renderics/croc_render.pdf"
    run_cmd "convert renderics/croc_render.png renderics/croc_render.jpg"
}


gen_outline() {
    run_cmd "echo [INFO][OutlineGen] Generate module outlines"
    run_cmd "python3 artistic/scripts/gen_outline.py \
    -i ../openroad/out/croc.def \
    -o renderics/croc_modules.svg \
    -b renderics/croc_render.jpg \
    --lef_files ${PDK_DIR_LEF_SRAMS}/*.lef \
    --px_scale 15000 \
    --module_json src/croc_modules.json \
    --opacity 0.65 \
    --font_size 35 \
    --luminosity 0.85 \
    --scale 2.0 \
    > renderics/gen_outline.log"
}


finish_outline() {
    run_cmd "echo [INFO][OutlineGen] Convert output files"
    run_cmd "inkscape renderics/croc_modules.svg -o renderics/croc_modules.png > /dev/null 2>&1"
    run_cmd "inkscape renderics/croc_modules.svg -o renderics/croc_modules.pdf > /dev/null 2>&1"
    run_cmd "convert renderics/croc_modules.png renderics/croc_modules.jpg"
}


convert_map() {
    run_cmd "echo [INFO][Mapify] Convert to OpenStreetMap DB"
    run_cmd "cd artistic"
    run_cmd "python3 scripts/mapify.py ../src/croc_map.json | bash"
    run_cmd "cp ../src/show_map.html ../mapify/index.html"
}


cleanup() {
    run_cmd "echo [INFO][RenderICs] Cleanup"
    run_cmd "rm -f renderics/???__*.png"

    run_cmd "echo [INFO][Mapify] Cleanup"
    run_cmd "rm -rf mapify_tmp"
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
        --prepare-logo) # CI only
            prepare_logo
            shift
            ;;
        --create-logo) # CI only
            create_logo $2
            shift 2
            ;;
        --logo)
            prepare_logo
            create_logo $2
            shift 2
            ;;
        --render-raw) # CI only
            render analyze croc
            render gen_raw croc
            shift
            ;;
        --render-pdf) # CI only
            render gen_pdfs croc
            finish_render
            shift
            ;;
        --render)
            render analyze croc
            render gen_raw croc
            render gen_pdfs croc
            finish_render
            shift
            ;;
        --outline)
            gen_outline
            finish_outline
            shift
            ;;
        --render-map-raw) # CI only
            render analyze croc_map
            render gen_raw croc_map
            shift
            ;;
        --render-map-db) # CI only
            render gen_pdfs croc_map
            convert_map
            shift
            ;;
        --render-map)
            render analyze croc_map
            render gen_raw croc_map
            render gen_segs croc_map
            convert_map
            shift
            ;;
        --cleanup)
            cleanup
            shift
            ;;
        # Error handling
        *)
            echo "[ERROR] Unknown option: $1 (use --help for usage)" >&2
            exit 1
            ;;
    esac
done
