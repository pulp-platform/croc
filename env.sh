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
if [[ -n "${BASH_SOURCE[0]}" ]]; then
    export CROC_ROOT=$(realpath $(dirname "${BASH_SOURCE[0]}"))
else
    export CROC_ROOT=$(pwd)
fi
echo "[INFO][ENV] Croc root: $CROC_ROOT"


######################
# Project Settings
######################
export PROJ_NAME="${PROJ_NAME:-croc}"
export TOP_DESIGN="${TOP_DESIGN:-croc_chip}"
export DUT_DESIGN="${DUT_DESIGN:-croc_soc}"
if [[ -z "${CROC_PDK:-}" ]]; then
    if [[ "${PDK:-}" == "sg13g2" || "${PDK:-}" == "sg13cmos5l" ]]; then
        echo "[WARNING][ENV] Ignoring PDK=$PDK. Use CROC_PDK to select the Croc PDK."
    fi
    export CROC_PDK="sg13cmos5l"
fi

# Explicit file basenames used by downstream scripts. Directory/source
# selection lives below; cell names and basenames stay spelled out here.
export PDK_STDCELL_LEF_FILE="sg13g2_stdcell.lef"
export PDK_STDCELL_GDS_FILE="sg13g2_stdcell.gds"
export PDK_STDCELL_LIB_TT_FILE="sg13g2_stdcell_typ_1p20V_25C.lib"
export PDK_STDCELL_LIB_FF_FILE="sg13g2_stdcell_fast_1p32V_m40C.lib"
export PDK_TECH_LEF_FILE="sg13cmos5l_tech.lef"
export PDK_IO_LEF_FILE="sg13cmos5l_io.lef"
export PDK_IO_GDS_FILE="sg13cmos5l_io.gds"
export PDK_IO_LIB_TT_FILE="sg13cmos5l_io_typ_1p2V_3p3V_25C.lib"
export PDK_IO_LIB_FF_FILE="sg13cmos5l_io_fast_1p32V_3p6V_m40C.lib"
export PDK_LAYER_MAP_FILE=""
export CROC_TECHNOLOGY_VIEW=""
export PDK_BONDPAD_CELL="bondpad_70x70"
export PDK_BONDPAD_LEF="bondpad_70x70.lef"
export PDK_BONDPAD_GDS="bondpad_70x70.gds"

if [[ "$CROC_PDK" == "sg13cmos5l" ]]; then
    export BENDER_PDK_ARGS="-D IHP_SG13CMOS5L=1"
else
    export BENDER_PDK_ARGS=""
fi


###################
# PDK Discovery
###################
# `technology/` is the active PDK directory. It contains Liberty, LEF,
# Verilog, and GDS files. Cockpit provides it on ETH systems; elsewhere,
# env.sh creates a link to ihp13/pdk.

PUBLIC_PDK_ROOT="$CROC_ROOT/ihp13/pdk"
if [[ "${CROC_SKIP_TECH_SETUP:-0}" != "1" ]]; then
    if ! "$CROC_ROOT/scripts/setup_technology.sh" --quiet; then
        return 1 2>/dev/null || exit 1
    fi
else
    echo "[INFO][ENV] Skipping technology setup"
fi

