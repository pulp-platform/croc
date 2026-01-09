#! /bin/bash
# Copyright 2026 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51
# Authors:
#
# - Thomas Benz  <tbenz@iis.ee.ethz.ch>

# KLayout batch mode to create the sealring and metal fill

set -e  # Exit on error
set -u  # Error on undefined vars


################
### Setup
################

export KLAYOUT=${KLAYOUT:-klayout}

root_dir=$(realpath $(dirname "${BASH_SOURCE[0]}")/..)
klayout_dir=${root_dir}/ihp13/pdk/ihp-sg13g2/libs.tech/klayout
export KLAYOUT_PATH=$klayout_dir
export PDK=ihp-sg13g2
export PDK_ROOT=${root_dir}/ihp13/pdk

echo "[INFO] Root: ${root_dir}"
echo "[INFO] KLayout: ${klayout_dir}"

# Apply PDK patches required for filling
if [ ! -f ${root_dir}/ihp13/pdk.patched ]; then
    git -C ${PDK_ROOT} apply ../patches/0001-Filling-improvements.patch
    touch ${root_dir}/ihp13/pdk.patched
    echo "[INFO] Applied all PDK patches"
else
    echo "[INFO] PDK patches already applied"
fi


#############
### Help  ###
#############

show_help() {
  cat <<EOF
Usage: $(basename "$0") [OPTIONS]

Options:
  --no-stream      Skip producing stream from LEF/DEF
  --no-seal        Skip seal ring
  --filling        Enable activ and metal filling
  -h, --help       Show this help message and exit

Examples:
  $(basename "$0") --filling
  $(basename "$0") -f
EOF
}


########################
### Parse Arguments  ###
########################

STREAM=true
SEAL=true
FILLER=false

while [[ $# -gt 0 ]]; do
  case "$1" in
    --no-stream)
      STREAM=false
      shift
      ;;
    --no-seal)
      SEAL=false
      shift
      ;;
    --filling)
      FILLER=true
      shift
      ;;
    -h|--help)
      show_help
      exit 0
      ;;
    *)
      echo "Unknown option: $1" >&2
      echo
      show_help
      exit 1
      ;;
  esac
done


################
### Project  ###
################

top_design=${TOP_DESIGN:-"croc_chip"}
def_file=${DEF_FILE:-"$root_dir/openroad/out/croc.def"}
out_file=${OUT_FILE:-"$root_dir/klayout/out/$top_design.gds.gz"}

out_path=$(realpath $(dirname "${out_file}"))
mkdir -p ${out_path}

seal_file=${out_path}/${top_design}_sealring.gds.gz
sealed_file=${out_path}/${top_design}_sealed.gds.gz
filled_file=${out_path}/${top_design}_filled.gds.gz

sealringspace=42

die_um=($(grep DIEAREA ${def_file} | grep -oE '[0-9]+' | tail -n 2 | xargs))
die_width=$(( ${die_um[-2]} / 1000 ))
die_height=$(( ${die_um[-1]} / 1000 ))

echo "[INFO] Read ${def_file} - die area is ${die_width} um x ${die_height} um"


################
## Technology ##
################

if [[ -d "[INFO]  $root_dir/technology" ]]; then
    echo "Init tech from ETHZ DZ cockpit"
    pdk_dir=$(realpath "$root_dir/technology")
    pdk_cells_lef_dir="${pdk_dir}/lef"
    pdk_sram_lef_dir="${pdk_dir}/lef"
    pdk_io_lef_dir="${pdk_dir}/lef"
    pdk_cells_gds_dir="${pdk_dir}/gds"
    pdk_sram_gds_dir="${pdk_dir}/gds"
    pdk_io_gds_dir="${pdk_dir}/gds"
else
    echo "[INFO] Init tech from Github PDK"
    pdk_dir=${pdk_dir:-$(realpath "$root_dir/ihp13/pdk/ihp-sg13g2")}
    pdk_cells_lef_dir="${pdk_dir}/libs.ref/sg13g2_stdcell/lef"
    pdk_sram_lef_dir="${pdk_dir}/libs.ref/sg13g2_sram/lef"
    pdk_io_lef_dir="${pdk_dir}/libs.ref/sg13g2_io/lef"
    pdk_cells_gds_dir="${pdk_dir}/libs.ref/sg13g2_stdcell/gds"
    pdk_sram_gds_dir="${pdk_dir}/libs.ref/sg13g2_sram/gds"
    pdk_io_gds_dir="${pdk_dir}/libs.ref/sg13g2_io/gds"
