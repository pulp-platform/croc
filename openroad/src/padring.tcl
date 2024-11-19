# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

#
# - The "#pin no.: nn" comment shows the corresponding pin number for the package.

# [QFN48]
#                  package die
#   pins               48   56
#   I/O                40   40
#   Core power          4    4
#   Core ground         -    4
#   Pad  power          4    4
#   Pad  ground         -    4
#
#
# final dimensions:                   [um]
#   die area (4sqmm)       2000.0 x 2000.0
#   io cell dimensions      180.0 x   80.0
#   bonding pad area (est)   70.0 x   70.0
#   seal ring width (est)    50.0 x    -
#
# OpenROAD:
#   OR die area            1760.0 x 1760.0
#   core area              1400.0 x 1400.0
#   total silicon area
#
# pad pitch (min)            90.0     90.0


make_io_sites -horizontal_site sg13g2_ioSite \
    -vertical_site sg13g2_ioSite \
    -corner_site sg13g2_ioSite \
    -offset 0 \
    -rotation_horizontal R0 \
    -rotation_vertical R0 \
    -rotation_corner R0

set padD    180; # pad depth (edge to core)
set padW     80; # pad width (beachfront)

set chipH  1760; # left/right (height)
set chipW  1760; # top/bottom (width)

#Edge: LEFT (top to bottom)
set numPads 16
set offset 20
set pitch [expr {floor( ($chipH - 2*$padD -2*$offset - $padW)/($numPads-1) )}]
puts "IO_WEST_pitch: $pitch "
set start [expr $chipH - $padD - $offset - $padW]
place_pad -row IO_WEST  -location [expr $start -  0*$pitch] "pad_vssio0"       ; # pin no:  1
place_pad -row IO_WEST  -location [expr $start -  1*$pitch] "pad_vddio0"       ; # pin no:  2
place_pad -row IO_WEST  -location [expr $start -  2*$pitch] "pad_uart_rx_i"    ; # pin no:  3
place_pad -row IO_WEST  -location [expr $start -  3*$pitch] "pad_uart_tx_o"    ; # pin no:  4
place_pad -row IO_WEST  -location [expr $start -  4*$pitch] "pad_fetch_en_i"   ; # pin no:  5
place_pad -row IO_WEST  -location [expr $start -  5*$pitch] "pad_status_o"     ; # pin no:  6
place_pad -row IO_WEST  -location [expr $start -  6*$pitch] "pad_clk_i"        ; # pin no:  7
place_pad -row IO_WEST  -location [expr $start -  7*$pitch] "pad_ref_clk_i"    ; # pin no:  8
place_pad -row IO_WEST  -location [expr $start -  8*$pitch] "pad_rst_ni"       ; # pin no:  9
place_pad -row IO_WEST  -location [expr $start -  9*$pitch] "pad_jtag_tck_i"   ; # pin no: 10
place_pad -row IO_WEST  -location [expr $start - 10*$pitch] "pad_jtag_trst_ni" ; # pin no: 11
place_pad -row IO_WEST  -location [expr $start - 11*$pitch] "pad_jtag_tms_i"   ; # pin no: 12
place_pad -row IO_WEST  -location [expr $start - 12*$pitch] "pad_jtag_tdi_i"   ; # pin no: 13
place_pad -row IO_WEST  -location [expr $start - 13*$pitch] "pad_jtag_tdo_o"   ; # pin no: 14
place_pad -row IO_WEST  -location [expr $start - 14*$pitch] "pad_vss0"         ; # pin no: 15
place_pad -row IO_WEST  -location [expr $start - 15*$pitch] "pad_vdd0"         ; # pin no: 16


#Edge: BOTTOM (left to right)
set numPads 16
set offset 20
set pitch [expr {floor( ($chipW - 2*$padD -2*$offset - $padW)/($numPads-1) )}]
puts "IO_SOUTH_pitch: $pitch "
set start [expr $padD + $offset]
place_pad -row IO_SOUTH  -location [expr $start +  0*$pitch] "pad_vssio1"       ; # pin no:  1
place_pad -row IO_SOUTH  -location [expr $start +  1*$pitch] "pad_vddio1"       ; # pin no:  2
place_pad -row IO_SOUTH  -location [expr $start +  2*$pitch] "pad_gpio0_io"     ; # pin no:  3
place_pad -row IO_SOUTH  -location [expr $start +  3*$pitch] "pad_gpio1_io"     ; # pin no:  4
place_pad -row IO_SOUTH  -location [expr $start +  4*$pitch] "pad_gpio2_io"     ; # pin no:  5
place_pad -row IO_SOUTH  -location [expr $start +  5*$pitch] "pad_gpio3_io"     ; # pin no:  6
place_pad -row IO_SOUTH  -location [expr $start +  6*$pitch] "pad_gpio4_io"     ; # pin no:  7
place_pad -row IO_SOUTH  -location [expr $start +  7*$pitch] "pad_gpio5_io"     ; # pin no:  8
place_pad -row IO_SOUTH  -location [expr $start +  8*$pitch] "pad_gpio6_io"     ; # pin no:  9
place_pad -row IO_SOUTH  -location [expr $start +  9*$pitch] "pad_gpio7_io"     ; # pin no: 10
place_pad -row IO_SOUTH  -location [expr $start + 10*$pitch] "pad_gpio8_io"     ; # pin no: 11
place_pad -row IO_SOUTH  -location [expr $start + 11*$pitch] "pad_gpio9_io"     ; # pin no: 12
place_pad -row IO_SOUTH  -location [expr $start + 12*$pitch] "pad_gpio10_io"    ; # pin no: 13
place_pad -row IO_SOUTH  -location [expr $start + 13*$pitch] "pad_gpio11_io"    ; # pin no: 14
place_pad -row IO_SOUTH  -location [expr $start + 14*$pitch] "pad_vss1"         ; # pin no: 15
place_pad -row IO_SOUTH  -location [expr $start + 15*$pitch] "pad_vdd1"         ; # pin no: 16


