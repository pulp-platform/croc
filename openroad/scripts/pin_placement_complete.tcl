make_io_sites -horizontal_site sg13g2_ioSite -vertical_site sg13g2_ioSite -corner_site sg13g2_ioSite -offset 0

set padW 80 ;
set padD 180 ;

set chipH 1760 ;
set chipW 1760 ;

set numPadsLeft 16
set offsetLeft 20
set pitchLeft [expr {floor( ($chipH - 2*$padD -2*$offsetLeft - $padW)/($numPadsLeft-1) )}]
set startLeft [expr $chipH - $padD - $offsetLeft - $padW]

set numPadsBottom 16
set offsetBottom 20
set pitchBottom [expr {floor( ($chipW - 2*$padD -2*$offsetBottom - $padW)/($numPadsBottom-1) )}]
set startBottom [expr $padD + $offsetBottom]

set numPadsRight 16
set offsetRight 20
set pitchRight [expr {floor( ($chipH - 2*$padD -2*$offsetRight - $padW)/($numPadsRight-1) )}]
set startRight [expr $padD + $offsetRight]

set numPadsTop 16
set offsetTop 20
set pitchTop [expr {floor( ($chipW - 2*$padD -2*$offsetTop - $padW)/($numPadsTop-1) )}]
set startTop [expr $chipW - $padD - $padW -$offsetTop]

# Edge: LEFT (top to bottom)
place_pad -row IO_WEST -location [expr $startLeft - 0*$pitchLeft] "pad_vssio0"  ; # pin no: 1
place_pad -row IO_WEST -location [expr $startLeft - 1*$pitchLeft] "pad_vddio0"  ; # pin no: 2
place_pad -row IO_WEST -location [expr $startLeft - 2*$pitchLeft] "pad_uart_rx_i"  ; # pin no: 3
place_pad -row IO_WEST -location [expr $startLeft - 3*$pitchLeft] "pad_uart_tx_o"  ; # pin no: 4
place_pad -row IO_WEST -location [expr $startLeft - 4*$pitchLeft] "pad_fetch_en_i"  ; # pin no: 5
place_pad -row IO_WEST -location [expr $startLeft - 5*$pitchLeft] "pad_status_o"  ; # pin no: 6
place_pad -row IO_WEST -location [expr $startLeft - 6*$pitchLeft] "pad_clk_i"  ; # pin no: 7
place_pad -row IO_WEST -location [expr $startLeft - 7*$pitchLeft] "pad_ref_clk_i"  ; # pin no: 8
place_pad -row IO_WEST -location [expr $startLeft - 8*$pitchLeft] "pad_rst_ni"  ; # pin no: 9
place_pad -row IO_WEST -location [expr $startLeft - 9*$pitchLeft] "pad_jtag_tck_i"  ; # pin no: 10
place_pad -row IO_WEST -location [expr $startLeft - 10*$pitchLeft] "pad_jtag_trst_ni"  ; # pin no: 11
place_pad -row IO_WEST -location [expr $startLeft - 11*$pitchLeft] "pad_jtag_tms_i"  ; # pin no: 12
place_pad -row IO_WEST -location [expr $startLeft - 12*$pitchLeft] "pad_jtag_tdi_i"  ; # pin no: 13
place_pad -row IO_WEST -location [expr $startLeft - 13*$pitchLeft] "pad_jtag_tdo_o"  ; # pin no: 14
place_pad -row IO_WEST -location [expr $startLeft - 14*$pitchLeft] "pad_vss0"  ; # pin no: 15
place_pad -row IO_WEST -location [expr $startLeft - 15*$pitchLeft] "pad_vdd0"  ; # pin no: 16

# Edge: BOTTOM (left to right)
place_pad -row IO_SOUTH -location [expr $startBottom + 0*$pitchBottom] "pad_vssio1"  ; # pin no: 1
place_pad -row IO_SOUTH -location [expr $startBottom + 1*$pitchBottom] "pad_vddio1"  ; # pin no: 2
place_pad -row IO_SOUTH -location [expr $startBottom + 2*$pitchBottom] "pad_gpio0_io"  ; # pin no: 3
place_pad -row IO_SOUTH -location [expr $startBottom + 3*$pitchBottom] "pad_gpio1_io"  ; # pin no: 4
place_pad -row IO_SOUTH -location [expr $startBottom + 4*$pitchBottom] "pad_gpio2_io"  ; # pin no: 5
place_pad -row IO_SOUTH -location [expr $startBottom + 5*$pitchBottom] "pad_gpio3_io"  ; # pin no: 6
place_pad -row IO_SOUTH -location [expr $startBottom + 6*$pitchBottom] "pad_gpio4_io"  ; # pin no: 7
place_pad -row IO_SOUTH -location [expr $startBottom + 7*$pitchBottom] "pad_gpio5_io"  ; # pin no: 8
place_pad -row IO_SOUTH -location [expr $startBottom + 8*$pitchBottom] "pad_gpio6_io"  ; # pin no: 9
place_pad -row IO_SOUTH -location [expr $startBottom + 9*$pitchBottom] "pad_gpio7_io"  ; # pin no: 10
place_pad -row IO_SOUTH -location [expr $startBottom + 10*$pitchBottom] "pad_gpio8_io"  ; # pin no: 11
place_pad -row IO_SOUTH -location [expr $startBottom + 11*$pitchBottom] "pad_gpio9_io"  ; # pin no: 12
place_pad -row IO_SOUTH -location [expr $startBottom + 12*$pitchBottom] "pad_gpio10_io"  ; # pin no: 13
place_pad -row IO_SOUTH -location [expr $startBottom + 13*$pitchBottom] "pad_gpio11_io"  ; # pin no: 14
place_pad -row IO_SOUTH -location [expr $startBottom + 14*$pitchBottom] "pad_vss1"  ; # pin no: 15
place_pad -row IO_SOUTH -location [expr $startBottom + 15*$pitchBottom] "pad_vdd1"  ; # pin no: 16

