# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Power grid for the EZ130 8T cells on the sg13cmos5l stack.

utl::report "Power Grid"
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
# Width, spacing and clearance are set together with the space they need in 01_floorplan.tcl
set pgcrWidth   $powerRingWidth
set pgcrSpacing $powerRingSpacing
## Offset from core to power ring (the same clearance remains to the pads)
set pgcrOffset  $powerRingClearance

# RM_IHPSG13_1P_512x32_c2_bm_bist TopMetal1 stripe positions relative to the macro origin
# (shifted up by 7 um from the centers of the power windows, which moves all TopMetal1 stripes)
set sramLogicPowerStripeOffset 27
set sramArrayPowerStripeOffset 125

# TopMetal1 core stripes: pitch is the pad pitch so they stay clear of the pad straps.
# Offset and count are fixed so the last VSS stripe lies one pitch below the SRAM logic stripe.
set tpg1Width   3
set tpg1Spacing 4
set tpg1Pitch   $westPitch
set tpg1Offset  48.54
set tpg1Straps  13

# Metal4 core stripes: one rail per pad pitch, centered on the pads
set pg4Width       1
set pg4StripePitch $southPitch
set pg4Pitch       [expr {2 * $pg4StripePitch}]
set pg4Spacing     [expr {$pg4StripePitch - $pg4Width}]
set pg4Offset      28.76

# RM_IHPSG13_1P_512x32_c2_bm_bist Metal4 power pin windows:
# VDD        y = 0.000 ..  38.825 (logic power)
# VDDARRAY   y = 45.465 .. 191.340 (array power)

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

# The offsets above and this grid are specific to the 512x32 macro used by the
# default SRAM configuration; other macro sizes need their own pin windows.
# The SRAM Metal4 power pins are only reached by the TopMetal1 stripes if the
# macros have their own grid that is connected to the core grid.
define_pdn_grid -macro -cells RM_IHPSG13_1P_512x32_c2_bm_bist -name sram_grid \
    -grid_over_pg_pins -voltage_domains {CORE}
add_pdn_connect -grid sram_grid -layers {Metal4 TopMetal1}
# Power ring around each SRAM, the TopMetal1 stripes drop onto it
# width 0.62: TopVia1 cut plus enclosure (TV1.c), spacing 0.24: wide lines (Mn.e), offset: macro obstruction (Mn.f)
add_pdn_ring -grid sram_grid -layers {Metal3 Metal4} -widths {0.62 0.62} -spacings {0.24 0.24} \
    -core_offsets {1.1 1.1}
add_pdn_connect -grid sram_grid -layers {Metal3 Metal4}
add_pdn_connect -grid sram_grid -layers {Metal4 Metal1}

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
    -pitch $tpg1Pitch -offset $tpg1Offset -extend_to_core_ring -snap_to_grid -number_of_straps $tpg1Straps

add_pdn_stripe -grid {core_grid} -layer {Metal4} -width $pg4Width -spacing $pg4Spacing \
    -pitch $pg4Pitch -offset $pg4Offset -extend_to_core_ring -starts_with POWER -snap_to_grid

# Global TopMetal1 stripes drop directly to the SRAM Metal4 power pins.
add_pdn_connect -grid {core_grid} -layers {TopMetal1 Metal4}
add_pdn_connect -grid {core_grid} -layers {Metal4 Metal1}

##########################################################################
# Generate
##########################################################################

pdngen -failed_via_report ${report_dir}/01_${proj_name}_pdngen.rpt

# Report unconnected shapes or instances in the power grid
foreach net {VDD VSS} {
    check_power_grid -net $net
}