#Edge: RIGHT (bottom to top)
set numPads 16
set offset 20
set pitch [expr {floor( ($chipH - 2*$padD -2*$offset - $padW)/($numPads-1) )}]
puts "IO_EAST_pitch: $pitch "
set start [expr $padD + $offset]
place_pad -row IO_EAST  -location [expr $start +  0*$pitch] "pad_vssio2"       ; # pin no:  1
place_pad -row IO_EAST  -location [expr $start +  1*$pitch] "pad_vddio2"       ; # pin no:  2
place_pad -row IO_EAST  -location [expr $start +  2*$pitch] "pad_gpio12_io"    ; # pin no:  3
place_pad -row IO_EAST  -location [expr $start +  3*$pitch] "pad_gpio13_io"    ; # pin no:  4
place_pad -row IO_EAST  -location [expr $start +  4*$pitch] "pad_gpio14_io"    ; # pin no:  5
place_pad -row IO_EAST  -location [expr $start +  5*$pitch] "pad_gpio15_io"    ; # pin no:  6
place_pad -row IO_EAST  -location [expr $start +  6*$pitch] "pad_gpio16_io"    ; # pin no:  7
place_pad -row IO_EAST  -location [expr $start +  7*$pitch] "pad_gpio17_io"    ; # pin no:  8
place_pad -row IO_EAST  -location [expr $start +  8*$pitch] "pad_gpio18_io"    ; # pin no:  9
place_pad -row IO_EAST  -location [expr $start +  9*$pitch] "pad_gpio19_io"    ; # pin no: 10
place_pad -row IO_EAST  -location [expr $start + 10*$pitch] "pad_gpio20_io"    ; # pin no: 11
place_pad -row IO_EAST  -location [expr $start + 11*$pitch] "pad_gpio21_io"    ; # pin no: 12
place_pad -row IO_EAST  -location [expr $start + 12*$pitch] "pad_gpio22_io"    ; # pin no: 13
place_pad -row IO_EAST  -location [expr $start + 13*$pitch] "pad_gpio23_io"    ; # pin no: 14
place_pad -row IO_EAST  -location [expr $start + 14*$pitch] "pad_vss2"         ; # pin no: 15
place_pad -row IO_EAST  -location [expr $start + 15*$pitch] "pad_vdd2"         ; # pin no: 16


#Edge: TOP (right to left)
set numPads 16
set offset 20
set pitch [expr {floor( ($chipW - 2*$padD -2*$offset - $padW)/($numPads-1) )}]
puts "IO_NORTH_pitch: $pitch "
set start [expr $chipW - $padD - $padW -$offset]
place_pad -row IO_NORTH  -location [expr $start -  0*$pitch] "pad_vssio3"          ; # pin no:  1
place_pad -row IO_NORTH  -location [expr $start -  1*$pitch] "pad_vddio3"          ; # pin no:  2
place_pad -row IO_NORTH  -location [expr $start -  2*$pitch] "pad_gpio24_io"       ; # pin no:  3
place_pad -row IO_NORTH  -location [expr $start -  3*$pitch] "pad_gpio25_io"       ; # pin no:  4
place_pad -row IO_NORTH  -location [expr $start -  4*$pitch] "pad_gpio26_io"       ; # pin no:  5
place_pad -row IO_NORTH  -location [expr $start -  5*$pitch] "pad_gpio27_io"       ; # pin no:  6
place_pad -row IO_NORTH  -location [expr $start -  6*$pitch] "pad_gpio28_io"       ; # pin no:  7
place_pad -row IO_NORTH  -location [expr $start -  7*$pitch] "pad_gpio29_io"       ; # pin no:  8
place_pad -row IO_NORTH  -location [expr $start -  8*$pitch] "pad_gpio30_io"       ; # pin no:  9
place_pad -row IO_NORTH  -location [expr $start -  9*$pitch] "pad_gpio31_io"       ; # pin no: 10
place_pad -row IO_NORTH  -location [expr $start - 10*$pitch] "pad_unused0_o"       ; # pin no: 11
place_pad -row IO_NORTH  -location [expr $start - 11*$pitch] "pad_unused1_o"       ; # pin no: 12
place_pad -row IO_NORTH  -location [expr $start - 12*$pitch] "pad_unused2_o"       ; # pin no: 13
place_pad -row IO_NORTH  -location [expr $start - 13*$pitch] "pad_unused3_o"       ; # pin no: 14
place_pad -row IO_NORTH  -location [expr $start - 14*$pitch] "pad_vss3"            ; # pin no: 15
place_pad -row IO_NORTH  -location [expr $start - 15*$pitch] "pad_vdd3"            ; # pin no: 16

place_corners $iocorner

place_io_fill -row IO_NORTH {*}$iofill
place_io_fill -row IO_SOUTH {*}$iofill
place_io_fill -row IO_WEST  {*}$iofill
place_io_fill -row IO_EAST  {*}$iofill


# Connect built-in rings
connect_by_abutment

# Bondpad integrated into IO cell (or bondpad after OpenROAD):
# tells OpenROAD which IO-Cell pin is the pad and places the IO-terminal
# (the internal concept of an IO) ontop of this pin
# place_io_terminals */pad

# Bondpad as seperate cell placed in OpenROAD:
# place the bonding pad relative to the IO cell
place_bondpad -bond bondpad_70x70 -offset {5.0 -70.0} pad_*

# remove rows created by via make_io_sites as they are no longer needed
remove_io_rows