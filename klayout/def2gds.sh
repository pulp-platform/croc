#! /bin/bash
# klayout batch mode for transferring def to gds

export KLAYOUT=${KLAYOUT:-klayout}

# this directory
klayout_dir=$(realpath $(dirname "${BASH_SOURCE[0]}"))
root_dir=$(dirname $klayout_dir)
cd $klayout_dir

################
### project  ###
################
topcell="croc_chip"
defpath="$root_dir/openroad/out/croc.def"


################
## technology ##
################
if [[ -f "$root_dir/cockpit.log" ]]; then
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

tech="$root_dir/ihp13/pdk/ihp-sg13g2/libs.tech/klayout/tech/sg13g2.lyt"
layer="$root_dir/ihp13/pdk/ihp-sg13g2/libs.tech/klayout/tech/sg13g2.lyp"

# create klayout home dir and add pdk to path
export KLAYOUT_HOME="$klayout_dir/.klayout"
export KLAYOUT_PATH="$(realpath $root_dir/ihp13/pdk/ihp-sg13g2/libs.tech/klayout):$KLAYOUT_PATH"
mkdir -p $KLAYOUT_HOME/tech

# all <lef-files> entries for the tech file
lef_files=""
for lef_file in $lef; do
    lef_files+="<lef-files>$lef_file</lef-files>\n"
done

# replace the placeholder tag with the real lef files
sed "/<lef-files><\/lef-files>/c $lef_files" "$tech" > $KLAYOUT_HOME/tech/sg13g2.lyt
ln -sfr $klayout_dir/sg13g2.map $KLAYOUT_HOME/tech/sg13g2.map

echo "$gds" > $KLAYOUT_HOME/tech/tech_gds.f

klayout_cmd="$KLAYOUT -zz \
          -rd design_name=\"$topcell\" \
          -rd in_def=\"$defpath\" \
          -rd gds_flist=\"$KLAYOUT_HOME/tech/tech_gds.f\" \
          -rd out_file=\"${topcell}.gds\" \
          -rd tech_file=\"$KLAYOUT_HOME/tech/sg13g2.lyt\" \
          -rd layer_map=\"$KLAYOUT_HOME/tech/sg13g2.map\" \
          -rm def2stream.py"

echo $klayout_cmd
eval $klayout_cmd
