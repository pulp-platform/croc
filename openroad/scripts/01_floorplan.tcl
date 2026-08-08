# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Tobias Senti      <tsenti@ethz.ch>
# - Jannis Schönleber <janniss@iis.ee.ethz.ch>
# - Philippe Sauter   <phsauter@iis.ee.ethz.ch>

# Stage 01: Initialization, Floorplan, and Power Grid
#
# This stage performs:
# - Reading and linking the netlist
# - Reading timing constraints
# - Connecting global power nets
# - Creating the floorplan (die/core area, macro placement, IO placement)
# - Generating the power distribution network
#
# Required environment variables:
#   PROJ_NAME    - Project name (e.g., "croc")
#   NETLIST      - Path to synthesized netlist
#   TOP_DESIGN   - Top module name
#
# Output checkpoint: 01_${PROJ_NAME}.floorplan

###############################################################################
# Setup
###############################################################################
source scripts/startup.tcl

utl::report "###############################################################################"
utl::report "# Stage 01: FLOORPLAN"
utl::report "###############################################################################"

utl::report "###############################################################################"
utl::report "# 01-01: Initialization"
utl::report "###############################################################################"

# Read and check design
utl::report "Read netlist: ${netlist}"
read_verilog $netlist
link_design $top_design

utl::report "Read constraints"
read_sdc src/constraints.sdc

utl::report "Check constraints"
check_setup -verbose                                      > ${report_dir}/01-01_${proj_name}_checks.rpt
report_checks -unconstrained -format end -no_line_splits >> ${report_dir}/01-01_${proj_name}_checks.rpt
report_checks -format end -no_line_splits                >> ${report_dir}/01-01_${proj_name}_checks.rpt
report_checks -format end -no_line_splits                >> ${report_dir}/01-01_${proj_name}_checks.rpt
utl::report "Connect global nets (power)"
source scripts/power_connect.tcl


utl::report "###############################################################################"
utl::report "# 01-02: Core and Die Area"
utl::report "###############################################################################"
# Dimensions:                          [um]
#   final chip size (4sqmm) 2000.0 x 2000.0
#   seal ring thickness       42.0 ,   42.0 x2
#   bonding pad               70.0 ,   70.0 x2
#   io cell depth            180.0 ,  180.0 x2
#   ---------------------------------------
#   -> OR die area          1916.0 x 1916.0
#   -> OR core area         1416.0 x 1416.0
# The sealring is added after OpenROAD
# hence the OR die area is the final chip size minus the sealring thickness on each side

set chipH    1916; # OR die height (top to bottom)
set chipW    1916; # OR die width (left to right)
set padD      180; # pad depth (edge to core)
set padW       80; # pad width (beachfront)
set padBond    70; # bonding pad size
set powerRing  80; # reserved space for power ring

# starting from the outside and working towards the core area on each side
set coreMargin [expr {$padD + $padBond + $powerRing}];

utl::report "Initialize Chip"
# coordinates are lower-left x and y, upper-right x and y
initialize_floorplan -die_area "0 0 $chipW $chipH" \
                     -core_area "$coreMargin $coreMargin [expr $chipW-$coreMargin] [expr $chipH-$coreMargin]" \
                     -site "CoreSite"


utl::report "###############################################################################"
utl::report "# 01-03: Padring"
utl::report "###############################################################################"
source src/padring.tcl


##########################################################################
# RAM sizes
##########################################################################
set RamMaster512x32   [[ord::get_db] findMaster "RM_IHPSG13_1P_512x32_c2_bm_bist"]
set RamSize512x32_W   [ord::dbu_to_microns [$RamMaster512x32 getWidth]]
set RamSize512x32_H   [ord::dbu_to_microns [$RamMaster512x32 getHeight]]


##########################################################################
# Chip and Core Area
##########################################################################
# core gets snapped to site-grid -> get real values
set coreArea      [ord::get_core_area]
set core_leftX    [lindex $coreArea 0]
set core_bottomY  [lindex $coreArea 1]
set core_rightX   [lindex $coreArea 2]
set core_topY     [lindex $coreArea 3]


##########################################################################
# Tracks 
##########################################################################
# We need to define the metal tracks 
# (where the wires on each metal should go)
make_tracks

# the height of a standard cell, useful to align things
set siteHeight        [ord::dbu_to_microns [[dpl::get_row_site] getHeight]]


utl::report "###############################################################################"
utl::report "# 01-04: Macro Placement"
utl::report "###############################################################################"
# Paths to the instances of macros
utl::report "Macro Names"
source src/instances.tcl

# Placing macros
# use these for macro placement
set floorPaddingX      20.0
set floorPaddingY      20.0
set floor_leftX       [expr $core_leftX + $floorPaddingX]
set floor_bottomY     [expr $core_bottomY + $floorPaddingY]
set floor_rightX      [expr $core_rightX - $floorPaddingX]
set floor_topY        [expr $core_topY - $floorPaddingY]
set floor_midpointX   [expr $floor_leftX + ($floor_rightX - $floor_leftX)/2]
set floor_midpointY   [expr $floor_bottomY + ($floor_topY - $floor_bottomY)/2]
set sramHaloX          10.0
set sramHaloY          10.0

utl::report "Place Macros"

# Bank0: top-left, pins facing down
set bank0X $floor_leftX
set bankY [expr $floor_topY - $RamSize512x32_H]
placeInstance $bank0_sram0 $bank0X $bankY R0

# Bank1: top-right, pins facing down
set bank1X [expr $floor_rightX - $RamSize512x32_W]
placeInstance $bank1_sram0 $bank1X $bankY R0

utl::report "SRAM macro box: width ${RamSize512x32_W} height ${RamSize512x32_H}"
utl::report "SRAM bank0 bbox: ($bank0X, $bankY) - ([expr {$bank0X + $RamSize512x32_W}], [expr {$bankY + $RamSize512x32_H}]) R0"
utl::report "SRAM bank1 bbox: ($bank1X, $bankY) - ([expr {$bank1X + $RamSize512x32_W}], [expr {$bankY + $RamSize512x32_H}]) R0"
utl::report "SRAM horizontal gaps to core boundary: left [expr {$bank0X - $core_leftX}] between [expr {$bank1X - ($bank0X + $RamSize512x32_W)}] right [expr {$core_rightX - ($bank1X + $RamSize512x32_W)}]"
utl::report "SRAM vertical gap to core boundary: top [expr {$core_topY - ($bankY + $RamSize512x32_H)}]"
utl::report "SRAM row-cut halo: x $sramHaloX y $sramHaloY"

# defined in init_tech.tcl
insertTapCells

cut_rows -halo_width_x $sramHaloX -halo_width_y $sramHaloY
global_connect

# Save an image before PDN insertion. PDN channel-repair failures are easier to
# debug from the pure floorplan with rows already cut around fixed macros.
report_image "01-04_${proj_name}.pre_pdn" true


utl::report "###############################################################################"
utl::report "# 01-05: Power Grid"
utl::report "###############################################################################"
source scripts/power_grid_${pdk_name}.tcl

# Save checkpoint
save_checkpoint 01_${proj_name}.floorplan
report_image "01_${proj_name}.floorplan" true

utl::report "###############################################################################"
utl::report "# Stage 01 complete: Checkpoint saved to ${save_dir}/01_${proj_name}.floorplan.zip"
utl::report "###############################################################################"