if [[ -e "${CROC_ROOT}/technology" || ( "${CROC_SKIP_TECH_SETUP:-0}" == "1" && -d "$PUBLIC_PDK_ROOT" ) ]]; then

    if [[ -e "${CROC_ROOT}/technology" ]]; then
        export PDK_ROOT="$CROC_ROOT/technology"
    else
        # Dry runs use the public mirror directly without creating technology/.
        export PDK_ROOT="$PUBLIC_PDK_ROOT"
    fi
    export PDK_TECH_HOME="$PDK_ROOT"
    export PDK_STD_HOME="$PDK_ROOT"
    export PDK_SRAM_HOME="$PDK_ROOT"
    export PDK_IO_HOME="$PDK_ROOT"

    public_pdk_realpath="$(realpath -m "$PUBLIC_PDK_ROOT")"
    technology_realpath="$(realpath -m "$PDK_ROOT")"
    if [[ "$technology_realpath" == "$public_pdk_realpath" ]]; then
        export CROC_TECHNOLOGY_VIEW="public mirror"
    else
        export CROC_TECHNOLOGY_VIEW="local technology directory"
    fi

    export PDK_DIR_LEF_TECH="$PDK_ROOT/lef"
    export PDK_DIR_LEF_CELLS="$PDK_ROOT/lef"
    export PDK_DIR_LEF_SRAMS="$PDK_ROOT/lef"
    export PDK_DIR_LEF_IOS="$PDK_ROOT/lef"
    export PDK_DIR_LEF_BOND="$PDK_ROOT/lef"
    export PDK_DIR_LIB_CELLS="$PDK_ROOT/lib"
    export PDK_DIR_LIB_SRAMS="$PDK_ROOT/lib"
    export PDK_DIR_LIB_IOS="$PDK_ROOT/lib"
    export PDK_DIR_GDS_CELLS="$PDK_ROOT/gds"
    export PDK_DIR_GDS_SRAMS="$PDK_ROOT/gds"
    export PDK_DIR_GDS_IOS="$PDK_ROOT/gds"
    export PDK_DIR_GDS_BOND="$PDK_ROOT/gds"

    if [[ "$CROC_PDK" == "sg13cmos5l" ]]; then
        export PDK_BONDPAD_CELL="bondpad5l_70x70"
        export PDK_BONDPAD_GDS="bondpad5l_70x70.gds"
        export PDK_TECH_LEF_FILE="sg13cmos5l_tech.lef"
        export PDK_IO_LEF_FILE="sg13cmos5l_io.lef"
        export PDK_IO_GDS_FILE="sg13cmos5l_io.gds"
        export PDK_IO_LIB_TT_FILE="sg13cmos5l_io_typ_1p2V_3p3V_25C.lib"
        export PDK_IO_LIB_FF_FILE="sg13cmos5l_io_fast_1p32V_3p6V_m40C.lib"
        export PDK_BONDPAD_LEF="bondpad5l_70x70.lef"

        # KLayout needs separate tool files. Cockpit takes precedence.
        export KLAYOUT_PATH="$CROC_ROOT/ihp13/sg13cmos5l/libs.tech/klayout"
        if [[ -d "/usr/pack/ihp-sg13-kgf/open_ihp_sg13cmos5l/sg13cmos5l_tech/v0.2/klayout" ]]; then
            export KLAYOUT_PATH="/usr/pack/ihp-sg13-kgf/open_ihp_sg13cmos5l/sg13cmos5l_tech/v0.2/klayout"
        fi
    elif [[ "$CROC_PDK" == "sg13g2" ]]; then
        export PDK_TECH_LEF_FILE="sg13g2_tech.lef"
        export PDK_IO_LEF_FILE="sg13g2_io.lef"
        export PDK_IO_GDS_FILE="sg13g2_io.gds"
        export PDK_IO_LIB_TT_FILE="sg13g2_io_typ_1p2V_3p3V_25C.lib"
        export PDK_IO_LIB_FF_FILE="sg13g2_io_fast_1p32V_3p6V_m40C.lib"
        export PDK_BONDPAD_CELL="bondpad_70x70"
        export PDK_BONDPAD_LEF="bondpad_70x70.lef"
        export PDK_BONDPAD_GDS="bondpad_70x70.gds"
        export KLAYOUT_PATH="$CROC_ROOT/ihp13/sg13g2/ihp-sg13g2/libs.tech/klayout"
    else
        echo "[ERROR][ENV] Unknown CROC_PDK '$CROC_PDK'"
        exit 1
    fi

else
    echo "[WARNING][ENV] PDK not found. Initialize cockpit or ensure ihp13/pdk exists"
    export PDK_ROOT=""  # Set to empty to avoid unbound variable error
    export KLAYOUT_PATH="" # Set to empty to avoid unbound variable error
fi

echo "[INFO][ENV] PDK root: $PDK_ROOT"
echo "[INFO][ENV] Croc PDK: $CROC_PDK"
echo "[INFO][ENV] Active technology view: ${CROC_TECHNOLOGY_VIEW:-<none>}"
echo "[INFO][ENV] KLayout path: $KLAYOUT_PATH"
echo "[INFO][ENV] Bender PDK args: ${BENDER_PDK_ARGS:-<none>}"
echo "[INFO][ENV] Tech LEF: $PDK_TECH_LEF_FILE"
echo "[INFO][ENV] IO LEF/GDS: $PDK_IO_LEF_FILE/$PDK_IO_GDS_FILE"
echo "[INFO][ENV] IO Liberty tt/ff: $PDK_IO_LIB_TT_FILE/$PDK_IO_LIB_FF_FILE"
echo "[INFO][ENV] Bondpad cell: $PDK_BONDPAD_CELL ($PDK_BONDPAD_LEF/$PDK_BONDPAD_GDS)"
export KLAYOUT_TECH="$CROC_PDK"
if [[ -f "$PDK_ROOT/SG13G2_streamout.map" ]]; then
    export PDK_LAYER_MAP_FILE="$PDK_ROOT/SG13G2_streamout.map"
else
    export PDK_LAYER_MAP_FILE="$KLAYOUT_PATH/tech/${CROC_PDK}.map"
fi
