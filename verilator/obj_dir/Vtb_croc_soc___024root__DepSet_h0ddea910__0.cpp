// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc__Syms.h"
#include "Vtb_croc_soc___024root.h"

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__0(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_init__16__tb_croc_soc__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_croc_soc__DOT__jtag_init__16__tb_croc_soc__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_init__16__idcode;
    __Vtask_tb_croc_soc__DOT__jtag_init__16__idcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__17__idcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__17__idcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__17__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__17__unnamedblk1__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__18__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__18__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__18__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__18__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__19__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__19__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__21__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__21__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__23__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__23__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__25__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__25__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__31__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__31__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__33__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__33__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__36__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__36__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__38__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__38__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__40__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__40__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__unnamedblk5__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__45__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__45__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__46__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__46__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__48__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__48__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__50__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__50__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__52__addr;
    __Vtask_tb_croc_soc__DOT__jtag_write__52__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__52__data;
    __Vtask_tb_croc_soc__DOT__jtag_write__52__data = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__52__wait_cmd;
    __Vtask_tb_croc_soc__DOT__jtag_write__52__wait_cmd = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk1__DOT__acs;
    __Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk1__DOT__acs = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__unnamedblk5__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__54__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__54__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__54__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__54__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__55__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__55__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__57__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__57__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__59__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__59__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__61__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__61__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__67__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__67__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__69__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__69__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__72__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__72__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__74__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__74__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__76__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__76__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__78__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__78__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__78__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__78__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__78__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__78__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__82__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__82__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__83__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__83__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__85__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__85__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__87__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__87__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__trial_idx;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__91__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__91__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__91__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__91__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__92__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__92__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__92__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__92__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__93__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__93__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__95__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__95__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__97__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__97__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__99__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__99__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__105__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__105__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__107__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__107__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__110__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__110__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__112__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__112__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__114__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__114__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__120__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__120__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__121__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__121__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__123__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__123__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__125__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__125__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__128__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__128__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__128__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__128__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__129__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__129__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__131__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__131__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__133__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__133__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__135__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__135__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__141__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__141__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__143__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__143__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__146__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__146__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__148__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__148__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__150__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__150__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__152__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__152__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__152__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__152__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__152__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__152__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__156__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__156__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__157__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__157__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__159__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__159__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__161__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__161__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__163__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__163__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__163__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__163__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__168__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__168__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__170__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__170__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__172__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__172__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__177__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__177__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__178__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__178__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__180__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__180__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__182__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__182__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__185__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__185__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__185__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__185__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__186__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__186__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__186__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__186__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__187__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__187__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__189__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__189__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__191__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__191__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__193__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__193__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__199__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__199__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__201__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__201__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__204__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__204__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__206__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__206__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__208__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__208__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__214__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__214__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__215__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__215__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__217__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__217__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__219__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__219__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__222__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__222__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__222__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__222__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__223__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__223__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__225__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__225__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__227__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__227__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__229__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__229__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__235__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__235__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__237__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__237__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__240__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__240__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__242__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__242__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__244__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__244__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__246__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__246__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__246__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__246__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__246__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__246__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__250__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__250__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__251__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__251__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__253__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__253__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__255__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__255__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__257__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__257__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__257__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__257__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__262__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__262__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__264__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__264__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__266__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__266__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__271__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__271__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__272__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__272__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__274__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__274__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__276__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__276__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__trial_idx;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__280__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__280__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__280__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__280__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__281__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__281__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__281__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__281__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__282__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__282__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__284__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__284__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__286__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__286__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__288__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__288__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__294__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__294__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__296__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__296__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__299__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__299__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__301__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__301__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__303__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__303__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__309__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__309__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__310__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__310__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__312__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__312__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__314__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__314__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__317__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__317__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__317__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__317__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__318__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__318__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__320__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__320__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__322__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__322__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__324__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__324__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__330__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__330__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__332__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__332__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__335__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__335__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__337__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__337__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__339__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__339__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__341__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__341__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__341__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__341__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__341__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__341__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__345__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__345__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__346__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__346__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__348__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__348__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__350__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__350__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__352__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__352__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__352__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__352__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__357__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__357__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__359__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__359__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__361__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__361__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__366__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__366__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__367__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__367__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__369__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__369__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__371__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__371__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__374__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__374__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__374__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__374__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__375__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__375__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__375__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__375__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__376__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__376__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__378__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__378__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__380__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__380__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__382__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__382__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__388__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__388__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__390__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__390__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__393__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__393__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__395__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__395__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__397__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__397__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__403__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__403__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__404__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__404__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__406__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__406__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__408__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__408__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__411__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__411__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__411__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__411__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__412__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__412__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__414__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__414__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__416__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__416__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__418__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__418__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__424__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__424__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__426__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__426__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__429__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__429__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__431__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__431__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__433__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__433__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__435__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__435__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__435__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__435__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__435__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__435__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__439__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__439__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__440__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__440__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__442__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__442__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__444__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__444__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__446__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__446__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__446__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__446__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__451__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__451__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__453__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__453__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__455__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__455__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__460__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__460__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__461__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__461__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__463__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__463__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__465__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__465__tms_val = 0;
    // Body
    VL_TIMEFORMAT_IINI(0xfffffff7U, 0U, std::string{"ns"}, 0xcU, vlSymsp->_vm_contextp__);
    vlSymsp->_vm_contextp__->dumpfile(std::string{"croc.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_croc_soc__DOT__uart_rx_i = 0U;
    vlSelfRef.tb_croc_soc__DOT__fetch_en_i = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/tb_croc_soc.sv", 
                                         454);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_init__16__dmcontrol = 1U;
    __Vtask_tb_croc_soc__DOT__jtag_init__16__tb_croc_soc__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x64U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_init__16__tb_croc_soc__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/tb_croc_soc.sv", 
                                                             152);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_init__16__tb_croc_soc__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_croc_soc__DOT__jtag_init__16__tb_croc_soc__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[1U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[2U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[3U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[4U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[5U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[6U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[7U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[8U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[9U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0xaU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0xbU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0xcU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0xdU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0xeU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0xfU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0x10U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0x11U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0x12U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0x13U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0x14U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0x15U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0x16U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0x17U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0x18U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0x19U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0x1aU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0x1bU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0x1cU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0x1dU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0x1eU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[0x1fU] = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__18__opcode = 1U;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__18__opcode))) {
            goto __Vlabel1;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__18__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__18__unnamedblk1__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__18__unnamedblk1__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__18__unnamedblk1__DOT__i)) 
                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__18__opcode) 
                             >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__18__unnamedblk1__DOT__i))));
            if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__18__unnamedblk1__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__18__unnamedblk1__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__18__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__18__unnamedblk1__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__19__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__19__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__21__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__21__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__23__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__23__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__25__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__25__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__unnamedblk2__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__unnamedblk2__DOT__i)) 
                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__wdata
                   [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__unnamedblk2__DOT__i)]);
            if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__unnamedblk2__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__tms_last;
            }
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__unnamedblk2__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__27__unnamedblk2__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__31__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__31__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__33__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__33__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__18__opcode;
        __Vlabel1: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__36__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__36__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__38__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__38__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__40__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__40__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__tms_last = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[1U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [1U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[2U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [2U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[3U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [3U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[4U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [4U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[5U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [5U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[6U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [6U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[7U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [7U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[8U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [8U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[9U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [9U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0xaU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0xaU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0xbU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0xbU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0xcU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0xcU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0xdU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0xdU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0xeU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0xeU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0xfU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0xfU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0x10U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0x10U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0x11U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0x11U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0x12U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0x12U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0x13U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0x13U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0x14U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0x14U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0x15U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0x15U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0x16U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0x16U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0x17U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0x17U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0x18U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0x18U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0x19U] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0x19U];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0x1aU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0x1aU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0x1bU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0x1bU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0x1cU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0x1cU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0x1dU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0x1dU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0x1eU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0x1eU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata[0x1fU] 
        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data
        [0x1fU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__unnamedblk5__DOT__i = 0U;
    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__unnamedblk5__DOT__i)) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__wdata
            [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__unnamedblk5__DOT__i)];
        if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__unnamedblk5__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__tms_last;
        }
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__unnamedblk5__DOT__i)] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__unnamedblk5__DOT__i 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__unnamedblk5__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[1U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [1U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[2U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [2U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[3U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [3U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[4U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [4U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[5U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [5U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[6U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [6U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[7U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [7U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[8U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [8U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[9U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [9U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0xaU] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0xaU];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0xbU] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0xbU];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0xcU] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0xcU];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0xdU] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0xdU];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0xeU] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0xeU];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0xfU] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0xfU];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0x10U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0x10U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0x11U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0x11U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0x12U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0x12U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0x13U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0x13U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0x14U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0x14U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0x15U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0x15U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0x16U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0x16U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0x17U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0x17U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0x18U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0x18U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0x19U] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0x19U];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0x1aU] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0x1aU];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0x1bU] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0x1bU];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0x1cU] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0x1cU];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0x1dU] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0x1dU];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0x1eU] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0x1eU];
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[0x1fU] 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_32__42__rdata
        [0x1fU];
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__45__exit_1_dr = 1U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__45__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__46__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__46__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__48__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__48__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__50__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__50__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__17__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__17__unnamedblk1__DOT__i)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__17__idcode 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__17__unnamedblk1__DOT__i))) 
                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__17__idcode) 
               | (0xffffffffULL & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data
                                   [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__17__unnamedblk1__DOT__i)] 
                                   << (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__17__unnamedblk1__DOT__i))));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__17__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__17__unnamedblk1__DOT__i);
    }
    __Vtask_tb_croc_soc__DOT__jtag_init__16__idcode 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__17__idcode;
    if (VL_UNLIKELY((0xc0c5db3U != __Vtask_tb_croc_soc__DOT__jtag_init__16__idcode))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_croc_soc.sv:155: Assertion failed in %Ntb_croc_soc.jtag_init: @%t | [JTAG] Unexpected ID code: expected 0x0c0c5db3, got 0x%x!\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1),-12,32,
                     __Vtask_tb_croc_soc__DOT__jtag_init__16__idcode);
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/fosic/designs/croc/rtl/tb_croc_soc.sv", 155, "", false);
    }
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__52__wait_sba = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_write__52__wait_cmd = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_write__52__data 
        = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_init__16__dmcontrol;
    __Vtask_tb_croc_soc__DOT__jtag_write__52__addr = 0x10U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__data 
        = __Vtask_tb_croc_soc__DOT__jtag_write__52__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__address 
        = __Vtask_tb_croc_soc__DOT__jtag_write__52__addr;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
        = (2ULL | (((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__address)))) 
                    << 0x22U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__data)) 
                                 << 2U)));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__unnamedblk5__DOT__i = 0U;
    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__unnamedblk5__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h62ffa798__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data
            [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__unnamedblk5__DOT__i)];
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h62ffa798__0 
            = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__unnamedblk5__DOT__i)) 
               && (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                                 >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__unnamedblk5__DOT__i)))));
        if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__unnamedblk5__DOT__i)))) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__unnamedblk5__DOT__i)] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h62ffa798__0;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__unnamedblk5__DOT__i 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__53__unnamedblk5__DOT__i);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__54__opcode = 0x11U;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__54__opcode))) {
            goto __Vlabel2;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__54__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__54__unnamedblk1__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__54__unnamedblk1__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__54__unnamedblk1__DOT__i)) 
                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__54__opcode) 
                             >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__54__unnamedblk1__DOT__i))));
            if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__54__unnamedblk1__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__54__unnamedblk1__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__54__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__54__unnamedblk1__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__55__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__55__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__57__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__57__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__59__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__59__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__61__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__61__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__unnamedblk2__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__unnamedblk2__DOT__i)) 
                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__wdata
                   [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__unnamedblk2__DOT__i)]);
            if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__unnamedblk2__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__tms_last;
            }
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__unnamedblk2__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__63__unnamedblk2__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__67__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__67__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__69__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__69__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__54__opcode;
        __Vlabel2: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__72__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__72__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__74__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__74__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__76__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__76__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__78__tms_last = 1U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__78__wdata[__Vilp1] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__78__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__78__unnamedblk4__DOT__i)) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = ((0x28U 
                                                   >= 
                                                   (0x3fU 
                                                    & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__78__unnamedblk4__DOT__i)) 
                                                  && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__78__wdata
                                                  [
                                                  (0x3fU 
                                                   & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__78__unnamedblk4__DOT__i)]);
        if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__78__unnamedblk4__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__78__tms_last;
        }
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__78__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__78__unnamedblk4__DOT__i);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__82__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__82__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__83__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__83__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__85__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__85__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__87__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__87__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (__Vtask_tb_croc_soc__DOT__jtag_write__52__wait_cmd) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__address = 0x16U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__op = 0U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__trial_idx = 0U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__wait_cycles = 8U;
        if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__trial_idx)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__91__data 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__91__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__91__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__91__unnamedblk2__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__91__unnamedblk2__DOT__i)] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__91__unnamedblk2__DOT__i)));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__91__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__91__unnamedblk2__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__92__opcode = 0x10U;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__92__opcode))) {
                    goto __Vlabel3;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__92__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__92__unnamedblk1__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__92__unnamedblk1__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__92__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__92__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__92__unnamedblk1__DOT__i))));
                    if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__92__unnamedblk1__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__92__unnamedblk1__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__92__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__92__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__93__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__93__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__95__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__95__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__97__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__97__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__99__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__99__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__101__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__105__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__105__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__107__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__107__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__92__opcode;
                __Vlabel3: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__110__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__110__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__112__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__112__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__114__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__114__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[5U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [5U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[6U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [6U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[7U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [7U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[8U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [8U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[9U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [9U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0xaU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xaU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0xbU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xbU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0xcU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xcU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0xdU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xdU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0xeU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xeU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0xfU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xfU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0x10U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x10U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0x11U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x11U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0x12U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x12U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0x13U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x13U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0x14U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x14U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0x15U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x15U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0x16U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x16U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0x17U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x17U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0x18U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x18U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0x19U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x19U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0x1aU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1aU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0x1bU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1bU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0x1cU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1cU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0x1dU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1dU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0x1eU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1eU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata[0x1fU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1fU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__unnamedblk3__DOT__i = 0U;
            while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__unnamedblk3__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__wdata
                    [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__unnamedblk3__DOT__i)];
                if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__unnamedblk3__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__unnamedblk3__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__116__unnamedblk3__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__120__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__120__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__121__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__121__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__123__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__123__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__125__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__125__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__wait_cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__address 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__address;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__data_out = 0ULL;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__write_data_packed 
            = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__address)))) 
                       << 0x22U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk6__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk6__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk6__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk6__DOT__i)) 
                   && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__write_data_packed 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk6__DOT__i)))));
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk6__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk6__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk6__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__128__opcode = 0x11U;
        {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__128__opcode))) {
                goto __Vlabel4;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__128__unnamedblk1__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__128__unnamedblk1__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__128__unnamedblk1__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__128__unnamedblk1__DOT__i)) 
                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__128__opcode) 
                                 >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__128__unnamedblk1__DOT__i))));
                if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__128__unnamedblk1__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__128__unnamedblk1__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__128__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__128__unnamedblk1__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__129__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__129__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__131__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__131__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__133__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__133__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__135__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__135__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__unnamedblk2__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__unnamedblk2__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__wdata
                       [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__unnamedblk2__DOT__i)]);
                if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__137__unnamedblk2__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__141__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__141__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__143__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__143__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__128__opcode;
            __Vlabel4: ;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__146__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__146__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__148__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__148__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__150__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__150__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__152__tms_last = 1U;
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__152__wdata[__Vilp2] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__152__unnamedblk4__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__152__unnamedblk4__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__152__unnamedblk4__DOT__i)) 
                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__152__wdata
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__152__unnamedblk4__DOT__i)]);
            if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__152__unnamedblk4__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__152__tms_last;
            }
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__152__unnamedblk4__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__152__unnamedblk4__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__156__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__156__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__157__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__157__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__159__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__159__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__161__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__161__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__163__cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__163__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__163__cycles;
        while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__163__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__163__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__163__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__168__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__168__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__170__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__170__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__172__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__172__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__write_data_packed 
            = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__address)))) 
               << 0x22U);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk7__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk7__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk7__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk7__DOT__i)) 
                   && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__write_data_packed 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk7__DOT__i)))));
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk7__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk7__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk7__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk7__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__tms_last = 1U;
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__wdata[__Vilp3] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp3];
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__unnamedblk6__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__unnamedblk6__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__unnamedblk6__DOT__i)) 
                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__wdata
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__unnamedblk6__DOT__i)]);
            if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__unnamedblk6__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__tms_last;
            }
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__rdata
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__unnamedblk6__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__unnamedblk6__DOT__i)))) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__unnamedblk6__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
            }
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__unnamedblk6__DOT__i);
        }
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x28U)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp4] 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__174__rdata
                [__Vilp4];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__177__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__177__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__178__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__178__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__180__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__180__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__182__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__182__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk8__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk8__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__data_out 
                                 >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk8__DOT__i))));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk8__DOT__i)) 
                   && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk8__DOT__i)]);
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk8__DOT__i)))) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__data_out 
                    = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk8__DOT__i))) 
                        & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__data_out) 
                       | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                              << (0x3fU 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk8__DOT__i))));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk8__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__unnamedblk8__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__op 
            = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__data_out));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__data 
            = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__data_out 
                       >> 2U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__data 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__data;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__op 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__127__op;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__wait_cycles 
            = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__wait_cycles);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__trial_idx 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__trial_idx);
        while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__op))) {
            if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__trial_idx)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__185__data 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__185__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__185__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__185__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__185__unnamedblk2__DOT__i)] 
                        = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                 >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__185__unnamedblk2__DOT__i)));
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__185__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__185__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__186__opcode = 0x10U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__186__opcode))) {
                        goto __Vlabel5;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__186__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__186__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__186__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__186__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__186__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__186__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__186__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__186__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__186__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__186__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__187__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__187__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__189__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__189__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__191__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__191__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__193__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__193__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__195__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__199__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__199__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__201__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__201__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__186__opcode;
                    __Vlabel5: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__204__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__204__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__206__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__206__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__208__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__208__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[5U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [5U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[6U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [6U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[7U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [7U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[8U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [8U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[9U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [9U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0xaU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xaU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0xbU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xbU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0xcU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xcU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0xdU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xdU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0xeU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xeU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0xfU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xfU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0x10U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x10U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0x11U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x11U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0x12U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x12U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0x13U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x13U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0x14U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x14U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0x15U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x15U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0x16U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x16U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0x17U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x17U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0x18U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x18U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0x19U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x19U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0x1aU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1aU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0x1bU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1bU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0x1cU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1cU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0x1dU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1dU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0x1eU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1eU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata[0x1fU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1fU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__unnamedblk3__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__unnamedblk3__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         98);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__wdata
                        [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__unnamedblk3__DOT__i)];
                    if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__unnamedblk3__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__unnamedblk3__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__210__unnamedblk3__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__214__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__214__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__215__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__215__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__217__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__217__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__219__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__219__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__wait_cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__address 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__address;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__data_out = 0ULL;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__write_data_packed 
                = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__address)))) 
                           << 0x22U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk6__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk6__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk6__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk6__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk6__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__222__opcode = 0x11U;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__222__opcode))) {
                    goto __Vlabel6;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__222__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__222__unnamedblk1__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__222__unnamedblk1__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__222__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__222__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__222__unnamedblk1__DOT__i))));
                    if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__222__unnamedblk1__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__222__unnamedblk1__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__222__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__222__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__223__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__223__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__225__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__225__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__227__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__227__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__229__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__229__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__231__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__235__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__235__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__237__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__237__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__222__opcode;
                __Vlabel6: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__240__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__240__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__242__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__242__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__244__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__244__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__246__tms_last = 1U;
            IData/*31:0*/ __Vilp5;
            __Vilp5 = 0U;
            while ((__Vilp5 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__246__wdata[__Vilp5] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp5];
                __Vilp5 = ((IData)(1U) + __Vilp5);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__246__unnamedblk4__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__246__unnamedblk4__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     107);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__246__unnamedblk4__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__246__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__246__unnamedblk4__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__246__unnamedblk4__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__246__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__246__unnamedblk4__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__246__unnamedblk4__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__250__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__250__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__251__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__251__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__253__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__253__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__255__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__255__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__257__cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__257__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__257__cycles;
            while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__257__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__257__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__257__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                       - (IData)(1U));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__262__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__262__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__264__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__264__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__266__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__266__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__write_data_packed 
                = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__address)))) 
                   << 0x22U);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk7__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk7__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk7__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk7__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk7__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk7__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk7__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk7__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk7__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__tms_last = 1U;
            IData/*31:0*/ __Vilp6;
            __Vilp6 = 0U;
            while ((__Vilp6 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__wdata[__Vilp6] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp6];
                __Vilp6 = ((IData)(1U) + __Vilp6);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__unnamedblk6__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     129);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__unnamedblk6__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__unnamedblk6__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__rdata
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__unnamedblk6__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                }
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__unnamedblk6__DOT__i);
            }
            IData/*31:0*/ __Vilp7;
            __Vilp7 = 0U;
            while ((__Vilp7 <= 0x28U)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp7] 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__268__rdata
                    [__Vilp7];
                __Vilp7 = ((IData)(1U) + __Vilp7);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__271__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__271__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__272__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__272__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__274__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__274__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__276__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__276__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk8__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk8__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__data_out 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk8__DOT__i))));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk8__DOT__i)) 
                       && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk8__DOT__i)]);
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk8__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__data_out 
                        = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk8__DOT__i))) 
                            & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__data_out) 
                           | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                                  << 
                                                  (0x3fU 
                                                   & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk8__DOT__i))));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk8__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__unnamedblk8__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__op 
                = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__data_out));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__data 
                = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__data_out 
                           >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__data 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__op 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__221__op;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__wait_cycles 
                = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__wait_cycles);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__trial_idx 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__trial_idx);
        }
        __Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk1__DOT__acs 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__89__data;
        if (VL_UNLIKELY((0U != (7U & (__Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk1__DOT__acs 
                                      >> 8U))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_croc_soc.sv:135: Assertion failed in %Ntb_croc_soc.jtag_write.unnamedblk1: [JTAG] Abstract command error!\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("/fosic/designs/croc/rtl/tb_croc_soc.sv", 135, "", false);
        }
        while ((0x1000U & __Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk1__DOT__acs)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__address = 0x16U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__op = 0U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__trial_idx = 0U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__wait_cycles = 8U;
            if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__trial_idx)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__280__data 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__280__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__280__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__280__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__280__unnamedblk2__DOT__i)] 
                        = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                 >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__280__unnamedblk2__DOT__i)));
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__280__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__280__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__281__opcode = 0x10U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__281__opcode))) {
                        goto __Vlabel7;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__281__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__281__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__281__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__281__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__281__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__281__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__281__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__281__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__281__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__281__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__282__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__282__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__284__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__284__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__286__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__286__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__288__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__288__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__290__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__294__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__294__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__296__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__296__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__281__opcode;
                    __Vlabel7: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__299__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__299__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__301__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__301__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__303__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__303__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[5U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [5U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[6U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [6U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[7U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [7U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[8U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [8U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[9U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [9U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0xaU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xaU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0xbU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xbU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0xcU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xcU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0xdU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xdU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0xeU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xeU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0xfU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xfU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0x10U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x10U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0x11U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x11U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0x12U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x12U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0x13U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x13U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0x14U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x14U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0x15U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x15U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0x16U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x16U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0x17U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x17U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0x18U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x18U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0x19U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x19U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0x1aU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1aU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0x1bU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1bU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0x1cU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1cU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0x1dU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1dU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0x1eU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1eU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata[0x1fU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1fU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__unnamedblk3__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__unnamedblk3__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         98);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__wdata
                        [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__unnamedblk3__DOT__i)];
                    if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__unnamedblk3__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__unnamedblk3__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__305__unnamedblk3__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__309__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__309__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__310__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__310__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__312__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__312__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__314__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__314__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__wait_cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__address 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__address;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__data_out = 0ULL;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__write_data_packed 
                = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__address)))) 
                           << 0x22U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk6__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk6__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk6__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk6__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk6__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__317__opcode = 0x11U;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__317__opcode))) {
                    goto __Vlabel8;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__317__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__317__unnamedblk1__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__317__unnamedblk1__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__317__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__317__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__317__unnamedblk1__DOT__i))));
                    if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__317__unnamedblk1__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__317__unnamedblk1__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__317__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__317__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__318__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__318__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__320__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__320__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__322__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__322__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__324__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__324__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__326__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__330__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__330__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__332__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__332__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__317__opcode;
                __Vlabel8: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__335__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__335__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__337__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__337__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__339__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__339__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__341__tms_last = 1U;
            IData/*31:0*/ __Vilp8;
            __Vilp8 = 0U;
            while ((__Vilp8 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__341__wdata[__Vilp8] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp8];
                __Vilp8 = ((IData)(1U) + __Vilp8);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__341__unnamedblk4__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__341__unnamedblk4__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     107);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__341__unnamedblk4__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__341__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__341__unnamedblk4__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__341__unnamedblk4__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__341__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__341__unnamedblk4__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__341__unnamedblk4__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__345__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__345__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__346__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__346__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__348__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__348__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__350__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__350__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__352__cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__352__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__352__cycles;
            while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__352__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__352__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__352__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                       - (IData)(1U));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__357__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__357__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__359__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__359__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__361__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__361__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__write_data_packed 
                = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__address)))) 
                   << 0x22U);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk7__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk7__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk7__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk7__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk7__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk7__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk7__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk7__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk7__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__tms_last = 1U;
            IData/*31:0*/ __Vilp9;
            __Vilp9 = 0U;
            while ((__Vilp9 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__wdata[__Vilp9] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp9];
                __Vilp9 = ((IData)(1U) + __Vilp9);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__unnamedblk6__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     129);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__unnamedblk6__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__unnamedblk6__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__rdata
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__unnamedblk6__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                }
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__unnamedblk6__DOT__i);
            }
            IData/*31:0*/ __Vilp10;
            __Vilp10 = 0U;
            while ((__Vilp10 <= 0x28U)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp10] 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__363__rdata
                    [__Vilp10];
                __Vilp10 = ((IData)(1U) + __Vilp10);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__366__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__366__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__367__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__367__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__369__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__369__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__371__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__371__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk8__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk8__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__data_out 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk8__DOT__i))));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk8__DOT__i)) 
                       && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk8__DOT__i)]);
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk8__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__data_out 
                        = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk8__DOT__i))) 
                            & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__data_out) 
                           | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                                  << 
                                                  (0x3fU 
                                                   & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk8__DOT__i))));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk8__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__unnamedblk8__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__op 
                = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__data_out));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__data 
                = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__data_out 
                           >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__data 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__op 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__316__op;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__wait_cycles 
                = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__wait_cycles);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__trial_idx 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__trial_idx);
            while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__op))) {
                if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__trial_idx)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__374__data 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__374__data;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__374__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__374__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__374__unnamedblk2__DOT__i)] 
                            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                     >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__374__unnamedblk2__DOT__i)));
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__374__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__374__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__375__opcode = 0x10U;
                    {
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__375__opcode))) {
                            goto __Vlabel9;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__375__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__375__unnamedblk1__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__375__unnamedblk1__DOT__i)];
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__375__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__375__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__375__unnamedblk1__DOT__i))));
                            if (VL_LIKELY((4U >= (7U 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__375__unnamedblk1__DOT__i)))) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__375__unnamedblk1__DOT__i)] 
                                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                            }
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__375__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__375__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__376__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__376__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__378__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__378__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__380__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__380__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__382__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__382__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__wdata[0U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [0U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__wdata[1U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [1U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__wdata[2U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [2U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__wdata[3U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [3U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__wdata[4U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [4U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.__Vm_traceActivity[2U] = 1U;
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__tms_last;
                            }
                            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 153);
                            vlSelfRef.__Vm_traceActivity[2U] = 1U;
                            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                                "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            vlSelfRef.__Vm_traceActivity[2U] = 1U;
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__384__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__388__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__388__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__390__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__390__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__375__opcode;
                        __Vlabel9: ;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__393__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__393__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__395__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__395__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__397__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__397__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[5U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [5U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[6U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [6U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[7U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [7U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[8U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [8U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[9U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [9U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0xaU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xaU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0xbU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xbU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0xcU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xcU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0xdU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xdU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0xeU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xeU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0xfU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xfU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0x10U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x10U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0x11U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x11U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0x12U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x12U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0x13U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x13U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0x14U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x14U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0x15U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x15U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0x16U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x16U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0x17U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x17U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0x18U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x18U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0x19U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x19U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0x1aU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1aU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0x1bU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1bU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0x1cU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1cU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0x1dU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1dU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0x1eU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1eU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata[0x1fU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1fU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__unnamedblk3__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__unnamedblk3__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             98);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__wdata
                            [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__unnamedblk3__DOT__i)];
                        if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__unnamedblk3__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__unnamedblk3__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__399__unnamedblk3__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__403__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__403__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__404__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__404__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__406__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__406__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__408__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__408__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__wait_cycles 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__wait_cycles;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__address 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__address;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__data_out = 0ULL;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__write_data_packed 
                    = (1ULL | ((QData)((IData)((0x7fU 
                                                & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__address)))) 
                               << 0x22U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk6__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk6__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__write_data_packed 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk6__DOT__i)))));
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk6__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk6__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk6__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__411__opcode = 0x11U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__411__opcode))) {
                        goto __Vlabel10;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__411__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__411__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__411__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__411__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__411__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__411__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__411__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__411__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__411__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__411__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__412__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__412__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__414__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__414__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__416__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__416__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__418__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__418__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.__Vm_traceActivity[2U] = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__420__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__424__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__424__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__426__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__426__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__411__opcode;
                    __Vlabel10: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__429__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__429__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__431__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__431__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__433__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__433__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__435__tms_last = 1U;
                IData/*31:0*/ __Vilp11;
                __Vilp11 = 0U;
                while ((__Vilp11 <= 0x28U)) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__435__wdata[__Vilp11] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [__Vilp11];
                    __Vilp11 = ((IData)(1U) + __Vilp11);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__435__unnamedblk4__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__435__unnamedblk4__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         107);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__435__unnamedblk4__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__435__wdata
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__435__unnamedblk4__DOT__i)]);
                    if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__435__unnamedblk4__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__435__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__435__unnamedblk4__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__435__unnamedblk4__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__439__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__439__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__440__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__440__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__442__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__442__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__444__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__444__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__446__cycles 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__wait_cycles;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__446__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__446__cycles;
                while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__446__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__446__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__446__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                           - (IData)(1U));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__451__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__451__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__453__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__453__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__455__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__455__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__write_data_packed 
                    = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__address)))) 
                       << 0x22U);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk7__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk7__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk7__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk7__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__write_data_packed 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk7__DOT__i)))));
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk7__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk7__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk7__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk7__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__tms_last = 1U;
                IData/*31:0*/ __Vilp12;
                __Vilp12 = 0U;
                while ((__Vilp12 <= 0x28U)) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__wdata[__Vilp12] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [__Vilp12];
                    __Vilp12 = ((IData)(1U) + __Vilp12);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__unnamedblk6__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         129);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__unnamedblk6__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__wdata
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__unnamedblk6__DOT__i)]);
                    if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__unnamedblk6__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__rdata
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__unnamedblk6__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__unnamedblk6__DOT__i)))) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__unnamedblk6__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                    }
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__unnamedblk6__DOT__i);
                }
                IData/*31:0*/ __Vilp13;
                __Vilp13 = 0U;
                while ((__Vilp13 <= 0x28U)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp13] 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__457__rdata
                        [__Vilp13];
                    __Vilp13 = ((IData)(1U) + __Vilp13);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__460__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__460__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__461__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__461__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__463__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__463__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__465__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__465__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk8__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk8__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__data_out 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk8__DOT__i))));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk8__DOT__i)) 
                           && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk8__DOT__i)]);
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk8__DOT__i)))) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__data_out 
                            = (((~ (1ULL << (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk8__DOT__i))) 
                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__data_out) 
                               | (0x1ffffffffffULL 
                                  & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                     << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk8__DOT__i))));
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk8__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__unnamedblk8__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__op 
                    = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__data_out));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__data 
                    = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__data_out 
                               >> 2U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__data 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__op 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__410__op;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__wait_cycles 
                    = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__wait_cycles);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__trial_idx 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__trial_idx);
            }
            __Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk1__DOT__acs 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__278__data;
            if (VL_UNLIKELY((0U != (7U & (__Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk1__DOT__acs 
                                          >> 8U))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_croc_soc.sv:135: Assertion failed in %Ntb_croc_soc.jtag_write.unnamedblk1: [JTAG] Abstract command error!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("/fosic/designs/croc/rtl/tb_croc_soc.sv", 135, "", false);
            }
        }
    }
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__1(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk2__DOT__sbcs;
    __Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk2__DOT__sbcs = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__trial_idx;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__469__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__469__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__469__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__469__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__470__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__470__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__470__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__470__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__471__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__471__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__473__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__473__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__475__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__475__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__477__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__477__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__483__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__483__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__485__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__485__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__488__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__488__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__490__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__490__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__492__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__492__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__498__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__498__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__499__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__499__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__501__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__501__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__503__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__503__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__506__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__506__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__506__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__506__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__507__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__507__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__509__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__509__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__511__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__511__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__513__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__513__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__519__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__519__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__521__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__521__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__524__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__524__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__526__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__526__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__528__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__528__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__530__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__530__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__530__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__530__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__530__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__530__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__534__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__534__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__535__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__535__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__537__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__537__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__539__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__539__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__541__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__541__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__541__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__541__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__546__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__546__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__548__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__548__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__550__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__550__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__555__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__555__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__556__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__556__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__558__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__558__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__560__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__560__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__563__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__563__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__563__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__563__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__564__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__564__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__564__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__564__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__565__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__565__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__567__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__567__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__569__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__569__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__571__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__571__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__577__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__577__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__579__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__579__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__582__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__582__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__584__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__584__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__586__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__586__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__592__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__592__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__593__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__593__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__595__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__595__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__597__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__597__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__600__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__600__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__600__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__600__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__601__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__601__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__603__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__603__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__605__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__605__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__607__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__607__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__613__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__613__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__615__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__615__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__618__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__618__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__620__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__620__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__622__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__622__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__624__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__624__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__624__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__624__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__624__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__624__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__628__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__628__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__629__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__629__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__631__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__631__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__633__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__633__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__635__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__635__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__635__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__635__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__640__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__640__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__642__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__642__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__644__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__644__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__649__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__649__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__650__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__650__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__652__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__652__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__654__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__654__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__trial_idx;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__658__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__658__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__658__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__658__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__659__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__659__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__659__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__659__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__660__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__660__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__662__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__662__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__664__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__664__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__666__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__666__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__672__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__672__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__674__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__674__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__677__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__677__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__679__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__679__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__681__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__681__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__687__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__687__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__688__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__688__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__690__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__690__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__692__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__692__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__695__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__695__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__695__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__695__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__696__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__696__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__698__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__698__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__700__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__700__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__702__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__702__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__708__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__708__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__710__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__710__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__713__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__713__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__715__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__715__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__717__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__717__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__719__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__719__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__719__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__719__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__719__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__719__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__723__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__723__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__724__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__724__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__726__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__726__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__728__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__728__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__730__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__730__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__730__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__730__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__735__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__735__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__737__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__737__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__739__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__739__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__744__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__744__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__745__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__745__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__747__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__747__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__749__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__749__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__752__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__752__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__752__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__752__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__753__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__753__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__753__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__753__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__754__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__754__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__756__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__756__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__758__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__758__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__760__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__760__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__766__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__766__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__768__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__768__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__771__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__771__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__773__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__773__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__775__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__775__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__781__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__781__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__782__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__782__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__784__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__784__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__786__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__786__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__789__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__789__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__789__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__789__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__790__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__790__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__792__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__792__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__794__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__794__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__796__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__796__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__802__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__802__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__804__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__804__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__807__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__807__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__809__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__809__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__811__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__811__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__813__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__813__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__813__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__813__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__813__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__813__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__817__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__817__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__818__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__818__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__820__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__820__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__822__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__822__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__824__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__824__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__824__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__824__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__829__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__829__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__831__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__831__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__833__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__833__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__838__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__838__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__839__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__839__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__841__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__841__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__843__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__843__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__849__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__849__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__851__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__851__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__853__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__853__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__855__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__855__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__861__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__861__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__863__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__863__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__866__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__866__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__868__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__868__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__870__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__870__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__876__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__876__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__877__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__877__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__879__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__879__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__881__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__881__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__885__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__885__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__887__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__887__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__889__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__889__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__891__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__891__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__897__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__897__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__899__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__899__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__902__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__902__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__904__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__904__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__906__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__906__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__912__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__912__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__913__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__913__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__915__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__915__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__917__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__917__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__924__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__924__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__926__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__926__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__928__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__928__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__933__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__933__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__934__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__934__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__936__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__936__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__938__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__938__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__943__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__943__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__945__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__945__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__947__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__947__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__949__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__949__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__955__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__955__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__957__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__957__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__960__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__960__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__962__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__962__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__964__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__964__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__970__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__970__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__971__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__971__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__973__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__973__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__975__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__975__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__979__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__979__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__981__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__981__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__983__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__983__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__985__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__985__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__991__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__991__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__993__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__993__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__996__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__996__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__998__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__998__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1000__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1000__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1006__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1006__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1007__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1007__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1009__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1009__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1011__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1011__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1018__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1018__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1020__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1020__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1022__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1022__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1027__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1027__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1028__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1028__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1030__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1030__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1032__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1032__tms_val = 0;
    // Body
    if (vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__52__wait_sba) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__address = 0x38U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__op = 0U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__trial_idx = 0U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__wait_cycles = 8U;
        if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__trial_idx)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__469__data 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__469__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__469__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__469__unnamedblk2__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__469__unnamedblk2__DOT__i)] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__469__unnamedblk2__DOT__i)));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__469__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__469__unnamedblk2__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__470__opcode = 0x10U;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__470__opcode))) {
                    goto __Vlabel11;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__470__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__470__unnamedblk1__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__470__unnamedblk1__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__470__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__470__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__470__unnamedblk1__DOT__i))));
                    if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__470__unnamedblk1__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__470__unnamedblk1__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__470__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__470__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__471__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__471__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__473__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__473__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__475__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__475__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__477__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__477__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__479__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__483__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__483__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__485__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__485__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__470__opcode;
                __Vlabel11: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__488__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__488__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__490__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__490__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__492__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__492__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[5U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [5U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[6U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [6U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[7U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [7U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[8U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [8U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[9U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [9U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0xaU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xaU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0xbU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xbU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0xcU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xcU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0xdU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xdU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0xeU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xeU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0xfU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xfU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0x10U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x10U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0x11U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x11U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0x12U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x12U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0x13U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x13U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0x14U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x14U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0x15U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x15U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0x16U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x16U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0x17U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x17U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0x18U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x18U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0x19U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x19U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0x1aU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1aU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0x1bU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1bU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0x1cU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1cU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0x1dU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1dU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0x1eU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1eU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata[0x1fU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1fU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__unnamedblk3__DOT__i = 0U;
            while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__unnamedblk3__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__wdata
                    [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__unnamedblk3__DOT__i)];
                if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__unnamedblk3__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__unnamedblk3__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__494__unnamedblk3__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__498__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__498__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__499__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__499__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__501__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__501__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__503__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__503__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__wait_cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__address 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__address;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__data_out = 0ULL;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__write_data_packed 
            = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__address)))) 
                       << 0x22U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk6__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk6__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk6__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk6__DOT__i)) 
                   && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__write_data_packed 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk6__DOT__i)))));
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk6__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk6__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk6__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__506__opcode = 0x11U;
        {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__506__opcode))) {
                goto __Vlabel12;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__506__unnamedblk1__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__506__unnamedblk1__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__506__unnamedblk1__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__506__unnamedblk1__DOT__i)) 
                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__506__opcode) 
                                 >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__506__unnamedblk1__DOT__i))));
                if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__506__unnamedblk1__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__506__unnamedblk1__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__506__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__506__unnamedblk1__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__507__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__507__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__509__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__509__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__511__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__511__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__513__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__513__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__unnamedblk2__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__unnamedblk2__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__wdata
                       [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__unnamedblk2__DOT__i)]);
                if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__515__unnamedblk2__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__519__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__519__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__521__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__521__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__506__opcode;
            __Vlabel12: ;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__524__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__524__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__526__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__526__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__528__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__528__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__530__tms_last = 1U;
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__530__wdata[__Vilp1] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__530__unnamedblk4__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__530__unnamedblk4__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__530__unnamedblk4__DOT__i)) 
                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__530__wdata
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__530__unnamedblk4__DOT__i)]);
            if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__530__unnamedblk4__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__530__tms_last;
            }
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__530__unnamedblk4__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__530__unnamedblk4__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__534__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__534__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__535__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__535__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__537__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__537__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__539__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__539__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__541__cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__541__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__541__cycles;
        while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__541__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__541__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__541__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__546__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__546__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__548__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__548__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__550__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__550__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__write_data_packed 
            = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__address)))) 
               << 0x22U);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk7__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk7__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk7__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk7__DOT__i)) 
                   && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__write_data_packed 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk7__DOT__i)))));
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk7__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk7__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk7__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk7__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__tms_last = 1U;
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__wdata[__Vilp2] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__unnamedblk6__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__unnamedblk6__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__unnamedblk6__DOT__i)) 
                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__wdata
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__unnamedblk6__DOT__i)]);
            if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__unnamedblk6__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__tms_last;
            }
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__rdata
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__unnamedblk6__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__unnamedblk6__DOT__i)))) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__unnamedblk6__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
            }
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__unnamedblk6__DOT__i);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x28U)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp3] 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__552__rdata
                [__Vilp3];
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__555__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__555__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__556__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__556__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__558__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__558__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__560__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__560__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk8__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk8__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__data_out 
                                 >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk8__DOT__i))));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk8__DOT__i)) 
                   && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk8__DOT__i)]);
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk8__DOT__i)))) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__data_out 
                    = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk8__DOT__i))) 
                        & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__data_out) 
                       | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                              << (0x3fU 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk8__DOT__i))));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk8__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__unnamedblk8__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__op 
            = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__data_out));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__data 
            = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__data_out 
                       >> 2U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__data 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__data;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__op 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__505__op;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__wait_cycles 
            = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__wait_cycles);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__trial_idx 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__trial_idx);
        while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__op))) {
            if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__trial_idx)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__563__data 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__563__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__563__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__563__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__563__unnamedblk2__DOT__i)] 
                        = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                 >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__563__unnamedblk2__DOT__i)));
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__563__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__563__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__564__opcode = 0x10U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__564__opcode))) {
                        goto __Vlabel13;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__564__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__564__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__564__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__564__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__564__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__564__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__564__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__564__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__564__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__564__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__565__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__565__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__567__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__567__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__569__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__569__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__571__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__571__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__573__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__577__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__577__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__579__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__579__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__564__opcode;
                    __Vlabel13: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__582__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__582__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__584__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__584__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__586__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__586__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[5U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [5U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[6U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [6U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[7U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [7U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[8U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [8U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[9U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [9U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0xaU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xaU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0xbU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xbU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0xcU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xcU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0xdU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xdU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0xeU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xeU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0xfU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xfU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0x10U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x10U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0x11U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x11U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0x12U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x12U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0x13U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x13U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0x14U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x14U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0x15U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x15U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0x16U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x16U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0x17U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x17U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0x18U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x18U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0x19U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x19U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0x1aU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1aU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0x1bU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1bU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0x1cU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1cU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0x1dU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1dU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0x1eU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1eU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata[0x1fU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1fU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__unnamedblk3__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__unnamedblk3__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         98);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__wdata
                        [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__unnamedblk3__DOT__i)];
                    if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__unnamedblk3__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__unnamedblk3__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__588__unnamedblk3__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__592__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__592__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__593__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__593__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__595__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__595__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__597__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__597__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__wait_cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__address 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__address;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__data_out = 0ULL;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__write_data_packed 
                = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__address)))) 
                           << 0x22U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk6__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk6__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk6__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk6__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk6__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__600__opcode = 0x11U;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__600__opcode))) {
                    goto __Vlabel14;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__600__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__600__unnamedblk1__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__600__unnamedblk1__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__600__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__600__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__600__unnamedblk1__DOT__i))));
                    if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__600__unnamedblk1__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__600__unnamedblk1__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__600__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__600__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__601__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__601__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__603__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__603__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__605__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__605__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__607__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__607__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__609__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__613__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__613__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__615__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__615__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__600__opcode;
                __Vlabel14: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__618__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__618__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__620__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__620__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__622__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__622__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__624__tms_last = 1U;
            IData/*31:0*/ __Vilp4;
            __Vilp4 = 0U;
            while ((__Vilp4 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__624__wdata[__Vilp4] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp4];
                __Vilp4 = ((IData)(1U) + __Vilp4);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__624__unnamedblk4__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__624__unnamedblk4__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     107);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__624__unnamedblk4__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__624__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__624__unnamedblk4__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__624__unnamedblk4__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__624__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__624__unnamedblk4__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__624__unnamedblk4__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__628__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__628__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__629__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__629__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__631__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__631__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__633__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__633__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__635__cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__635__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__635__cycles;
            while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__635__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__635__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__635__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                       - (IData)(1U));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__640__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__640__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__642__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__642__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__644__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__644__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__write_data_packed 
                = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__address)))) 
                   << 0x22U);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk7__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk7__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk7__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk7__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk7__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk7__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk7__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk7__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk7__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__tms_last = 1U;
            IData/*31:0*/ __Vilp5;
            __Vilp5 = 0U;
            while ((__Vilp5 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__wdata[__Vilp5] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp5];
                __Vilp5 = ((IData)(1U) + __Vilp5);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__unnamedblk6__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     129);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__unnamedblk6__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__unnamedblk6__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__rdata
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__unnamedblk6__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                }
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__unnamedblk6__DOT__i);
            }
            IData/*31:0*/ __Vilp6;
            __Vilp6 = 0U;
            while ((__Vilp6 <= 0x28U)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp6] 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__646__rdata
                    [__Vilp6];
                __Vilp6 = ((IData)(1U) + __Vilp6);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__649__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__649__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__650__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__650__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__652__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__652__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__654__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__654__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk8__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk8__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__data_out 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk8__DOT__i))));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk8__DOT__i)) 
                       && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk8__DOT__i)]);
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk8__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__data_out 
                        = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk8__DOT__i))) 
                            & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__data_out) 
                           | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                                  << 
                                                  (0x3fU 
                                                   & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk8__DOT__i))));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk8__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__unnamedblk8__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__op 
                = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__data_out));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__data 
                = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__data_out 
                           >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__data 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__op 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__599__op;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__wait_cycles 
                = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__wait_cycles);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__trial_idx 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__trial_idx);
        }
        __Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk2__DOT__sbcs 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__467__data;
        if (VL_UNLIKELY((0U != (7U & ((__Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk2__DOT__sbcs 
                                       >> 0xcU) | (1U 
                                                   & (__Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk2__DOT__sbcs 
                                                      >> 0x16U))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_croc_soc.sv:142: Assertion failed in %Ntb_croc_soc.jtag_write.unnamedblk2: [JTAG] System bus error!\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("/fosic/designs/croc/rtl/tb_croc_soc.sv", 142, "", false);
        }
        while ((0x200000U & __Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk2__DOT__sbcs)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__address = 0x38U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__op = 0U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__trial_idx = 0U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__wait_cycles = 8U;
            if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__trial_idx)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__658__data 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__658__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__658__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__658__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__658__unnamedblk2__DOT__i)] 
                        = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                 >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__658__unnamedblk2__DOT__i)));
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__658__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__658__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__659__opcode = 0x10U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__659__opcode))) {
                        goto __Vlabel15;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__659__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__659__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__659__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__659__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__659__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__659__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__659__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__659__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__659__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__659__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__660__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__660__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__662__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__662__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__664__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__664__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__666__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__666__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__668__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__672__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__672__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__674__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__674__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__659__opcode;
                    __Vlabel15: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__677__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__677__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__679__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__679__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__681__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__681__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[5U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [5U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[6U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [6U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[7U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [7U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[8U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [8U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[9U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [9U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0xaU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xaU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0xbU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xbU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0xcU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xcU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0xdU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xdU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0xeU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xeU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0xfU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xfU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0x10U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x10U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0x11U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x11U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0x12U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x12U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0x13U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x13U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0x14U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x14U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0x15U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x15U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0x16U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x16U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0x17U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x17U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0x18U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x18U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0x19U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x19U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0x1aU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1aU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0x1bU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1bU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0x1cU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1cU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0x1dU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1dU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0x1eU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1eU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata[0x1fU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1fU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__unnamedblk3__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__unnamedblk3__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         98);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__wdata
                        [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__unnamedblk3__DOT__i)];
                    if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__unnamedblk3__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__unnamedblk3__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__683__unnamedblk3__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__687__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__687__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__688__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__688__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__690__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__690__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__692__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__692__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__wait_cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__address 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__address;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__data_out = 0ULL;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__write_data_packed 
                = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__address)))) 
                           << 0x22U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk6__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk6__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk6__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk6__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk6__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__695__opcode = 0x11U;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__695__opcode))) {
                    goto __Vlabel16;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__695__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__695__unnamedblk1__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__695__unnamedblk1__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__695__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__695__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__695__unnamedblk1__DOT__i))));
                    if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__695__unnamedblk1__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__695__unnamedblk1__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__695__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__695__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__696__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__696__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__698__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__698__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__700__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__700__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__702__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__702__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__704__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__708__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__708__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__710__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__710__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__695__opcode;
                __Vlabel16: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__713__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__713__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__715__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__715__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__717__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__717__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__719__tms_last = 1U;
            IData/*31:0*/ __Vilp7;
            __Vilp7 = 0U;
            while ((__Vilp7 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__719__wdata[__Vilp7] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp7];
                __Vilp7 = ((IData)(1U) + __Vilp7);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__719__unnamedblk4__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__719__unnamedblk4__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     107);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__719__unnamedblk4__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__719__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__719__unnamedblk4__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__719__unnamedblk4__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__719__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__719__unnamedblk4__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__719__unnamedblk4__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__723__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__723__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__724__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__724__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__726__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__726__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__728__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__728__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__730__cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__730__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__730__cycles;
            while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__730__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__730__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__730__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                       - (IData)(1U));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__735__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__735__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__737__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__737__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__739__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__739__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__write_data_packed 
                = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__address)))) 
                   << 0x22U);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk7__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk7__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk7__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk7__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk7__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk7__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk7__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk7__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk7__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__tms_last = 1U;
            IData/*31:0*/ __Vilp8;
            __Vilp8 = 0U;
            while ((__Vilp8 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__wdata[__Vilp8] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp8];
                __Vilp8 = ((IData)(1U) + __Vilp8);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__unnamedblk6__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     129);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__unnamedblk6__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__unnamedblk6__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__rdata
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__unnamedblk6__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                }
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__unnamedblk6__DOT__i);
            }
            IData/*31:0*/ __Vilp9;
            __Vilp9 = 0U;
            while ((__Vilp9 <= 0x28U)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp9] 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__741__rdata
                    [__Vilp9];
                __Vilp9 = ((IData)(1U) + __Vilp9);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__744__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__744__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__745__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__745__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__747__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__747__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__749__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__749__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk8__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk8__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__data_out 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk8__DOT__i))));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk8__DOT__i)) 
                       && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk8__DOT__i)]);
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk8__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__data_out 
                        = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk8__DOT__i))) 
                            & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__data_out) 
                           | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                                  << 
                                                  (0x3fU 
                                                   & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk8__DOT__i))));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk8__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__unnamedblk8__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__op 
                = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__data_out));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__data 
                = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__data_out 
                           >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__data 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__op 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__694__op;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__wait_cycles 
                = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__wait_cycles);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__trial_idx 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__trial_idx);
            while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__op))) {
                if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__trial_idx)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__752__data 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__752__data;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__752__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__752__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__752__unnamedblk2__DOT__i)] 
                            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                     >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__752__unnamedblk2__DOT__i)));
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__752__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__752__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__753__opcode = 0x10U;
                    {
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__753__opcode))) {
                            goto __Vlabel17;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__753__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__753__unnamedblk1__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__753__unnamedblk1__DOT__i)];
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__753__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__753__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__753__unnamedblk1__DOT__i))));
                            if (VL_LIKELY((4U >= (7U 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__753__unnamedblk1__DOT__i)))) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__753__unnamedblk1__DOT__i)] 
                                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                            }
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__753__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__753__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__754__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__754__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__756__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__756__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__758__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__758__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__760__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__760__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__wdata[0U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [0U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__wdata[1U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [1U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__wdata[2U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [2U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__wdata[3U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [3U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__wdata[4U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [4U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__tms_last;
                            }
                            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 153);
                            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                                "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__762__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__766__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__766__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__768__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__768__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__753__opcode;
                        __Vlabel17: ;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__771__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__771__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__773__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__773__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__775__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__775__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[5U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [5U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[6U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [6U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[7U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [7U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[8U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [8U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[9U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [9U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0xaU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xaU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0xbU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xbU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0xcU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xcU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0xdU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xdU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0xeU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xeU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0xfU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xfU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0x10U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x10U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0x11U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x11U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0x12U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x12U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0x13U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x13U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0x14U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x14U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0x15U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x15U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0x16U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x16U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0x17U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x17U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0x18U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x18U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0x19U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x19U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0x1aU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1aU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0x1bU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1bU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0x1cU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1cU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0x1dU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1dU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0x1eU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1eU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata[0x1fU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1fU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__unnamedblk3__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__unnamedblk3__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             98);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__wdata
                            [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__unnamedblk3__DOT__i)];
                        if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__unnamedblk3__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__unnamedblk3__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__777__unnamedblk3__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__781__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__781__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__782__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__782__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__784__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__784__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__786__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__786__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__wait_cycles 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__wait_cycles;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__address 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__address;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__data_out = 0ULL;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__write_data_packed 
                    = (1ULL | ((QData)((IData)((0x7fU 
                                                & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__address)))) 
                               << 0x22U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk6__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk6__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__write_data_packed 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk6__DOT__i)))));
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk6__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk6__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk6__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__789__opcode = 0x11U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__789__opcode))) {
                        goto __Vlabel18;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__789__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__789__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__789__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__789__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__789__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__789__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__789__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__789__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__789__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__789__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__790__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__790__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__792__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__792__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__794__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__794__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__796__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__796__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__798__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__802__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__802__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__804__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__804__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__789__opcode;
                    __Vlabel18: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__807__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__807__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__809__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__809__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__811__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__811__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__813__tms_last = 1U;
                IData/*31:0*/ __Vilp10;
                __Vilp10 = 0U;
                while ((__Vilp10 <= 0x28U)) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__813__wdata[__Vilp10] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [__Vilp10];
                    __Vilp10 = ((IData)(1U) + __Vilp10);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__813__unnamedblk4__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__813__unnamedblk4__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         107);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__813__unnamedblk4__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__813__wdata
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__813__unnamedblk4__DOT__i)]);
                    if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__813__unnamedblk4__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__813__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__813__unnamedblk4__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__813__unnamedblk4__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__817__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__817__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__818__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__818__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__820__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__820__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__822__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__822__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__824__cycles 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__wait_cycles;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__824__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__824__cycles;
                while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__824__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__824__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__824__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                           - (IData)(1U));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__829__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__829__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__831__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__831__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__833__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__833__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__write_data_packed 
                    = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__address)))) 
                       << 0x22U);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk7__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk7__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk7__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk7__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__write_data_packed 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk7__DOT__i)))));
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk7__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk7__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk7__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk7__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__tms_last = 1U;
                IData/*31:0*/ __Vilp11;
                __Vilp11 = 0U;
                while ((__Vilp11 <= 0x28U)) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__wdata[__Vilp11] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [__Vilp11];
                    __Vilp11 = ((IData)(1U) + __Vilp11);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__unnamedblk6__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         129);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__unnamedblk6__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__wdata
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__unnamedblk6__DOT__i)]);
                    if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__unnamedblk6__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__rdata
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__unnamedblk6__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__unnamedblk6__DOT__i)))) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__unnamedblk6__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                    }
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__unnamedblk6__DOT__i);
                }
                IData/*31:0*/ __Vilp12;
                __Vilp12 = 0U;
                while ((__Vilp12 <= 0x28U)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp12] 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__835__rdata
                        [__Vilp12];
                    __Vilp12 = ((IData)(1U) + __Vilp12);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__838__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__838__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__839__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__839__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__841__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__841__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__843__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__843__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk8__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk8__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__data_out 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk8__DOT__i))));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk8__DOT__i)) 
                           && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk8__DOT__i)]);
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk8__DOT__i)))) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__data_out 
                            = (((~ (1ULL << (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk8__DOT__i))) 
                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__data_out) 
                               | (0x1ffffffffffULL 
                                  & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                     << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk8__DOT__i))));
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk8__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__unnamedblk8__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__op 
                    = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__data_out));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__data 
                    = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__data_out 
                               >> 2U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__data 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__op 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__788__op;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__wait_cycles 
                    = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__wait_cycles);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__trial_idx 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__trial_idx);
            }
            __Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk2__DOT__sbcs 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__656__data;
            if (VL_UNLIKELY((0U != (7U & ((__Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk2__DOT__sbcs 
                                           >> 0xcU) 
                                          | (1U & (__Vtask_tb_croc_soc__DOT__jtag_write__52__unnamedblk2__DOT__sbcs 
                                                   >> 0x16U))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_croc_soc.sv:142: Assertion failed in %Ntb_croc_soc.jtag_write.unnamedblk2: [JTAG] System bus error!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("/fosic/designs/croc/rtl/tb_croc_soc.sv", 142, "", false);
            }
        }
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__address = 0x10U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__op = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles = 8U;
    if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx)) {
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__data 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__data;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i)] 
                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                         >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i)));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__847__unnamedblk2__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__opcode = 0x10U;
        {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__opcode))) {
                goto __Vlabel19;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i)) 
                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__opcode) 
                                 >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i))));
                if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__unnamedblk1__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__849__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__849__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__851__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__851__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__853__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__853__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__855__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__855__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__unnamedblk2__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__unnamedblk2__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__wdata
                       [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__unnamedblk2__DOT__i)]);
                if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__857__unnamedblk2__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__861__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__861__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__863__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__863__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__848__opcode;
            __Vlabel19: ;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__866__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__866__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__868__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__868__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__870__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__870__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[5U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [5U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[6U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [6U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[7U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [7U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[8U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [8U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[9U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [9U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0xaU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xaU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0xbU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xbU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0xcU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xcU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0xdU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xdU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0xeU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xeU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0xfU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0xfU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x10U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x10U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x11U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x11U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x12U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x12U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x13U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x13U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x14U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x14U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x15U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x15U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x16U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x16U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x17U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x17U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x18U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x18U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x19U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x19U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x1aU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1aU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x1bU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1bU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x1cU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1cU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x1dU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1dU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x1eU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1eU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata[0x1fU] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
            [0x1fU];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i = 0U;
        while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 98);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__wdata
                [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i)];
            if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__tms_last;
            }
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__872__unnamedblk3__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__876__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__876__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__877__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__877__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__879__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__879__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__881__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__881__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__wait_cycles 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__address 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out = 0ULL;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
        = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__address)))) 
                   << 0x22U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i = 0U;
    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
            [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i)];
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
            = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i)) 
               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                                 >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i)))));
        if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i)))) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i)] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk6__DOT__i);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__opcode = 0x11U;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__opcode))) {
            goto __Vlabel20;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i)) 
                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__opcode) 
                             >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i))));
            if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__unnamedblk1__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__885__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__885__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__887__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__887__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__889__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__889__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__891__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__891__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__unnamedblk2__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__unnamedblk2__DOT__i)) 
                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__wdata
                   [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__unnamedblk2__DOT__i)]);
            if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__unnamedblk2__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__tms_last;
            }
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__unnamedblk2__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__893__unnamedblk2__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__897__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__897__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__899__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__899__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__884__opcode;
        __Vlabel20: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__902__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__902__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__904__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__904__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__906__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__906__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__tms_last = 1U;
    IData/*31:0*/ __Vilp13;
    __Vilp13 = 0U;
    while ((__Vilp13 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata[__Vilp13] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
            [__Vilp13];
        __Vilp13 = ((IData)(1U) + __Vilp13);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i)) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = ((0x28U 
                                                   >= 
                                                   (0x3fU 
                                                    & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i)) 
                                                  && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__wdata
                                                  [
                                                  (0x3fU 
                                                   & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i)]);
        if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__tms_last;
        }
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__908__unnamedblk4__DOT__i);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__912__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__912__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__913__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__913__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__915__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__915__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__917__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__917__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__cycles 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__919__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__924__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__924__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__926__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__926__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__928__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__928__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
        = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__address)))) 
           << 0x22U);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i = 0U;
    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
            [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i)];
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
            = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i)) 
               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__write_data_packed 
                                 >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i)))));
        if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i)))) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i)] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk7__DOT__i);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__tms_last = 1U;
    IData/*31:0*/ __Vilp14;
    __Vilp14 = 0U;
    while ((__Vilp14 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata[__Vilp14] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
            [__Vilp14];
        __Vilp14 = ((IData)(1U) + __Vilp14);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i = 0U;
    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i)) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             129);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = ((0x28U 
                                                   >= 
                                                   (0x3fU 
                                                    & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i)) 
                                                  && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__wdata
                                                  [
                                                  (0x3fU 
                                                   & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i)]);
        if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__tms_last;
        }
        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             153);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata
            [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i)];
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
        if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i)))) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i)] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
        }
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__unnamedblk6__DOT__i);
    }
    IData/*31:0*/ __Vilp15;
    __Vilp15 = 0U;
    while ((__Vilp15 <= 0x28U)) {
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp15] 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__930__rdata
            [__Vilp15];
        __Vilp15 = ((IData)(1U) + __Vilp15);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__933__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__933__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__934__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__934__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__936__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__936__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__938__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__938__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i = 0U;
    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
                             >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i))));
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
            = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i)) 
               && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
               [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i)]);
        if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i)))) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
                = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i))) 
                    & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out) 
                   | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                          << (0x3fU 
                                              & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i))));
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__unnamedblk8__DOT__i);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__op 
        = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data 
        = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data_out 
                   >> 2U));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__data 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__op 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__883__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles 
        = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx 
        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx);
    while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__op))) {
        if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__data 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i)] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i)));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__941__unnamedblk2__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__opcode = 0x10U;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__opcode))) {
                    goto __Vlabel21;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i))));
                    if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__943__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__943__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__945__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__945__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__947__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__947__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__949__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__949__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__951__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__955__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__955__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__957__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__957__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__942__opcode;
                __Vlabel21: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__960__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__960__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__962__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__962__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__964__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__964__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[5U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [5U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[6U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [6U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[7U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [7U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[8U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [8U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[9U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [9U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0xaU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xaU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0xbU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xbU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0xcU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xcU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0xdU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xdU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0xeU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xeU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0xfU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xfU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x10U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x10U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x11U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x11U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x12U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x12U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x13U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x13U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x14U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x14U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x15U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x15U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x16U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x16U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x17U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x17U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x18U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x18U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x19U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x19U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x1aU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1aU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x1bU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1bU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x1cU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1cU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x1dU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1dU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x1eU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1eU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata[0x1fU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1fU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i = 0U;
            while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__wdata
                    [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i)];
                if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__966__unnamedblk3__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__970__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__970__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__971__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__971__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__973__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__973__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__975__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__975__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__wait_cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__address 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__address;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out = 0ULL;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
            = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__address)))) 
                       << 0x22U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i)) 
                   && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i)))));
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk6__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__opcode = 0x11U;
        {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__opcode))) {
                goto __Vlabel22;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i)) 
                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__opcode) 
                                 >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i))));
                if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__unnamedblk1__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__979__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__979__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__981__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__981__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__983__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__983__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__985__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__985__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__unnamedblk2__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__unnamedblk2__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__wdata
                       [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__unnamedblk2__DOT__i)]);
                if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__987__unnamedblk2__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__991__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__991__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__993__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__993__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__978__opcode;
            __Vlabel22: ;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__996__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__996__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__998__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__998__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1000__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1000__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__tms_last = 1U;
        IData/*31:0*/ __Vilp16;
        __Vilp16 = 0U;
        while ((__Vilp16 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata[__Vilp16] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp16];
            __Vilp16 = ((IData)(1U) + __Vilp16);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i)) 
                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__wdata
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i)]);
            if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__tms_last;
            }
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__1002__unnamedblk4__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1006__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1006__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1007__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1007__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1009__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1009__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1011__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1011__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__cycles;
        while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__1013__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1018__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1018__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1020__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1020__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1022__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1022__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
            = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__address)))) 
               << 0x22U);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i)) 
                   && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__write_data_packed 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i)))));
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk7__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__tms_last = 1U;
        IData/*31:0*/ __Vilp17;
        __Vilp17 = 0U;
        while ((__Vilp17 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata[__Vilp17] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp17];
            __Vilp17 = ((IData)(1U) + __Vilp17);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i)) 
                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__wdata
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i)]);
            if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__tms_last;
            }
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i)))) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
            }
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__unnamedblk6__DOT__i);
        }
        IData/*31:0*/ __Vilp18;
        __Vilp18 = 0U;
        while ((__Vilp18 <= 0x28U)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp18] 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__1024__rdata
                [__Vilp18];
            __Vilp18 = ((IData)(1U) + __Vilp18);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1027__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__1027__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1028__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1028__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1030__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1030__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1032__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__1032__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
                                 >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i))));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i)) 
                   && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i)]);
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i)))) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
                    = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i))) 
                        & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out) 
                       | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                              << (0x3fU 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i))));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__unnamedblk8__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__op 
            = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data 
            = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data_out 
                       >> 2U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__data 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__data;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__op 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__977__op;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles 
            = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__wait_cycles);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__trial_idx);
    }
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_init__16__dmcontrol 
        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__845__data;
}
