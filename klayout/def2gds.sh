#! /bin/bash
# klayout batch mode for transferring def to gds

# this directory
script_dir=$(realpath $(dirname "${BASH_SOURCE[0]}"))
cd $script_dir

################
### project  ###
################
topcell="croc_chip"
defpath=$(realpath "$script_dir/../openroad/out/croc.def")


################
## technology ##
################
pdk=$(realpath "$script_dir/../ihp13/pdk/ihp-sg13g2")
lef="$(find ${pdk}/libs.ref/sg13g2_stdcell/lef -name '*.lef' -exec realpath {} \;) \
      $(find ${pdk}/libs.ref/sg13g2_sram/lef -name '*.lef' -exec realpath {} \;) \
      $(find ${pdk}/libs.ref/sg13g2_io/lef -name 'sg13g2_io.lef' -exec realpath {} \;)"
gds="$(find ${pdk}/libs.ref/sg13g2_stdcell/gds -name '*.gds' -exec realpath {} \;) \
      $(find ${pdk}/libs.ref/sg13g2_sram/gds -name '*.gds' -exec realpath {} \;) \
      $(find ${pdk}/libs.ref/sg13g2_io/gds -name '*.gds' -exec realpath {} \;)"
tech="$pdk/libs.tech/klayout/tech/sg13g2.lyt"
layer="$pdk/libs.tech/klayout/tech/sg13g2.lyp"

# create klayout home dir and add pdk to path
export KLAYOUT_HOME="$script_dir/.klayout"
export KLAYOUT_PATH="$(realpath $script_dir/../ihp13/pdk/ihp-sg13g2/libs.tech/klayout):$KLAYOUT_PATH"
mkdir -p $KLAYOUT_HOME/tech

# all <lef-files> entries for the tech file
lef_files=""
for lef_file in $lef; do
    lef_files+="<lef-files>$lef_file</lef-files>\n"
done

# replace the placeholder tag with the real lef files
sed "/<lef-files>merged.lef<\/lef-files>/c $lef_files" "$tech" > $KLAYOUT_HOME/tech/sg13g2.lyt
# use the lef/def map file
sed -i "s/<map-file\/>/<map-file>sg13g2.map<\/map-file>/g" $KLAYOUT_HOME/tech/sg13g2.lyt
ln -sfr $script_dir/sg13g2.map $KLAYOUT_HOME/tech/sg13g2.map

klayout_cmd="/foss/tools/klayout/klayout -zz \
          -rd design_name=\"$topcell\" \
          -rd in_def=\"$defpath\" \
          -rd in_files=\"$gds\" \
          -rd out_file=\"${topcell}.gds\" \
          -rd tech_file=\"$KLAYOUT_HOME/tech/sg13g2.lyt\" \
          -rd layer_map=\"$KLAYOUT_HOME/tech/sg13g2.map\" \
          -rm def2stream.py"

echo $klayout_cmd
eval $klayout_cmd
