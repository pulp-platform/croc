// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc__Syms.h"
#include "Vtb_croc_soc___024root.h"

VlCoroutine Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__25(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP__Vtiming__2__25\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__12417__addr;
    __Vtask_tb_croc_soc__DOT__jtag_write__12417__addr = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__12417__data;
    __Vtask_tb_croc_soc__DOT__jtag_write__12417__data = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__12417__wait_cmd;
    __Vtask_tb_croc_soc__DOT__jtag_write__12417__wait_cmd = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__12417__wait_sba;
    __Vtask_tb_croc_soc__DOT__jtag_write__12417__wait_sba = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__12417__unnamedblk1__DOT__acs;
    __Vtask_tb_croc_soc__DOT__jtag_write__12417__unnamedblk1__DOT__acs = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_write__12417__unnamedblk2__DOT__sbcs;
    __Vtask_tb_croc_soc__DOT__jtag_write__12417__unnamedblk2__DOT__sbcs = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__unnamedblk5__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__unnamedblk5__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12419__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12419__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12419__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12419__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12420__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12420__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12422__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12422__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12424__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12424__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12426__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12426__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12432__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12432__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12434__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12434__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12437__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12437__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12439__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12439__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12441__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12441__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12443__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12443__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12443__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12443__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12443__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12443__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12447__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12447__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12448__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12448__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12450__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12450__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12452__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12452__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__trial_idx;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12456__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12456__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12456__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12456__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12457__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12457__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12457__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12457__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12458__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12458__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12460__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12460__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12462__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12462__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12464__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12464__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12470__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12470__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12472__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12472__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12475__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12475__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12477__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12477__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12479__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12479__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12485__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12485__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12486__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12486__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12488__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12488__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12490__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12490__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12493__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12493__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12493__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12493__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12494__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12494__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12496__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12496__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12498__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12498__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12500__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12500__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12506__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12506__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12508__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12508__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12511__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12511__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12513__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12513__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12515__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12515__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12517__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12517__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12517__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12517__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12517__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12517__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12521__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12521__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12522__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12522__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12524__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12524__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12526__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12526__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12528__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12528__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12528__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12528__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12533__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12533__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12535__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12535__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12537__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12537__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12542__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12542__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12543__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12543__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12545__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12545__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12547__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12547__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12550__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12550__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12550__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12550__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12551__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12551__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12551__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12551__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12552__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12552__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12554__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12554__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12556__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12556__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12558__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12558__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12564__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12564__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12566__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12566__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12569__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12569__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12571__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12571__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12573__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12573__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12579__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12579__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12580__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12580__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12582__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12582__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12584__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12584__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12587__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12587__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12587__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12587__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12588__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12588__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12590__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12590__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12592__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12592__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12594__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12594__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12600__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12600__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12602__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12602__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12605__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12605__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12607__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12607__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12609__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12609__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12611__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12611__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12611__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12611__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12611__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12611__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12615__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12615__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12616__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12616__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12618__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12618__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12620__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12620__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12622__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12622__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12622__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12622__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12627__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12627__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12629__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12629__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12631__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12631__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12636__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12636__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12637__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12637__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12639__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12639__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12641__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12641__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__trial_idx;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12645__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12645__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12645__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12645__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12646__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12646__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12646__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12646__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12647__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12647__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12649__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12649__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12651__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12651__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12653__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12653__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12659__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12659__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12661__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12661__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12664__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12664__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12666__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12666__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12668__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12668__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12674__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12674__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12675__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12675__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12677__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12677__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12679__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12679__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12682__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12682__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12682__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12682__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12683__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12683__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12685__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12685__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12687__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12687__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12689__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12689__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12695__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12695__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12697__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12697__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12700__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12700__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12702__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12702__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12704__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12704__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12706__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12706__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12706__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12706__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12706__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12706__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12710__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12710__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12711__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12711__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12713__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12713__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12715__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12715__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12717__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12717__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12717__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12717__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12722__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12722__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12724__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12724__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12726__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12726__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12731__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12731__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12732__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12732__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12734__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12734__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12736__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12736__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12739__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12739__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12739__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12739__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12740__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12740__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12740__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12740__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12741__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12741__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12743__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12743__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12745__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12745__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12747__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12747__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12753__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12753__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12755__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12755__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12758__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12758__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12760__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12760__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12762__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12762__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12768__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12768__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12769__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12769__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12771__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12771__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12773__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12773__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12776__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12776__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12776__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12776__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12777__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12777__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12779__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12779__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12781__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12781__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12783__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12783__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12789__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12789__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12791__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12791__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12794__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12794__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12796__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12796__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12798__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12798__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12800__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12800__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12800__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12800__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12800__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12800__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12804__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12804__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12805__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12805__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12807__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12807__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12809__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12809__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12811__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12811__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12811__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12811__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12816__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12816__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12818__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12818__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12820__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12820__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12825__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12825__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12826__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12826__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12828__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12828__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12830__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12830__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__trial_idx;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12834__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12834__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12834__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12834__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12835__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12835__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12835__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12835__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12836__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12836__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12838__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12838__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12840__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12840__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12842__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12842__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12848__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12848__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12850__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12850__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12853__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12853__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12855__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12855__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12857__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12857__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12863__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12863__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12864__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12864__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12866__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12866__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12868__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12868__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12871__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12871__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12871__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12871__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12872__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12872__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12874__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12874__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12876__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12876__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12878__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12878__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12884__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12884__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12886__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12886__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12889__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12889__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12891__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12891__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12893__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12893__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12895__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12895__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12895__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12895__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12895__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12895__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12899__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12899__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12900__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12900__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12902__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12902__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12904__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12904__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12906__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12906__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12906__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12906__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12911__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12911__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12913__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12913__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12915__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12915__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12920__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12920__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12921__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12921__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12923__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12923__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12925__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12925__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12928__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12928__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12928__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12928__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12929__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12929__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12929__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12929__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12930__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12930__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12932__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12932__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12934__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12934__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12936__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12936__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12942__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12942__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12944__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12944__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12947__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12947__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12949__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12949__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12951__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12951__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12957__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12957__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12958__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12958__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12960__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12960__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12962__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12962__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12965__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12965__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12965__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12965__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12966__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12966__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12968__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12968__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12970__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12970__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12972__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12972__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12978__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12978__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12980__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12980__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12983__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12983__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12985__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12985__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12987__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12987__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12989__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12989__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12989__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12989__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12989__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12989__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12993__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12993__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12994__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12994__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12996__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12996__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12998__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12998__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13000__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13000__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13000__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13000__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13005__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13005__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13007__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13007__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13009__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13009__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13014__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13014__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13015__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13015__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13017__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13017__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13019__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13019__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__trial_idx;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13023__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13023__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13023__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13023__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13024__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13024__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13024__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13024__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13025__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13025__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13027__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13027__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13029__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13029__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13031__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13031__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13037__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13037__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13039__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13039__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13042__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13042__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13044__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13044__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13046__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13046__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13052__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13052__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13053__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13053__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13055__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13055__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13057__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13057__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13060__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13060__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13060__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13060__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13061__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13061__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13063__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13063__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13065__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13065__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13067__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13067__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13073__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13073__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13075__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13075__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13078__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13078__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13080__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13080__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13082__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13082__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13084__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13084__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13084__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13084__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13084__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13084__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13088__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13088__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13089__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13089__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13091__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13091__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13093__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13093__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13095__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13095__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13095__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13095__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13100__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13100__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13102__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13102__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13104__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13104__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13109__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13109__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13110__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13110__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13112__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13112__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13114__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13114__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13117__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13117__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13117__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13117__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13118__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13118__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13118__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13118__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13119__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13119__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13121__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13121__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13123__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13123__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13125__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13125__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13131__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13131__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13133__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13133__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13136__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13136__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13138__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13138__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13140__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13140__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13146__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13146__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13147__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13147__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13149__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13149__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13151__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13151__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13154__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13154__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13154__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13154__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13155__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13155__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13157__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13157__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13159__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13159__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13161__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13161__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13167__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13167__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13169__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13169__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13172__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13172__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13174__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13174__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13176__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13176__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13178__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13178__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13178__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13178__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13178__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13178__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13182__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13182__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13183__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13183__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13185__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13185__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13187__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13187__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13189__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13189__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13189__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13189__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13194__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13194__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13196__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13196__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13198__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13198__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13203__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13203__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13204__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13204__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13206__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13206__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13208__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13208__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__wait_idle__13210__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__wait_idle__13210__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13211__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13211__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13211__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13211__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__data = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__trial_idx;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__trial_idx = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__wait_cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13217__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13217__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13217__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13217__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13218__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13218__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13218__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13218__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13219__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13219__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13221__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13221__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13223__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13223__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13225__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13225__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13231__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13231__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13233__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13233__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13236__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13236__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13238__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13238__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13240__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13240__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13246__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13246__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13247__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13247__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13249__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13249__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13251__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13251__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13254__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13254__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13254__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13254__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13255__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13255__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13257__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13257__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13259__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13259__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13261__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13261__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13267__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13267__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13269__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13269__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13272__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13272__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13274__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13274__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13276__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13276__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13278__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13278__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13278__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13278__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13278__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13278__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13282__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13282__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13283__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13283__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13285__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13285__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13287__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13287__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13289__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13289__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13289__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13289__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13294__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13294__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13296__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13296__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13298__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13298__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13303__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13303__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13304__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13304__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13306__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13306__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13308__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13308__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13311__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13311__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13311__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13311__unnamedblk2__DOT__i = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13312__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13312__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13312__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13312__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13313__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13313__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13315__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13315__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13317__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13317__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13319__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13319__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13325__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13325__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13327__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13327__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13330__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13330__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13332__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13332__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13334__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13334__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 32> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__unnamedblk3__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13340__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13340__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13341__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13341__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13343__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13343__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13345__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13345__tms_val = 0;
    CData/*7:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__address;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__address = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__data;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__data = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__wait_cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__wait_cycles = 0;
    CData/*1:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__op;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__op = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk7__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk8__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk8__DOT__i = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__data_out;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__data_out = 0;
    QData/*40:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__write_data_packed;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__write_data_packed = 0;
    CData/*4:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13348__opcode;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13348__opcode = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13348__unnamedblk1__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13348__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13349__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13349__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13351__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13351__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13353__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13353__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13355__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13355__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 5> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__wdata;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__unnamedblk2__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13361__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13361__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13363__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13363__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13366__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13366__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13368__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13368__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13370__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13370__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13372__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13372__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13372__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13372__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13372__unnamedblk4__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13372__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13376__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13376__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13377__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13377__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13379__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13379__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13381__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13381__tms_val = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13383__cycles;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13383__cycles = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13383__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13383__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13388__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13388__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13390__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13390__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13392__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13392__tms_val = 0;
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__rdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__rdata[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 41> __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__wdata;
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__wdata[__Vi0] = 0;
    }
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__tms_last;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__tms_last = 0;
    IData/*31:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__unnamedblk6__DOT__i;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13397__exit_1_dr;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13397__exit_1_dr = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13398__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13398__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13400__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13400__tms_val = 0;
    CData/*0:0*/ __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13402__tms_val;
    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13402__tms_val = 0;
    // Body
    while ((0U == vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_wait_for_eoc__9843__exit_code)) {
        __Vtask_tb_croc_soc__DOT__jtag_write__12417__wait_sba = 0U;
        __Vtask_tb_croc_soc__DOT__jtag_write__12417__wait_cmd = 0U;
        __Vtask_tb_croc_soc__DOT__jtag_write__12417__data = 0x3000008U;
        __Vtask_tb_croc_soc__DOT__jtag_write__12417__addr = 0x39U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__data 
            = __Vtask_tb_croc_soc__DOT__jtag_write__12417__data;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__address 
            = __Vtask_tb_croc_soc__DOT__jtag_write__12417__addr;
        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
            = (2ULL | (((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__address)))) 
                        << 0x22U) | ((QData)((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__data)) 
                                     << 2U)));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__unnamedblk5__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__unnamedblk5__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h62ffa798__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__unnamedblk5__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h62ffa798__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__unnamedblk5__DOT__i)) 
                   && (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__unnamedblk5__DOT__i)))));
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__unnamedblk5__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__unnamedblk5__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h62ffa798__0;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__unnamedblk5__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__12418__unnamedblk5__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12419__opcode = 0x11U;
        {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12419__opcode))) {
                goto __Vlabel270;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12419__unnamedblk1__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12419__unnamedblk1__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12419__unnamedblk1__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12419__unnamedblk1__DOT__i)) 
                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12419__opcode) 
                                 >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12419__unnamedblk1__DOT__i))));
                if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12419__unnamedblk1__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12419__unnamedblk1__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12419__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12419__unnamedblk1__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12420__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12420__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12422__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12422__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12424__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12424__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12426__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12426__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__unnamedblk2__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__unnamedblk2__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__wdata
                       [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__unnamedblk2__DOT__i)]);
                if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__tms_last;
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12428__unnamedblk2__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12432__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12432__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12434__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12434__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12419__opcode;
            __Vlabel270: ;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12437__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12437__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12439__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12439__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12441__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12441__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12443__tms_last = 1U;
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12443__wdata[__Vilp1] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data
                [__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12443__unnamedblk4__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12443__unnamedblk4__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12443__unnamedblk4__DOT__i)) 
                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12443__wdata
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12443__unnamedblk4__DOT__i)]);
            if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12443__unnamedblk4__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12443__tms_last;
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12443__unnamedblk4__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12443__unnamedblk4__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12447__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12447__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12448__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12448__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12450__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12450__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12452__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12452__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        if (__Vtask_tb_croc_soc__DOT__jtag_write__12417__wait_cmd) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__address = 0x16U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__op = 0U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__trial_idx = 0U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__wait_cycles = 8U;
            if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__trial_idx)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12456__data 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12456__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12456__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12456__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12456__unnamedblk2__DOT__i)] 
                        = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                 >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12456__unnamedblk2__DOT__i)));
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12456__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12456__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12457__opcode = 0x10U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12457__opcode))) {
                        goto __Vlabel271;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12457__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12457__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12457__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12457__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12457__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12457__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12457__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12457__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12457__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12457__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12458__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12458__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12460__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12460__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12462__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12462__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12464__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12464__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12466__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12470__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12470__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12472__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12472__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12457__opcode;
                    __Vlabel271: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12475__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12475__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12477__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12477__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12479__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12479__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[5U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [5U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[6U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [6U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[7U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [7U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[8U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [8U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[9U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [9U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0xaU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xaU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0xbU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xbU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0xcU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xcU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0xdU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xdU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0xeU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xeU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0xfU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xfU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0x10U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x10U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0x11U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x11U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0x12U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x12U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0x13U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x13U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0x14U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x14U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0x15U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x15U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0x16U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x16U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0x17U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x17U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0x18U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x18U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0x19U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x19U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0x1aU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1aU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0x1bU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1bU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0x1cU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1cU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0x1dU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1dU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0x1eU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1eU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata[0x1fU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1fU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__unnamedblk3__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__unnamedblk3__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         98);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__wdata
                        [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__unnamedblk3__DOT__i)];
                    if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__unnamedblk3__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__unnamedblk3__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12481__unnamedblk3__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12485__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12485__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12486__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12486__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12488__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12488__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12490__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12490__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__wait_cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__address 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__address;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__data_out = 0ULL;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__write_data_packed 
                = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__address)))) 
                           << 0x22U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk6__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk6__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk6__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk6__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk6__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12493__opcode = 0x11U;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12493__opcode))) {
                    goto __Vlabel272;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12493__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12493__unnamedblk1__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12493__unnamedblk1__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12493__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12493__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12493__unnamedblk1__DOT__i))));
                    if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12493__unnamedblk1__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12493__unnamedblk1__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12493__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12493__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12494__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12494__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12496__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12496__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12498__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12498__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12500__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12500__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12502__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12506__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12506__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12508__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12508__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12493__opcode;
                __Vlabel272: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12511__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12511__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12513__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12513__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12515__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12515__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12517__tms_last = 1U;
            IData/*31:0*/ __Vilp2;
            __Vilp2 = 0U;
            while ((__Vilp2 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12517__wdata[__Vilp2] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp2];
                __Vilp2 = ((IData)(1U) + __Vilp2);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12517__unnamedblk4__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12517__unnamedblk4__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     107);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12517__unnamedblk4__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12517__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12517__unnamedblk4__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12517__unnamedblk4__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12517__tms_last;
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12517__unnamedblk4__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12517__unnamedblk4__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12521__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12521__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12522__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12522__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12524__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12524__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12526__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12526__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12528__cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12528__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12528__cycles;
            while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12528__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12528__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12528__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                       - (IData)(1U));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12533__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12533__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12535__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12535__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12537__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12537__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__write_data_packed 
                = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__address)))) 
                   << 0x22U);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk7__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk7__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk7__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk7__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk7__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk7__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk7__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk7__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk7__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__tms_last = 1U;
            IData/*31:0*/ __Vilp3;
            __Vilp3 = 0U;
            while ((__Vilp3 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__wdata[__Vilp3] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp3];
                __Vilp3 = ((IData)(1U) + __Vilp3);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__unnamedblk6__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     129);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__unnamedblk6__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__unnamedblk6__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__rdata
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__unnamedblk6__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                }
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__unnamedblk6__DOT__i);
            }
            IData/*31:0*/ __Vilp4;
            __Vilp4 = 0U;
            while ((__Vilp4 <= 0x28U)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp4] 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12539__rdata
                    [__Vilp4];
                __Vilp4 = ((IData)(1U) + __Vilp4);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12542__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12542__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12543__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12543__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12545__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12545__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12547__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12547__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk8__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk8__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__data_out 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk8__DOT__i))));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk8__DOT__i)) 
                       && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk8__DOT__i)]);
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk8__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__data_out 
                        = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk8__DOT__i))) 
                            & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__data_out) 
                           | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                                  << 
                                                  (0x3fU 
                                                   & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk8__DOT__i))));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk8__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__unnamedblk8__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__op 
                = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__data_out));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__data 
                = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__data_out 
                           >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__data 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__op 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12492__op;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__wait_cycles 
                = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__wait_cycles);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__trial_idx 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__trial_idx);
            while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__op))) {
                if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__trial_idx)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12550__data 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12550__data;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12550__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12550__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12550__unnamedblk2__DOT__i)] 
                            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                     >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12550__unnamedblk2__DOT__i)));
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12550__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12550__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12551__opcode = 0x10U;
                    {
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12551__opcode))) {
                            goto __Vlabel273;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12551__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12551__unnamedblk1__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12551__unnamedblk1__DOT__i)];
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12551__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12551__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12551__unnamedblk1__DOT__i))));
                            if (VL_LIKELY((4U >= (7U 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12551__unnamedblk1__DOT__i)))) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12551__unnamedblk1__DOT__i)] 
                                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                            }
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12551__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12551__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12552__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12552__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12554__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12554__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12556__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12556__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12558__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12558__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__wdata[0U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [0U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__wdata[1U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [1U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__wdata[2U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [2U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__wdata[3U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [3U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__wdata[4U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [4U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12560__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12564__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12564__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12566__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12566__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12551__opcode;
                        __Vlabel273: ;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12569__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12569__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12571__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12571__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12573__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12573__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[5U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [5U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[6U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [6U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[7U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [7U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[8U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [8U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[9U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [9U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0xaU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xaU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0xbU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xbU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0xcU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xcU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0xdU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xdU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0xeU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xeU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0xfU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xfU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0x10U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x10U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0x11U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x11U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0x12U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x12U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0x13U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x13U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0x14U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x14U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0x15U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x15U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0x16U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x16U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0x17U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x17U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0x18U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x18U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0x19U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x19U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0x1aU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1aU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0x1bU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1bU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0x1cU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1cU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0x1dU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1dU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0x1eU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1eU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata[0x1fU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1fU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__unnamedblk3__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__unnamedblk3__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             98);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__wdata
                            [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__unnamedblk3__DOT__i)];
                        if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__unnamedblk3__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__unnamedblk3__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12575__unnamedblk3__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12579__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12579__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12580__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12580__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12582__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12582__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12584__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12584__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__wait_cycles 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__wait_cycles;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__address 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__address;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__data_out = 0ULL;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__write_data_packed 
                    = (1ULL | ((QData)((IData)((0x7fU 
                                                & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__address)))) 
                               << 0x22U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk6__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk6__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__write_data_packed 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk6__DOT__i)))));
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk6__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk6__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk6__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12587__opcode = 0x11U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12587__opcode))) {
                        goto __Vlabel274;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12587__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12587__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12587__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12587__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12587__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12587__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12587__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12587__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12587__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12587__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12588__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12588__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12590__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12590__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12592__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12592__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12594__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12594__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12596__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12600__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12600__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12602__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12602__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12587__opcode;
                    __Vlabel274: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12605__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12605__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12607__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12607__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12609__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12609__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12611__tms_last = 1U;
                IData/*31:0*/ __Vilp5;
                __Vilp5 = 0U;
                while ((__Vilp5 <= 0x28U)) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12611__wdata[__Vilp5] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [__Vilp5];
                    __Vilp5 = ((IData)(1U) + __Vilp5);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12611__unnamedblk4__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12611__unnamedblk4__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         107);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12611__unnamedblk4__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12611__wdata
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12611__unnamedblk4__DOT__i)]);
                    if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12611__unnamedblk4__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12611__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12611__unnamedblk4__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12611__unnamedblk4__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12615__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12615__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12616__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12616__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12618__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12618__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12620__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12620__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12622__cycles 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__wait_cycles;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12622__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12622__cycles;
                while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12622__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12622__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12622__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                           - (IData)(1U));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12627__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12627__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12629__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12629__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12631__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12631__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__write_data_packed 
                    = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__address)))) 
                       << 0x22U);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk7__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk7__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk7__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk7__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__write_data_packed 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk7__DOT__i)))));
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk7__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk7__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk7__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk7__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__tms_last = 1U;
                IData/*31:0*/ __Vilp6;
                __Vilp6 = 0U;
                while ((__Vilp6 <= 0x28U)) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__wdata[__Vilp6] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [__Vilp6];
                    __Vilp6 = ((IData)(1U) + __Vilp6);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__unnamedblk6__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         129);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__unnamedblk6__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__wdata
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__unnamedblk6__DOT__i)]);
                    if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__unnamedblk6__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__rdata
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__unnamedblk6__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__unnamedblk6__DOT__i)))) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__unnamedblk6__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                    }
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__unnamedblk6__DOT__i);
                }
                IData/*31:0*/ __Vilp7;
                __Vilp7 = 0U;
                while ((__Vilp7 <= 0x28U)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp7] 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12633__rdata
                        [__Vilp7];
                    __Vilp7 = ((IData)(1U) + __Vilp7);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12636__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12636__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12637__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12637__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12639__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12639__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12641__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12641__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk8__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk8__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__data_out 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk8__DOT__i))));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk8__DOT__i)) 
                           && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk8__DOT__i)]);
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk8__DOT__i)))) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__data_out 
                            = (((~ (1ULL << (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk8__DOT__i))) 
                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__data_out) 
                               | (0x1ffffffffffULL 
                                  & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                     << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk8__DOT__i))));
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk8__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__unnamedblk8__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__op 
                    = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__data_out));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__data 
                    = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__data_out 
                               >> 2U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__data 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__op 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12586__op;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__wait_cycles 
                    = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__wait_cycles);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__trial_idx 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__trial_idx);
            }
            __Vtask_tb_croc_soc__DOT__jtag_write__12417__unnamedblk1__DOT__acs 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12454__data;
            if (VL_UNLIKELY((0U != (7U & (__Vtask_tb_croc_soc__DOT__jtag_write__12417__unnamedblk1__DOT__acs 
                                          >> 8U))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_croc_soc.sv:135: Assertion failed in %Ntb_croc_soc.jtag_write.unnamedblk1: [JTAG] Abstract command error!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("/fosic/designs/croc/rtl/tb_croc_soc.sv", 135, "", false);
            }
            while ((0x1000U & __Vtask_tb_croc_soc__DOT__jtag_write__12417__unnamedblk1__DOT__acs)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__address = 0x16U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__op = 0U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__trial_idx = 0U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__wait_cycles = 8U;
                if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__trial_idx)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12645__data 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12645__data;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12645__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12645__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12645__unnamedblk2__DOT__i)] 
                            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                     >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12645__unnamedblk2__DOT__i)));
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12645__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12645__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12646__opcode = 0x10U;
                    {
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12646__opcode))) {
                            goto __Vlabel275;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12646__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12646__unnamedblk1__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12646__unnamedblk1__DOT__i)];
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12646__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12646__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12646__unnamedblk1__DOT__i))));
                            if (VL_LIKELY((4U >= (7U 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12646__unnamedblk1__DOT__i)))) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12646__unnamedblk1__DOT__i)] 
                                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                            }
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12646__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12646__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12647__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12647__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12649__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12649__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12651__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12651__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12653__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12653__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__wdata[0U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [0U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__wdata[1U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [1U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__wdata[2U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [2U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__wdata[3U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [3U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__wdata[4U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [4U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12655__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12659__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12659__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12661__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12661__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12646__opcode;
                        __Vlabel275: ;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12664__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12664__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12666__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12666__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12668__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12668__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[5U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [5U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[6U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [6U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[7U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [7U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[8U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [8U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[9U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [9U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0xaU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xaU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0xbU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xbU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0xcU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xcU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0xdU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xdU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0xeU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xeU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0xfU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xfU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0x10U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x10U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0x11U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x11U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0x12U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x12U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0x13U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x13U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0x14U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x14U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0x15U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x15U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0x16U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x16U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0x17U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x17U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0x18U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x18U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0x19U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x19U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0x1aU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1aU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0x1bU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1bU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0x1cU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1cU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0x1dU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1dU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0x1eU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1eU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata[0x1fU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1fU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__unnamedblk3__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__unnamedblk3__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             98);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__wdata
                            [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__unnamedblk3__DOT__i)];
                        if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__unnamedblk3__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__unnamedblk3__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12670__unnamedblk3__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12674__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12674__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12675__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12675__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12677__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12677__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12679__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12679__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__wait_cycles 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__wait_cycles;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__address 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__address;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__data_out = 0ULL;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__write_data_packed 
                    = (1ULL | ((QData)((IData)((0x7fU 
                                                & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__address)))) 
                               << 0x22U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk6__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk6__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__write_data_packed 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk6__DOT__i)))));
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk6__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk6__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk6__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12682__opcode = 0x11U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12682__opcode))) {
                        goto __Vlabel276;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12682__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12682__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12682__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12682__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12682__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12682__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12682__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12682__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12682__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12682__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12683__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12683__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12685__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12685__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12687__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12687__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12689__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12689__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12691__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12695__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12695__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12697__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12697__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12682__opcode;
                    __Vlabel276: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12700__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12700__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12702__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12702__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12704__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12704__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12706__tms_last = 1U;
                IData/*31:0*/ __Vilp8;
                __Vilp8 = 0U;
                while ((__Vilp8 <= 0x28U)) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12706__wdata[__Vilp8] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [__Vilp8];
                    __Vilp8 = ((IData)(1U) + __Vilp8);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12706__unnamedblk4__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12706__unnamedblk4__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         107);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12706__unnamedblk4__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12706__wdata
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12706__unnamedblk4__DOT__i)]);
                    if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12706__unnamedblk4__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12706__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12706__unnamedblk4__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12706__unnamedblk4__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12710__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12710__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12711__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12711__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12713__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12713__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12715__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12715__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12717__cycles 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__wait_cycles;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12717__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12717__cycles;
                while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12717__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12717__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12717__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                           - (IData)(1U));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12722__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12722__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12724__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12724__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12726__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12726__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__write_data_packed 
                    = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__address)))) 
                       << 0x22U);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk7__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk7__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk7__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk7__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__write_data_packed 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk7__DOT__i)))));
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk7__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk7__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk7__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk7__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__tms_last = 1U;
                IData/*31:0*/ __Vilp9;
                __Vilp9 = 0U;
                while ((__Vilp9 <= 0x28U)) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__wdata[__Vilp9] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [__Vilp9];
                    __Vilp9 = ((IData)(1U) + __Vilp9);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__unnamedblk6__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         129);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__unnamedblk6__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__wdata
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__unnamedblk6__DOT__i)]);
                    if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__unnamedblk6__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__rdata
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__unnamedblk6__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__unnamedblk6__DOT__i)))) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__unnamedblk6__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                    }
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__unnamedblk6__DOT__i);
                }
                IData/*31:0*/ __Vilp10;
                __Vilp10 = 0U;
                while ((__Vilp10 <= 0x28U)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp10] 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12728__rdata
                        [__Vilp10];
                    __Vilp10 = ((IData)(1U) + __Vilp10);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12731__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12731__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12732__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12732__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12734__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12734__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12736__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12736__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk8__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk8__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__data_out 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk8__DOT__i))));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk8__DOT__i)) 
                           && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk8__DOT__i)]);
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk8__DOT__i)))) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__data_out 
                            = (((~ (1ULL << (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk8__DOT__i))) 
                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__data_out) 
                               | (0x1ffffffffffULL 
                                  & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                     << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk8__DOT__i))));
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk8__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__unnamedblk8__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__op 
                    = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__data_out));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__data 
                    = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__data_out 
                               >> 2U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__data 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__op 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12681__op;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__wait_cycles 
                    = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__wait_cycles);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__trial_idx 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__trial_idx);
                while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__op))) {
                    if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__trial_idx)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12739__data 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12739__data;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12739__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12739__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12739__unnamedblk2__DOT__i)] 
                                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                         >> (0x1fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12739__unnamedblk2__DOT__i)));
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12739__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12739__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12740__opcode = 0x10U;
                        {
                            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12740__opcode))) {
                                goto __Vlabel277;
                            }
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12740__unnamedblk1__DOT__i = 0U;
                            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12740__unnamedblk1__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                    [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12740__unnamedblk1__DOT__i)];
                                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12740__unnamedblk1__DOT__i)) 
                                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12740__opcode) 
                                                 >> 
                                                 (7U 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12740__unnamedblk1__DOT__i))));
                                if (VL_LIKELY((4U >= 
                                               (7U 
                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12740__unnamedblk1__DOT__i)))) {
                                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12740__unnamedblk1__DOT__i)] 
                                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                                }
                                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12740__unnamedblk1__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12740__unnamedblk1__DOT__i);
                            }
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12741__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12741__tms_val;
                            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                                "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12743__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12743__tms_val;
                            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                                "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12745__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12745__tms_val;
                            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                                "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12747__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12747__tms_val;
                            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                                "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__tms_last = 1U;
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__wdata[0U] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [0U];
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__wdata[1U] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [1U];
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__wdata[2U] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [2U];
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__wdata[3U] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [3U];
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__wdata[4U] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [4U];
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__unnamedblk2__DOT__i = 0U;
                            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__unnamedblk2__DOT__i)) {
                                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                     nullptr, 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     89);
                                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__unnamedblk2__DOT__i)) 
                                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__wdata
                                       [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__unnamedblk2__DOT__i)]);
                                if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__unnamedblk2__DOT__i)) {
                                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__tms_last;
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
                                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__unnamedblk2__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12749__unnamedblk2__DOT__i);
                            }
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12753__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12753__tms_val;
                            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                                "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12755__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12755__tms_val;
                            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                                "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12740__opcode;
                            __Vlabel277: ;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12758__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12758__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12760__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12760__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12762__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12762__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[1U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [1U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[2U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [2U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[3U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [3U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[4U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [4U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[5U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [5U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[6U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [6U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[7U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [7U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[8U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [8U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[9U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [9U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0xaU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0xaU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0xbU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0xbU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0xcU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0xcU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0xdU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0xdU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0xeU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0xeU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0xfU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0xfU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0x10U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x10U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0x11U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x11U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0x12U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x12U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0x13U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x13U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0x14U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x14U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0x15U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x15U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0x16U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x16U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0x17U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x17U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0x18U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x18U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0x19U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x19U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0x1aU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x1aU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0x1bU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x1bU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0x1cU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x1cU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0x1dU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x1dU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0x1eU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x1eU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata[0x1fU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x1fU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__unnamedblk3__DOT__i = 0U;
                        while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__unnamedblk3__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 98);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__wdata
                                [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__unnamedblk3__DOT__i)];
                            if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__unnamedblk3__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__unnamedblk3__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12764__unnamedblk3__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12768__exit_1_dr = 0U;
                        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12768__exit_1_dr) {
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12769__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12769__tms_val;
                            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                                "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12771__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12771__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12773__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12773__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__wait_cycles 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__wait_cycles;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__address 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__address;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__data_out = 0ULL;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__write_data_packed 
                        = (1ULL | ((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__address)))) 
                                   << 0x22U));
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk6__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk6__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                            [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk6__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                            = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk6__DOT__i)) 
                               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__write_data_packed 
                                                 >> 
                                                 (0x3fU 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk6__DOT__i)))));
                        if (VL_LIKELY((0x28U >= (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk6__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk6__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk6__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk6__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12776__opcode = 0x11U;
                    {
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12776__opcode))) {
                            goto __Vlabel278;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12776__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12776__unnamedblk1__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12776__unnamedblk1__DOT__i)];
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12776__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12776__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12776__unnamedblk1__DOT__i))));
                            if (VL_LIKELY((4U >= (7U 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12776__unnamedblk1__DOT__i)))) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12776__unnamedblk1__DOT__i)] 
                                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                            }
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12776__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12776__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12777__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12777__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12779__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12779__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12781__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12781__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12783__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12783__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__wdata[0U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [0U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__wdata[1U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [1U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__wdata[2U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [2U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__wdata[3U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [3U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__wdata[4U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [4U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12785__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12789__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12789__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12791__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12791__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12776__opcode;
                        __Vlabel278: ;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12794__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12794__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12796__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12796__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12798__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12798__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12800__tms_last = 1U;
                    IData/*31:0*/ __Vilp11;
                    __Vilp11 = 0U;
                    while ((__Vilp11 <= 0x28U)) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12800__wdata[__Vilp11] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                            [__Vilp11];
                        __Vilp11 = ((IData)(1U) + __Vilp11);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12800__unnamedblk4__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12800__unnamedblk4__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             107);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12800__unnamedblk4__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12800__wdata
                               [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12800__unnamedblk4__DOT__i)]);
                        if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12800__unnamedblk4__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12800__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12800__unnamedblk4__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12800__unnamedblk4__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12804__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12804__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12805__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12805__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12807__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12807__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12809__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12809__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12811__cycles 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__wait_cycles;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12811__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12811__cycles;
                    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12811__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12811__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                            = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12811__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                               - (IData)(1U));
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12816__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12816__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12818__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12818__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12820__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12820__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__write_data_packed 
                        = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__address)))) 
                           << 0x22U);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk7__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk7__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                            [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk7__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                            = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk7__DOT__i)) 
                               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__write_data_packed 
                                                 >> 
                                                 (0x3fU 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk7__DOT__i)))));
                        if (VL_LIKELY((0x28U >= (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk7__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk7__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk7__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk7__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__tms_last = 1U;
                    IData/*31:0*/ __Vilp12;
                    __Vilp12 = 0U;
                    while ((__Vilp12 <= 0x28U)) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__wdata[__Vilp12] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                            [__Vilp12];
                        __Vilp12 = ((IData)(1U) + __Vilp12);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__unnamedblk6__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__unnamedblk6__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             129);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__unnamedblk6__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__wdata
                               [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__unnamedblk6__DOT__i)]);
                        if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__unnamedblk6__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__rdata
                            [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__unnamedblk6__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                        if (VL_LIKELY((0x28U >= (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__unnamedblk6__DOT__i)))) {
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__unnamedblk6__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                        }
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__unnamedblk6__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__unnamedblk6__DOT__i);
                    }
                    IData/*31:0*/ __Vilp13;
                    __Vilp13 = 0U;
                    while ((__Vilp13 <= 0x28U)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp13] 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12822__rdata
                            [__Vilp13];
                        __Vilp13 = ((IData)(1U) + __Vilp13);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12825__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12825__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12826__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12826__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12828__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12828__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12830__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12830__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk8__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk8__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__data_out 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk8__DOT__i))));
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                            = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk8__DOT__i)) 
                               && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                               [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk8__DOT__i)]);
                        if (VL_LIKELY((0x28U >= (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk8__DOT__i)))) {
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__data_out 
                                = (((~ (1ULL << (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk8__DOT__i))) 
                                    & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__data_out) 
                                   | (0x1ffffffffffULL 
                                      & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                         << (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk8__DOT__i))));
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk8__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__unnamedblk8__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__op 
                        = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__data_out));
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__data 
                        = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__data_out 
                                   >> 2U));
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__data 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__data;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__op 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12775__op;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__wait_cycles 
                        = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__wait_cycles);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__trial_idx 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__trial_idx);
                }
                __Vtask_tb_croc_soc__DOT__jtag_write__12417__unnamedblk1__DOT__acs 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12643__data;
                if (VL_UNLIKELY((0U != (7U & (__Vtask_tb_croc_soc__DOT__jtag_write__12417__unnamedblk1__DOT__acs 
                                              >> 8U))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_croc_soc.sv:135: Assertion failed in %Ntb_croc_soc.jtag_write.unnamedblk1: [JTAG] Abstract command error!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("/fosic/designs/croc/rtl/tb_croc_soc.sv", 135, "", false);
                }
            }
        }
        if (__Vtask_tb_croc_soc__DOT__jtag_write__12417__wait_sba) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__address = 0x38U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__op = 0U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__trial_idx = 0U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__wait_cycles = 8U;
            if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__trial_idx)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12834__data 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12834__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12834__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12834__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12834__unnamedblk2__DOT__i)] 
                        = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                 >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12834__unnamedblk2__DOT__i)));
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12834__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12834__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12835__opcode = 0x10U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12835__opcode))) {
                        goto __Vlabel279;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12835__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12835__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12835__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12835__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12835__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12835__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12835__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12835__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12835__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12835__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12836__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12836__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12838__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12838__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12840__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12840__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12842__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12842__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12844__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12848__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12848__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12850__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12850__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12835__opcode;
                    __Vlabel279: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12853__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12853__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12855__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12855__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12857__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12857__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[5U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [5U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[6U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [6U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[7U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [7U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[8U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [8U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[9U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [9U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0xaU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xaU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0xbU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xbU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0xcU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xcU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0xdU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xdU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0xeU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xeU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0xfU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xfU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0x10U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x10U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0x11U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x11U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0x12U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x12U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0x13U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x13U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0x14U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x14U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0x15U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x15U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0x16U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x16U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0x17U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x17U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0x18U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x18U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0x19U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x19U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0x1aU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1aU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0x1bU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1bU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0x1cU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1cU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0x1dU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1dU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0x1eU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1eU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata[0x1fU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1fU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__unnamedblk3__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__unnamedblk3__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         98);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__wdata
                        [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__unnamedblk3__DOT__i)];
                    if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__unnamedblk3__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__unnamedblk3__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12859__unnamedblk3__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12863__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12863__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12864__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12864__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12866__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12866__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12868__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12868__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__wait_cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__address 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__address;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__data_out = 0ULL;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__write_data_packed 
                = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__address)))) 
                           << 0x22U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk6__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk6__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk6__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk6__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk6__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12871__opcode = 0x11U;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12871__opcode))) {
                    goto __Vlabel280;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12871__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12871__unnamedblk1__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12871__unnamedblk1__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12871__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12871__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12871__unnamedblk1__DOT__i))));
                    if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12871__unnamedblk1__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12871__unnamedblk1__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12871__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12871__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12872__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12872__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12874__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12874__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12876__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12876__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12878__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12878__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12880__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12884__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12884__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12886__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12886__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12871__opcode;
                __Vlabel280: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12889__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12889__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12891__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12891__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12893__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12893__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12895__tms_last = 1U;
            IData/*31:0*/ __Vilp14;
            __Vilp14 = 0U;
            while ((__Vilp14 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12895__wdata[__Vilp14] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp14];
                __Vilp14 = ((IData)(1U) + __Vilp14);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12895__unnamedblk4__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12895__unnamedblk4__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     107);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12895__unnamedblk4__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12895__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12895__unnamedblk4__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12895__unnamedblk4__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12895__tms_last;
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12895__unnamedblk4__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12895__unnamedblk4__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12899__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12899__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12900__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12900__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12902__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12902__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12904__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12904__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12906__cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12906__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12906__cycles;
            while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12906__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12906__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__12906__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                       - (IData)(1U));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12911__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12911__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12913__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12913__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12915__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12915__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__write_data_packed 
                = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__address)))) 
                   << 0x22U);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk7__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk7__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk7__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk7__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk7__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk7__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk7__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk7__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk7__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__tms_last = 1U;
            IData/*31:0*/ __Vilp15;
            __Vilp15 = 0U;
            while ((__Vilp15 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__wdata[__Vilp15] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp15];
                __Vilp15 = ((IData)(1U) + __Vilp15);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__unnamedblk6__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     129);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__unnamedblk6__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__unnamedblk6__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__rdata
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__unnamedblk6__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                }
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__unnamedblk6__DOT__i);
            }
            IData/*31:0*/ __Vilp16;
            __Vilp16 = 0U;
            while ((__Vilp16 <= 0x28U)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp16] 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__12917__rdata
                    [__Vilp16];
                __Vilp16 = ((IData)(1U) + __Vilp16);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12920__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12920__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12921__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12921__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12923__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12923__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12925__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12925__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk8__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk8__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__data_out 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk8__DOT__i))));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk8__DOT__i)) 
                       && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk8__DOT__i)]);
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk8__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__data_out 
                        = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk8__DOT__i))) 
                            & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__data_out) 
                           | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                                  << 
                                                  (0x3fU 
                                                   & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk8__DOT__i))));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk8__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__unnamedblk8__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__op 
                = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__data_out));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__data 
                = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__data_out 
                           >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__data 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__op 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12870__op;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__wait_cycles 
                = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__wait_cycles);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__trial_idx 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__trial_idx);
            while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__op))) {
                if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__trial_idx)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12928__data 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12928__data;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12928__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12928__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12928__unnamedblk2__DOT__i)] 
                            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                     >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12928__unnamedblk2__DOT__i)));
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12928__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__12928__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12929__opcode = 0x10U;
                    {
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12929__opcode))) {
                            goto __Vlabel281;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12929__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12929__unnamedblk1__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12929__unnamedblk1__DOT__i)];
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12929__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12929__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12929__unnamedblk1__DOT__i))));
                            if (VL_LIKELY((4U >= (7U 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12929__unnamedblk1__DOT__i)))) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12929__unnamedblk1__DOT__i)] 
                                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                            }
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12929__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12929__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12930__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12930__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12932__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12932__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12934__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12934__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12936__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12936__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__wdata[0U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [0U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__wdata[1U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [1U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__wdata[2U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [2U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__wdata[3U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [3U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__wdata[4U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [4U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12938__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12942__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12942__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12944__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12944__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12929__opcode;
                        __Vlabel281: ;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12947__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12947__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12949__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12949__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12951__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12951__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[5U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [5U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[6U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [6U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[7U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [7U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[8U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [8U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[9U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [9U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0xaU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xaU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0xbU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xbU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0xcU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xcU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0xdU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xdU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0xeU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xeU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0xfU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xfU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0x10U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x10U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0x11U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x11U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0x12U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x12U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0x13U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x13U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0x14U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x14U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0x15U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x15U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0x16U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x16U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0x17U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x17U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0x18U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x18U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0x19U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x19U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0x1aU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1aU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0x1bU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1bU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0x1cU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1cU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0x1dU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1dU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0x1eU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1eU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata[0x1fU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1fU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__unnamedblk3__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__unnamedblk3__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             98);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__wdata
                            [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__unnamedblk3__DOT__i)];
                        if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__unnamedblk3__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__unnamedblk3__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__12953__unnamedblk3__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12957__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12957__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12958__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12958__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12960__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12960__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12962__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12962__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__wait_cycles 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__wait_cycles;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__address 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__address;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__data_out = 0ULL;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__write_data_packed 
                    = (1ULL | ((QData)((IData)((0x7fU 
                                                & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__address)))) 
                               << 0x22U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk6__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk6__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__write_data_packed 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk6__DOT__i)))));
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk6__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk6__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk6__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12965__opcode = 0x11U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12965__opcode))) {
                        goto __Vlabel282;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12965__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12965__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12965__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12965__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12965__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12965__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12965__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12965__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12965__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12965__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12966__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12966__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12968__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12968__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12970__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12970__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12972__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12972__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__12974__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12978__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12978__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12980__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12980__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__12965__opcode;
                    __Vlabel282: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12983__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12983__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12985__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12985__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12987__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12987__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12989__tms_last = 1U;
                IData/*31:0*/ __Vilp17;
                __Vilp17 = 0U;
                while ((__Vilp17 <= 0x28U)) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12989__wdata[__Vilp17] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [__Vilp17];
                    __Vilp17 = ((IData)(1U) + __Vilp17);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12989__unnamedblk4__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12989__unnamedblk4__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         107);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12989__unnamedblk4__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12989__wdata
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12989__unnamedblk4__DOT__i)]);
                    if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12989__unnamedblk4__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12989__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12989__unnamedblk4__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__12989__unnamedblk4__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12993__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__12993__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12994__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12994__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12996__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12996__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12998__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__12998__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13000__cycles 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__wait_cycles;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13000__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13000__cycles;
                while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13000__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13000__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13000__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                           - (IData)(1U));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13005__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13005__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13007__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13007__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13009__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13009__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__write_data_packed 
                    = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__address)))) 
                       << 0x22U);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk7__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk7__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk7__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk7__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__write_data_packed 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk7__DOT__i)))));
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk7__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk7__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk7__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk7__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__tms_last = 1U;
                IData/*31:0*/ __Vilp18;
                __Vilp18 = 0U;
                while ((__Vilp18 <= 0x28U)) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__wdata[__Vilp18] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [__Vilp18];
                    __Vilp18 = ((IData)(1U) + __Vilp18);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__unnamedblk6__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         129);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__unnamedblk6__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__wdata
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__unnamedblk6__DOT__i)]);
                    if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__unnamedblk6__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__rdata
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__unnamedblk6__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__unnamedblk6__DOT__i)))) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__unnamedblk6__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                    }
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__unnamedblk6__DOT__i);
                }
                IData/*31:0*/ __Vilp19;
                __Vilp19 = 0U;
                while ((__Vilp19 <= 0x28U)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp19] 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13011__rdata
                        [__Vilp19];
                    __Vilp19 = ((IData)(1U) + __Vilp19);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13014__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13014__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13015__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13015__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13017__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13017__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13019__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13019__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk8__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk8__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__data_out 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk8__DOT__i))));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk8__DOT__i)) 
                           && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk8__DOT__i)]);
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk8__DOT__i)))) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__data_out 
                            = (((~ (1ULL << (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk8__DOT__i))) 
                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__data_out) 
                               | (0x1ffffffffffULL 
                                  & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                     << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk8__DOT__i))));
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk8__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__unnamedblk8__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__op 
                    = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__data_out));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__data 
                    = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__data_out 
                               >> 2U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__data 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__op 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__12964__op;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__wait_cycles 
                    = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__wait_cycles);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__trial_idx 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__trial_idx);
            }
            __Vtask_tb_croc_soc__DOT__jtag_write__12417__unnamedblk2__DOT__sbcs 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__12832__data;
            if (VL_UNLIKELY((0U != (7U & ((__Vtask_tb_croc_soc__DOT__jtag_write__12417__unnamedblk2__DOT__sbcs 
                                           >> 0xcU) 
                                          | (1U & (__Vtask_tb_croc_soc__DOT__jtag_write__12417__unnamedblk2__DOT__sbcs 
                                                   >> 0x16U))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_croc_soc.sv:142: Assertion failed in %Ntb_croc_soc.jtag_write.unnamedblk2: [JTAG] System bus error!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("/fosic/designs/croc/rtl/tb_croc_soc.sv", 142, "", false);
            }
            while ((0x200000U & __Vtask_tb_croc_soc__DOT__jtag_write__12417__unnamedblk2__DOT__sbcs)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__address = 0x38U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__op = 0U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__trial_idx = 0U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__wait_cycles = 8U;
                if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__trial_idx)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13023__data 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13023__data;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13023__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13023__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13023__unnamedblk2__DOT__i)] 
                            = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                     >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13023__unnamedblk2__DOT__i)));
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13023__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13023__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13024__opcode = 0x10U;
                    {
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13024__opcode))) {
                            goto __Vlabel283;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13024__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13024__unnamedblk1__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13024__unnamedblk1__DOT__i)];
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13024__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13024__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13024__unnamedblk1__DOT__i))));
                            if (VL_LIKELY((4U >= (7U 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13024__unnamedblk1__DOT__i)))) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13024__unnamedblk1__DOT__i)] 
                                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                            }
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13024__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13024__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13025__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13025__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13027__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13027__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13029__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13029__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13031__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13031__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__wdata[0U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [0U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__wdata[1U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [1U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__wdata[2U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [2U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__wdata[3U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [3U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__wdata[4U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [4U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13033__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13037__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13037__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13039__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13039__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13024__opcode;
                        __Vlabel283: ;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13042__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13042__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13044__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13044__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13046__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13046__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[5U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [5U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[6U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [6U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[7U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [7U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[8U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [8U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[9U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [9U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0xaU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xaU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0xbU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xbU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0xcU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xcU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0xdU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xdU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0xeU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xeU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0xfU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0xfU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0x10U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x10U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0x11U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x11U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0x12U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x12U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0x13U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x13U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0x14U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x14U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0x15U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x15U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0x16U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x16U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0x17U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x17U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0x18U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x18U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0x19U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x19U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0x1aU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1aU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0x1bU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1bU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0x1cU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1cU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0x1dU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1dU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0x1eU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1eU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata[0x1fU] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                        [0x1fU];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__unnamedblk3__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__unnamedblk3__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             98);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__wdata
                            [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__unnamedblk3__DOT__i)];
                        if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__unnamedblk3__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__unnamedblk3__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13048__unnamedblk3__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13052__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13052__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13053__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13053__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13055__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13055__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13057__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13057__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__wait_cycles 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__wait_cycles;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__address 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__address;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__data_out = 0ULL;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__write_data_packed 
                    = (1ULL | ((QData)((IData)((0x7fU 
                                                & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__address)))) 
                               << 0x22U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk6__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk6__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__write_data_packed 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk6__DOT__i)))));
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk6__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk6__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk6__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13060__opcode = 0x11U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13060__opcode))) {
                        goto __Vlabel284;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13060__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13060__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13060__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13060__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13060__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13060__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13060__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13060__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13060__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13060__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13061__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13061__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13063__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13063__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13065__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13065__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13067__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13067__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13069__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13073__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13073__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13075__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13075__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13060__opcode;
                    __Vlabel284: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13078__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13078__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13080__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13080__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13082__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13082__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13084__tms_last = 1U;
                IData/*31:0*/ __Vilp20;
                __Vilp20 = 0U;
                while ((__Vilp20 <= 0x28U)) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13084__wdata[__Vilp20] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [__Vilp20];
                    __Vilp20 = ((IData)(1U) + __Vilp20);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13084__unnamedblk4__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13084__unnamedblk4__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         107);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13084__unnamedblk4__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13084__wdata
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13084__unnamedblk4__DOT__i)]);
                    if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13084__unnamedblk4__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13084__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13084__unnamedblk4__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13084__unnamedblk4__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13088__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13088__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13089__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13089__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13091__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13091__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13093__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13093__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13095__cycles 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__wait_cycles;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13095__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13095__cycles;
                while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13095__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13095__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13095__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                           - (IData)(1U));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13100__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13100__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13102__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13102__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13104__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13104__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__write_data_packed 
                    = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__address)))) 
                       << 0x22U);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk7__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk7__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk7__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk7__DOT__i)) 
                           && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__write_data_packed 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk7__DOT__i)))));
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk7__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk7__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk7__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk7__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__tms_last = 1U;
                IData/*31:0*/ __Vilp21;
                __Vilp21 = 0U;
                while ((__Vilp21 <= 0x28U)) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__wdata[__Vilp21] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                        [__Vilp21];
                    __Vilp21 = ((IData)(1U) + __Vilp21);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__unnamedblk6__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__unnamedblk6__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         129);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__unnamedblk6__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__wdata
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__unnamedblk6__DOT__i)]);
                    if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__unnamedblk6__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__tms_last;
                    }
                    co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         153);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__rdata
                        [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__unnamedblk6__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__unnamedblk6__DOT__i)))) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__unnamedblk6__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                    }
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__unnamedblk6__DOT__i);
                }
                IData/*31:0*/ __Vilp22;
                __Vilp22 = 0U;
                while ((__Vilp22 <= 0x28U)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp22] 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13106__rdata
                        [__Vilp22];
                    __Vilp22 = ((IData)(1U) + __Vilp22);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13109__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13109__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13110__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13110__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13112__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13112__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13114__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13114__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk8__DOT__i = 0U;
                while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk8__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                        = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__data_out 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk8__DOT__i))));
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                        = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk8__DOT__i)) 
                           && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                           [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk8__DOT__i)]);
                    if (VL_LIKELY((0x28U >= (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk8__DOT__i)))) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__data_out 
                            = (((~ (1ULL << (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk8__DOT__i))) 
                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__data_out) 
                               | (0x1ffffffffffULL 
                                  & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                     << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk8__DOT__i))));
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk8__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__unnamedblk8__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__op 
                    = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__data_out));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__data 
                    = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__data_out 
                               >> 2U));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__data 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__op 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13059__op;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__wait_cycles 
                    = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__wait_cycles);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__trial_idx 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__trial_idx);
                while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__op))) {
                    if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__trial_idx)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13117__data 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13117__data;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13117__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13117__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13117__unnamedblk2__DOT__i)] 
                                = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                         >> (0x1fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13117__unnamedblk2__DOT__i)));
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13117__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13117__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13118__opcode = 0x10U;
                        {
                            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13118__opcode))) {
                                goto __Vlabel285;
                            }
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13118__unnamedblk1__DOT__i = 0U;
                            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13118__unnamedblk1__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                    [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13118__unnamedblk1__DOT__i)];
                                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13118__unnamedblk1__DOT__i)) 
                                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13118__opcode) 
                                                 >> 
                                                 (7U 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13118__unnamedblk1__DOT__i))));
                                if (VL_LIKELY((4U >= 
                                               (7U 
                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13118__unnamedblk1__DOT__i)))) {
                                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13118__unnamedblk1__DOT__i)] 
                                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                                }
                                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13118__unnamedblk1__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13118__unnamedblk1__DOT__i);
                            }
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13119__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13119__tms_val;
                            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                                "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13121__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13121__tms_val;
                            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                                "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13123__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13123__tms_val;
                            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                                "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13125__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13125__tms_val;
                            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                                "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__tms_last = 1U;
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__wdata[0U] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [0U];
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__wdata[1U] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [1U];
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__wdata[2U] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [2U];
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__wdata[3U] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [3U];
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__wdata[4U] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [4U];
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__unnamedblk2__DOT__i = 0U;
                            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__unnamedblk2__DOT__i)) {
                                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                     nullptr, 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     89);
                                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__unnamedblk2__DOT__i)) 
                                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__wdata
                                       [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__unnamedblk2__DOT__i)]);
                                if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__unnamedblk2__DOT__i)) {
                                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__tms_last;
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
                                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__unnamedblk2__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13127__unnamedblk2__DOT__i);
                            }
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13131__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13131__tms_val;
                            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                                "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13133__tms_val = 0U;
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13133__tms_val;
                            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                                "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13118__opcode;
                            __Vlabel285: ;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13136__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13136__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13138__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13138__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13140__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13140__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[1U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [1U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[2U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [2U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[3U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [3U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[4U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [4U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[5U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [5U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[6U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [6U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[7U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [7U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[8U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [8U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[9U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [9U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0xaU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0xaU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0xbU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0xbU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0xcU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0xcU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0xdU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0xdU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0xeU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0xeU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0xfU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0xfU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0x10U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x10U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0x11U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x11U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0x12U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x12U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0x13U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x13U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0x14U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x14U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0x15U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x15U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0x16U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x16U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0x17U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x17U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0x18U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x18U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0x19U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x19U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0x1aU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x1aU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0x1bU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x1bU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0x1cU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x1cU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0x1dU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x1dU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0x1eU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x1eU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata[0x1fU] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                            [0x1fU];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__unnamedblk3__DOT__i = 0U;
                        while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__unnamedblk3__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 98);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__wdata
                                [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__unnamedblk3__DOT__i)];
                            if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__unnamedblk3__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__unnamedblk3__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13142__unnamedblk3__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13146__exit_1_dr = 0U;
                        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13146__exit_1_dr) {
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13147__tms_val = 1U;
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 143);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13147__tms_val;
                            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                                "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                                157);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13149__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13149__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13151__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13151__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__wait_cycles 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__wait_cycles;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__address 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__address;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__data_out = 0ULL;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__write_data_packed 
                        = (1ULL | ((QData)((IData)(
                                                   (0x7fU 
                                                    & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__address)))) 
                                   << 0x22U));
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk6__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk6__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                            [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk6__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                            = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk6__DOT__i)) 
                               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__write_data_packed 
                                                 >> 
                                                 (0x3fU 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk6__DOT__i)))));
                        if (VL_LIKELY((0x28U >= (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk6__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk6__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk6__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk6__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13154__opcode = 0x11U;
                    {
                        if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                             == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13154__opcode))) {
                            goto __Vlabel286;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13154__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13154__unnamedblk1__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                                [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13154__unnamedblk1__DOT__i)];
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13154__unnamedblk1__DOT__i)) 
                                   && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13154__opcode) 
                                             >> (7U 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13154__unnamedblk1__DOT__i))));
                            if (VL_LIKELY((4U >= (7U 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13154__unnamedblk1__DOT__i)))) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13154__unnamedblk1__DOT__i)] 
                                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                            }
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13154__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13154__unnamedblk1__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13155__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13155__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13157__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13157__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13159__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13159__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13161__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13161__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__tms_last = 1U;
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__wdata[0U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [0U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__wdata[1U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [1U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__wdata[2U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [2U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__wdata[3U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [3U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__wdata[4U] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [4U];
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__unnamedblk2__DOT__i)) {
                            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                                 nullptr, 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 89);
                            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                                = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__unnamedblk2__DOT__i)) 
                                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__wdata
                                   [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__unnamedblk2__DOT__i)]);
                            if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__unnamedblk2__DOT__i)) {
                                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__tms_last;
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
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13163__unnamedblk2__DOT__i);
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13167__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13167__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13169__tms_val = 0U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13169__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13154__opcode;
                        __Vlabel286: ;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13172__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13172__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13174__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13174__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13176__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13176__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13178__tms_last = 1U;
                    IData/*31:0*/ __Vilp23;
                    __Vilp23 = 0U;
                    while ((__Vilp23 <= 0x28U)) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13178__wdata[__Vilp23] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                            [__Vilp23];
                        __Vilp23 = ((IData)(1U) + __Vilp23);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13178__unnamedblk4__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13178__unnamedblk4__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             107);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13178__unnamedblk4__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13178__wdata
                               [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13178__unnamedblk4__DOT__i)]);
                        if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13178__unnamedblk4__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13178__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13178__unnamedblk4__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13178__unnamedblk4__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13182__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13182__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13183__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13183__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13185__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13185__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13187__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13187__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13189__cycles 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__wait_cycles;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13189__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13189__cycles;
                    while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13189__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13189__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                            = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13189__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                               - (IData)(1U));
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13194__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13194__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13196__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13196__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13198__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13198__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__write_data_packed 
                        = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__address)))) 
                           << 0x22U);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk7__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk7__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                            [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk7__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                            = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk7__DOT__i)) 
                               && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__write_data_packed 
                                                 >> 
                                                 (0x3fU 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk7__DOT__i)))));
                        if (VL_LIKELY((0x28U >= (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk7__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk7__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk7__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk7__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__tms_last = 1U;
                    IData/*31:0*/ __Vilp24;
                    __Vilp24 = 0U;
                    while ((__Vilp24 <= 0x28U)) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__wdata[__Vilp24] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                            [__Vilp24];
                        __Vilp24 = ((IData)(1U) + __Vilp24);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__unnamedblk6__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__unnamedblk6__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             129);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__unnamedblk6__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__wdata
                               [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__unnamedblk6__DOT__i)]);
                        if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__unnamedblk6__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__tms_last;
                        }
                        co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             153);
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__rdata
                            [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__unnamedblk6__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                        if (VL_LIKELY((0x28U >= (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__unnamedblk6__DOT__i)))) {
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__unnamedblk6__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                        }
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__unnamedblk6__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__unnamedblk6__DOT__i);
                    }
                    IData/*31:0*/ __Vilp25;
                    __Vilp25 = 0U;
                    while ((__Vilp25 <= 0x28U)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp25] 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13200__rdata
                            [__Vilp25];
                        __Vilp25 = ((IData)(1U) + __Vilp25);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13203__exit_1_dr = 0U;
                    if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13203__exit_1_dr) {
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13204__tms_val = 1U;
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             143);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13204__tms_val;
                        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                             157);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13206__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13206__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13208__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13208__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk8__DOT__i = 0U;
                    while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk8__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                            = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__data_out 
                                             >> (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk8__DOT__i))));
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                            = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk8__DOT__i)) 
                               && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                               [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk8__DOT__i)]);
                        if (VL_LIKELY((0x28U >= (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk8__DOT__i)))) {
                            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__data_out 
                                = (((~ (1ULL << (0x3fU 
                                                 & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk8__DOT__i))) 
                                    & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__data_out) 
                                   | (0x1ffffffffffULL 
                                      & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                         << (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk8__DOT__i))));
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk8__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__unnamedblk8__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__op 
                        = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__data_out));
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__data 
                        = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__data_out 
                                   >> 2U));
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__data 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__data;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__op 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13153__op;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__wait_cycles 
                        = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__wait_cycles);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__trial_idx 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__trial_idx);
                }
                __Vtask_tb_croc_soc__DOT__jtag_write__12417__unnamedblk2__DOT__sbcs 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13021__data;
                if (VL_UNLIKELY((0U != (7U & ((__Vtask_tb_croc_soc__DOT__jtag_write__12417__unnamedblk2__DOT__sbcs 
                                               >> 0xcU) 
                                              | (1U 
                                                 & (__Vtask_tb_croc_soc__DOT__jtag_write__12417__unnamedblk2__DOT__sbcs 
                                                    >> 0x16U))))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_croc_soc.sv:142: Assertion failed in %Ntb_croc_soc.jtag_write.unnamedblk2: [JTAG] System bus error!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("/fosic/designs/croc/rtl/tb_croc_soc.sv", 142, "", false);
                }
            }
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__wait_idle__13210__cycles = 0x14U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13211__cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__wait_idle__13210__cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13211__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13211__cycles;
        while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13211__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13211__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13211__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__address = 0x3cU;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__op = 0U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__trial_idx = 0U;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__wait_cycles = 8U;
        if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__trial_idx)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13217__data 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13217__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13217__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13217__unnamedblk2__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13217__unnamedblk2__DOT__i)] 
                    = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                             >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13217__unnamedblk2__DOT__i)));
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13217__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13217__unnamedblk2__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13218__opcode = 0x10U;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13218__opcode))) {
                    goto __Vlabel287;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13218__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13218__unnamedblk1__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13218__unnamedblk1__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13218__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13218__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13218__unnamedblk1__DOT__i))));
                    if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13218__unnamedblk1__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13218__unnamedblk1__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13218__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13218__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13219__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13219__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13221__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13221__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13223__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13223__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13225__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13225__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13227__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13231__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13231__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13233__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13233__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13218__opcode;
                __Vlabel287: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13236__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13236__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13238__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13238__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13240__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13240__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[5U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [5U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[6U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [6U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[7U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [7U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[8U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [8U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[9U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [9U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0xaU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xaU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0xbU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xbU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0xcU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xcU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0xdU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xdU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0xeU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xeU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0xfU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0xfU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0x10U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x10U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0x11U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x11U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0x12U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x12U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0x13U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x13U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0x14U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x14U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0x15U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x15U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0x16U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x16U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0x17U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x17U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0x18U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x18U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0x19U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x19U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0x1aU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1aU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0x1bU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1bU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0x1cU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1cU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0x1dU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1dU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0x1eU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1eU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata[0x1fU] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                [0x1fU];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__unnamedblk3__DOT__i = 0U;
            while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__unnamedblk3__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     98);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__wdata
                    [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__unnamedblk3__DOT__i)];
                if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__unnamedblk3__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__tms_last;
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__unnamedblk3__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13242__unnamedblk3__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13246__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13246__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13247__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13247__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13249__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13249__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13251__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13251__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__wait_cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__address 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__address;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__data_out = 0ULL;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__write_data_packed 
            = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__address)))) 
                       << 0x22U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk6__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk6__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk6__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk6__DOT__i)) 
                   && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__write_data_packed 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk6__DOT__i)))));
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk6__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk6__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk6__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13254__opcode = 0x11U;
        {
            if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                 == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13254__opcode))) {
                goto __Vlabel288;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13254__unnamedblk1__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13254__unnamedblk1__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13254__unnamedblk1__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13254__unnamedblk1__DOT__i)) 
                       && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13254__opcode) 
                                 >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13254__unnamedblk1__DOT__i))));
                if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13254__unnamedblk1__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13254__unnamedblk1__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13254__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13254__unnamedblk1__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13255__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13255__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13257__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13257__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13259__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13259__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13261__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13261__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__tms_last = 1U;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__wdata[0U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [0U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__wdata[1U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [1U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__wdata[2U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [2U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__wdata[3U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [3U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__wdata[4U] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                [4U];
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__unnamedblk2__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     89);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__unnamedblk2__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__wdata
                       [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__unnamedblk2__DOT__i)]);
                if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__tms_last;
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__unnamedblk2__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13263__unnamedblk2__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13267__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13267__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13269__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13269__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13254__opcode;
            __Vlabel288: ;
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13272__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13272__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13274__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13274__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13276__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13276__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13278__tms_last = 1U;
        IData/*31:0*/ __Vilp26;
        __Vilp26 = 0U;
        while ((__Vilp26 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13278__wdata[__Vilp26] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp26];
            __Vilp26 = ((IData)(1U) + __Vilp26);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13278__unnamedblk4__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13278__unnamedblk4__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 107);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13278__unnamedblk4__DOT__i)) 
                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13278__wdata
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13278__unnamedblk4__DOT__i)]);
            if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13278__unnamedblk4__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13278__tms_last;
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
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13278__unnamedblk4__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13278__unnamedblk4__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13282__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13282__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13283__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13283__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13285__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13285__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13287__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13287__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13289__cycles 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__wait_cycles;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13289__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13289__cycles;
        while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13289__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13289__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13289__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13294__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13294__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13296__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13296__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13298__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13298__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__write_data_packed 
            = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__address)))) 
               << 0x22U);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk7__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk7__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk7__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk7__DOT__i)) 
                   && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__write_data_packed 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk7__DOT__i)))));
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk7__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk7__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk7__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk7__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__tms_last = 1U;
        IData/*31:0*/ __Vilp27;
        __Vilp27 = 0U;
        while ((__Vilp27 <= 0x28U)) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__wdata[__Vilp27] 
                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                [__Vilp27];
            __Vilp27 = ((IData)(1U) + __Vilp27);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__unnamedblk6__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__unnamedblk6__DOT__i)) {
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 129);
            vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__unnamedblk6__DOT__i)) 
                   && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__wdata
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__unnamedblk6__DOT__i)]);
            if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__unnamedblk6__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__tms_last;
            }
            co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 153);
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__rdata
                [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__unnamedblk6__DOT__i)];
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__unnamedblk6__DOT__i)))) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__unnamedblk6__DOT__i)] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
            }
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__unnamedblk6__DOT__i);
        }
        IData/*31:0*/ __Vilp28;
        __Vilp28 = 0U;
        while ((__Vilp28 <= 0x28U)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp28] 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13300__rdata
                [__Vilp28];
            __Vilp28 = ((IData)(1U) + __Vilp28);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13303__exit_1_dr = 0U;
        if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13303__exit_1_dr) {
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13304__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13304__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13306__tms_val = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13306__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13308__tms_val = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                             143);
        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13308__tms_val;
        co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             157);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk8__DOT__i = 0U;
        while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk8__DOT__i)) {
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__data_out 
                                 >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk8__DOT__i))));
            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk8__DOT__i)) 
                   && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                   [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk8__DOT__i)]);
            if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk8__DOT__i)))) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__data_out 
                    = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk8__DOT__i))) 
                        & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__data_out) 
                       | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                              << (0x3fU 
                                                  & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk8__DOT__i))));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk8__DOT__i 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__unnamedblk8__DOT__i);
        }
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__op 
            = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__data_out));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__data 
            = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__data_out 
                       >> 2U));
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__data 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__data;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__op 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13253__op;
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__wait_cycles 
            = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__wait_cycles);
        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__trial_idx 
            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__trial_idx);
        while ((3U == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__op))) {
            if ((0U != __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__trial_idx)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = 0x10000U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13311__data 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset;
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13311__data;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13311__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13311__unnamedblk2__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[(0x1fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13311__unnamedblk2__DOT__i)] 
                        = (1U & (vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed 
                                 >> (0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13311__unnamedblk2__DOT__i)));
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13311__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__13311__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13312__opcode = 0x10U;
                {
                    if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                         == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13312__opcode))) {
                        goto __Vlabel289;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13312__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13312__unnamedblk1__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                            [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13312__unnamedblk1__DOT__i)];
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13312__unnamedblk1__DOT__i)) 
                               && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13312__opcode) 
                                         >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13312__unnamedblk1__DOT__i))));
                        if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13312__unnamedblk1__DOT__i)))) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13312__unnamedblk1__DOT__i)] 
                                = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                        }
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13312__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13312__unnamedblk1__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13313__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13313__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13315__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13315__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13317__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13317__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13319__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13319__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__tms_last = 1U;
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__wdata[0U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [0U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__wdata[1U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [1U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__wdata[2U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [2U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__wdata[3U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [3U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__wdata[4U] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [4U];
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__unnamedblk2__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__unnamedblk2__DOT__i)) {
                        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                             nullptr, 
                                                             "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                             89);
                        vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                            = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__unnamedblk2__DOT__i)) 
                               && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__wdata
                               [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__unnamedblk2__DOT__i)]);
                        if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__unnamedblk2__DOT__i)) {
                            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__tms_last;
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
                        __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13321__unnamedblk2__DOT__i);
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13325__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13325__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13327__tms_val = 0U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13327__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13312__opcode;
                    __Vlabel289: ;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13330__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13330__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13332__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13332__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13334__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13334__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[5U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [5U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[6U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [6U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[7U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [7U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[8U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [8U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[9U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [9U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0xaU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xaU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0xbU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xbU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0xcU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xcU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0xdU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xdU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0xeU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xeU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0xfU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0xfU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0x10U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x10U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0x11U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x11U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0x12U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x12U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0x13U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x13U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0x14U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x14U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0x15U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x15U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0x16U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x16U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0x17U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x17U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0x18U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x18U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0x19U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x19U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0x1aU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1aU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0x1bU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1bU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0x1cU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1cU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0x1dU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1dU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0x1eU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1eU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata[0x1fU] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data
                    [0x1fU];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__unnamedblk3__DOT__i = 0U;
                while (VL_GTS_III(32, 0x20U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__unnamedblk3__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         98);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__wdata
                        [(0x1fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__unnamedblk3__DOT__i)];
                    if ((0x1fU == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__unnamedblk3__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__unnamedblk3__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_32__13336__unnamedblk3__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13340__exit_1_dr = 0U;
                if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13340__exit_1_dr) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13341__tms_val = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         143);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13341__tms_val;
                    co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                         157);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13343__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13343__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13345__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13345__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__wait_cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__address 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__address;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__data_out = 0ULL;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__write_data_packed 
                = (1ULL | ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__address)))) 
                           << 0x22U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk6__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk6__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk6__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk6__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk6__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13348__opcode = 0x11U;
            {
                if (((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select) 
                     == (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13348__opcode))) {
                    goto __Vlabel290;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13348__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13348__unnamedblk1__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                        [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13348__unnamedblk1__DOT__i)];
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13348__unnamedblk1__DOT__i)) 
                           && (1U & ((IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13348__opcode) 
                                     >> (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13348__unnamedblk1__DOT__i))));
                    if (VL_LIKELY((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13348__unnamedblk1__DOT__i)))) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[(7U 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13348__unnamedblk1__DOT__i)] 
                            = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0;
                    }
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13348__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13348__unnamedblk1__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13349__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13349__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13351__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13351__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13353__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13353__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13355__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13355__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__tms_last = 1U;
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__wdata[0U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [0U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__wdata[1U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [1U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__wdata[2U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [2U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__wdata[3U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [3U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__wdata[4U] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked
                    [4U];
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__unnamedblk2__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__unnamedblk2__DOT__i)) {
                    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                         nullptr, 
                                                         "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                         89);
                    vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                        = ((4U >= (7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__unnamedblk2__DOT__i)) 
                           && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__wdata
                           [(7U & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__unnamedblk2__DOT__i)]);
                    if ((4U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__unnamedblk2__DOT__i)) {
                        vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__tms_last;
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
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_opcode__13357__unnamedblk2__DOT__i);
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13361__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13361__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13363__tms_val = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13363__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__13348__opcode;
                __Vlabel290: ;
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13366__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13366__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13368__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13368__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13370__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13370__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13372__tms_last = 1U;
            IData/*31:0*/ __Vilp29;
            __Vilp29 = 0U;
            while ((__Vilp29 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13372__wdata[__Vilp29] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp29];
                __Vilp29 = ((IData)(1U) + __Vilp29);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13372__unnamedblk4__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13372__unnamedblk4__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     107);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13372__unnamedblk4__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13372__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13372__unnamedblk4__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13372__unnamedblk4__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13372__tms_last;
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
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13372__unnamedblk4__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_bits_dmi__13372__unnamedblk4__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13376__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13376__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13377__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13377__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13379__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13379__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13381__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13381__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13383__cycles 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__wait_cycles;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13383__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13383__cycles;
            while (VL_LTS_III(32, 0U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13383__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13383__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__wait_idle__13383__tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__unnamedblk1_3__DOT____Vrepeat2 
                       - (IData)(1U));
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13388__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13388__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13390__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13390__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13392__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13392__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__write_data_packed 
                = ((QData)((IData)((0x7fU & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__address)))) 
                   << 0x22U);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk7__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk7__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk7__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk7__DOT__i)) 
                       && (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__write_data_packed 
                                         >> (0x3fU 
                                             & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk7__DOT__i)))));
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk7__DOT__i)))) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk7__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0;
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk7__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk7__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__tms_last = 1U;
            IData/*31:0*/ __Vilp30;
            __Vilp30 = 0U;
            while ((__Vilp30 <= 0x28U)) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__wdata[__Vilp30] 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data
                    [__Vilp30];
                __Vilp30 = ((IData)(1U) + __Vilp30);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__unnamedblk6__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__unnamedblk6__DOT__i)) {
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     129);
                vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__unnamedblk6__DOT__i)) 
                       && __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__wdata
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__unnamedblk6__DOT__i)]);
                if ((0x28U == __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__unnamedblk6__DOT__i)) {
                    vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                        = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__tms_last;
                }
                co_await vlSelfRef.__VdlySched.delay(0x7530ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     153);
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__rdata
                    [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__unnamedblk6__DOT__i)];
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 
                    = vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o;
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__unnamedblk6__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__rdata[(0x3fU 
                                                                                & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__unnamedblk6__DOT__i)] 
                        = vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0;
                }
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__unnamedblk6__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__unnamedblk6__DOT__i);
            }
            IData/*31:0*/ __Vilp31;
            __Vilp31 = 0U;
            while ((__Vilp31 <= 0x28U)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vilp31] 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__readwrite_bits_dmi__13394__rdata
                    [__Vilp31];
                __Vilp31 = ((IData)(1U) + __Vilp31);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13397__exit_1_dr = 0U;
            if (__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__update_dr__13397__exit_1_dr) {
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13398__tms_val = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                     nullptr, 
                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                     143);
                vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                    = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13398__tms_val;
                co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                     "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                     157);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13400__tms_val = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13400__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13402__tms_val = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                                 nullptr, 
                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                 143);
            vlSelfRef.tb_croc_soc__DOT__jtag_tms_i 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__write_tms__13402__tms_val;
            co_await vlSelfRef.__VtrigSched_h83675457__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_croc_soc.i_clk_jtag.clk)", 
                                                                 "/fosic/designs/croc/rtl/riscv-dbg/tb/jtag_test_simple.sv", 
                                                                 157);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk8__DOT__i = 0U;
            while (VL_GTS_III(32, 0x29U, __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk8__DOT__i)) {
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = (1U & (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__data_out 
                                     >> (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk8__DOT__i))));
                vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 
                    = ((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk8__DOT__i)) 
                       && vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data
                       [(0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk8__DOT__i)]);
                if (VL_LIKELY((0x28U >= (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk8__DOT__i)))) {
                    __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__data_out 
                        = (((~ (1ULL << (0x3fU & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk8__DOT__i))) 
                            & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__data_out) 
                           | (0x1ffffffffffULL & ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0)) 
                                                  << 
                                                  (0x3fU 
                                                   & __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk8__DOT__i))));
                }
                __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk8__DOT__i 
                    = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__unnamedblk8__DOT__i);
            }
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__op 
                = (3U & (IData)(__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__data_out));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__data 
                = (IData)((__Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__data_out 
                           >> 2U));
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__data 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__data;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__op 
                = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__13347__op;
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__wait_cycles 
                = VL_MULS_III(32, (IData)(2U), __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__wait_cycles);
            __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__trial_idx 
                = ((IData)(1U) + __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__trial_idx);
        }
        vlSelfRef.__Vtask_tb_croc_soc__DOT__jtag_wait_for_eoc__9843__exit_code 
            = __Vtask_tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__13215__data;
    }
}
