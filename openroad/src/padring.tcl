# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

#
# - The "#pin no.: nn" comment shows the corresponding pin number for the package.

# [QFN48]
#                   package die
#   pins               48    56
#   I/O                40    40
#   Core power          4     4
#   Core ground         -     4
#   Pad  power          4     4
#   Pad  ground         -     4
#
# pad pitch (min)    90.0  90.0
#
# Chip geometry comes from floorplan.tcl
# Keep only the pad positioning/spacing here

# Positioning for every edge works like this:
#   - the IO site spans the entire edge
#   - pads start cornerToPad microns away from the corner (pad -> bond -> gap)
#   - the remaining usable edge length is split into (numPads-1) equal gaps

set numPadsPerEdge 16
# corner width is equal to padD, bondpad outside
set cornerToPad [expr {$padBond + $padD}]

make_io_sites -horizontal_site sg13g2_ioSite \
    -vertical_site sg13g2_ioSite \
    -corner_site sg13g2_ioSite \
    -offset $padBond \
    -rotation_horizontal R0 \
    -rotation_vertical R0 \
    -rotation_corner R0

##########################################################################
# Edge: LEFT (top to bottom)                                             #
##########################################################################
set westSpan  [expr {$chipH - 2*$cornerToPad - $padW}]; # -padW because we place the lower-left corner
set westPitch [expr {floor($westSpan / double($numPadsPerEdge - 1))}]
set westStart [expr {$chipH - $cornerToPad - $padW}]

place_pad -row IO_WEST -location [expr {$westStart -  0*$westPitch}] "pad_vssio0"       ; # pin no:  1
place_pad -row IO_WEST -location [expr {$westStart -  1*$westPitch}] "pad_vddio0"       ; # pin no:  2
place_pad -row IO_WEST -location [expr {$westStart -  2*$westPitch}] "pad_uart_rx_i"    ; # pin no:  3
place_pad -row IO_WEST -location [expr {$westStart -  3*$westPitch}] "pad_uart_tx_o"    ; # pin no:  4
place_pad -row IO_WEST -location [expr {$westStart -  4*$westPitch}] "pad_testmode_i"   ; # pin no:  5
place_pad -row IO_WEST -location [expr {$westStart -  5*$westPitch}] "pad_status_o"     ; # pin no:  6
place_pad -row IO_WEST -location [expr {$westStart -  6*$westPitch}] "pad_clk_i"        ; # pin no:  7
place_pad -row IO_WEST -location [expr {$westStart -  7*$westPitch}] "pad_ref_clk_i"    ; # pin no:  8
place_pad -row IO_WEST -location [expr {$westStart -  8*$westPitch}] "pad_rst_ni"       ; # pin no:  9
place_pad -row IO_WEST -location [expr {$westStart -  9*$westPitch}] "pad_jtag_tck_i"   ; # pin no: 10
place_pad -row IO_WEST -location [expr {$westStart - 10*$westPitch}] "pad_jtag_trst_ni" ; # pin no: 11
place_pad -row IO_WEST -location [expr {$westStart - 11*$westPitch}] "pad_jtag_tms_i"   ; # pin no: 12
place_pad -row IO_WEST -location [expr {$westStart - 12*$westPitch}] "pad_jtag_tdi_i"   ; # pin no: 13
place_pad -row IO_WEST -location [expr {$westStart - 13*$westPitch}] "pad_jtag_tdo_o"   ; # pin no: 14
place_pad -row IO_WEST -location [expr {$westStart - 14*$westPitch}] "pad_vss0"         ; # pin no: 15
place_pad -row IO_WEST -location [expr {$westStart - 15*$westPitch}] "pad_vdd0"         ; # pin no: 16

##########################################################################
# Edge: BOTTOM (left to right)                                           #
##########################################################################
set southSpan  [expr {$chipW - 2*$cornerToPad - $padW}]
set southPitch [expr {floor($southSpan / double($numPadsPerEdge - 1))}]
set southStart $cornerToPad

