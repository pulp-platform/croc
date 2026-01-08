#! /bin/bash
# klayout batch mode to create the sealring and fill

export KLAYOUT=${KLAYOUT:-klayout}

root_dir=$(realpath $(dirname "${BASH_SOURCE[0]}")/../..)
klayout_dir=${root_dir}/ihp13/pdk/ihp-sg13g2/libs.tech/klayout
export KLAYOUT_PATH=$klayout_dir
export PDK=ihp-sg13g2
export PDK_ROOT=${root_dir}/ihp13/pdk

echo "Root: ${root_dir}"
echo "KLayout: ${klayout_dir}"


###############
### Filler  ###
###############
FILLER=false


#############
### Help  ###
#############
show_help() {
  cat <<EOF
Usage: $(basename "$0") [OPTIONS]

Options:
  -f, --filler     Enable filler mode
  -h, --help       Show this help message and exit

Examples:
  $(basename "$0") --filler
  $(basename "$0") -f
EOF
}


########################
### Parse Arguments  ###
########################
while [[ $# -gt 0 ]]; do
  case "$1" in
    -f|--filler)
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

echo "Read ${def_file} - die area is ${die_width} um x ${die_height} um"


################
## Technology ##
################
if [[ -d "$root_dir/technology" ]]; then
    echo "Init tech from ETHZ DZ cockpit"
    pdk_dir=$(realpath "$root_dir/technology")
    pdk_cells_lef_dir="${pdk_dir}/lef"
    pdk_sram_lef_dir="${pdk_dir}/lef"
    pdk_io_lef_dir="${pdk_dir}/lef"
    pdk_cells_gds_dir="${pdk_dir}/gds"
    pdk_sram_gds_dir="${pdk_dir}/gds"
    pdk_io_gds_dir="${pdk_dir}/gds"
else
    echo "Init tech from Github PDK"
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

echo $klayout_cmd
eval $klayout_cmd


#################
### Seal Gen  ###
#################
sealring_gen_cmd="$KLAYOUT -n sg13g2 -zz \
                           -r $klayout_dir/tech/scripts/sealring.py \
                           -rd width=$((  $die_width + 2 * $sealringspace ))  \
                           -rd height=$((  $die_width + 2 * $sealringspace )) \
                           -rd output=$seal_file"

echo $sealring_gen_cmd
eval $sealring_gen_cmd


###################
### Seal Merge  ###
###################
sealring_merge_cmd="$KLAYOUT -zz \
                             -rm $root_dir/klayout/scripts/merge_sealring.py \
                             -rd chip_gds=$out_file \
                             -rd seal_gds=$seal_file \
                             -rd dx_um=$sealringspace \
                             -rd dy_um=$sealringspace \
                             -rd top_name=${chipname}_w_sealring \
                             -rd out_gds=$sealed_file"

echo $sealring_merge_cmd
eval $sealring_merge_cmd


#######################
### Density Filling ###
#######################
fill_cmd="$KLAYOUT -n sg13g2 -zz \
        -r $klayout_dir/tech/scripts/filler.py \
        -rd output_file=$filled_file \
        -rd no_topmetal_2 \
        $sealed_file"

echo $fill_cmd
if [[ "$FILLER" == true ]]; then
    eval $fill_cmd
fi
