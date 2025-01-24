# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Jannis Schönleber <janniss@iis.ee.ethz.ch>
# - Philippe Sauter   <phsauter@iis.ee.ethz.ch>

# Helper macros to save and load checkpoints
set time [elapsed_run_time]
if { ![info exists save_dir] } {set save_dir "save"}

proc save_checkpoint { checkpoint_name } {
    global save_dir time step_by_step_debug
    utl::report "Saving checkpoint $checkpoint_name"
    set checkpoint ${save_dir}/${checkpoint_name}

    write_def ${checkpoint}.def
    write_verilog ${checkpoint}.v
    write_db ${checkpoint}.odb
    write_sdc ${checkpoint}.sdc
    exec zip -j ${checkpoint}.zip ${checkpoint}.def ${checkpoint}.v ${checkpoint}.odb ${checkpoint}.sdc
    file delete ${checkpoint}.def ${checkpoint}.v ${checkpoint}.odb ${checkpoint}.sdc

    set deltaT [expr [elapsed_run_time] - $time]
    set time [elapsed_run_time]
    utl::report "Time: $time sec deltaT: $deltaT"
    if { $step_by_step_debug } {
        utl::report "Pause at checkpoint: $checkpoint_name"
        gui::pause
    }
}

proc load_checkpoint { checkpoint_name } {
    global save_dir
    utl::report "Loading checkpoint $checkpoint_name"
    set checkpoint ${save_dir}/${checkpoint_name}

    exec unzip -u ${checkpoint}.zip -d ${save_dir}/${checkpoint_name}
    #read_verilog ${checkpoint}/$checkpoint_name.v
    read_db ${checkpoint}/$checkpoint_name.odb
    if { [file exists ${checkpoint}/$checkpoint_name.sdc] } {
        read_sdc ${checkpoint}/$checkpoint_name.sdc
    }
}

proc load_checkpoint_def { checkpoint_name } {
    global save_dir
    utl::report "Loading checkpoint $checkpoint_name"
    set checkpoint ${save_dir}/${checkpoint_name}
    
    exec unzip ${checkpoint}.zip -d ${save_dir}
    read_verilog ${checkpoint}/$checkpoint_name.v
    read_def ${checkpoint}/$checkpoint_name.def
}