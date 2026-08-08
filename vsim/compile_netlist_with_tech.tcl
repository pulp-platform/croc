# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

proc source_compile_script {script} {
    set status [catch {source $script} result]
    if {$status || $result ne ""} {
        puts stderr "\[ERROR\] Compilation failed in $script"
        exit 1
    }
}

source_compile_script compile_netlist.tcl
source_compile_script compile_tech.tcl
exit 0
