# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_croc_soc.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtb_croc_soc \
	Vtb_croc_soc___024root__DepSet_h0ddea910__0 \
	Vtb_croc_soc___024root__DepSet_h0ddea910__1 \
	Vtb_croc_soc___024root__DepSet_h0ddea910__2 \
	Vtb_croc_soc___024root__DepSet_h0ddea910__3 \
	Vtb_croc_soc___024root__DepSet_h0ddea910__4 \
	Vtb_croc_soc___024root__DepSet_h0ddea910__5 \
	Vtb_croc_soc___024root__DepSet_h0ddea910__6 \
	Vtb_croc_soc___024root__DepSet_h0ddea910__7 \
	Vtb_croc_soc___024root__DepSet_h0ddea910__8 \
	Vtb_croc_soc___024root__DepSet_h0ddea910__9 \
	Vtb_croc_soc___024root__DepSet_h0ddea910__10 \
	Vtb_croc_soc___024root__DepSet_h0ddea910__11 \
	Vtb_croc_soc___024root__DepSet_h0ddea910__12 \
	Vtb_croc_soc___024root__DepSet_h0ddea910__13 \
	Vtb_croc_soc___024root__DepSet_h0ddea910__14 \
	Vtb_croc_soc___024root__DepSet_h0ddea910__15 \
	Vtb_croc_soc___024root__DepSet_ha6051a75__0 \
	Vtb_croc_soc___024root__DepSet_ha6051a75__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_croc_soc__ConstPool_0 \
	Vtb_croc_soc___024root__Slow \
	Vtb_croc_soc___024root__DepSet_h0ddea910__0__Slow \
	Vtb_croc_soc___024root__DepSet_ha6051a75__0__Slow \
	Vtb_croc_soc_soc_ctrl_reg_pkg__Slow \
	Vtb_croc_soc_soc_ctrl_reg_pkg__DepSet_h03110534__0__Slow \
	Vtb_croc_soc_sdhci_reg_pkg__Slow \
	Vtb_croc_soc_sdhci_reg_pkg__DepSet_hc5e7ae59__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtb_croc_soc__Trace__0 \
	Vtb_croc_soc__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_croc_soc__Syms \
	Vtb_croc_soc__Trace__0__Slow \
	Vtb_croc_soc__TraceDecls__0__Slow \
	Vtb_croc_soc__Trace__1__Slow \
	Vtb_croc_soc__Trace__2__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
