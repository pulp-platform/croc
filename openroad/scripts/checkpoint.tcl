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

proc load_checkpoint {{checkpoint ""}} {
    global save_dir
    # if no arg or the literal "latest", pick the most-recent .zip
    if {$checkpoint eq "" || $checkpoint eq "latest"} {
        set zips [lsort -decreasing -index 0 [glob -nocomplain -directory $save_dir -types f *.zip]]
        if {![llength $zips]} {utl::error "No checkpoint .zip found in $save_dir"; return}
        set checkpoint [file rootname [file tail [lindex $zips 0]]]
    }
    utl::report "Loading checkpoint $checkpoint"

    # glob search for the checkpoint inside save_dir
    set candidates [glob -nocomplain -directory $save_dir -types f "*${checkpoint}*"]
    if {![llength $candidates]} {utl::error "No checkpoint found matching: $checkpoint (.zip/.odb)"; return}
    set ext [file extension [lindex $candidates 0]]
    set name [lindex $candidates 0]

    if {$ext eq ".zip"} {
        utl::report "Loading from ZIP file: $name"
        set chkpath [file join $save_dir $checkpoint]
        file delete -force $chkpath
        exec unzip -u $name -d $chkpath
        read_db [file join $chkpath $checkpoint.odb]
        set sdc [file join $chkpath $checkpoint.sdc]
        if {[file exists $sdc]} {read_sdc $sdc}
        file delete -force $chkpath
    } elseif {$ext eq ".odb"} {
        utl::report "Loading bare ODB file: $name"
        read_db $name
        set sdc [file rootname $name].sdc
        if {[file exists $sdc]} {read_sdc $sdc}
    } else {utl::error "Unsupported checkpoint type: $ext"}
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
