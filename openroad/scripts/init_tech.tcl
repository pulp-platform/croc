# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Tobias Senti <tsenti@ethz.ch>
# - Jannis Schönleber <janniss@iis.ee.ethz.ch>
# - Philippe Sauter   <phsauter@ethz.ch>

# Initialize the PDK

utl::report "Init tech from Github PDK"

if {![info exists pdk_dir]} {
	set pdk_dir "../ihp13/pdk"
}

set pdk_cells_lib ${pdk_dir}/ihp-sg13g2/libs.ref/sg13g2_stdcell/lib
set pdk_cells_lef ${pdk_dir}/ihp-sg13g2/libs.ref/sg13g2_stdcell/lef
set pdk_sram_lib  ${pdk_dir}/ihp-sg13g2/libs.ref/sg13g2_sram/lib
set pdk_sram_lef  ${pdk_dir}/ihp-sg13g2/libs.ref/sg13g2_sram/lef
set pdk_io_lib    ${pdk_dir}/ihp-sg13g2/libs.ref/sg13g2_io/liberty
set pdk_io_lef    ${pdk_dir}/ihp-sg13g2/libs.ref/sg13g2_io/lef

# LIB
define_corners tt ff

puts "Init standard cells"
read_liberty -corner tt ${pdk_cells_lib}/sg13g2_stdcell_typ_1p20V_25C.lib
read_liberty -corner ff ${pdk_cells_lib}/sg13g2_stdcell_fast_1p32V_m40C.lib

puts "Init IO cells"
# read_liberty -corner tt ${pdk_io_lib}/sg13g2_iocell_typ_1p2V_3p3V_25C.lib
# read_liberty -corner ff ${pdk_io_lib}/sg13g2_iocell_fast_1p32V_3p6V_m40C.lib

read_liberty -corner tt ../ihp13/sg13g2_iocell/sg13g2_iocell_typ_1p2V_3p3V_25C.lib
read_liberty -corner ff ../ihp13/sg13g2_iocell/sg13g2_iocell_fast_1p32V_3p3V_m40C.lib

puts "Init SRAM macros"
read_liberty -corner tt ${pdk_sram_lib}/RM_IHPSG13_1P_64x64_c2_bm_bist_typ_1p20V_25C.lib
read_liberty -corner ff ${pdk_sram_lib}/RM_IHPSG13_1P_64x64_c2_bm_bist_fast_1p32V_m55C.lib

read_liberty -corner tt ${pdk_sram_lib}/RM_IHPSG13_1P_256x48_c2_bm_bist_typ_1p20V_25C.lib
read_liberty -corner ff ${pdk_sram_lib}/RM_IHPSG13_1P_256x48_c2_bm_bist_fast_1p32V_m55C.lib

read_liberty -corner tt ${pdk_sram_lib}/RM_IHPSG13_1P_256x64_c2_bm_bist_typ_1p20V_25C.lib
read_liberty -corner ff ${pdk_sram_lib}/RM_IHPSG13_1P_256x64_c2_bm_bist_fast_1p32V_m55C.lib

read_liberty -corner tt ${pdk_sram_lib}/RM_IHPSG13_1P_512x64_c2_bm_bist_typ_1p20V_25C.lib
read_liberty -corner ff ${pdk_sram_lib}/RM_IHPSG13_1P_512x64_c2_bm_bist_fast_1p32V_m55C.lib

read_liberty -corner tt ${pdk_sram_lib}/RM_IHPSG13_1P_1024x64_c2_bm_bist_typ_1p20V_25C.lib
read_liberty -corner ff ${pdk_sram_lib}/RM_IHPSG13_1P_1024x64_c2_bm_bist_fast_1p32V_m55C.lib

read_liberty -corner tt ${pdk_sram_lib}/RM_IHPSG13_1P_2048x64_c2_bm_bist_typ_1p20V_25C.lib
read_liberty -corner ff ${pdk_sram_lib}/RM_IHPSG13_1P_2048x64_c2_bm_bist_fast_1p32V_m55C.lib

puts "Init tech-lef"
read_lef ${pdk_cells_lef}/sg13g2_tech.lef

puts "Init cell-lef"
read_lef ${pdk_cells_lef}/sg13g2_stdcell.lef
# read_lef ${pdk_io_lef}/sg13g2_io.lef
read_lef ../ihp13/sg13g2_iocell/sg13g2_iocell.lef
read_lef ${pdk_sram_lef}/RM_IHPSG13_1P_64x64_c2_bm_bist.lef
read_lef ${pdk_sram_lef}/RM_IHPSG13_1P_256x48_c2_bm_bist.lef
read_lef ${pdk_sram_lef}/RM_IHPSG13_1P_256x64_c2_bm_bist.lef
read_lef ${pdk_sram_lef}/RM_IHPSG13_1P_512x64_c2_bm_bist.lef
read_lef ${pdk_sram_lef}/RM_IHPSG13_1P_1024x64_c2_bm_bist.lef
read_lef ${pdk_sram_lef}/RM_IHPSG13_1P_2048x64_c2_bm_bist.lef

set ctsBuf [ list sg13g2_buf_16 sg13g2_buf_8 sg13g2_buf_4 sg13g2_buf_2 ]
set ctsBufRoot sg13g2_buf_16

# set iocorner sg13g2_Corner
# set iofill [ list  sg13g2_Filler10000 sg13g2_Filler4000 sg13g2_Filler2000 sg13g2_Filler1000 sg13g2_Filler400 sg13g2_Filler200 ]

# the repair_timing/repair_design commands may try to use IO cells as buffers
# set dont_use_cells sg13g2_IOPad*

set iocorner corner
set iofill [ list filler10u filler4u filler2u filler1u ]
set dont_use_cells {ixc013_i16x ixc013_b16m ixc013_b16mpup ixc013_b16mpdn}

proc makeTracks {} {
    utl::report "Metal Tracks"
	make_tracks Metal1    -x_offset 0 -x_pitch 0.48 -y_offset 0 -y_pitch 0.42
	make_tracks Metal2    -x_offset 0 -x_pitch 0.48 -y_offset 0 -y_pitch 0.42
	make_tracks Metal3    -x_offset 0 -x_pitch 0.48 -y_offset 0 -y_pitch 0.42
	make_tracks Metal4    -x_offset 0 -x_pitch 0.48 -y_offset 0 -y_pitch 0.42
	make_tracks Metal5    -x_offset 0 -x_pitch 0.48 -y_offset 0 -y_pitch 0.42
	make_tracks TopMetal1 -x_offset 1.64 -x_pitch 3.28 -y_offset 1.64 -y_pitch 3.28
	make_tracks TopMetal2 -x_offset 2.00 -x_pitch 4.00 -y_offset 2.00 -y_pitch 4.00
}