place_pad -row IO_SOUTH -location [expr {$southStart +  0*$southPitch}] "pad_vssio1"       ; # pin no:  1
place_pad -row IO_SOUTH -location [expr {$southStart +  1*$southPitch}] "pad_vddio1"       ; # pin no:  2
place_pad -row IO_SOUTH -location [expr {$southStart +  2*$southPitch}] "pad_gpio0_io"     ; # pin no:  3
place_pad -row IO_SOUTH -location [expr {$southStart +  3*$southPitch}] "pad_gpio1_io"     ; # pin no:  4
place_pad -row IO_SOUTH -location [expr {$southStart +  4*$southPitch}] "pad_gpio2_io"     ; # pin no:  5
place_pad -row IO_SOUTH -location [expr {$southStart +  5*$southPitch}] "pad_gpio3_io"     ; # pin no:  6
place_pad -row IO_SOUTH -location [expr {$southStart +  6*$southPitch}] "pad_gpio4_io"     ; # pin no:  7
place_pad -row IO_SOUTH -location [expr {$southStart +  7*$southPitch}] "pad_gpio5_io"     ; # pin no:  8
place_pad -row IO_SOUTH -location [expr {$southStart +  8*$southPitch}] "pad_gpio6_io"     ; # pin no:  9
place_pad -row IO_SOUTH -location [expr {$southStart +  9*$southPitch}] "pad_gpio7_io"     ; # pin no: 10
place_pad -row IO_SOUTH -location [expr {$southStart + 10*$southPitch}] "pad_gpio8_io"     ; # pin no: 11
place_pad -row IO_SOUTH -location [expr {$southStart + 11*$southPitch}] "pad_gpio9_io"     ; # pin no: 12
place_pad -row IO_SOUTH -location [expr {$southStart + 12*$southPitch}] "pad_gpio10_io"    ; # pin no: 13
place_pad -row IO_SOUTH -location [expr {$southStart + 13*$southPitch}] "pad_gpio11_io"    ; # pin no: 14
place_pad -row IO_SOUTH -location [expr {$southStart + 14*$southPitch}] "pad_vss1"         ; # pin no: 15
place_pad -row IO_SOUTH -location [expr {$southStart + 15*$southPitch}] "pad_vdd1"         ; # pin no: 16

##########################################################################
# Edge: RIGHT (bottom to top)                                            #
##########################################################################
set eastSpan  [expr {$chipH - 2*$cornerToPad - $padW}]
set eastPitch [expr {floor($eastSpan / double($numPadsPerEdge - 1))}]
set eastStart $cornerToPad

place_pad -row IO_EAST  -location [expr {$eastStart +  0*$eastPitch}] "pad_vssio2"       ; # pin no:  1
place_pad -row IO_EAST  -location [expr {$eastStart +  1*$eastPitch}] "pad_vddio2"       ; # pin no:  2
place_pad -row IO_EAST  -location [expr {$eastStart +  2*$eastPitch}] "pad_gpio12_io"    ; # pin no:  3
place_pad -row IO_EAST  -location [expr {$eastStart +  3*$eastPitch}] "pad_gpio13_io"    ; # pin no:  4
place_pad -row IO_EAST  -location [expr {$eastStart +  4*$eastPitch}] "pad_gpio14_io"    ; # pin no:  5
place_pad -row IO_EAST  -location [expr {$eastStart +  5*$eastPitch}] "pad_gpio15_io"    ; # pin no:  6
place_pad -row IO_EAST  -location [expr {$eastStart +  6*$eastPitch}] "pad_gpio16_io"    ; # pin no:  7
place_pad -row IO_EAST  -location [expr {$eastStart +  7*$eastPitch}] "pad_gpio17_io"    ; # pin no:  8
place_pad -row IO_EAST  -location [expr {$eastStart +  8*$eastPitch}] "pad_gpio18_io"    ; # pin no:  9
place_pad -row IO_EAST  -location [expr {$eastStart +  9*$eastPitch}] "pad_gpio19_io"    ; # pin no: 10
place_pad -row IO_EAST  -location [expr {$eastStart + 10*$eastPitch}] "pad_gpio20_io"    ; # pin no: 11
place_pad -row IO_EAST  -location [expr {$eastStart + 11*$eastPitch}] "pad_gpio21_io"    ; # pin no: 12
place_pad -row IO_EAST  -location [expr {$eastStart + 12*$eastPitch}] "pad_gpio22_io"    ; # pin no: 13
place_pad -row IO_EAST  -location [expr {$eastStart + 13*$eastPitch}] "pad_gpio23_io"    ; # pin no: 14
place_pad -row IO_EAST  -location [expr {$eastStart + 14*$eastPitch}] "pad_vss2"         ; # pin no: 15
place_pad -row IO_EAST  -location [expr {$eastStart + 15*$eastPitch}] "pad_vdd2"         ; # pin no: 16

