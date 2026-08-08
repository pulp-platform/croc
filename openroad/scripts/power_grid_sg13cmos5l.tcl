# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Power grid for sg13cmos5l.

utl::report "Power Grid"
# ToDo: Check connectivity on left and right power pad cells
source scripts/floorplan_util.tcl

##########################################################################
# Reset
##########################################################################

if {[info exists power_grid_defined]} {
    pdngen -ripup
    pdngen -reset
} else {
    set power_grid_defined 1
}

##########################################################################
# Power settings
##########################################################################

# Core Power Ring
## Space between pads and core -> used for power ring
set PowRingSpace  35
## Spacing must meet TM1 rules
set pgcrSpacing 4
## Width must meet TM1 rules
set pgcrWidth 8
## Offset from core to power ring
set pgcrOffset [expr {($PowRingSpace - $pgcrSpacing - 2 * $pgcrWidth) / 2}]

# TopMetal1 Core Power Grid
set tpg1Width     3; # arbitrary number
set tpg1Pitch    90
set tpg1Spacing   4
set tpg1Offset   -5; # offset from core bottom

# Metal4 core distribution grid. Adjacent power/ground rails are one pad
# pitch apart so they line up with the pad connections to the power ring.
set pg4Width      1
set pg4StripePitch 90
set pg4Pitch     [expr {2 * $pg4StripePitch}]
set pg4Spacing   [expr {$pg4StripePitch - $pg4Width}]
set pg4Offset    45

# RM_IHPSG13_1P_512x32_c2_bm_bist Metal4 power pin windows:
# VDD        y = 0.000 ..  38.825 (logic power)
# VDDARRAY   y = 45.465 .. 191.340 (array power)
set sramLogicPowerStripeOffset 20
set sramArrayPowerStripeOffset 118

# Horizontal TopMetal1 stripes run from ring to ring and cross both top SRAMs.
# Insert the SRAM logic and array pairs explicitly so both the array and logic in the SRAM get power
set coreHeight [expr {$core_topY - $core_bottomY}]
set sramPowerStripePitch [expr {$coreHeight + 2 * ($sramArrayPowerStripeOffset - $sramLogicPowerStripeOffset)}]
set sramLogicPowerCoreOffset [expr {$bankY - $core_bottomY + $sramLogicPowerStripeOffset}]
set sramArrayPowerCoreOffset [expr {$bankY - $core_bottomY + $sramArrayPowerStripeOffset}]
set sramPowerStripeCoreOffset [expr {fmod($sramLogicPowerCoreOffset, $sramPowerStripePitch)}]

##########################################################################
# Core Power
##########################################################################

add_pdn_ring -grid {core_grid} \
    -layer        {TopMetal1 Metal4} \
    -widths       "$pgcrWidth $pgcrWidth" \
    -spacings     "$pgcrSpacing $pgcrSpacing" \
    -core_offsets "$pgcrOffset $pgcrOffset" \
    -connect_to_pads \
    -connect_to_pad_layers TopMetal1

# M1 Standardcell Rows (tracks)
add_pdn_stripe -grid {core_grid} -layer {Metal1} -width {0.32} -offset {0} \
    -followpins -extend_to_core_ring

# TM1 SRAM power stripes
add_pdn_stripe -grid {core_grid} -layer {TopMetal1} -width $tpg1Width -spacing $tpg1Spacing \
    -pitch $sramPowerStripePitch -offset $sramLogicPowerCoreOffset -extend_to_core_ring -snap_to_grid

add_pdn_stripe -grid {core_grid} -layer {TopMetal1} -width $tpg1Width -spacing $tpg1Spacing \
    -pitch $sramPowerStripePitch -offset $sramArrayPowerCoreOffset -extend_to_core_ring -snap_to_grid

# TM1+M4 power grid over core logic
add_pdn_stripe -grid {core_grid} -layer {TopMetal1} -width $tpg1Width -spacing $tpg1Spacing \
    -pitch $tpg1Pitch -offset $tpg1Offset -extend_to_core_ring -snap_to_grid -number_of_straps 12

add_pdn_stripe -grid {core_grid} -layer {Metal4} -width $pg4Width -spacing $pg4Spacing \
    -pitch $pg4Pitch -offset $pg4Offset -extend_to_core_ring -starts_with POWER -snap_to_grid

# Global TopMetal1 stripes drop directly to the SRAM Metal4 power pins.
add_pdn_connect -grid {core_grid} -layers {TopMetal1 Metal4}
add_pdn_connect -grid {core_grid} -layers {Metal4 Metal1}

##########################################################################
# Generate
##########################################################################

pdngen -failed_via_report ${report_dir}/01_${proj_name}_pdngen.rpt
