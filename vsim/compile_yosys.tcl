if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "$ROOT/yosys/out/croc_debug.yosys.v" \
}]} {return 1}