##########################################################################
# Edge: TOP (right to left)                                              #
##########################################################################
set northSpan  [expr {$chipW - 2*$cornerToPad - $padW}]
set northPitch [expr {floor($northSpan / double($numPadsPerEdge - 1))}]
set northStart [expr {$chipW - $cornerToPad - $padW}]

place_pad -row IO_NORTH -location [expr {$northStart -  0*$northPitch}] "pad_vssio3"          ; # pin no:  1
place_pad -row IO_NORTH -location [expr {$northStart -  1*$northPitch}] "pad_vddio3"          ; # pin no:  2
place_pad -row IO_NORTH -location [expr {$northStart -  2*$northPitch}] "pad_gpio24_io"       ; # pin no:  3
place_pad -row IO_NORTH -location [expr {$northStart -  3*$northPitch}] "pad_gpio25_io"       ; # pin no:  4
place_pad -row IO_NORTH -location [expr {$northStart -  4*$northPitch}] "pad_gpio26_io"       ; # pin no:  5
place_pad -row IO_NORTH -location [expr {$northStart -  5*$northPitch}] "pad_gpio27_io"       ; # pin no:  6
place_pad -row IO_NORTH -location [expr {$northStart -  6*$northPitch}] "pad_gpio28_io"       ; # pin no:  7
place_pad -row IO_NORTH -location [expr {$northStart -  7*$northPitch}] "pad_gpio29_io"       ; # pin no:  8
place_pad -row IO_NORTH -location [expr {$northStart -  8*$northPitch}] "pad_gpio30_io"       ; # pin no:  9
place_pad -row IO_NORTH -location [expr {$northStart -  9*$northPitch}] "pad_gpio31_io"       ; # pin no: 10
place_pad -row IO_NORTH -location [expr {$northStart - 10*$northPitch}] "pad_unused0_o"       ; # pin no: 11
place_pad -row IO_NORTH -location [expr {$northStart - 11*$northPitch}] "pad_unused1_o"       ; # pin no: 12
place_pad -row IO_NORTH -location [expr {$northStart - 12*$northPitch}] "pad_unused2_o"       ; # pin no: 13
place_pad -row IO_NORTH -location [expr {$northStart - 13*$northPitch}] "pad_unused3_o"       ; # pin no: 14
place_pad -row IO_NORTH -location [expr {$northStart - 14*$northPitch}] "pad_vss3"            ; # pin no: 15
place_pad -row IO_NORTH -location [expr {$northStart - 15*$northPitch}] "pad_vdd3"            ; # pin no: 16

# Fill in the rest of the padring
place_corners $iocorner

place_io_fill -row IO_NORTH {*}$iofill
place_io_fill -row IO_SOUTH {*}$iofill
place_io_fill -row IO_WEST  {*}$iofill
place_io_fill -row IO_EAST  {*}$iofill

# Connect built-in power rings
connect_by_abutment

# Bondpad integrated into IO cell (or bondpad after OpenROAD):
# tells OpenROAD which IO-Cell pin is the pad and places the IO-terminal
# (the internal concept of an IO) ontop of this pin
# place_io_terminals */pad

# Bondpad as separate cell placed in OpenROAD:
# place the bonding pad relative to the IO cell
place_bondpad -bond $bondPadCell -offset {5.0 -70.0} pad_*

# remove rows created by via make_io_sites as they are no longer needed
remove_io_rows
