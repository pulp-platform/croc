// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc__Syms.h"
#include "Vtb_croc_soc___024root.h"

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__8(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__8\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk1__DOT__acs;
    __Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk1__DOT__acs = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__trial_idx;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3642__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3642__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3642__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3642__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3643__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3643__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3643__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3643__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3644__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3644__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3646__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3646__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3648__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3648__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3650__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3650__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3656__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3656__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3658__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3658__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3661__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3661__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3663__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3663__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3665__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3665__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3671__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3671__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3672__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3672__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3674__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3674__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3676__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3676__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3679__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3679__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3679__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3679__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3680__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3680__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3682__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3682__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3684__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3684__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3686__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3686__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3692__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3692__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3694__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3694__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3697__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3697__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3699__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3699__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3701__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3701__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3703__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3703__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3703__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3703__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3703__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3703__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3707__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3707__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3708__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3708__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3710__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3710__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3712__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3712__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3714__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3714__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3714__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3714__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3719__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3719__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3721__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3721__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3723__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3723__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3728__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3728__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3729__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3729__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3731__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3731__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3733__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3733__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3736__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3736__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3736__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3736__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3737__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3737__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3737__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3737__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3738__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3738__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3740__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3740__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3742__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3742__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3744__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3744__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3750__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3750__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3752__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3752__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3755__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3755__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3757__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3757__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3759__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3759__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3765__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3765__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3766__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3766__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3768__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3768__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3770__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3770__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3773__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3773__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3773__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3773__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3774__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3774__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3776__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3776__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3778__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3778__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3780__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3780__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3786__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3786__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3788__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3788__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3791__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3791__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3793__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3793__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3795__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3795__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3797__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3797__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3797__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3797__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3797__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3797__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3801__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3801__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3802__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3802__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3804__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3804__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3806__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3806__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3808__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3808__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3808__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3808__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3813__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3813__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3815__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3815__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3817__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3817__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3822__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3822__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3823__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3823__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3825__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3825__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3827__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3827__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__trial_idx;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3831__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3831__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3831__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3831__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3832__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3832__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3832__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3832__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3833__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3833__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3835__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3835__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3837__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3837__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3839__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3839__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3845__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3845__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3847__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3847__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3850__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3850__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3852__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3852__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3854__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3854__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3860__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3860__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3861__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3861__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3863__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3863__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3865__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3865__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3868__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3868__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3868__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3868__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3869__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3869__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3871__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3871__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3873__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3873__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3875__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3875__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3881__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3881__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3883__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3883__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3886__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3886__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3888__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3888__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3890__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3890__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3892__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3892__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3892__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3892__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3892__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3892__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3896__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3896__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3897__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3897__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3899__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3899__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3901__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3901__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3903__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3903__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3903__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3903__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3908__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3908__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3910__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3910__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3912__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3912__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3917__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3917__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3918__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3918__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3920__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3920__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3922__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3922__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3925__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3925__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3925__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3925__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3926__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3926__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3926__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3926__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3927__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3927__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3929__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3929__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3931__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3931__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3933__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3933__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3939__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3939__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3941__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3941__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3944__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3944__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3946__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3946__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3948__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3948__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3954__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3954__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3955__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3955__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3957__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3957__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3959__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3959__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3962__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3962__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3962__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3962__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3963__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3963__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3965__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3965__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3967__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3967__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3969__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3969__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3975__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3975__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3977__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3977__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3980__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3980__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3982__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3982__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3984__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3984__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3986__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3986__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3986__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3986__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3986__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3986__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3990__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3990__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3991__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3991__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3993__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3993__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3995__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3995__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3997__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3997__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3997__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3997__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4002__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4002__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4004__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4004__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4006__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4006__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4011__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4011__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4012__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4012__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4014__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4014__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4016__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4016__tms_val = 0;
    // Body
    if (vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__3603__wait_cmd) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__address = 0x16U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__op = 0U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__trial_idx = 0U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__wait_cycles = 8U;
        if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__trial_idx)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3642__data 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3642__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3642__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3642__unnamedblk2__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3642__unnamedblk2__DOT__i)] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3642__unnamedblk2__DOT__i)));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3642__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3642__unnamedblk2__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3643__opcode = 0x10U;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3643__opcode))) {
                    goto __Vlabel79;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3643__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3643__unnamedblk1__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3643__unnamedblk1__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3643__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3643__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3643__unnamedblk1__DOT__i))));
                    if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3643__unnamedblk1__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3643__unnamedblk1__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3643__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3643__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3644__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3644__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3646__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3646__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3648__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3648__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3650__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3650__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3652__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3656__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3656__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3658__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3658__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3643__opcode;
                __Vlabel79: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3661__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3661__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3663__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3663__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3665__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3665__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[5U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [5U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[6U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [6U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[7U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [7U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[8U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [8U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[9U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [9U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0xaU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xaU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0xbU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xbU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0xcU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xcU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0xdU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xdU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0xeU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xeU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0xfU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xfU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0x10U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x10U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0x11U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x11U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0x12U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x12U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0x13U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x13U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0x14U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x14U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0x15U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x15U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0x16U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x16U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0x17U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x17U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0x18U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x18U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0x19U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x19U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0x1aU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1aU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0x1bU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1bU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0x1cU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1cU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0x1dU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1dU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0x1eU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1eU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata[0x1fU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1fU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__unnamedblk3__DOT__i = 0U;
            while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__unnamedblk3__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__wdata
                    [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__unnamedblk3__DOT__i)];
                if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__unnamedblk3__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__tms_last;
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__unnamedblk3__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3667__unnamedblk3__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3671__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3671__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3672__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3672__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3674__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3674__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3676__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3676__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__wait_cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__address 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__address;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__data_out = 0ULL;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__write_data_packed 
            = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__address)))) 
                       << 0x22U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk6__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk6__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk6__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk6__DOT__i)) 
                   && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__write_data_packed 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk6__DOT__i)))));
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk6__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk6__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk6__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3679__opcode = 0x11U;
        {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3679__opcode))) {
                goto __Vlabel80;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3679__unnamedblk1__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3679__unnamedblk1__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3679__unnamedblk1__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3679__unnamedblk1__DOT__i)) 
                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3679__opcode) 
                                 >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3679__unnamedblk1__DOT__i))));
                if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3679__unnamedblk1__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3679__unnamedblk1__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3679__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3679__unnamedblk1__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3680__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3680__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3682__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3682__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3684__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3684__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3686__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3686__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__unnamedblk2__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__unnamedblk2__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__wdata
                       [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__unnamedblk2__DOT__i)]);
                if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__tms_last;
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3688__unnamedblk2__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3692__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3692__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3694__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3694__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3679__opcode;
            __Vlabel80: ;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3697__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3697__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3699__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3699__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3701__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3701__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3703__tms_last = 1U;
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3703__wdata[__Vilp1] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3703__unnamedblk4__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3703__unnamedblk4__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3703__unnamedblk4__DOT__i)) 
                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3703__wdata
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3703__unnamedblk4__DOT__i)]);
            if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3703__unnamedblk4__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3703__tms_last;
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3703__unnamedblk4__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3703__unnamedblk4__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3707__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3707__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3708__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3708__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3710__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3710__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3712__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3712__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3714__cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3714__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3714__cycles;
        while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3714__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3714__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3714__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3719__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3719__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3721__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3721__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3723__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3723__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__write_data_packed 
            = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__address)))) 
               << 0x22U);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk7__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk7__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk7__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk7__DOT__i)) 
                   && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__write_data_packed 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk7__DOT__i)))));
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk7__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk7__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk7__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk7__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__tms_last = 1U;
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__wdata[__Vilp2] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__unnamedblk6__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__unnamedblk6__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__unnamedblk6__DOT__i)) 
                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__wdata
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__unnamedblk6__DOT__i)]);
            if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__unnamedblk6__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__tms_last;
            }
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__rdata
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__unnamedblk6__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__unnamedblk6__DOT__i)))) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__unnamedblk6__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
            }
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__unnamedblk6__DOT__i);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x28U)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp3] 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3725__rdata
                [__Vilp3];
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3728__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3728__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3729__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3729__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3731__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3731__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3733__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3733__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk8__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk8__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__data_out 
                                 >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk8__DOT__i))));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk8__DOT__i)) 
                   && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk8__DOT__i)]);
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk8__DOT__i)))) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__data_out 
                    = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk8__DOT__i))) 
                        & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__data_out) 
                       | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                              << (0x3fU 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk8__DOT__i))));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk8__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__unnamedblk8__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__op 
            = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__data_out));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__data 
            = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__data_out 
                       >> 2U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__data 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__data;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__op 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3678__op;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__wait_cycles 
            = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__wait_cycles);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__trial_idx 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__trial_idx);
        while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__op))) {
            if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__trial_idx)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3736__data 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3736__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3736__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3736__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3736__unnamedblk2__DOT__i)] 
                        = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                 >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3736__unnamedblk2__DOT__i)));
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3736__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3736__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3737__opcode = 0x10U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3737__opcode))) {
                        goto __Vlabel81;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3737__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3737__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3737__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3737__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3737__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3737__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3737__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3737__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3737__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3737__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3738__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3738__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3740__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3740__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3742__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3742__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3744__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3744__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3746__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3750__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3750__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3752__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3752__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3737__opcode;
                    __Vlabel81: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3755__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3755__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3757__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3757__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3759__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3759__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[5U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [5U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[6U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [6U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[7U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [7U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[8U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [8U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[9U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [9U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0xaU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xaU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0xbU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xbU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0xcU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xcU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0xdU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xdU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0xeU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xeU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0xfU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xfU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0x10U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x10U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0x11U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x11U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0x12U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x12U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0x13U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x13U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0x14U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x14U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0x15U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x15U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0x16U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x16U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0x17U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x17U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0x18U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x18U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0x19U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x19U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0x1aU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1aU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0x1bU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1bU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0x1cU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1cU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0x1dU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1dU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0x1eU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1eU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata[0x1fU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1fU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__unnamedblk3__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__unnamedblk3__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         98);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__wdata
                        [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__unnamedblk3__DOT__i)];
                    if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__unnamedblk3__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__unnamedblk3__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3761__unnamedblk3__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3765__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3765__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3766__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3766__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3768__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3768__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3770__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3770__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__wait_cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__address 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__address;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__data_out = 0ULL;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__write_data_packed 
                = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__address)))) 
                           << 0x22U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk6__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk6__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk6__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk6__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk6__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3773__opcode = 0x11U;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3773__opcode))) {
                    goto __Vlabel82;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3773__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3773__unnamedblk1__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3773__unnamedblk1__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3773__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3773__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3773__unnamedblk1__DOT__i))));
                    if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3773__unnamedblk1__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3773__unnamedblk1__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3773__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3773__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3774__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3774__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3776__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3776__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3778__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3778__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3780__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3780__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3782__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3786__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3786__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3788__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3788__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3773__opcode;
                __Vlabel82: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3791__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3791__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3793__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3793__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3795__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3795__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3797__tms_last = 1U;
            IData/*31:0*/ __Vilp4;
            __Vilp4 = 0U;
            while ((__Vilp4 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3797__wdata[__Vilp4] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp4];
                __Vilp4 = ((IData)(1U) + __Vilp4);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3797__unnamedblk4__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3797__unnamedblk4__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     107);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3797__unnamedblk4__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3797__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3797__unnamedblk4__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3797__unnamedblk4__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3797__tms_last;
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3797__unnamedblk4__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3797__unnamedblk4__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3801__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3801__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3802__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3802__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3804__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3804__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3806__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3806__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3808__cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3808__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3808__cycles;
            while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3808__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3808__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3808__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                       - (IData)(1U));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3813__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3813__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3815__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3815__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3817__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3817__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__write_data_packed 
                = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__address)))) 
                   << 0x22U);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk7__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk7__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk7__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk7__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk7__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk7__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk7__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk7__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk7__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__tms_last = 1U;
            IData/*31:0*/ __Vilp5;
            __Vilp5 = 0U;
            while ((__Vilp5 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__wdata[__Vilp5] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp5];
                __Vilp5 = ((IData)(1U) + __Vilp5);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__unnamedblk6__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     129);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__unnamedblk6__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__unnamedblk6__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__rdata
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__unnamedblk6__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                }
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__unnamedblk6__DOT__i);
            }
            IData/*31:0*/ __Vilp6;
            __Vilp6 = 0U;
            while ((__Vilp6 <= 0x28U)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp6] 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3819__rdata
                    [__Vilp6];
                __Vilp6 = ((IData)(1U) + __Vilp6);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3822__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3822__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3823__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3823__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3825__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3825__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3827__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3827__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk8__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk8__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__data_out 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk8__DOT__i))));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk8__DOT__i)) 
                       && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk8__DOT__i)]);
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk8__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__data_out 
                        = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk8__DOT__i))) 
                            & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__data_out) 
                           | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                                  << 
                                                  (0x3fU 
                                                   & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk8__DOT__i))));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk8__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__unnamedblk8__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__op 
                = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__data_out));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__data 
                = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__data_out 
                           >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__data 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__op 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3772__op;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__wait_cycles 
                = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__wait_cycles);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__trial_idx 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__trial_idx);
        }
        __Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk1__DOT__acs 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3640__data;
        if (VL_UNLIKELY((0U != (7U & (__Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk1__DOT__acs 
                                      >> 8U))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_croc_soc.sv:135: Assertion failed in %Ntb_croc_soc.jtag_write.unnamedblk1: [JTAG] Abstract command error!\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("/fosic/designs/croc/rtl/tb_croc_soc.sv", 135, "", false);
        }
        while ((0x1000U & __Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk1__DOT__acs)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__address = 0x16U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__op = 0U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__trial_idx = 0U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__wait_cycles = 8U;
            if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__trial_idx)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3831__data 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3831__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3831__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3831__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3831__unnamedblk2__DOT__i)] 
                        = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                 >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3831__unnamedblk2__DOT__i)));
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3831__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3831__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3832__opcode = 0x10U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3832__opcode))) {
                        goto __Vlabel83;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3832__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3832__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3832__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3832__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3832__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3832__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3832__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3832__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3832__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3832__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3833__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3833__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3835__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3835__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3837__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3837__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3839__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3839__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3841__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3845__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3845__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3847__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3847__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3832__opcode;
                    __Vlabel83: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3850__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3850__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3852__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3852__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3854__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3854__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[5U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [5U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[6U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [6U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[7U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [7U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[8U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [8U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[9U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [9U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0xaU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xaU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0xbU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xbU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0xcU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xcU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0xdU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xdU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0xeU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xeU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0xfU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xfU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0x10U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x10U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0x11U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x11U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0x12U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x12U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0x13U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x13U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0x14U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x14U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0x15U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x15U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0x16U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x16U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0x17U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x17U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0x18U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x18U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0x19U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x19U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0x1aU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1aU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0x1bU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1bU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0x1cU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1cU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0x1dU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1dU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0x1eU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1eU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata[0x1fU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1fU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__unnamedblk3__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__unnamedblk3__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         98);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__wdata
                        [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__unnamedblk3__DOT__i)];
                    if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__unnamedblk3__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__unnamedblk3__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3856__unnamedblk3__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3860__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3860__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3861__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3861__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3863__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3863__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3865__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3865__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__wait_cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__address 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__address;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__data_out = 0ULL;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__write_data_packed 
                = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__address)))) 
                           << 0x22U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk6__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk6__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk6__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk6__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk6__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3868__opcode = 0x11U;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3868__opcode))) {
                    goto __Vlabel84;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3868__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3868__unnamedblk1__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3868__unnamedblk1__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3868__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3868__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3868__unnamedblk1__DOT__i))));
                    if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3868__unnamedblk1__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3868__unnamedblk1__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3868__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3868__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3869__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3869__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3871__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3871__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3873__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3873__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3875__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3875__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3877__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3881__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3881__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3883__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3883__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3868__opcode;
                __Vlabel84: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3886__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3886__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3888__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3888__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3890__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3890__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3892__tms_last = 1U;
            IData/*31:0*/ __Vilp7;
            __Vilp7 = 0U;
            while ((__Vilp7 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3892__wdata[__Vilp7] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp7];
                __Vilp7 = ((IData)(1U) + __Vilp7);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3892__unnamedblk4__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3892__unnamedblk4__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     107);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3892__unnamedblk4__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3892__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3892__unnamedblk4__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3892__unnamedblk4__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3892__tms_last;
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3892__unnamedblk4__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3892__unnamedblk4__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3896__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3896__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3897__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3897__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3899__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3899__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3901__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3901__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3903__cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3903__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3903__cycles;
            while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3903__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3903__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3903__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                       - (IData)(1U));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3908__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3908__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3910__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3910__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3912__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3912__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__write_data_packed 
                = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__address)))) 
                   << 0x22U);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk7__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk7__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk7__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk7__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk7__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk7__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk7__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk7__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk7__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__tms_last = 1U;
            IData/*31:0*/ __Vilp8;
            __Vilp8 = 0U;
            while ((__Vilp8 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__wdata[__Vilp8] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp8];
                __Vilp8 = ((IData)(1U) + __Vilp8);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__unnamedblk6__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     129);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__unnamedblk6__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__unnamedblk6__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__rdata
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__unnamedblk6__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                }
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__unnamedblk6__DOT__i);
            }
            IData/*31:0*/ __Vilp9;
            __Vilp9 = 0U;
            while ((__Vilp9 <= 0x28U)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp9] 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__3914__rdata
                    [__Vilp9];
                __Vilp9 = ((IData)(1U) + __Vilp9);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3917__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3917__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3918__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3918__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3920__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3920__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3922__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3922__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk8__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk8__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__data_out 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk8__DOT__i))));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk8__DOT__i)) 
                       && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk8__DOT__i)]);
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk8__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__data_out 
                        = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk8__DOT__i))) 
                            & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__data_out) 
                           | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                                  << 
                                                  (0x3fU 
                                                   & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk8__DOT__i))));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk8__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__unnamedblk8__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__op 
                = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__data_out));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__data 
                = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__data_out 
                           >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__data 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__op 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3867__op;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__wait_cycles 
                = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__wait_cycles);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__trial_idx 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__trial_idx);
            while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__op))) {
                if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__trial_idx)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3925__data 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3925__data;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3925__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3925__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3925__unnamedblk2__DOT__i)] 
                            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                     >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3925__unnamedblk2__DOT__i)));
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3925__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__3925__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3926__opcode = 0x10U;
                    {
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3926__opcode))) {
                            goto __Vlabel85;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3926__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3926__unnamedblk1__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3926__unnamedblk1__DOT__i)];
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3926__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3926__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3926__unnamedblk1__DOT__i))));
                            if (VL_LIKELY((4U >= (7U 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3926__unnamedblk1__DOT__i)))) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3926__unnamedblk1__DOT__i)] 
                                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                            }
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3926__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3926__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3927__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3927__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3929__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3929__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3931__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3931__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3933__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3933__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__wdata[0U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [0U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__wdata[1U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [1U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__wdata[2U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [2U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__wdata[3U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [3U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__wdata[4U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [4U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3935__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3939__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3939__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3941__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3941__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3926__opcode;
                        __Vlabel85: ;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3944__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3944__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3946__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3946__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3948__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3948__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[5U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [5U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[6U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [6U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[7U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [7U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[8U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [8U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[9U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [9U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0xaU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xaU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0xbU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xbU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0xcU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xcU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0xdU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xdU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0xeU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xeU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0xfU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xfU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0x10U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x10U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0x11U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x11U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0x12U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x12U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0x13U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x13U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0x14U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x14U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0x15U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x15U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0x16U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x16U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0x17U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x17U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0x18U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x18U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0x19U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x19U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0x1aU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1aU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0x1bU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1bU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0x1cU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1cU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0x1dU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1dU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0x1eU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1eU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata[0x1fU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1fU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__unnamedblk3__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__unnamedblk3__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             98);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__wdata
                            [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__unnamedblk3__DOT__i)];
                        if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__unnamedblk3__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__unnamedblk3__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__3950__unnamedblk3__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3954__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3954__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3955__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3955__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3957__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3957__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3959__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3959__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__wait_cycles 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__wait_cycles;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__address 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__address;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__data_out = 0ULL;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__write_data_packed 
                    = (1ULL | ((QData)((IData)((0x7fU 
                                                & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__address)))) 
                               << 0x22U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk6__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk6__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__write_data_packed 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk6__DOT__i)))));
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk6__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk6__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk6__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3962__opcode = 0x11U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3962__opcode))) {
                        goto __Vlabel86;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3962__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3962__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3962__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3962__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3962__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3962__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3962__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3962__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3962__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3962__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3963__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3963__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3965__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3965__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3967__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3967__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3969__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3969__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__3971__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3975__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3975__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3977__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3977__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__3962__opcode;
                    __Vlabel86: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3980__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3980__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3982__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3982__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3984__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3984__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3986__tms_last = 1U;
                IData/*31:0*/ __Vilp10;
                __Vilp10 = 0U;
                while ((__Vilp10 <= 0x28U)) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3986__wdata[__Vilp10] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [__Vilp10];
                    __Vilp10 = ((IData)(1U) + __Vilp10);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3986__unnamedblk4__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3986__unnamedblk4__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         107);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3986__unnamedblk4__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3986__wdata
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3986__unnamedblk4__DOT__i)]);
                    if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3986__unnamedblk4__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3986__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3986__unnamedblk4__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__3986__unnamedblk4__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3990__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__3990__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3991__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3991__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3993__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3993__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3995__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__3995__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3997__cycles 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__wait_cycles;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3997__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3997__cycles;
                while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3997__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3997__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__3997__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                           - (IData)(1U));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4002__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4002__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4004__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4004__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4006__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4006__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__write_data_packed 
                    = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__address)))) 
                       << 0x22U);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk7__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk7__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk7__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk7__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__write_data_packed 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk7__DOT__i)))));
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk7__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk7__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk7__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk7__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__tms_last = 1U;
                IData/*31:0*/ __Vilp11;
                __Vilp11 = 0U;
                while ((__Vilp11 <= 0x28U)) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__wdata[__Vilp11] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [__Vilp11];
                    __Vilp11 = ((IData)(1U) + __Vilp11);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__unnamedblk6__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         129);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__unnamedblk6__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__wdata
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__unnamedblk6__DOT__i)]);
                    if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__unnamedblk6__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__rdata
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__unnamedblk6__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__unnamedblk6__DOT__i)))) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__unnamedblk6__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                    }
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__unnamedblk6__DOT__i);
                }
                IData/*31:0*/ __Vilp12;
                __Vilp12 = 0U;
                while ((__Vilp12 <= 0x28U)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp12] 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4008__rdata
                        [__Vilp12];
                    __Vilp12 = ((IData)(1U) + __Vilp12);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4011__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4011__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4012__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4012__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4014__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4014__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4016__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4016__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk8__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk8__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__data_out 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk8__DOT__i))));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk8__DOT__i)) 
                           && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk8__DOT__i)]);
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk8__DOT__i)))) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__data_out 
                            = (((~ (1ULL << (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk8__DOT__i))) 
                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__data_out) 
                               | (0x1ffffffffffULL 
                                  & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                     << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk8__DOT__i))));
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk8__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__unnamedblk8__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__op 
                    = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__data_out));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__data 
                    = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__data_out 
                               >> 2U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__data 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__op 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__3961__op;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__wait_cycles 
                    = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__wait_cycles);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__trial_idx 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__trial_idx);
            }
            __Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk1__DOT__acs 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__3829__data;
            if (VL_UNLIKELY((0U != (7U & (__Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk1__DOT__acs 
                                          >> 8U))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_croc_soc.sv:135: Assertion failed in %Ntb_croc_soc.jtag_write.unnamedblk1: [JTAG] Abstract command error!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("/fosic/designs/croc/rtl/tb_croc_soc.sv", 135, "", false);
            }
        }
    }
}

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__9(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__9\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk2__DOT__sbcs;
    __Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk2__DOT__sbcs = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__trial_idx;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4020__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4020__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4020__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4020__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4021__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4021__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4021__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4021__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4022__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4022__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4024__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4024__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4026__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4026__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4028__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4028__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4034__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4034__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4036__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4036__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4039__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4039__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4041__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4041__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4043__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4043__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4049__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4049__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4050__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4050__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4052__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4052__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4054__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4054__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4057__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4057__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4057__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4057__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4058__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4058__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4060__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4060__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4062__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4062__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4064__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4064__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4070__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4070__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4072__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4072__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4075__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4075__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4077__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4077__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4079__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4079__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4081__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4081__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4081__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4081__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4081__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4081__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4085__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4085__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4086__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4086__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4088__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4088__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4090__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4090__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4092__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4092__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4092__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4092__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4097__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4097__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4099__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4099__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4101__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4101__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4106__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4106__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4107__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4107__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4109__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4109__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4111__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4111__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4114__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4114__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4114__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4114__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4115__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4115__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4115__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4115__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4116__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4116__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4118__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4118__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4120__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4120__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4122__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4122__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4128__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4128__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4130__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4130__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4133__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4133__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4135__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4135__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4137__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4137__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4143__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4143__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4144__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4144__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4146__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4146__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4148__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4148__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4151__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4151__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4151__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4151__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4152__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4152__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4154__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4154__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4156__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4156__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4158__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4158__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4164__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4164__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4166__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4166__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4169__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4169__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4171__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4171__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4173__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4173__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4175__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4175__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4175__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4175__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4175__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4175__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4179__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4179__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4180__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4180__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4182__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4182__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4184__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4184__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4186__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4186__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4186__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4186__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4191__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4191__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4193__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4193__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4195__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4195__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4200__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4200__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4201__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4201__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4203__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4203__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4205__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4205__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__trial_idx;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4209__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4209__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4209__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4209__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4210__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4210__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4210__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4210__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4211__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4211__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4213__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4213__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4215__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4215__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4217__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4217__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4223__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4223__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4225__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4225__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4228__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4228__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4230__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4230__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4232__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4232__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4238__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4238__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4239__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4239__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4241__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4241__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4243__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4243__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4246__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4246__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4246__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4246__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4247__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4247__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4249__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4249__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4251__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4251__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4253__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4253__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4259__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4259__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4261__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4261__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4264__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4264__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4266__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4266__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4268__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4268__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4270__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4270__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4270__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4270__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4270__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4270__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4274__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4274__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4275__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4275__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4277__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4277__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4279__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4279__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4281__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4281__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4281__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4281__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4286__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4286__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4288__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4288__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4290__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4290__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4295__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4295__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4296__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4296__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4298__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4298__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4300__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4300__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4303__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4303__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4303__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4303__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4304__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4304__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4304__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4304__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4305__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4305__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4307__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4307__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4309__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4309__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4311__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4311__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4317__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4317__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4319__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4319__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4322__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4322__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4324__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4324__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4326__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4326__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4332__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4332__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4333__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4333__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4335__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4335__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4337__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4337__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4340__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4340__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4340__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4340__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4341__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4341__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4343__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4343__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4345__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4345__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4347__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4347__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4353__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4353__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4355__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4355__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4358__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4358__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4360__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4360__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4362__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4362__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4364__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4364__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4364__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4364__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4364__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4364__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4368__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4368__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4369__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4369__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4371__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4371__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4373__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4373__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4375__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4375__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4375__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4375__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4380__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4380__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4382__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4382__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4384__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4384__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4389__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4389__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4390__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4390__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4392__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4392__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4394__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4394__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__4396__addr;
    __Vtask_tb_croc_soc__DOT__jtag_write__4396__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__4396__data;
    __Vtask_tb_croc_soc__DOT__jtag_write__4396__data = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4399__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4399__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4401__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4401__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4403__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4403__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4405__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4405__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4411__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4411__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4413__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4413__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4416__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4416__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4418__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4418__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4420__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4420__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4426__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4426__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4427__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4427__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4429__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4429__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4431__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4431__tms_val = 0;
    // Body
    if (vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__3603__wait_sba) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__address = 0x38U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__op = 0U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__trial_idx = 0U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__wait_cycles = 8U;
        if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__trial_idx)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4020__data 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4020__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4020__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4020__unnamedblk2__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4020__unnamedblk2__DOT__i)] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4020__unnamedblk2__DOT__i)));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4020__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4020__unnamedblk2__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4021__opcode = 0x10U;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4021__opcode))) {
                    goto __Vlabel87;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4021__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4021__unnamedblk1__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4021__unnamedblk1__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4021__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4021__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4021__unnamedblk1__DOT__i))));
                    if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4021__unnamedblk1__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4021__unnamedblk1__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4021__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4021__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4022__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4022__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4024__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4024__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4026__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4026__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4028__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4028__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4030__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4034__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4034__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4036__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4036__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4021__opcode;
                __Vlabel87: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4039__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4039__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4041__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4041__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4043__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4043__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[5U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [5U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[6U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [6U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[7U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [7U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[8U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [8U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[9U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [9U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0xaU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xaU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0xbU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xbU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0xcU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xcU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0xdU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xdU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0xeU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xeU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0xfU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xfU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0x10U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x10U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0x11U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x11U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0x12U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x12U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0x13U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x13U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0x14U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x14U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0x15U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x15U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0x16U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x16U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0x17U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x17U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0x18U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x18U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0x19U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x19U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0x1aU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1aU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0x1bU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1bU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0x1cU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1cU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0x1dU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1dU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0x1eU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1eU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata[0x1fU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1fU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__unnamedblk3__DOT__i = 0U;
            while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__unnamedblk3__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__wdata
                    [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__unnamedblk3__DOT__i)];
                if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__unnamedblk3__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__tms_last;
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__unnamedblk3__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4045__unnamedblk3__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4049__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4049__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4050__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4050__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4052__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4052__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4054__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4054__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__wait_cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__address 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__address;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__data_out = 0ULL;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__write_data_packed 
            = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__address)))) 
                       << 0x22U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk6__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk6__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk6__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk6__DOT__i)) 
                   && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__write_data_packed 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk6__DOT__i)))));
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk6__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk6__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk6__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4057__opcode = 0x11U;
        {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4057__opcode))) {
                goto __Vlabel88;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4057__unnamedblk1__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4057__unnamedblk1__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4057__unnamedblk1__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4057__unnamedblk1__DOT__i)) 
                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4057__opcode) 
                                 >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4057__unnamedblk1__DOT__i))));
                if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4057__unnamedblk1__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4057__unnamedblk1__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4057__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4057__unnamedblk1__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4058__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4058__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4060__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4060__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4062__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4062__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4064__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4064__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__unnamedblk2__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__unnamedblk2__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__wdata
                       [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__unnamedblk2__DOT__i)]);
                if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__tms_last;
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4066__unnamedblk2__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4070__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4070__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4072__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4072__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4057__opcode;
            __Vlabel88: ;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4075__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4075__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4077__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4077__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4079__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4079__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4081__tms_last = 1U;
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4081__wdata[__Vilp1] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4081__unnamedblk4__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4081__unnamedblk4__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4081__unnamedblk4__DOT__i)) 
                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4081__wdata
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4081__unnamedblk4__DOT__i)]);
            if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4081__unnamedblk4__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4081__tms_last;
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4081__unnamedblk4__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4081__unnamedblk4__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4085__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4085__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4086__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4086__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4088__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4088__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4090__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4090__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4092__cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4092__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4092__cycles;
        while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4092__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4092__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4092__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4097__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4097__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4099__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4099__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4101__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4101__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__write_data_packed 
            = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__address)))) 
               << 0x22U);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk7__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk7__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk7__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk7__DOT__i)) 
                   && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__write_data_packed 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk7__DOT__i)))));
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk7__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk7__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk7__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk7__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__tms_last = 1U;
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__wdata[__Vilp2] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__unnamedblk6__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__unnamedblk6__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__unnamedblk6__DOT__i)) 
                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__wdata
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__unnamedblk6__DOT__i)]);
            if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__unnamedblk6__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__tms_last;
            }
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__rdata
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__unnamedblk6__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__unnamedblk6__DOT__i)))) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__unnamedblk6__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
            }
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__unnamedblk6__DOT__i);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x28U)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp3] 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4103__rdata
                [__Vilp3];
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4106__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4106__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4107__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4107__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4109__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4109__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4111__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4111__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk8__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk8__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__data_out 
                                 >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk8__DOT__i))));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk8__DOT__i)) 
                   && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk8__DOT__i)]);
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk8__DOT__i)))) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__data_out 
                    = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk8__DOT__i))) 
                        & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__data_out) 
                       | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                              << (0x3fU 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk8__DOT__i))));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk8__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__unnamedblk8__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__op 
            = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__data_out));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__data 
            = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__data_out 
                       >> 2U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__data 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__data;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__op 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4056__op;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__wait_cycles 
            = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__wait_cycles);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__trial_idx 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__trial_idx);
        while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__op))) {
            if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__trial_idx)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4114__data 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4114__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4114__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4114__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4114__unnamedblk2__DOT__i)] 
                        = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                 >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4114__unnamedblk2__DOT__i)));
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4114__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4114__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4115__opcode = 0x10U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4115__opcode))) {
                        goto __Vlabel89;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4115__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4115__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4115__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4115__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4115__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4115__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4115__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4115__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4115__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4115__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4116__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4116__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4118__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4118__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4120__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4120__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4122__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4122__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4124__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4128__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4128__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4130__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4130__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4115__opcode;
                    __Vlabel89: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4133__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4133__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4135__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4135__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4137__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4137__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[5U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [5U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[6U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [6U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[7U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [7U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[8U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [8U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[9U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [9U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0xaU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xaU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0xbU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xbU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0xcU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xcU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0xdU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xdU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0xeU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xeU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0xfU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xfU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0x10U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x10U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0x11U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x11U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0x12U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x12U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0x13U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x13U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0x14U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x14U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0x15U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x15U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0x16U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x16U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0x17U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x17U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0x18U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x18U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0x19U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x19U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0x1aU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1aU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0x1bU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1bU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0x1cU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1cU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0x1dU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1dU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0x1eU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1eU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata[0x1fU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1fU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__unnamedblk3__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__unnamedblk3__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         98);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__wdata
                        [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__unnamedblk3__DOT__i)];
                    if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__unnamedblk3__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__unnamedblk3__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4139__unnamedblk3__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4143__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4143__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4144__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4144__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4146__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4146__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4148__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4148__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__wait_cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__address 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__address;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__data_out = 0ULL;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__write_data_packed 
                = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__address)))) 
                           << 0x22U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk6__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk6__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk6__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk6__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk6__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4151__opcode = 0x11U;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4151__opcode))) {
                    goto __Vlabel90;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4151__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4151__unnamedblk1__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4151__unnamedblk1__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4151__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4151__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4151__unnamedblk1__DOT__i))));
                    if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4151__unnamedblk1__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4151__unnamedblk1__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4151__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4151__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4152__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4152__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4154__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4154__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4156__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4156__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4158__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4158__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4160__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4164__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4164__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4166__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4166__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4151__opcode;
                __Vlabel90: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4169__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4169__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4171__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4171__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4173__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4173__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4175__tms_last = 1U;
            IData/*31:0*/ __Vilp4;
            __Vilp4 = 0U;
            while ((__Vilp4 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4175__wdata[__Vilp4] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp4];
                __Vilp4 = ((IData)(1U) + __Vilp4);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4175__unnamedblk4__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4175__unnamedblk4__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     107);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4175__unnamedblk4__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4175__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4175__unnamedblk4__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4175__unnamedblk4__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4175__tms_last;
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4175__unnamedblk4__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4175__unnamedblk4__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4179__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4179__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4180__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4180__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4182__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4182__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4184__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4184__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4186__cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4186__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4186__cycles;
            while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4186__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4186__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4186__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                       - (IData)(1U));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4191__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4191__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4193__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4193__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4195__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4195__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__write_data_packed 
                = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__address)))) 
                   << 0x22U);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk7__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk7__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk7__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk7__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk7__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk7__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk7__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk7__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk7__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__tms_last = 1U;
            IData/*31:0*/ __Vilp5;
            __Vilp5 = 0U;
            while ((__Vilp5 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__wdata[__Vilp5] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp5];
                __Vilp5 = ((IData)(1U) + __Vilp5);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__unnamedblk6__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     129);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__unnamedblk6__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__unnamedblk6__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__rdata
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__unnamedblk6__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                }
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__unnamedblk6__DOT__i);
            }
            IData/*31:0*/ __Vilp6;
            __Vilp6 = 0U;
            while ((__Vilp6 <= 0x28U)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp6] 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4197__rdata
                    [__Vilp6];
                __Vilp6 = ((IData)(1U) + __Vilp6);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4200__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4200__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4201__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4201__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4203__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4203__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4205__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4205__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk8__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk8__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__data_out 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk8__DOT__i))));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk8__DOT__i)) 
                       && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk8__DOT__i)]);
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk8__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__data_out 
                        = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk8__DOT__i))) 
                            & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__data_out) 
                           | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                                  << 
                                                  (0x3fU 
                                                   & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk8__DOT__i))));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk8__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__unnamedblk8__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__op 
                = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__data_out));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__data 
                = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__data_out 
                           >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__data 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__op 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4150__op;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__wait_cycles 
                = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__wait_cycles);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__trial_idx 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__trial_idx);
        }
        __Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk2__DOT__sbcs 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4018__data;
        if (VL_UNLIKELY((0U != (7U & ((__Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk2__DOT__sbcs 
                                       >> 0xcU) | (1U 
                                                   & (__Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk2__DOT__sbcs 
                                                      >> 0x16U))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_croc_soc.sv:142: Assertion failed in %Ntb_croc_soc.jtag_write.unnamedblk2: [JTAG] System bus error!\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("/fosic/designs/croc/rtl/tb_croc_soc.sv", 142, "", false);
        }
        while ((0x200000U & __Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk2__DOT__sbcs)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__address = 0x38U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__op = 0U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__trial_idx = 0U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__wait_cycles = 8U;
            if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__trial_idx)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4209__data 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4209__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4209__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4209__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4209__unnamedblk2__DOT__i)] 
                        = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                 >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4209__unnamedblk2__DOT__i)));
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4209__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4209__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4210__opcode = 0x10U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4210__opcode))) {
                        goto __Vlabel91;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4210__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4210__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4210__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4210__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4210__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4210__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4210__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4210__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4210__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4210__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4211__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4211__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4213__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4213__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4215__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4215__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4217__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4217__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4219__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4223__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4223__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4225__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4225__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4210__opcode;
                    __Vlabel91: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4228__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4228__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4230__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4230__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4232__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4232__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[5U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [5U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[6U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [6U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[7U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [7U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[8U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [8U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[9U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [9U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0xaU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xaU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0xbU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xbU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0xcU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xcU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0xdU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xdU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0xeU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xeU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0xfU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xfU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0x10U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x10U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0x11U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x11U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0x12U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x12U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0x13U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x13U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0x14U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x14U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0x15U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x15U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0x16U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x16U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0x17U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x17U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0x18U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x18U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0x19U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x19U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0x1aU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1aU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0x1bU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1bU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0x1cU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1cU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0x1dU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1dU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0x1eU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1eU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata[0x1fU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1fU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__unnamedblk3__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__unnamedblk3__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         98);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__wdata
                        [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__unnamedblk3__DOT__i)];
                    if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__unnamedblk3__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__unnamedblk3__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4234__unnamedblk3__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4238__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4238__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4239__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4239__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4241__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4241__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4243__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4243__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__wait_cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__address 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__address;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__data_out = 0ULL;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__write_data_packed 
                = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__address)))) 
                           << 0x22U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk6__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk6__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk6__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk6__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk6__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4246__opcode = 0x11U;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4246__opcode))) {
                    goto __Vlabel92;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4246__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4246__unnamedblk1__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4246__unnamedblk1__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4246__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4246__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4246__unnamedblk1__DOT__i))));
                    if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4246__unnamedblk1__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4246__unnamedblk1__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4246__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4246__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4247__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4247__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4249__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4249__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4251__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4251__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4253__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4253__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4255__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4259__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4259__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4261__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4261__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4246__opcode;
                __Vlabel92: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4264__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4264__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4266__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4266__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4268__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4268__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4270__tms_last = 1U;
            IData/*31:0*/ __Vilp7;
            __Vilp7 = 0U;
            while ((__Vilp7 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4270__wdata[__Vilp7] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp7];
                __Vilp7 = ((IData)(1U) + __Vilp7);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4270__unnamedblk4__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4270__unnamedblk4__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     107);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4270__unnamedblk4__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4270__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4270__unnamedblk4__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4270__unnamedblk4__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4270__tms_last;
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4270__unnamedblk4__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4270__unnamedblk4__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4274__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4274__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4275__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4275__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4277__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4277__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4279__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4279__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4281__cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4281__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4281__cycles;
            while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4281__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4281__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4281__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                       - (IData)(1U));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4286__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4286__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4288__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4288__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4290__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4290__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__write_data_packed 
                = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__address)))) 
                   << 0x22U);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk7__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk7__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk7__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk7__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk7__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk7__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk7__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk7__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk7__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__tms_last = 1U;
            IData/*31:0*/ __Vilp8;
            __Vilp8 = 0U;
            while ((__Vilp8 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__wdata[__Vilp8] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp8];
                __Vilp8 = ((IData)(1U) + __Vilp8);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__unnamedblk6__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     129);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__unnamedblk6__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__unnamedblk6__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__rdata
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__unnamedblk6__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                }
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__unnamedblk6__DOT__i);
            }
            IData/*31:0*/ __Vilp9;
            __Vilp9 = 0U;
            while ((__Vilp9 <= 0x28U)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp9] 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4292__rdata
                    [__Vilp9];
                __Vilp9 = ((IData)(1U) + __Vilp9);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4295__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4295__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4296__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4296__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4298__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4298__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4300__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4300__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk8__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk8__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__data_out 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk8__DOT__i))));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk8__DOT__i)) 
                       && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk8__DOT__i)]);
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk8__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__data_out 
                        = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk8__DOT__i))) 
                            & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__data_out) 
                           | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                                  << 
                                                  (0x3fU 
                                                   & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk8__DOT__i))));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk8__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__unnamedblk8__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__op 
                = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__data_out));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__data 
                = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__data_out 
                           >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__data 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__op 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4245__op;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__wait_cycles 
                = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__wait_cycles);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__trial_idx 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__trial_idx);
            while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__op))) {
                if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__trial_idx)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4303__data 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4303__data;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4303__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4303__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4303__unnamedblk2__DOT__i)] 
                            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                     >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4303__unnamedblk2__DOT__i)));
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4303__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__4303__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4304__opcode = 0x10U;
                    {
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4304__opcode))) {
                            goto __Vlabel93;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4304__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4304__unnamedblk1__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4304__unnamedblk1__DOT__i)];
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4304__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4304__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4304__unnamedblk1__DOT__i))));
                            if (VL_LIKELY((4U >= (7U 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4304__unnamedblk1__DOT__i)))) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4304__unnamedblk1__DOT__i)] 
                                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                            }
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4304__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4304__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4305__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4305__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4307__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4307__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4309__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4309__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4311__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4311__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__wdata[0U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [0U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__wdata[1U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [1U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__wdata[2U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [2U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__wdata[3U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [3U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__wdata[4U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [4U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4313__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4317__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4317__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4319__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4319__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4304__opcode;
                        __Vlabel93: ;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4322__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4322__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4324__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4324__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4326__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4326__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[5U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [5U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[6U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [6U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[7U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [7U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[8U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [8U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[9U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [9U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0xaU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xaU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0xbU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xbU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0xcU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xcU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0xdU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xdU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0xeU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xeU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0xfU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xfU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0x10U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x10U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0x11U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x11U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0x12U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x12U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0x13U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x13U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0x14U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x14U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0x15U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x15U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0x16U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x16U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0x17U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x17U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0x18U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x18U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0x19U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x19U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0x1aU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1aU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0x1bU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1bU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0x1cU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1cU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0x1dU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1dU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0x1eU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1eU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata[0x1fU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1fU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__unnamedblk3__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__unnamedblk3__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             98);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__wdata
                            [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__unnamedblk3__DOT__i)];
                        if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__unnamedblk3__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__unnamedblk3__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__4328__unnamedblk3__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4332__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4332__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4333__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4333__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4335__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4335__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4337__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4337__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__wait_cycles 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__wait_cycles;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__address 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__address;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__data_out = 0ULL;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__write_data_packed 
                    = (1ULL | ((QData)((IData)((0x7fU 
                                                & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__address)))) 
                               << 0x22U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk6__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk6__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__write_data_packed 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk6__DOT__i)))));
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk6__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk6__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk6__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4340__opcode = 0x11U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4340__opcode))) {
                        goto __Vlabel94;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4340__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4340__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4340__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4340__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4340__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4340__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4340__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4340__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4340__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4340__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4341__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4341__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4343__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4343__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4345__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4345__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4347__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4347__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4349__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4353__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4353__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4355__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4355__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4340__opcode;
                    __Vlabel94: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4358__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4358__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4360__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4360__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4362__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4362__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4364__tms_last = 1U;
                IData/*31:0*/ __Vilp10;
                __Vilp10 = 0U;
                while ((__Vilp10 <= 0x28U)) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4364__wdata[__Vilp10] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [__Vilp10];
                    __Vilp10 = ((IData)(1U) + __Vilp10);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4364__unnamedblk4__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4364__unnamedblk4__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         107);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4364__unnamedblk4__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4364__wdata
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4364__unnamedblk4__DOT__i)]);
                    if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4364__unnamedblk4__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4364__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4364__unnamedblk4__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4364__unnamedblk4__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4368__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4368__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4369__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4369__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4371__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4371__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4373__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4373__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4375__cycles 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__wait_cycles;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4375__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4375__cycles;
                while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4375__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4375__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__4375__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                           - (IData)(1U));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4380__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4380__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4382__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4382__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4384__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4384__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__write_data_packed 
                    = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__address)))) 
                       << 0x22U);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk7__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk7__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk7__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk7__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__write_data_packed 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk7__DOT__i)))));
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk7__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk7__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk7__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk7__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__tms_last = 1U;
                IData/*31:0*/ __Vilp11;
                __Vilp11 = 0U;
                while ((__Vilp11 <= 0x28U)) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__wdata[__Vilp11] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [__Vilp11];
                    __Vilp11 = ((IData)(1U) + __Vilp11);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__unnamedblk6__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         129);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__unnamedblk6__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__wdata
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__unnamedblk6__DOT__i)]);
                    if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__unnamedblk6__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__rdata
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__unnamedblk6__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__unnamedblk6__DOT__i)))) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__unnamedblk6__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                    }
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__unnamedblk6__DOT__i);
                }
                IData/*31:0*/ __Vilp12;
                __Vilp12 = 0U;
                while ((__Vilp12 <= 0x28U)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp12] 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__4386__rdata
                        [__Vilp12];
                    __Vilp12 = ((IData)(1U) + __Vilp12);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4389__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4389__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4390__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4390__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4392__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4392__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4394__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4394__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk8__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk8__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__data_out 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk8__DOT__i))));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk8__DOT__i)) 
                           && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk8__DOT__i)]);
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk8__DOT__i)))) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__data_out 
                            = (((~ (1ULL << (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk8__DOT__i))) 
                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__data_out) 
                               | (0x1ffffffffffULL 
                                  & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                     << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk8__DOT__i))));
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk8__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__unnamedblk8__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__op 
                    = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__data_out));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__data 
                    = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__data_out 
                               >> 2U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__data 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__op 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__4339__op;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__wait_cycles 
                    = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__wait_cycles);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__trial_idx 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__trial_idx);
            }
            __Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk2__DOT__sbcs 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__4207__data;
            if (VL_UNLIKELY((0U != (7U & ((__Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk2__DOT__sbcs 
                                           >> 0xcU) 
                                          | (1U & (__Vtask_tb_croc_soc__DOT__jtag_write__3603__unnamedblk2__DOT__sbcs 
                                                   >> 0x16U))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_croc_soc.sv:142: Assertion failed in %Ntb_croc_soc.jtag_write.unnamedblk2: [JTAG] System bus error!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("/fosic/designs/croc/rtl/tb_croc_soc.sv", 142, "", false);
            }
        }
    }
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__4396__wait_sba = 0U;
    vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write__4396__wait_cmd = 0U;
    __Vtask_tb_croc_soc__DOT__jtag_write__4396__data 
        = vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__data;
    __Vtask_tb_croc_soc__DOT__jtag_write__4396__addr = 0x3cU;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__data 
        = __Vtask_tb_croc_soc__DOT__jtag_write__4396__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__address 
        = __Vtask_tb_croc_soc__DOT__jtag_write__4396__addr;
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
        = (2ULL | (((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__address)))) 
                    << 0x22U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__data)) 
                                 << 2U)));
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i = 0U;
    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h62ffa798__0 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data
            [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i)];
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h62ffa798__0 
            = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i)) 
               && (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                                 >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i)))));
        if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i)))) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i)] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h62ffa798__0;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__4397__unnamedblk5__DOT__i);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__opcode = 0x11U;
    {
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__opcode))) {
            goto __Vlabel95;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i)) 
                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__opcode) 
                             >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i))));
            if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__unnamedblk1__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4399__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4399__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4401__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4401__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4403__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4403__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4405__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4405__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__tms_last = 1U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata[0U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [0U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata[1U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [1U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata[2U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [2U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata[3U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [3U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata[4U] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
            [4U];
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__unnamedblk2__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 89);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__unnamedblk2__DOT__i)) 
                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__wdata
                   [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__unnamedblk2__DOT__i)]);
            if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__unnamedblk2__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__tms_last;
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__unnamedblk2__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__4407__unnamedblk2__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4411__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4411__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4413__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4413__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__4398__opcode;
        __Vlabel95: ;
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4416__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4416__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4418__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4418__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4420__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4420__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__tms_last = 1U;
    IData/*31:0*/ __Vilp13;
    __Vilp13 = 0U;
    while ((__Vilp13 <= 0x28U)) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata[__Vilp13] 
            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data
            [__Vilp13];
        __Vilp13 = ((IData)(1U) + __Vilp13);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i)) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             107);
        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i = ((0x28U 
                                                   >= 
                                                   (0x3fU 
                                                    & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i)) 
                                                  && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__wdata
                                                  [
                                                  (0x3fU 
                                                   & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i)]);
        if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__tms_last;
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
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__4422__unnamedblk4__DOT__i);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4426__exit_1_dr = 0U;
    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__4426__exit_1_dr) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4427__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4427__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
    }
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4429__tms_val = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4429__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4431__tms_val = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                         143);
    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__4431__tms_val;
    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         157);
}