# Edge: RIGHT (bottom to top)
place_pad -row IO_EAST -location [expr $startRight + 0*$pitchRight] "pad_vssio2"  ; # pin no: 1
place_pad -row IO_EAST -location [expr $startRight + 1*$pitchRight] "pad_vddio2"  ; # pin no: 2
place_pad -row IO_EAST -location [expr $startRight + 2*$pitchRight] "pad_gpio12_io"  ; # pin no: 3
place_pad -row IO_EAST -location [expr $startRight + 3*$pitchRight] "pad_gpio13_io"  ; # pin no: 4
place_pad -row IO_EAST -location [expr $startRight + 4*$pitchRight] "pad_gpio14_io"  ; # pin no: 5
place_pad -row IO_EAST -location [expr $startRight + 5*$pitchRight] "pad_gpio15_io"  ; # pin no: 6
place_pad -row IO_EAST -location [expr $startRight + 6*$pitchRight] "pad_gpio16_io"  ; # pin no: 7
place_pad -row IO_EAST -location [expr $startRight + 7*$pitchRight] "pad_gpio17_io"  ; # pin no: 8
place_pad -row IO_EAST -location [expr $startRight + 8*$pitchRight] "pad_gpio18_io"  ; # pin no: 9
place_pad -row IO_EAST -location [expr $startRight + 9*$pitchRight] "pad_gpio19_io"  ; # pin no: 10
place_pad -row IO_EAST -location [expr $startRight + 10*$pitchRight] "pad_gpio20_io"  ; # pin no: 11
place_pad -row IO_EAST -location [expr $startRight + 11*$pitchRight] "pad_gpio21_io"  ; # pin no: 12
place_pad -row IO_EAST -location [expr $startRight + 12*$pitchRight] "pad_gpio22_io"  ; # pin no: 13
place_pad -row IO_EAST -location [expr $startRight + 13*$pitchRight] "pad_gpio23_io"  ; # pin no: 14
place_pad -row IO_EAST -location [expr $startRight + 14*$pitchRight] "pad_vss2"  ; # pin no: 15
place_pad -row IO_EAST -location [expr $startRight + 15*$pitchRight] "pad_vdd2"  ; # pin no: 16

# Edge: TOP (right to left)
place_pad -row IO_NORTH -location [expr $startTop - 0*$pitchTop] "pad_vssio3"  ; # pin no: 1
place_pad -row IO_NORTH -location [expr $startTop - 1*$pitchTop] "pad_vddio3"  ; # pin no: 2
place_pad -row IO_NORTH -location [expr $startTop - 2*$pitchTop] "pad_gpio24_io"  ; # pin no: 3
place_pad -row IO_NORTH -location [expr $startTop - 3*$pitchTop] "pad_gpio25_io"  ; # pin no: 4
place_pad -row IO_NORTH -location [expr $startTop - 4*$pitchTop] "pad_gpio26_io"  ; # pin no: 5
place_pad -row IO_NORTH -location [expr $startTop - 5*$pitchTop] "pad_gpio27_io"  ; # pin no: 6
place_pad -row IO_NORTH -location [expr $startTop - 6*$pitchTop] "pad_gpio28_io"  ; # pin no: 7
place_pad -row IO_NORTH -location [expr $startTop - 7*$pitchTop] "pad_gpio29_io"  ; # pin no: 8
place_pad -row IO_NORTH -location [expr $startTop - 8*$pitchTop] "pad_gpio30_io"  ; # pin no: 9
place_pad -row IO_NORTH -location [expr $startTop - 9*$pitchTop] "pad_gpio31_io"  ; # pin no: 10
place_pad -row IO_NORTH -location [expr $startTop - 10*$pitchTop] "pad_unused0_o"  ; # pin no: 11
place_pad -row IO_NORTH -location [expr $startTop - 11*$pitchTop] "pad_unused1_o"  ; # pin no: 12
place_pad -row IO_NORTH -location [expr $startTop - 12*$pitchTop] "pad_unused2_o"  ; # pin no: 13
place_pad -row IO_NORTH -location [expr $startTop - 13*$pitchTop] "pad_unused3_o"  ; # pin no: 14
place_pad -row IO_NORTH -location [expr $startTop - 14*$pitchTop] "pad_vss3"  ; # pin no: 15
place_pad -row IO_NORTH -location [expr $startTop - 15*$pitchTop] "pad_vdd3"  ; # pin no: 16

place_corners $iocorner

place_io_fill -row IO_NORTH   {*}$iofill
place_io_fill -row IO_SOUTH   {*}$iofill
place_io_fill -row IO_WEST   {*}$iofill
place_io_fill -row IO_EAST   {*}$iofill

connect_by_abutment

place_bondpad -bond bondpad_70x70 -offset {5.0 -70.0} pad_*

remove_io_rows