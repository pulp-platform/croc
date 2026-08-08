# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Tobias Senti      <tsenti@ethz.ch>
# - Jannis Schönleber <janniss@iis.ee.ethz.ch>
# - Philippe Sauter   <phsauter@iis.ee.ethz.ch>

# Initialize the PDK for sg13cmos5l.
# Standard cells and SRAMs are reused from sg13g2.

set pdk_cells_lib $::env(PDK_DIR_LIB_CELLS)
set pdk_tech_lef  $::env(PDK_DIR_LEF_TECH)
set pdk_cells_lef $::env(PDK_DIR_LEF_CELLS)
set pdk_sram_lib  $::env(PDK_DIR_LIB_SRAMS)
set pdk_sram_lef  $::env(PDK_DIR_LEF_SRAMS)
set pdk_io_lib    $::env(PDK_DIR_LIB_IOS)
set pdk_io_lef    $::env(PDK_DIR_LEF_IOS)
set pdk_pad_lef   $::env(PDK_DIR_LEF_BOND)

# LIB
define_corners tt ff

puts "Init standard cells"
read_liberty -corner tt ${pdk_cells_lib}/$::env(PDK_STDCELL_LIB_TT_FILE)
read_liberty -corner ff ${pdk_cells_lib}/$::env(PDK_STDCELL_LIB_FF_FILE)

puts "Init IO cells"
read_liberty -corner tt ${pdk_io_lib}/$::env(PDK_IO_LIB_TT_FILE)
read_liberty -corner ff ${pdk_io_lib}/$::env(PDK_IO_LIB_FF_FILE)

puts "Init SRAM macros"
foreach file [glob -directory $pdk_sram_lib RM_IHPSG13*_typ_1p20V_25C.lib] {
	read_liberty -corner tt "$file"
}

foreach file [glob -directory $pdk_sram_lib RM_IHPSG13*_fast_1p32V_m55C.lib] {
	read_liberty -corner ff "$file"
}

puts "Init tech-lef"
read_lef ${pdk_tech_lef}/$::env(PDK_TECH_LEF_FILE)

puts "Init cell-lef"
read_lef ${pdk_cells_lef}/$::env(PDK_STDCELL_LEF_FILE)
read_lef ${pdk_io_lef}/$::env(PDK_IO_LEF_FILE)
read_lef ${pdk_pad_lef}/$::env(PDK_BONDPAD_LEF)

foreach file [glob -directory $pdk_sram_lef RM_IHPSG13*.lef] {
	read_lef "$file"
}

# Set layers used for estimate_parasitics
proc setDefaultParasitics {} {
	set_wire_rc -clock -layer Metal3
	set_wire_rc -signal -layer Metal3
}

# Tie cell pins
set tieHiPin "sg13g2_tiehi/L_HI"
set tieLoPin "sg13g2_tielo/L_LO"

# Tap cell insertion
proc insertTapCells {} {
	# no tap cells in this PDK
}

set ctsBuf [ list sg13g2_buf_16 sg13g2_buf_8 sg13g2_buf_4 sg13g2_buf_2 ]
set ctsBufRoot sg13g2_buf_8

# disallow OR from inserting these cells
set dont_use_cells [list sg13cmos5l_IOPad* ]
set ioDrivingCell sg13cmos5l_IOPadOut16mA

set stdfill [ list sg13g2_fill_8 sg13g2_fill_4 sg13g2_fill_2 sg13g2_fill_1 ]


set iocorner sg13cmos5l_Corner
set iofill [ list sg13cmos5l_Filler10000 sg13cmos5l_Filler4000 sg13cmos5l_Filler2000 sg13cmos5l_Filler1000 sg13cmos5l_Filler400 sg13cmos5l_Filler200 ]
set iosite sg13cmos5l_ioSite
set iocornersite sg13cmos5l_cornerSite
set bondPadCell bondpad5l_70x70