fi

bondpad_lef_dir=$(realpath "$root_dir/ihp13/bondpad/lef")
bondpad_gds_dir=$(realpath "$root_dir/ihp13/bondpad/gds")

lef="$(find "$pdk_cells_lef_dir" -name 'sg13g2_stdcell.lef' -exec realpath {} \;) \
     $(find "$pdk_cells_lef_dir" -name 'sg13g2_tech.lef' -exec realpath {} \;) \
     $(find "$pdk_sram_lef_dir" -name 'RM_IHPSG13*.lef' -exec realpath {} \;) \
     $(find "$pdk_io_lef_dir" -name 'sg13g2_io.lef' -exec realpath {} \;) \
     $(find "$bondpad_lef_dir" -name '*.lef' -exec realpath {} \;)"

gds="$(find "$pdk_cells_gds_dir" -name 'sg13g2_stdcell.gds' -exec realpath {} \;) \
     $(find "$pdk_sram_gds_dir" -name 'RM_IHPSG13*.gds' -exec realpath {} \;) \
     $(find "$pdk_io_gds_dir" -name 'sg13g2_io.gds' -exec realpath {} \;) \
     $(find "$bondpad_gds_dir" -name '*.gds' -exec realpath {} \;)"


################
## Def2Stream ##
################

klayout_cmd="$KLAYOUT -zz \
          -rd gds_allow_empty="True" \
          -rd design_name=\"$top_design\" \
          -rd in_def=\"$def_file\" \
          -rd layer_map=\"$klayout_dir/tech/sg13g2.map\" \
          -rd lef_files=\"$lef\" \
          -rd gds_files=\"$gds\" \
          -rd out_file=\"$out_file\" \
          -rm scripts/def2stream.py"

if [[ "$STREAM" == true ]]; then
  echo "[INFO] Running LEF/DEF to stream"
  echo $klayout_cmd
  echo ""
  eval $klayout_cmd
else
  echo "[INFO] Skipping LEF/DEF to stream"
fi

#################
### Seal Gen  ###
#################
sealring_gen_cmd="$KLAYOUT -n sg13g2 -zz \
                           -r $klayout_dir/tech/scripts/sealring.py \
                           -rd width=$((  $die_width + 2 * $sealringspace ))  \
                           -rd height=$((  $die_width + 2 * $sealringspace )) \
                           -rd output=$seal_file"

if [[ "$SEAL" == true ]]; then
  echo "[INFO] Creating seal ring"
  echo $sealring_gen_cmd
  echo ""
  eval $sealring_gen_cmd
else
  echo "[INFO] Skipping seal ring creation"
fi


###################
### Seal Merge  ###
###################
sealring_merge_cmd="$KLAYOUT -zz \
                             -rm $root_dir/klayout/scripts/merge_sealring.py \
                             -rd chip_gds=$out_file \
                             -rd seal_gds=$seal_file \
                             -rd dx_um=$sealringspace \
                             -rd dy_um=$sealringspace \
                             -rd top_name=${top_design}_w_sealring \
                             -rd out_gds=$sealed_file"

if [[ "$SEAL" == true ]]; then
  echo "[INFO] Merging seal ring"
  echo $sealring_merge_cmd
  echo ""
  eval $sealring_merge_cmd
else
  echo "[INFO] Skipping seal ring merging"
fi

#######################
### Density Filling ###
#######################
fill_cmd="$KLAYOUT -n sg13g2 -zz \
        -r $klayout_dir/tech/scripts/filler.py \
        -rd output_file=$filled_file \
        -rd no_topmetal_2 \
        $sealed_file"


if [[ "$FILLER" == true ]]; then
  echo "[INFO] Activ and metal filling"
  echo $fill_cmd
  echo ""
  eval $fill_cmd
else
  echo "[INFO] Skipping activ and metal filling"
fi
