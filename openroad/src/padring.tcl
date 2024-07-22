#
# - Every "Offset: xxx" line defines a possible placement location/slot for one pad.
# - The "#pin no.: nn" comment shows the corresponding pin number for the QFN32 package.

# [QFN32]
# pin number not include pad_corner
# parameter:
#                  package  die
#   pins                 32   40
#     I/O                24   24
#     Core power          4    4
#     Core ground         -    4
#     Pad  power          4    4
#     Pad  ground         -    4
#                                     [um]
#   grid is multiple of          -, -
#   pad dimensions area     310.0 x   60.0
#   total silicon area
#   die area               2200.0 x 2200.0
#   core area              1580.0 x 1580.0
#   pad pitch                90.0     90.0
#                                     [mA]
#   max core current                    -
#   max IO current                      -

make_io_sites -horizontal_site IOSite \
    -vertical_site IOSite \
    -corner_site IOSite \
    -offset 0 \
    -rotation_horizontal R0 \
    -rotation_vertical R0 \
    -rotation_corner MY

set padL    310; # pad length
set padD     60; # pad depth

# left/right (height)
set chipH  2000
set pitchH   90

# top/bottom (width)
set chipW  2000
set pitchW   90

set offsetH [expr ($chipH - 2*$padL - (14-1)*$pitchH - $padD)/2]
set offsetW [expr ($chipW - 2*$padL - (10-1)*$pitchW - $padD)/2]

#Edge: LEFT (top to bottom)	Number of pads:	14
set start [expr $chipH - $padL - $offsetH - $padD]
place_pad	-row	IO_WEST	    -location	[expr $start -  0*$pitchH] "pad_vddio0"	        ; # pin no:  1 
place_pad	-row	IO_WEST	    -location	[expr $start -  1*$pitchH] "pad_jtag_tck_i"	    ; # pin no:  2
place_pad	-row	IO_WEST	    -location	[expr $start -  2*$pitchH] "pad_jtag_trst_ni"   ; # pin no:  3
place_pad	-row	IO_WEST	    -location	[expr $start -  3*$pitchH] "pad_jtag_tms_i" 	; # pin no:  4
place_pad	-row	IO_WEST	    -location	[expr $start -  4*$pitchH] "pad_jtag_tdi_i" 	; # pin no:  5
place_pad	-row	IO_WEST	    -location	[expr $start -  5*$pitchH] "pad_jtag_tdo_o" 	; # pin no:  6
place_pad	-row	IO_WEST	    -location	[expr $start -  6*$pitchH] "pad_rst_ni" 	    ; # pin no:  7
place_pad	-row	IO_WEST	    -location	[expr $start -  7*$pitchH] "pad_clk_i"    	    ; # pin no:  8
place_pad	-row	IO_WEST	    -location	[expr $start -  8*$pitchH] "pad_ref_clk_i" 	    ; # pin no:  9
place_pad	-row	IO_WEST	    -location	[expr $start -  9*$pitchH] "pad_status_o"  	    ; # pin no: 10
place_pad	-row	IO_WEST	    -location	[expr $start - 10*$pitchH] "pad_irq0_i" 	    ; # pin no: 11
place_pad	-row	IO_WEST	    -location	[expr $start - 11*$pitchH] "pad_uart_rx_i" 	    ; # pin no: 12
place_pad	-row	IO_WEST	    -location	[expr $start - 12*$pitchH] "pad_uart_tx_o" 	    ; # pin no: 13
place_pad	-row	IO_WEST	    -location	[expr $start - 13*$pitchH] "pad_vssio0"	        ; # 
						
						
#Edge: BOTTOM (left to right)	Number of pads:	10
set start [expr 310 + $offsetW]
place_pad	-row	IO_SOUTH    -location	[expr $start +  0*$pitchW] "pad_vss0"	        ; # 
place_pad	-row	IO_SOUTH    -location	[expr $start +  1*$pitchW] "pad_vdd0"	        ; # pin no: 14
place_pad	-row	IO_SOUTH	-location	[expr $start +  2*$pitchW] "pad_vddio1"	        ; # pin no: 15

place_pad	-row	IO_SOUTH	-location	[expr $start +  7*$pitchW] "pad_vssio1"	        ; # 
place_pad	-row	IO_SOUTH	-location	[expr $start +  8*$pitchW] "pad_vdd1"	        ; # pin no: 16
place_pad	-row	IO_SOUTH	-location	[expr $start +  9*$pitchW] "pad_vss1"	        ; # 
						
						
#Edge: RIGHT (bottom to top)	Number of pads:	14
set start [expr 310 + $offsetH]
place_pad	-row	IO_EAST     -location	[expr $start +  0*$pitchH] "pad_vddio2"	        ; # pin no: 17

place_pad	-row	IO_EAST     -location	[expr $start + 13*$pitchH] "pad_vssio2"	        ; # 


#Edge: TOP (right to left)	Number of pads:	10
set start [expr $chipW - $padL - $offsetW - $padD]
place_pad	-row	IO_NORTH    -location	[expr $start -  0*$pitchW] "pad_vss2"	        ; # 
place_pad	-row	IO_NORTH    -location	[expr $start -  1*$pitchW] "pad_vdd2"	        ; # pin no: 18
place_pad	-row	IO_NORTH    -location	[expr $start -  2*$pitchW] "pad_vddio3" 	    ; # pin no: 19

place_pad	-row	IO_NORTH    -location	[expr $start -  7*$pitchW] "pad_vssio3" 	    ; # 
place_pad	-row	IO_NORTH    -location	[expr $start -  8*$pitchW] "pad_vdd3"	        ; # pin no: 20
place_pad	-row	IO_NORTH    -location	[expr $start -  9*$pitchW] "pad_vss3"	        ; # 

place_corners $iocorner

place_io_fill -row IO_NORTH {*}$iofill
place_io_fill -row IO_SOUTH {*}$iofill
place_io_fill -row IO_WEST {*}$iofill
place_io_fill -row IO_EAST {*}$iofill


# Connect built-in rings
connect_by_abutment

# tells OpenROAD which IO-Cell pin is the pad and places the IO-terminal
# (the internal concept of an IO) ontop of this pin
place_io_terminals */PAD

# remove rows created by via make_io_sites as they are no longer needed
remove_io_rows