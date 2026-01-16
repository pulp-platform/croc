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
    #global save_dir time step_by_step_debug
    global save_dir time
    utl::report "Saving checkpoint $checkpoint_name"
    set checkpoint ${save_dir}/${checkpoint_name}

    write_def ${checkpoint}.def
    write_verilog ${checkpoint}.v
    write_db ${checkpoint}.odb
    write_sdc ${checkpoint}.sdc
    file delete ${checkpoint}.zip
    exec zip -j ${checkpoint}.zip ${checkpoint}.def ${checkpoint}.v ${checkpoint}.odb ${checkpoint}.sdc
    file delete ${checkpoint}.def ${checkpoint}.v ${checkpoint}.odb ${checkpoint}.sdc

    set deltaT [expr [elapsed_run_time] - $time]
    set time [elapsed_run_time]
    utl::report "Time: $time sec deltaT: $deltaT"
    #if { $step_by_step_debug } {
    #    utl::report "Pause at checkpoint: $checkpoint_name"
    #    gui::pause
    #}
}

proc load_checkpoint { checkpoint_name } {
    global save_dir
    utl::report "Loading checkpoint $checkpoint_name"

    # Check if it's a direct .odb file path
    if { [file extension $checkpoint_name] eq ".odb" } {
        if { [file exists $checkpoint_name] } {
            utl::report "Loading ODB file directly: $checkpoint_name"
            read_db $checkpoint_name
            # Try to find corresponding SDC file
            set sdc_file [file rootname $checkpoint_name].sdc
            if { [file exists $sdc_file] } {
                read_sdc $sdc_file
            }
            return
        } else {
            utl::error "ODB file not found: $checkpoint_name"
        }
    }

    # Otherwise treat as checkpoint name (existing logic)
    set checkpoint ${save_dir}/${checkpoint_name}

    # Check if .zip file exists
    if { [file exists ${checkpoint}.zip] } {
        exec rm -rf ${save_dir}/${checkpoint_name}
        exec unzip -u ${checkpoint}.zip -d ${save_dir}/${checkpoint_name}
        #read_verilog ${checkpoint}/$checkpoint_name.v
        read_db ${checkpoint}/$checkpoint_name.odb
        if { [file exists ${checkpoint}/$checkpoint_name.sdc] } {
            read_sdc ${checkpoint}/$checkpoint_name.sdc
        }
        # cleanup
        exec rm -rf ${save_dir}/${checkpoint_name}
    } elseif { [file exists ${checkpoint}.odb] } {
        # Support loading bare .odb file (not zipped)
        utl::report "Loading bare ODB file: ${checkpoint}.odb"
        read_db ${checkpoint}.odb
        if { [file exists ${checkpoint}.sdc] } {
            read_sdc ${checkpoint}.sdc
        }
    } else {
        utl::error "Checkpoint not found: ${checkpoint}.zip or ${checkpoint}.odb"
    }
}

proc load_checkpoint_def { checkpoint_name } {
    global save_dir
    utl::report "Loading checkpoint $checkpoint_name"
    set checkpoint ${save_dir}/${checkpoint_name}
    
    exec unzip ${checkpoint}.zip -d ${save_dir}
    read_verilog ${checkpoint}/$checkpoint_name.v
    read_def ${checkpoint}/$checkpoint_name.def
    # cleanup
    exec rm -rf ${save_dir}/${checkpoint_name}
}
