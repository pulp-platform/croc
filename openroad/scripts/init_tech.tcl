# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Tobias Senti      <tsenti@ethz.ch>
# - Jannis Schönleber <janniss@iis.ee.ethz.ch>
# - Philippe Sauter   <phsauter@iis.ee.ethz.ch>

# All paths relative to openroad/
# Initialize the PDK: EZ130 8T standard cells, SG13CMOS5L IO cells,
# IHP SRAM macros and the 5-metal SG13CMOS5L back-end.

set pdk_cells_lib ../technology/lib
set pdk_cells_lef ../technology/lef
set pdk_sram_lib  ../technology/lib
set pdk_sram_lef  ../technology/lef
set pdk_io_lib    ../technology/lib
set pdk_io_lef    ../technology/lef
set pdk_pad_lef   ../technology/lef

# LIB
define_corners tt ff

puts "Init standard cells"
read_liberty -corner tt ${pdk_cells_lib}/ez130_8t_tt_1p20v_25c.lib
read_liberty -corner ff ${pdk_cells_lib}/ez130_8t_ff_1p32v_m40c.lib

puts "Init IO cells"
read_liberty -corner tt ${pdk_io_lib}/sg13cmos5l_io_typ_1p2V_3p3V_25C.lib
read_liberty -corner ff ${pdk_io_lib}/sg13cmos5l_io_fast_1p32V_3p6V_m40C.lib

puts "Init SRAM macros"
foreach file [glob -directory $pdk_sram_lib RM_IHPSG13*_typ_1p20V_25C.lib] {
	read_liberty -corner tt "$file"
}

foreach file [glob -directory $pdk_sram_lib RM_IHPSG13*_fast_1p32V_m55C.lib] {
	read_liberty -corner ff "$file"
}

puts "Init tech-lef"
read_lef ${pdk_cells_lef}/ez130_cmos5l_tech.lef

puts "Init cell-lef"
read_lef ${pdk_cells_lef}/ez130_8t.lef
read_lef ${pdk_io_lef}/sg13cmos5l_io.lef
read_lef ${pdk_pad_lef}/bondpad5l_70x70.lef

foreach file [glob -directory $pdk_sram_lef RM_IHPSG13*.lef] {
	read_lef "$file"
}

# Set layers used for estimate_parasitics
proc setDefaultParasitics {} {
	set_wire_rc -clock -layer Metal3
	set_wire_rc -signal -layer Metal3
}

# Tie cell pins
set tieHiPin "TIEHI/Y"
set tieLoPin "TIELO/Y"

# Tap cell insertion
proc insertTapCells {} {
	utl::report "Inserting tap cells"
	tapcell \
		-distance       40 \
		-tapcell_master WELLTAP \
		-endcap_master  WELLTAP \
		-halo_width_x 1 -halo_width_y 1
}

set ctsBuf [ list BUFX64 BUFX48 BUFX44 BUFX32 BUFX24 BUFX16 BUFX12 ]
set ctsBufRoot BUFX64

# disallow OR from inserting these cells
set dont_use_cells [list sg13cmos5l_IOPad* ]
set ioDrivingCell sg13cmos5l_IOPadOut16mA

set stdfill [ list FILLER16 FILLER8 FILLER4 FILLER2 FILLER1 ]


set iocorner sg13cmos5l_Corner
set iofill [ list sg13cmos5l_Filler10000 sg13cmos5l_Filler4000 sg13cmos5l_Filler2000 sg13cmos5l_Filler1000 sg13cmos5l_Filler400 sg13cmos5l_Filler200 ]
set iosite sg13cmos5l_ioSite
set iocornersite sg13cmos5l_cornerSite
set bondPadCell bondpad5l_70x70
