# Copyright (c) 2022 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

# get environment variables
set script_dir [file dirname [info script]]
source $script_dir/yosys_common.tcl

# constraints file
set abc_constr [file join $script_dir ../src/abc.constr]

# ABC script without DFF optimizations
set abc_combinational_script $script_dir/abc-opt.script

# process abc file (written to WORK directory)
set abc_comb_script   [processAbcScript $abc_combinational_script]

# read liberty files and prepare some variables
source $script_dir/init_tech.tcl

yosys plugin -i slang.so

# read design
yosys read_slang --top $top_design -f $sv_flist \
        --compat-mode --keep-hierarchy \
        --allow-use-before-declare --ignore-unknown-modules


# blackbox requested modules
if { [info exists ::env(YOSYS_BLACKBOX_MODULES)] } {
    foreach sel $::env(YOSYS_BLACKBOX_MODULES) {
        puts "Blackboxing the module ${sel}"
        yosys select -list {*}$sel
	    yosys blackbox {*}$sel
        yosys setattr -set keep_hierarchy 1 {*}$sel
    }
}

# preserve hierarchy of selected modules/instances
if { [info exists ::env(YOSYS_KEEP_HIER_INST)] } {
    foreach sel $::env(YOSYS_KEEP_HIER_INST) {
        puts "Keeping hierarchy of selection: $sel"
        yosys select -list {*}$sel
        yosys setattr -set keep_hierarchy 1 {*}$sel
    }
}

# map dont_touch attribute commonly applied to output-nets of async regs to keep
yosys attrmap -rename dont_touch keep
# copy the keep attribute to their driving cells (retain on net for debugging)
yosys attrmvcp -copy -attr keep


# -----------------------------------------------------------------------------
# this section heavily borrows from the yosys synth command:
# synth - check
yosys hierarchy -check -top $top_design
yosys proc
yosys tee -q -o "${report_dir}/${proj_name}_initial.rpt" stat
yosys write_verilog -norename -noexpr -attr2comment ${build_dir}/${proj_name}_yosys_initial.v

# synth - coarse:
# yosys synth -run coarse -noalumacc
yosys opt_expr
yosys opt_clean
yosys check
yosys opt -noff
yosys fsm
yosys opt
yosys tee -q -o "${report_dir}/${proj_name}_initial_opt.rpt" stat
yosys wreduce 
yosys peepopt
yosys opt_clean
yosys opt -full
yosys booth
yosys alumacc
yosys share
yosys opt
yosys memory
yosys opt -fast

yosys opt_dff -sat -nodffe -nosdff
yosys share
yosys opt -full
yosys clean -purge

yosys write_verilog -norename ${work_dir}/${proj_name}_abstract.yosys.v
yosys tee -q -o "${report_dir}/${proj_name}_abstract.rpt" stat -tech cmos

yosys techmap
yosys opt -fast
yosys clean -purge


# -----------------------------------------------------------------------------
yosys tee -q -o "${report_dir}/${proj_name}_generic.rpt" stat -tech cmos
yosys tee -q -o "${report_dir}/${proj_name}_generic.json" stat -json -tech cmos

if {[envVarValid "YOSYS_FLATTEN_HIER"]} {
	yosys flatten
}

yosys clean -purge


# -----------------------------------------------------------------------------
# split internal nets
yosys splitnets -format __v
# rename DFFs from the driven signal
yosys rename -wire -suffix _reg t:*DFF*
yosys select -write ${report_dir}/${proj_name}_registers.rpt t:*DFF*
# rename all other cells
yosys autoname t:*DFF* %n
yosys clean -purge

# print paths to important instances
yosys select -write ${report_dir}/${proj_name}_registers.rpt t:*DFF*
set report [open ${report_dir}/${proj_name}_instances.rpt "w"]
close $report
if { [info exists ::env(YOSYS_REPORT_INSTS)] } {
    foreach sel $::env(YOSYS_REPORT_INSTS) {
        yosys tee -q -a ${report_dir}/${proj_name}_instances.rpt  select -list {*}$sel
    }
}

yosys tee -q -o "${report_dir}/${proj_name}_pre_tech.rpt" stat -tech cmos
yosys tee -q -o "${report_dir}/${proj_name}_pre_tech.json" stat -json -tech cmos


# -----------------------------------------------------------------------------
# mapping to technology

puts "Using combinational-only abc optimizations"
yosys dfflibmap {*}$tech_cells_args
yosys abc {*}$tech_cells_args -D $period_ps -script $abc_comb_script -constr $abc_constr -showtmp

yosys clean -purge


# -----------------------------------------------------------------------------
# prep for openROAD
yosys write_verilog -norename -noexpr -attr2comment ${build_dir}/${proj_name}_yosys_debug.v

yosys splitnets -ports -format __v
yosys setundef -zero
yosys clean -purge

yosys hilomap -singleton -hicell {*}$tech_cell_tiehi -locell {*}$tech_cell_tielo

# final reports
yosys tee -q -o "${report_dir}/${proj_name}_synth.rpt" check
yosys tee -q -o "${report_dir}/${proj_name}_area.rpt" stat -top $top_design {*}$liberty_args
yosys tee -q -o "${report_dir}/${proj_name}_area_logic.rpt" stat -top $top_design {*}$tech_cells_args

# final netlist
yosys write_verilog -noattr -noexpr -nohex -nodec $netlist

