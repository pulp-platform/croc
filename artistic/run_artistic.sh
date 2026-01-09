#!/bin/bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

set -e  # Exit on error
set -u  # Error on undefined vars


################
### Setup
################

export GITHUB_REPOSITORY="${GITHUB_REPOSITORY:-localhost}"
mkdir -p meerkat_work renderics


################
### Helpers
################

show_help() {
    cat << EOF
ArtistIC Coordinator

Usage:
    ./run_artistic.sh [OPTIONS]

Options:
    --help, -h          Show this help message
    --logo src_file     Create an ASIC art on the top metal layer from `artistic/src/logo_chip.svg`
                        The source file is seen relative to the `klayout/out` directory.
    --render            Render the logo-enhanced GDS
    --outline           Annotate the render with module oulines defined in `artistic/src/croc_modules.json`
    --render-map        Render and generate an OpenStreetMap DB
    --cleanup           Cleanup intermittend files
EOF
    exit 0
}


prepare_logo() {
    echo "[INFO] Preparing logo"

    # customize logo
    sed "s/#DATE#/$(date '+%Y-%m-%d')/g" src/logo_chip.svg > meerkat_work/croc_logo.svg
    sed -i "s/#HASH#/$(git rev-parse --short HEAD)/g" meerkat_work/croc_logo.svg
    sed -i "s|#REPO#|gh.io/$GITHUB_REPOSITORY|g" meerkat_work/croc_logo.svg

    inkscape meerkat_work/croc_logo.svg -w 660 -h 660 -o meerkat_work/croc_logo.png > /dev/null 2>&1

    convert meerkat_work/croc_logo.png \
        -dither FloydSteinberg \
        -remap pattern:gray50 \
        meerkat_work/croc_logo.mono.png \
        > /dev/null
}


create_logo() {
    echo "[INFO][Meerkat] Preparing top metal export"

    python3 artistic/scripts/meerkat_interface.py \
        -i ../../klayout/out/$1 \
        -m croc_tm.gds.gz \
        -g croc_logo.gds \
        -o croc_chip.gds.gz \
        -w meerkat_work \
        -l 134

        echo "[INFO][Meerkat] Export top metal"
        cd meerkat_work
        klayout -zz -rm ../artistic/scripts/export_top_metal.py
        gzip -f -d croc_tm.gds.gz
        cd ..

        echo "[INFO][Meerkat] Create logo"
        python3 artistic/scripts/meerkat.py \
            -i meerkat_work/croc_logo.mono.png \
            -g meerkat_work/croc_tm.gds \
            -l 134 \
            -n croc \
            -s meerkat_work/croc_logo.svg \
            -o meerkat_work/croc_logo.gds \
            > meerkat_work/meerkat.log

        echo "[INFO] Merge logo with chip"
        cd meerkat_work
        klayout -zz -rm ../artistic/scripts/merge_logo.py
        cd ..
}


render() {
    echo "[INFO][RenderICs] Run $1 for $2.json"
    make -C artistic $1 CFG_FILE=../src/$2.json > renderics/$2_$1.log 2>&1
}


finish_render() {
    echo "[INFO][RenderICs] Convert output files"
    cp renderics/DPI__croc_0-0.png renderics/croc_render.png
    cp renderics/PDF__croc_0-0.pdf renderics/croc_render.pdf
    convert renderics/croc_render.png renderics/croc_render.jpg
}


gen_outline() {
    echo "[INFO][OutlineGen] Generate module outlines"
    python3 artistic/scripts/gen_outline.py \
    -i ../openroad/out/croc.def \
    -o renderics/croc_modules.svg \
    -b renderics/croc_render.jpg \
    --lef_files ../ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lef/*.lef \
    --px_scale 15000 \
    --module_json src/croc_modules.json \
    --opacity 0.65 \
    --font_size 35 \
    --luminosity 0.85 \
    --scale 2.0 \
    > renderics/gen_outline.log
}


finish_outline() {
    echo "[INFO][OutlineGen] Convert output files"
    inkscape renderics/croc_modules.svg -o renderics/croc_modules.png > /dev/null 2>&1
    inkscape renderics/croc_modules.svg -o renderics/croc_modules.pdf > /dev/null 2>&1
    convert renderics/croc_modules.png renderics/croc_modules.jpg
}


convert_map() {
    echo "[INFO][Mapify] Convert to OpenStreetMap DB"
    cd artistic
    python3 scripts/mapify.py ../src/croc_map.json | bash
    cp ../src/show_map.html ../mapify/index.html
}


cleanup() {
    echo "[INFO][RenderICs] Cleanup"
    rm -f renderics/???__*.png

    echo "[INFO][Mapify] Cleanup"
    rm -rf ../mapify_tmp
}


####################
### Parse Arguments
####################

while [[ $# -gt 0 ]]; do
    case "$1" in
        --help|-h)
            show_help
            ;;
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
        *)
            echo "[ERROR] Unknown option: $1 (use --help for usage)" >&2
            exit 1
            ;;
    esac
done
