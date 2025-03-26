source scripts/setup_OpenRoad.tcl

source $CROC_DIR/openroad/scripts/init_tech.tcl

read_verilog $CROC_DIR/yosys/out/croc_yosys.v
link_design croc_chip
puts "Start done!"

set chipW  1760;
set chipH  1760;
set padRing           180.0
set coreMargin [expr $padRing + 35];
initialize_floorplan -die_area "0 0 $chipW $chipH" -core_area "$coreMargin $coreMargin [expr $chipW-$coreMargin] [expr $chipH-$coreMargin]" -site "CoreSite"
puts "Floorplan done!"

source scripts/pin_placement_complete.tcl
puts "Pin Placement done!"

source scripts/floorplan_util.tcl
set bank0_sram0 {i_croc_soc/i_croc/gen_sram_bank\[0\].i_sram/gen_512x32xBx1.i_cut}
set bank1_sram0 {i_croc_soc/i_croc/gen_sram_bank\[1\].i_sram/gen_512x32xBx1.i_cut}
set coreArea      [ord::get_core_area]
set core_leftX    [lindex $coreArea 0]
set core_bottomY  [lindex $coreArea 1]
set core_rightX   [lindex $coreArea 2]
set core_topY     [lindex $coreArea 3]
set floorPaddingX      20.0
set floorPaddingY      20.0
set floor_leftX       [expr $core_leftX + $floorPaddingX]
set floor_bottomY     [expr $core_bottomY + $floorPaddingY]
set floor_rightX      [expr $core_rightX - $floorPaddingX]
set floor_topY        [expr $core_topY - $floorPaddingY]
set floor_midpointX   [expr $floor_leftX + ($floor_rightX - $floor_leftX)/2]
set floor_midpointY   [expr $floor_bottomY + ($floor_topY - $floor_bottomY)/2]
set RamMaster256x64   [[ord::get_db] findMaster "RM_IHPSG13_1P_256x64_c2_bm_bist"]
set RamSize256x64_W   [ord::dbu_to_microns [$RamMaster256x64 getWidth]]
set RamSize256x64_H   [ord::dbu_to_microns [$RamMaster256x64 getHeight]]
set X [expr $floor_midpointX - $RamSize256x64_W/2]
set Y [expr $floor_topY - $RamSize256x64_H]
placeInstance $bank0_sram0 $X $Y R0
set X [expr $X]
set Y [expr $Y - $RamSize256x64_H - 15]
placeInstance $bank1_sram0 $X $Y R0
cut_rows -halo_width_x 2 -halo_width_y 1
puts "Macro Placement done!"

source scripts/global_connections.tcl
global_connect
set_voltage_domain -name {CORE} -power {VDD} -ground {VSS}

set macro RM_IHPSG13_1P_256x64_c2_bm_bist
set sram  [[ord::get_db] findMaster $macro]
set sramHeight  [ord::dbu_to_microns [$sram getHeight]]
set stripe_dist [expr $sramHeight - 50]
if {$stripe_dist > 100} {
    set stripe_dist [expr $stripe_dist/2]
}

define_pdn_grid -name {core_grid} -voltage_domains {CORE}
define_pdn_grid -macro -cells $macro -name sram_256x64_grid -orient "R0 R180 MY MX" \
    -grid_over_boundary -voltage_domains {CORE} \
    -halo {1 1}

add_pdn_ring -grid {core_grid} \
   -layer        {TopMetal1 TopMetal2} \
   -widths       "10 10" \
   -spacings     "6 6" \
   -pad_offsets  "6 6" \
   -add_connect                        \
   -connect_to_pads                    \
   -connect_to_pad_layers TopMetal2

add_pdn_stripe -grid {core_grid} \
   -layer {Metal1}               \
   -width {0.44}                 \
   -offset {0}                   \
   -followpins                   \
   -extend_to_core_ring

add_pdn_connect -grid {core_grid} -layers {TopMetal2 Metal1}

add_pdn_stripe -grid {core_grid} \
   -layer {TopMetal2}            \
   -width 6                      \
   -pitch 204                    \
   -spacing 60                   \
   -offset 97                    \
   -extend_to_core_ring          \
   -snap_to_grid                 \
   -number_of_straps 7
              
add_pdn_ring -grid sram_256x64_grid \
    -layer        {Metal3 Metal4} \
    -widths       "2 2" \
    -spacings     "0.6 0.6" \
    -core_offsets "2.4 0.6" \
    -add_connect

add_pdn_stripe -grid sram_256x64_grid \
   -layer {TopMetal1} \
   -width 6 \
   -spacing 4 \
   -pitch $stripe_dist \
   -offset 20 \
   -extend_to_core_ring \
   -starts_with POWER \
   -snap_to_grid

add_pdn_connect -grid sram_256x64_grid -layers {Metal3 Metal1}
add_pdn_connect -grid sram_256x64_grid -layers {TopMetal1 Metal3}
add_pdn_connect -grid sram_256x64_grid -layers {TopMetal1 Metal4}
add_pdn_connect -grid sram_256x64_grid -layers {TopMetal2 TopMetal1}
add_pdn_connect -grid {core_grid} -layers {TopMetal2 Metal2}
add_pdn_connect -grid {core_grid} -layers {TopMetal2 Metal4}
add_pdn_connect -grid {core_grid} -layers {Metal3 Metal1}
add_pdn_connect -grid {core_grid} -layers {Metal3 Metal2}

puts "Power Placement done!"
