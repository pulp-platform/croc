// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc___024root.h"

VL_ATTR_COLD void Vtb_croc_soc___024root___eval_static__TOP(Vtb_croc_soc___024root* vlSelf);

VL_ATTR_COLD void Vtb_croc_soc___024root___eval_static(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_croc_soc___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_croc_soc___024root___eval_static__TOP(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select = 1U;
}

extern const VlWide<12>/*383:0*/ Vtb_croc_soc__ConstPool__CONST_hafbd2f73_0;

VL_ATTR_COLD void Vtb_croc_soc___024root___eval_initial__TOP(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x793d2573U;
    __Vtemp_1[1U] = 0x696e6172U;
    __Vtemp_1[2U] = 0x62U;
    if (VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                             vlSelfRef.tb_croc_soc__DOT__binary_path)) {
        VL_WRITEF_NX("Running program: %@\n",0,-1,&(vlSelfRef.tb_croc_soc__DOT__binary_path));
        Verilated::runFlushCallbacks();
    } else {
        VL_WRITEF_NX("No binary path provided. Running helloworld.\n",0);
        Verilated::runFlushCallbacks();
        vlSelfRef.tb_croc_soc__DOT__binary_path = std::string{"../sw/bin/helloworld.hex"};
    }
    VL_WRITEF_NX("ClkFrequency:         20MHz\nUartRealBaudRate:     125000\n",0);
    Verilated::runFlushCallbacks();
    vlSelfRef.tb_croc_soc__DOT__uart_rx_i = 1U;
    vlSelfRef.tb_croc_soc__DOT__uart_reading_byte = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_clk_rst_sys__DOT__clk = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_clk_rst_rtc__DOT__clk = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__clk = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x200U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__init_val[(0x1ffU 
                                                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x200U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__init_val[(0x1ffU 
                                                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_imd_val_d[0U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_mhpmevent__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x20U, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_mhpmevent__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[(0x1fU 
                                                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_mhpmevent__DOT__unnamedblk2__DOT__i)] = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[(0x1fU 
                                                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_mhpmevent__DOT__unnamedblk2__DOT__i)] 
            = (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent
               [(0x1fU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_mhpmevent__DOT__unnamedblk2__DOT__i)] 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_mhpmevent__DOT__unnamedblk2__DOT__i))));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_mhpmevent__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_mhpmevent__DOT__unnamedblk2__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[1U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_mhpmevent__DOT__unnamedblk3__DOT__i = 3U;
    while ((0x20U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_mhpmevent__DOT__unnamedblk3__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[(0x1fU 
                                                                                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_mhpmevent__DOT__unnamedblk3__DOT__i)] = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_mhpmevent__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_mhpmevent__DOT__unnamedblk3__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
        = (0x212380ULL | (0xffffffff00000000ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__dec_valid_o = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_addr_decode__idx_o = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i = 0U;
    while ((4U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)) {
        if (((0U >= ((0x17fU >= ((IData)(0x20U) + (0x1ffU 
                                                   & ((IData)(0x60U) 
                                                      * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))
                      ? (((0U == (0x1fU & ((IData)(0x20U) 
                                           + (0x1ffU 
                                              & ((IData)(0x60U) 
                                                 * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))))
                           ? 0U : (Vtb_croc_soc__ConstPool__CONST_hafbd2f73_0[
                                   (((IData)(0x3fU) 
                                     + (0x1ffU & ((IData)(0x60U) 
                                                  * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x20U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x60U) 
                                                          * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))))) 
                         | (Vtb_croc_soc__ConstPool__CONST_hafbd2f73_0[
                            (((IData)(0x20U) + (0x1ffU 
                                                & ((IData)(0x60U) 
                                                   * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  (0x1ffU 
                                                   & ((IData)(0x60U) 
                                                      * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))))
                      : 0U)) & ((0U < ((0x17fU >= (0x1ffU 
                                                   & ((IData)(0x60U) 
                                                      * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))
                                        ? (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x60U) 
                                                 * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))
                                             ? 0U : 
                                            (Vtb_croc_soc__ConstPool__CONST_hafbd2f73_0[
                                             (((IData)(0x1fU) 
                                               + (0x1ffU 
                                                  & ((IData)(0x60U) 
                                                     * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x60U) 
                                                     * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))) 
                                           | (Vtb_croc_soc__ConstPool__CONST_hafbd2f73_0[
                                              (0xfU 
                                               & (((IData)(0x60U) 
                                                   * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x60U) 
                                                     * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))
                                        : 0U)) | (0U 
                                                  == 
                                                  ((0x17fU 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((IData)(0x60U) 
                                                        * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x60U) 
                                                          * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))
                                                      ? 0U
                                                      : 
                                                     (Vtb_croc_soc__ConstPool__CONST_hafbd2f73_0[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((IData)(0x60U) 
                                                            * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x60U) 
                                                           * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))) 
                                                    | (Vtb_croc_soc__ConstPool__CONST_hafbd2f73_0[
                                                       (0xfU 
                                                        & (((IData)(0x60U) 
                                                            * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x60U) 
                                                           * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))
                                                    : 0U))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules 
                = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules) 
                   | (0xfU & ((IData)(1U) << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__dec_valid_o = 1U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__dec_error_o = 0U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_addr_decode__idx_o 
                = ((0x17fU >= ((IData)(0x40U) + (0x1ffU 
                                                 & ((IData)(0x60U) 
                                                    * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))
                    ? (7U & (((0U == (0x1fU & ((IData)(0x40U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x60U) 
                                                     * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))))
                               ? 0U : (Vtb_croc_soc__ConstPool__CONST_hafbd2f73_0[
                                       (((IData)(0x42U) 
                                         + (0x1ffU 
                                            & ((IData)(0x60U) 
                                               * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x40U) 
                                            + (0x1ffU 
                                               & ((IData)(0x60U) 
                                                  * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))))) 
                             | (Vtb_croc_soc__ConstPool__CONST_hafbd2f73_0[
                                (((IData)(0x40U) + 
                                  (0x1ffU & ((IData)(0x60U) 
                                             * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                 >> 5U)] >> (0x1fU 
                                             & ((IData)(0x40U) 
                                                + (0x1ffU 
                                                   & ((IData)(0x60U) 
                                                      * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))))))
                    : 0U);
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_addr[0U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_addr[1U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_addr[2U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_addr[3U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_cfg[0U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_cfg[1U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_cfg[2U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_cfg[3U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pmp_req_err[0U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pmp_req_err[1U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pmp_req_err[2U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xaU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xbU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xcU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xdU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xeU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xfU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[0U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[1U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[2U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[3U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[4U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[5U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[6U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[7U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[8U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[9U] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xaU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xbU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xcU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xdU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xeU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xfU] = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[1U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[3U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[4U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[5U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[6U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[7U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[8U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[9U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0xaU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0xbU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0xcU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0xdU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0xeU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0xfU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x10U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x11U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x12U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x13U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x14U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x15U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x16U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x17U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x18U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x19U] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x1aU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x1bU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x1cU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x1dU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x1eU] = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[0x1fU] = 0ULL;
}

VL_ATTR_COLD void Vtb_croc_soc___024root___eval_final(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_croc_soc___024root___dump_triggers__stl(Vtb_croc_soc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_croc_soc___024root___eval_phase__stl(Vtb_croc_soc___024root* vlSelf);

VL_ATTR_COLD void Vtb_croc_soc___024root___eval_settle(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_croc_soc___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/fosic/designs/croc/rtl/tb_croc_soc.sv", 10, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_croc_soc___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_croc_soc___024root___dump_triggers__stl(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_ibex.id_stage_i.instr_executing_spec)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_ibex.id_stage_i.controller_i.special_req)\n");
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_ibex.if_stage_i.fetch_ready)\n");
    }
    if ((0x10ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((0x20ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((0x40ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x80ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x100ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((0x200ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((0x400ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x800ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dm_top.i_dm_top.clear_resumeack)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 13 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.data_nodes)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 14 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 15 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 16 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.data_nodes)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 17 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 18 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 19 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.data_nodes)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 20 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 21 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 22 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.data_nodes)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 23 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 24 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 25 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.data_nodes)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 26 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 27 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 28 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.all_periph_obi_rsp)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 29 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_user.i_user_sdhci.i_regs.addr_hit)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 30 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.req_nodes)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 31 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.req_nodes)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 32 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.req_nodes)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 33 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.req_nodes)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 34 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.req_nodes)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 35 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_57)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 36 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_58)\n");
    }
    if ((0x2000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 37 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_59)\n");
    }
    if ((0x4000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 38 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_46)\n");
    }
    if ((0x8000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 39 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_47)\n");
    }
    if ((0x10000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 40 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_48)\n");
    }
    if ((0x20000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 41 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_35)\n");
    }
    if ((0x40000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 42 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_36)\n");
    }
    if ((0x80000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 43 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_37)\n");
    }
    if ((0x100000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 44 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_24)\n");
    }
    if ((0x200000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 45 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_25)\n");
    }
    if ((0x400000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 46 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_26)\n");
    }
    if ((0x800000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 47 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_13)\n");
    }
    if ((0x1000000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 48 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_14)\n");
    }
    if ((0x2000000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 49 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_15)\n");
    }
    if ((0x4000000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 50 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.sel_nodes)\n");
    }
    if ((0x8000000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 51 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.index_nodes)\n");
    }
    if ((0x10000000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 52 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.index_nodes)\n");
    }
    if ((0x20000000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 53 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.sel_nodes)\n");
    }
    if ((0x40000000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 54 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gnt_nodes)\n");
    }
    if ((0x80000000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 55 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.sel_nodes)\n");
    }
    if ((0x100000000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 56 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.index_nodes)\n");
    }
    if ((0x200000000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 57 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.index_nodes)\n");
    }
    if ((0x400000000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 58 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.sel_nodes)\n");
    }
    if ((0x800000000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 59 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gnt_nodes)\n");
    }
    if ((0x1000000000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 60 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.sel_nodes)\n");
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 61 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.index_nodes)\n");
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 62 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.index_nodes)\n");
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 63 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.sel_nodes)\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(1U))) {
        VL_DBG_MSGF("         'stl' region trigger index 64 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gnt_nodes)\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(1U))) {
        VL_DBG_MSGF("         'stl' region trigger index 65 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.sel_nodes)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(1U))) {
        VL_DBG_MSGF("         'stl' region trigger index 66 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.index_nodes)\n");
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(1U))) {
        VL_DBG_MSGF("         'stl' region trigger index 67 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.index_nodes)\n");
    }
    if ((0x10ULL & vlSelfRef.__VstlTriggered.word(1U))) {
        VL_DBG_MSGF("         'stl' region trigger index 68 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.sel_nodes)\n");
    }
    if ((0x20ULL & vlSelfRef.__VstlTriggered.word(1U))) {
        VL_DBG_MSGF("         'stl' region trigger index 69 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gnt_nodes)\n");
    }
    if ((0x40ULL & vlSelfRef.__VstlTriggered.word(1U))) {
        VL_DBG_MSGF("         'stl' region trigger index 70 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.sel_nodes)\n");
    }
    if ((0x80ULL & vlSelfRef.__VstlTriggered.word(1U))) {
        VL_DBG_MSGF("         'stl' region trigger index 71 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.index_nodes)\n");
    }
    if ((0x100ULL & vlSelfRef.__VstlTriggered.word(1U))) {
        VL_DBG_MSGF("         'stl' region trigger index 72 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.index_nodes)\n");
    }
    if ((0x200ULL & vlSelfRef.__VstlTriggered.word(1U))) {
        VL_DBG_MSGF("         'stl' region trigger index 73 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.sel_nodes)\n");
    }
    if ((0x400ULL & vlSelfRef.__VstlTriggered.word(1U))) {
        VL_DBG_MSGF("         'stl' region trigger index 74 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gnt_nodes)\n");
    }
    if ((0x800ULL & vlSelfRef.__VstlTriggered.word(1U))) {
        VL_DBG_MSGF("         'stl' region trigger index 75 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_user.i_user_sdhci.i_regs.reg_error)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_croc_soc___024root___stl_sequent__TOP__0(Vtb_croc_soc___024root* vlSelf);
VL_ATTR_COLD void Vtb_croc_soc___024root____Vm_traceActivitySetAll(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__0(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__1(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__2(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__3(Vtb_croc_soc___024root* vlSelf);
VL_ATTR_COLD void Vtb_croc_soc___024root___stl_sequent__TOP__1(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__5(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__6(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__7(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__8(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__9(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__10(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__11(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__12(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__13(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__14(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__15(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__16(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__17(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__18(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__19(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__20(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__21(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__4(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__5(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__9(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__23(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__24(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__25(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__22(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__1(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__2(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__3(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__6(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__7(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__8(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__9(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__10(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__12(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__13(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__11(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__14(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__15(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__16(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__17(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__18(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__19(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__20(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__21(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__22(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__23(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__24(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__25(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__26(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__27(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__28(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__29(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__30(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__31(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__32(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__33(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__34(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__35(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__36(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__37(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__38(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__39(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__40(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__41(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__42(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__43(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__44(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__45(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__46(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__47(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__48(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__49(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__50(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__51(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__52(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__53(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__54(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__55(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__56(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__57(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__58(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__59(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__60(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__61(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__62(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__63(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__64(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__65(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__66(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__67(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__68(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__69(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__70(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__71(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__72(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__73(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__74(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__75(Vtb_croc_soc___024root* vlSelf);

VL_ATTR_COLD void Vtb_croc_soc___024root___eval_stl(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x40000001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__0(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x80000001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__1(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x100000001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__2(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x200000001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__3(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x40000000004000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___stl_sequent__TOP__1(vlSelf);
    }
    if ((0x800000000040000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__5(vlSelf);
    }
    if (((0x200000ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (1ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_sequent__TOP__6(vlSelf);
    }
    if (((0x1000000ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0x20ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_sequent__TOP__7(vlSelf);
    }
    if (((0x8000000ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0x400ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_sequent__TOP__8(vlSelf);
    }
    if ((0x201ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__9(vlSelf);
    }
    if ((0x801ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__10(vlSelf);
    }
    if ((0x101ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__11(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x21ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__12(vlSelf);
    }
    if ((0x400000001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__13(vlSelf);
    }
    if ((0x81ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__14(vlSelf);
    }
    if ((0x41ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__15(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x180000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__16(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0xc00000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__17(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x6000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__18(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x10000001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__19(vlSelf);
    }
    if ((0x30000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__20(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x20000001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__21(vlSelf);
    }
    if ((0x401ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__4(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x11ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__5(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x40000000004001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___nba_comb__TOP__9(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x800000000001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__23(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x2000000000001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__24(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x1000000000001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__25(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_sequent__TOP__22(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x301ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__1(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x40000400000001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0xc1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__3(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x100180001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__6(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x80c00001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__7(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x46000001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__8(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x200030001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__9(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x20000001ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0x800ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__10(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0xc01ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__12(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x31ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x3c1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__11(vlSelf);
    }
    if (((0x100180001ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (1ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__14(vlSelf);
    }
    if (((0x100380001ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (1ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__15(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x20100180001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__16(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x80100180001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__17(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x40100180001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__18(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x80c00001ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0x20ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__19(vlSelf);
    }
    if (((0x81c00001ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0x20ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__20(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x4080c00001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__21(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x10080c00001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__22(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x8080c00001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__23(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x210030001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__24(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x66000001ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0x800ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__25(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0xc31ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__26(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x210031001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__27(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x800000210030001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__28(vlSelf);
    }
    if ((0x800000210070001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__29(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x100210030001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__30(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x400210030001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__31(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x200210030001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_croc_soc___024root___act_comb__TOP__32(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x66000001ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc00ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__33(vlSelf);
    }
    if (((0x6e000001ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc00ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__34(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x866000001ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0x800ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__35(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x2066000001ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0x800ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__36(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x1066000001ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0x800ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__37(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x8400003ffff4001ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__38(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x924bf6db0001ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0x800ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__39(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x24923f6db0001ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0x800ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__40(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x12493f6db0001ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0x800ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__41(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x24923f6db10c1ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0x800ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__42(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x12493f6db0003ULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0x800ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__43(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x12493f6db000fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0x800ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__44(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x1b6dbf6db000fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0x800ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__45(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x843fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__46(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x843ffffffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__47(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0xc43fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__48(vlSelf);
    }
    if (((0xe43fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__49(vlSelf);
    }
    if (((0x9c3fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__50(vlSelf);
    }
    if (((0x8c3fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__51(vlSelf);
    }
    if (((0x8843fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__52(vlSelf);
    }
    if (((0xc843fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__53(vlSelf);
    }
    if (((0x3843fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__54(vlSelf);
    }
    if (((0x1843fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__55(vlSelf);
    }
    if (((0x843fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc31ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__56(vlSelf);
    }
    if (((0x843fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc39ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__57(vlSelf);
    }
    if (((0x843fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc27ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__58(vlSelf);
    }
    if (((0x843fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc23ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__59(vlSelf);
    }
    if (((0x843fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xe21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__60(vlSelf);
    }
    if (((0x843fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xf21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__61(vlSelf);
    }
    if (((0x843fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xce1ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__62(vlSelf);
    }
    if (((0x843fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc61ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__63(vlSelf);
    }
    if (((0x863fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__64(vlSelf);
    }
    if (((0x873fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__65(vlSelf);
    }
    if (((0x84ffffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__66(vlSelf);
    }
    if (((0x847fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__67(vlSelf);
    }
    if (((0x843ffffffff600fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__68(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((0x843ffffffffc00fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__69(vlSelf);
    }
    if (((0xfc3fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__70(vlSelf);
    }
    if (((0xf843fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__71(vlSelf);
    }
    if (((0x843fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc3fULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__72(vlSelf);
    }
    if (((0x843fffbffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xfe1ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__73(vlSelf);
    }
    if (((0x87fffffffff400fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__74(vlSelf);
    }
    if (((0x843ffffffffe00fULL & vlSelfRef.__VstlTriggered.word(0U)) 
         | (0xc21ULL & vlSelfRef.__VstlTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__75(vlSelf);
        Vtb_croc_soc___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_croc_soc___024root___stl_sequent__TOP__1(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___stl_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_15 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  >> 1U) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
}

VL_ATTR_COLD void Vtb_croc_soc___024root___eval_triggers__stl(Vtb_croc_soc___024root* vlSelf);

VL_ATTR_COLD bool Vtb_croc_soc___024root___eval_phase__stl(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_croc_soc___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_croc_soc___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_croc_soc___024root___dump_triggers__act(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_ibex.id_stage_i.instr_executing_spec)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_ibex.id_stage_i.controller_i.special_req)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_ibex.if_stage_i.fetch_ready)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dm_top.i_dm_top.clear_resumeack)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.data_nodes)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.data_nodes)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.data_nodes)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.data_nodes)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.data_nodes)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.all_periph_obi_rsp)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_user.i_user_sdhci.i_regs.addr_hit)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.req_nodes)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.req_nodes)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.req_nodes)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.req_nodes)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.req_nodes)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_57)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 35 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_58)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 36 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_59)\n");
    }
    if ((0x2000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 37 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_46)\n");
    }
    if ((0x4000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 38 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_47)\n");
    }
    if ((0x8000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 39 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_48)\n");
    }
    if ((0x10000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 40 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_35)\n");
    }
    if ((0x20000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 41 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_36)\n");
    }
    if ((0x40000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 42 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_37)\n");
    }
    if ((0x80000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 43 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_24)\n");
    }
    if ((0x100000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 44 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_25)\n");
    }
    if ((0x200000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 45 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_26)\n");
    }
    if ((0x400000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 46 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_13)\n");
    }
    if ((0x800000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 47 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_14)\n");
    }
    if ((0x1000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 48 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_15)\n");
    }
    if ((0x2000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 49 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.sel_nodes)\n");
    }
    if ((0x4000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 50 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.index_nodes)\n");
    }
    if ((0x8000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 51 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.index_nodes)\n");
    }
    if ((0x10000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 52 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.sel_nodes)\n");
    }
    if ((0x20000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 53 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gnt_nodes)\n");
    }
    if ((0x40000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 54 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.sel_nodes)\n");
    }
    if ((0x80000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 55 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.index_nodes)\n");
    }
    if ((0x100000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 56 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.index_nodes)\n");
    }
    if ((0x200000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 57 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.sel_nodes)\n");
    }
    if ((0x400000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 58 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gnt_nodes)\n");
    }
    if ((0x800000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 59 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.sel_nodes)\n");
    }
    if ((0x1000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 60 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.index_nodes)\n");
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 61 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.index_nodes)\n");
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 62 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.sel_nodes)\n");
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 63 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gnt_nodes)\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 64 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.sel_nodes)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 65 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.index_nodes)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 66 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.index_nodes)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 67 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.sel_nodes)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 68 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gnt_nodes)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 69 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.sel_nodes)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 70 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.index_nodes)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 71 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.index_nodes)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 72 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.sel_nodes)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 73 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gnt_nodes)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 74 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_user.i_user_sdhci.i_regs.reg_error)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 75 is active: @(posedge tb_croc_soc.i_clk_rst_sys.clk)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 76 is active: @(negedge tb_croc_soc.rst_n)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 77 is active: @(negedge tb_croc_soc.i_croc_soc.i_rstgen.init_no)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 78 is active: @(posedge tb_croc_soc.i_clk_jtag.clk)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 79 is active: @(negedge tb_croc_soc.jtag_trst_ni)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 80 is active: @(negedge tb_croc_soc.i_clk_jtag.clk)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 81 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.__Vcellinp__i_apb_uart__PADDR)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 82 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iDLL)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 83 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iDLM)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 84 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iIER)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 85 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iIIR)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 86 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 87 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_DLAB)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 88 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLSR)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 89 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iMCR)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 90 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iMSR)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 91 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iRBR)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 92 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iSCR)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 93 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_TX.CState)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 94 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_TX.iParity)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 95 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_EPS)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 96 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_PEN)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 97 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_SP)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 98 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_STB)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 99 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_WLS)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 100 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iTSR)\n");
    }
    if ((0x2000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 101 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iTXStart)\n");
    }
    if ((0x4000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 102 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iDOUT)\n");
    }
    if ((0x8000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 103 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.CState)\n");
    }
    if ((0x10000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 104 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.RX_MVF.iQ)\n");
    }
    if ((0x20000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 105 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iBaudCount)\n");
    }
    if ((0x40000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 106 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iBaudStep)\n");
    }
    if ((0x80000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 107 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iDataCountFinish)\n");
    }
    if ((0x100000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 108 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iFStopBit)\n");
    }
    if ((0x200000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 109 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iSIN)\n");
    }
    if ((0x400000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 110 is active: @(negedge tb_croc_soc.i_clk_rst_sys.clk)\n");
    }
    if ((0x800000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 111 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x1000000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 112 is active: @(posedge tb_croc_soc.fetch_en_i)\n");
    }
    if ((0x2000000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 113 is active: @(negedge tb_croc_soc.uart_tx_o)\n");
    }
    if ((0x4000000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 114 is active: @(posedge tb_croc_soc.i_clk_rst_rtc.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_croc_soc___024root___dump_triggers__nba(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_ibex.id_stage_i.instr_executing_spec)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_ibex.id_stage_i.controller_i.special_req)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_ibex.if_stage_i.fetch_ready)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.initiator_phase_transition_ack)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_a.receiver_phase_ack)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.initiator_phase_transition_ack)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_resp.i_cdc_reset_ctrlr.i_cdc_reset_ctrlr_half_b.receiver_phase_ack)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_dm_top.i_dm_top.clear_resumeack)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.data_nodes)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.data_nodes)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.data_nodes)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.data_nodes)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.data_nodes)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.index_nodes)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_levels[1].gen_level[0].sel)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.all_periph_obi_rsp)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_user.i_user_sdhci.i_regs.addr_hit)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.req_nodes)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.req_nodes)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.req_nodes)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.req_nodes)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.req_nodes)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_57)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 35 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_58)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 36 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_59)\n");
    }
    if ((0x2000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 37 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_46)\n");
    }
    if ((0x4000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 38 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_47)\n");
    }
    if ((0x8000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 39 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_48)\n");
    }
    if ((0x10000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 40 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_35)\n");
    }
    if ((0x20000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 41 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_36)\n");
    }
    if ((0x40000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 42 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_37)\n");
    }
    if ((0x80000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 43 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_24)\n");
    }
    if ((0x100000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 44 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_25)\n");
    }
    if ((0x200000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 45 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_26)\n");
    }
    if ((0x400000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 46 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_13)\n");
    }
    if ((0x800000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 47 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_14)\n");
    }
    if ((0x1000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 48 is active: @([hybrid] __VdfgRegularize_hd87f99a1_4_15)\n");
    }
    if ((0x2000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 49 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.sel_nodes)\n");
    }
    if ((0x4000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 50 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.index_nodes)\n");
    }
    if ((0x8000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 51 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.index_nodes)\n");
    }
    if ((0x10000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 52 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.sel_nodes)\n");
    }
    if ((0x20000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 53 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[0].i_mux.i_rr_arb.gen_arbiter.gnt_nodes)\n");
    }
    if ((0x40000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 54 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.sel_nodes)\n");
    }
    if ((0x80000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 55 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.index_nodes)\n");
    }
    if ((0x100000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 56 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.index_nodes)\n");
    }
    if ((0x200000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 57 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.sel_nodes)\n");
    }
    if ((0x400000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 58 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[1].i_mux.i_rr_arb.gen_arbiter.gnt_nodes)\n");
    }
    if ((0x800000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 59 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.sel_nodes)\n");
    }
    if ((0x1000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 60 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.index_nodes)\n");
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 61 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.index_nodes)\n");
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 62 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.sel_nodes)\n");
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 63 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[2].i_mux.i_rr_arb.gen_arbiter.gnt_nodes)\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 64 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.sel_nodes)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 65 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.index_nodes)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 66 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.index_nodes)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 67 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.sel_nodes)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 68 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[3].i_mux.i_rr_arb.gen_arbiter.gnt_nodes)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 69 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.sel_nodes)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 70 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_upper.gen_lzc.index_nodes)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 71 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.index_nodes)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 72 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gen_int_rr.gen_fair_arb.i_lzc_lower.gen_lzc.sel_nodes)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 73 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_croc.i_main_xbar.gen_mux[4].i_mux.i_rr_arb.gen_arbiter.gnt_nodes)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 74 is active: @([hybrid] tb_croc_soc.i_croc_soc.i_user.i_user_sdhci.i_regs.reg_error)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 75 is active: @(posedge tb_croc_soc.i_clk_rst_sys.clk)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 76 is active: @(negedge tb_croc_soc.rst_n)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 77 is active: @(negedge tb_croc_soc.i_croc_soc.i_rstgen.init_no)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 78 is active: @(posedge tb_croc_soc.i_clk_jtag.clk)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 79 is active: @(negedge tb_croc_soc.jtag_trst_ni)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 80 is active: @(negedge tb_croc_soc.i_clk_jtag.clk)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 81 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.__Vcellinp__i_apb_uart__PADDR)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 82 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iDLL)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 83 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iDLM)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 84 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iIER)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 85 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iIIR)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 86 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 87 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_DLAB)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 88 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLSR)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 89 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iMCR)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 90 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iMSR)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 91 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iRBR)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 92 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iSCR)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 93 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_TX.CState)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 94 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_TX.iParity)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 95 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_EPS)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 96 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_PEN)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 97 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_SP)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 98 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_STB)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 99 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iLCR_WLS)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 100 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iTSR)\n");
    }
    if ((0x2000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 101 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iTXStart)\n");
    }
    if ((0x4000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 102 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iDOUT)\n");
    }
    if ((0x8000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 103 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.CState)\n");
    }
    if ((0x10000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 104 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.RX_MVF.iQ)\n");
    }
    if ((0x20000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 105 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iBaudCount)\n");
    }
    if ((0x40000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 106 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iBaudStep)\n");
    }
    if ((0x80000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 107 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iDataCountFinish)\n");
    }
    if ((0x100000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 108 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.UART_RX.iFStopBit)\n");
    }
    if ((0x200000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 109 is active: @([changed] tb_croc_soc.i_croc_soc.i_croc.i_uart.i_apb_uart.iSIN)\n");
    }
    if ((0x400000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 110 is active: @(negedge tb_croc_soc.i_clk_rst_sys.clk)\n");
    }
    if ((0x800000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 111 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x1000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 112 is active: @(posedge tb_croc_soc.fetch_en_i)\n");
    }
    if ((0x2000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 113 is active: @(negedge tb_croc_soc.uart_tx_o)\n");
    }
    if ((0x4000000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 114 is active: @(posedge tb_croc_soc.i_clk_rst_rtc.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_croc_soc___024root____Vm_traceActivitySetAll(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x80U)) {
        vlSelfRef.__Vm_traceActivity[__Vilp1] = 1U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

VL_ATTR_COLD void Vtb_croc_soc___024root___ctor_var_reset(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_croc_soc__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_trst_ni = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_tms_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_tdi_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_tdo_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__uart_rx_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__uart_tx_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__fetch_en_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__gpio_o = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__jtag_load_hex__Vstatic__file = 0;
    vlSelf->tb_croc_soc__DOT__jtag_load_hex__Vstatic__status = 0;
    vlSelf->tb_croc_soc__DOT__jtag_load_hex__Vstatic__addr = 0;
    vlSelf->tb_croc_soc__DOT__jtag_load_hex__Vstatic__data = 0;
    vlSelf->tb_croc_soc__DOT__jtag_load_hex__Vstatic__byte_data = 0;
    vlSelf->tb_croc_soc__DOT__jtag_load_hex__Vstatic__byte_count = 0;
    vlSelf->tb_croc_soc__DOT__uart_reading_byte = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__tb_data = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__unnamedblk7__DOT__uart_read_buf.atDefault() = 0;
    vlSelf->tb_croc_soc__DOT__unnamedblk7__DOT__bite = 0;
    vlSelf->tb_croc_soc__DOT__i_clk_rst_sys__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_clk_rst_sys__DOT__unnamedblk1__DOT__rst_cnt = 0;
    vlSelf->tb_croc_soc__DOT__i_clk_rst_rtc__DOT__rst_no = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_clk_rst_rtc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_clk_rst_rtc__DOT__unnamedblk1__DOT__rst_cnt = 0;
    vlSelf->tb_croc_soc__DOT__i_clk_jtag__DOT__rst_no = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_clk_jtag__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_clk_jtag__DOT__unnamedblk1__DOT__rst_cnt = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__read_data[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__get_idcode__Vstatic__write_data[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__read_dtmcs__Vstatic__read_data[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__read_dtmcs__Vstatic__write_data[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed = VL_RAND_RESET_Q(41);
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__read_data[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 41; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi__Vstatic__write_data[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__read_dmi_exp_backoff__Vstatic__write_data_packed = VL_RAND_RESET_Q(41);
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__sba_read_double__Vstatic__op = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__sba_read_double__Vstatic__read_sbcs = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h62ffa798__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h20bf8500__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h4a9ed1a3__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT____Vlvbound_h345bea56__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_h0beb7148__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT____Vlvbound_had66436a__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__user_sbr_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_ext_intr_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__timer0_irq0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__timer0_irq1 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__interrupts = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(72, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_instr_obi_req);
    VL_RAND_RESET_W(72, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__core_data_obi_req);
    VL_RAND_RESET_W(72, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dbg_req_obi_req);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_periph_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp = VL_RAND_RESET_Q(39);
    VL_RAND_RESET_W(234, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__error_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gpio_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellinp__i_core_wrap__data_gnt_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellinp__i_core_wrap__instr_gnt_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__dmi_req_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(444, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__soc_ctrl_reg_rsp = VL_RAND_RESET_Q(34);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp = VL_RAND_RESET_Q(34);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_uart_translate__gnt_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_id_o = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_valid_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__gnt_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__bank_single_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o = VL_RAND_RESET_Q(39);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram__rdata_o = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__bank_single_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o = VL_RAND_RESET_Q(39);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram__rdata_o = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_id = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_alu_id = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_rdata_c_id = VL_RAND_RESET_I(16);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_is_compressed_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_fetch_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_fetch_err_plus2 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__illegal_c_insn_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_id = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__imd_val_d_ex[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__imd_val_q_ex[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_valid_clear = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_mux_id = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_pc_mux_id = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__exc_cause = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_addr_incr_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ctrl_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_rdata_b = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_wdata_wb = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_lsu = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_wdata_id = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__rf_we_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__alu_operand_b_ex = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__mult_sel_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__div_sel_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_access = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_op_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__illegal_csr_insn_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__lsu_resp_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_req_int = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__en_wb = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__irqs = VL_RAND_RESET_I(19);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_addr[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_pmp_cfg[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pmp_req_err[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__data_req_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_if = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_restore_mret_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_restore_dret_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_save_cause = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_mtvec_init = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__csr_mtval = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__debug_cause = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__debug_csr_save = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__trigger_match = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_instr_ret_wb = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_jump = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_tbranch = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_load = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__perf_store = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__illegal_insn_id = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_new_id_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_new_id_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_addr_n = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_decompressed = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__illegal_c_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_new_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__discard_req_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__discard_req_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_n = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_discard_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__stored_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_raw = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h70a13e6b_0_6 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d);
    VL_RAND_RESET_W(96, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d = VL_RAND_RESET_I(31);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q = VL_RAND_RESET_I(31);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_11 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_14 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_15 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_16 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_17 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_19 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_20 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_21 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_22 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_23 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__ebrk_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__mret_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__dret_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__ecall_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__wfi_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_in_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_set = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_set_raw_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_jump_set_done_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_jump_set_done_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_in_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__jump_set_raw = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_first_cycle = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_executing_spec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_run = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_multdiv = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_jump = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_wdata_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_we_raw = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_ren_a_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__rf_ren_b_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operator = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__stall_alu = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imd_val_q[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__div_en_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_en_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_operator = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__multdiv_signed_mode = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_we = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_type = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_sign_ext = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__lsu_req_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__csr_pipe_flush = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__alu_operand_a = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__unused_a_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__unused_b_mux_sel = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__branch_set_raw_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__id_fsm_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__id_fsm_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__unused_data_req_done_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__special_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__gen_mfip_id__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_adder_result_ext = VL_RAND_RESET_Q(34);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_imd_val_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_imd_val_d[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__multdiv_imd_val_d[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__multdiv_imd_val_we = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_left = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed = VL_RAND_RESET_Q(33);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_or = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_and = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__addr_last_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__addr_update = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ctrl_update = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_update = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_q = VL_RAND_RESET_I(24);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_type_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_sign_ext_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_we_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_be = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_rdata_ext = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__split_misaligned_access = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__handle_misaligned_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__handle_misaligned_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__pmp_err_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__lsu_err_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__lsu_err_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__data_or_pmp_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_cs = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__load_store_unit_i__DOT__ls_fsm_ns = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__wb_i__DOT__rf_wdata_wb_mux[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(992, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__rf_reg_q);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_dec = VL_RAND_RESET_I(31);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT__we_a_decoder__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__register_file_i__DOT____Vlvbound_h98f8655e__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__exception_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__priv_lvl_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__priv_lvl_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_d = VL_RAND_RESET_I(6);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstatus_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mie_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mscratch_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mepc_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mepc_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcause_d = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcause_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mtval_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mtval_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mtvec_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dcsr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__depc_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__depc_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dscratch0_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__dscratch1_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mstack_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_addr_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__pmp_cfg_rdata[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcountinhibit_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcountinhibit_we = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_we = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounterh_we = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_incr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmevent[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mhpmcounter_idx = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_rdata_int = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_we_int = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wr = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__illegal_csr = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_mhpmcounter_incr__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_mhpmevent__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_mhpmevent__DOT__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT____VdfgRegularize_h41b84c32_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT____VdfgRegularize_h41b84c32_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = VL_RAND_RESET_I(19);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__tdo_oe_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_clear = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_select = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_select = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_req_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_req_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_d = VL_RAND_RESET_Q(41);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q = VL_RAND_RESET_Q(41);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_d = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_q = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_dmi_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_dmi_op_failed = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_d = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__update_dr = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_dr = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__capture_dr = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__capture_ir = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_ir = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__update_ir = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__test_logic_reset = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_select = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_select = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tdo_mux = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__core_clear_pending_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__core_dmi_rst_nq = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_ack_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_ack_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vcellinp__i_src__valid_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_d = VL_RAND_RESET_Q(41);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q = VL_RAND_RESET_Q(41);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_synced_q1 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d = VL_RAND_RESET_Q(41);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q = VL_RAND_RESET_Q(41);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_ack_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_ack_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vcellinp__i_src__valid_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_d = VL_RAND_RESET_Q(34);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q = VL_RAND_RESET_Q(34);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d = VL_RAND_RESET_Q(34);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q = VL_RAND_RESET_Q(34);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__slave_rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__slave_rid_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__haltreq = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__resumereq = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__clear_resumeack = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmderror_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmderror = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__cmdbusy = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__data_mem_csrs = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sbaddress_write_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sbdata_read_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sbdata_write_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sberror_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__sberror = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum0 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum1 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum2 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum3 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3 = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0 = VL_RAND_RESET_I(15);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1 = VL_RAND_RESET_I(10);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2 = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d);
    VL_RAND_RESET_W(256, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp = VL_RAND_RESET_Q(34);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction1__DOT__unnamedblk1__DOT__k = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction2__DOT__unnamedblk2__DOT__k = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction3__DOT__unnamedblk3__DOT__k = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_h0a957c03__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound_h85e02227__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_hed88a7da_2_3 = VL_RAND_RESET_I(18);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_hed88a7da_2_4 = VL_RAND_RESET_I(14);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(68, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_n);
    VL_RAND_RESET_W(68, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT____Vlvbound_h15cd067f__0 = VL_RAND_RESET_Q(34);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__gnt = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx_masked = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(512, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__going = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__exception = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rom_rdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_q = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_enable32_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_aligned = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h27c8524d__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_d = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(740, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_addr_decode__idx_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(185, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i);
    VL_RAND_RESET_W(360, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_addr_decode__idx_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(185, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_rsp_i);
    VL_RAND_RESET_W(360, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_addr_decode__idx_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(185, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_rsp_i);
    VL_RAND_RESET_W(360, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_addr_decode__idx_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(185, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_rsp_i);
    VL_RAND_RESET_W(360, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o);
    VL_RAND_RESET_W(74, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__0__KET____DOT__i_mux__mgr_port_req_o);
    VL_RAND_RESET_W(74, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__1__KET____DOT__i_mux__mgr_port_req_o);
    VL_RAND_RESET_W(74, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__2__KET____DOT__i_mux__mgr_port_req_o);
    VL_RAND_RESET_W(74, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__3__KET____DOT__i_mux__mgr_port_req_o);
    VL_RAND_RESET_W(74, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__4__KET____DOT__i_mux__mgr_port_req_o);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_8_0 = VL_RAND_RESET_Q(37);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_8_1 = VL_RAND_RESET_Q(37);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_8_2 = VL_RAND_RESET_Q(37);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_8_3 = VL_RAND_RESET_Q(37);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_8_4 = VL_RAND_RESET_Q(37);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_8_5 = VL_RAND_RESET_Q(37);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_8_6 = VL_RAND_RESET_Q(37);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_8_7 = VL_RAND_RESET_Q(37);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_8_8 = VL_RAND_RESET_Q(37);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_8_9 = VL_RAND_RESET_Q(37);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_8_10 = VL_RAND_RESET_Q(37);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_8_11 = VL_RAND_RESET_Q(37);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_8_12 = VL_RAND_RESET_Q(37);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_8_13 = VL_RAND_RESET_Q(37);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____VdfgRegularize_h212bb192_8_14 = VL_RAND_RESET_Q(37);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__dec_valid_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__dec_error_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__cnt_up = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__proc_req__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_ha4c807f5__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hfbc9f84e__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_hb24743ce__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT____Vlvbound_h041ed1c5__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__dec_valid_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__dec_error_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_up = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__select_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__proc_req__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_ha4c807f5__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hfbc9f84e__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_hb24743ce__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT____Vlvbound_h041ed1c5__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__1__KET____DOT__i_demux__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_valid_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__dec_error_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_up = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__select_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__proc_req__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT____Vlvbound_ha4c807f5__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT____Vlvbound_hfbc9f84e__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT____Vlvbound_hb24743ce__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT____Vlvbound_h041ed1c5__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__2__KET____DOT__i_demux__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__dec_valid_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__dec_error_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__matched_rules = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_addr_decode__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__cnt_up = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__select_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__proc_req__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT____Vlvbound_ha4c807f5__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT____Vlvbound_hfbc9f84e__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT____Vlvbound_hb24743ce__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT____Vlvbound_h041ed1c5__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__3__KET____DOT__i_demux__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__response_id = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(284, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__rsp_rid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_rvalid = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(140, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vlvbound_h9bca8d48__0 = VL_RAND_RESET_Q(35);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(213, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__response_id = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(284, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__rsp_rid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_rvalid = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(140, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vlvbound_h9bca8d48__0 = VL_RAND_RESET_Q(35);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(213, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(284, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__rsp_rid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_rvalid = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(140, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h9bca8d48__0 = VL_RAND_RESET_Q(35);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(213, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(284, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__rsp_rid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_rvalid = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(140, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h9bca8d48__0 = VL_RAND_RESET_Q(35);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(213, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__response_id = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(284, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__rsp_rid = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_rvalid = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(140, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vlvbound_h9bca8d48__0 = VL_RAND_RESET_Q(35);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(213, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__mem_n = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__mem_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0 = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_valid_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_error_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT____Vlvbound_hfbbc2329__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__cnt_up = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_d = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__select_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__proc_req__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT____Vlvbound_h20637e6a__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(73, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT____Vlvbound_hbd1d890d__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT____Vlvbound_h42d42b6e__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(73, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT____Vlvbound_hce34d915__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT____Vcellinp__i_id_fifo__push_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__mem_n = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT__mem_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_periph_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0 = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_id_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_opc_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_valid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_we = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_error = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__reg_rdata_next = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_bootaddr__q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_fetchen__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_corestatus__q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT____Vcellout__u_bootmode__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__addr_hit = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_bootaddr__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_bootaddr__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_fetchen__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_fetchen__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_corestatus__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_corestatus__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_bootmode__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl__DOT__u_bootmode__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_id_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_opc_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_valid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__out1_no = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__out2_no = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__rts_no = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__dtr_no = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellout__i_apb_uart__PRDATA = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_reg_uart_reg_to_apb__DOT__state_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_reg_uart_reg_to_apb__DOT__state_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRead = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRBRRead = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTHRWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIERWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCRWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSRRead = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSRRead = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRBR = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLL = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLM = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIIR = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSCR = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFOEnable = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_RXFIFOReset = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_TXFIFOReset = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_DMAMode = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFO64E = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_RXTrigger = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_STB = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_SP = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_DR = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_OE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_PE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_FE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_BI = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_FIFOERR = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dCTS = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dDSR = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_TERI = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dDCD = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_CTS = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DSR = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_RI = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DCD = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iCTSn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDSRn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDCDn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRIn = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iBaudtick16x = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRCLK = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iBAUDOUTN = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFOWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFORead = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFOQ = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOClear = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOFull = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOD = VL_RAND_RESET_I(11);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOQ = VL_RAND_RESET_I(11);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOTrigger = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOPE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOFE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOBI = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSOUT = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXRunning = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXPE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFERE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iPERE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iBIRE = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFECounter = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFEIncrement = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFEDecrement = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTimeoutCount = VL_RAND_RESET_I(6);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iCharTimeout = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTHRInterrupt = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXEnable = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRTS = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__rx_State = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_14 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IS_SIN__DOT__iD = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IS_CTS__DOT__iD = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IS_DSR__DOT__iD = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IS_DCD__DOT__iD = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IS_RI__DOT__iD = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IF_CTS__DOT__iCount = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IF_DSR__DOT__iCount = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IF_DCD__DOT__iCount = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IF_RI__DOT__iCount = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IIC__DOT__iMSRInterrupt = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IIC__DOT__iIIR = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IIC_THRE_ED__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_PEDET__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_FEDET__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_BIDET__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_ED_CTS__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_ED_DSR__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_ED_RI__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_ED_DCD__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_BG16__DOT__iCounter = VL_RAND_RESET_I(16);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_BG2__DOT__iQ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_BG2__DOT__iCounter = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RCLK__DOT__iDd = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iEMPTY = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFULL = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iWRAddr = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iRDAddr = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__init = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iUSAGE = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFIFOMem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iEMPTY = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iFULL = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iWRAddr = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iRDAddr = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__init = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iUSAGE = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RXFF__DOT__iFIFOMem[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iTx2 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iParity = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iFinished = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iLast = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP40 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP50 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP60 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP70 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCount = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCountClear = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStepD = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iFStopBit = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iParity = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iParityReceived = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountInit = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountFinish = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iRXFinished = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_BRC__DOT__iCounter = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iCounter = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_IFSB__DOT__iCount = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(160, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__hw2reg);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gpio_intrpt_pending = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(224, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____Vcellout__i_reg_file__reg2hw);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__serial_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__is_input = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__is_output = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__proc_assign_gpio__DOT__unnamedblk1__DOT__idx = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_12 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_16 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_20 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_24 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_28 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_32 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_36 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_40 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_44 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_48 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_52 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_56 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_60 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_64 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_68 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_72 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_76 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_80 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_84 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_88 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_92 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_96 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_100 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_104 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_108 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_112 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_116 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_120 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_124 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_128 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_129 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_130 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_131 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_132 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_133 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_134 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_135 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_136 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_137 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_138 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_139 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_140 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_141 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_142 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_143 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_144 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_145 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_146 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_147 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_148 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_149 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_150 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_151 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_152 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_153 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_154 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_155 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_156 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_157 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_158 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT____VdfgRegularize_h72a0271e_1_159 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__valid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__we_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__req_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__read_addr_q = VL_RAND_RESET_I(12);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__id_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__w_err_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__w_err_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_read_request = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__obi_write_request = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_d);
    VL_RAND_RESET_W(256, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__reg_q);
    VL_RAND_RESET_W(256, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_reg);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__new_intrpt = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__toggle_out = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__bit_mask = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__unnamedblk1__DOT__idx = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT__unnamedblk2__DOT__idx = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_ha7e11a89__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_ha81b91fb__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_ha827e9f0__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_ha82391ff__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_ha82fe9ec__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_hadd538fb__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h24b8ecda__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h0d524b6b__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_he6772758__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h13b3d5f3__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__i_reg_file__DOT____Vlvbound_h11c26875__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__0__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__1__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__2__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__3__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__4__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__5__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__6__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__7__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__8__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__9__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__10__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__11__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__12__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__13__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__14__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__15__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__16__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__17__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__18__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__19__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__20__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__21__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__22__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__23__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__24__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__25__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__26__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__27__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__28__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__29__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__30__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_gpio__DOT__gen_gpios__BRA__31__KET____DOT__i_sync__DOT__reg_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_req = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_wen = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_write_counter_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_write_counter_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_start_timer_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_start_timer_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_timer_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_timer_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk1 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk2 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk3 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk_edge = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_ref_clk_edge_del = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_counter_val_lo = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_counter_val_hi = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_lo_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_cfg_hi_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_timer_cmp_lo = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_timer_cmp_lo_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_timer_cmp_hi = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_timer_cmp_hi_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_prescaler_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_enable_count_prescaler_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_prescaler_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_reset_count_prescaler_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_prescaler_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_target_reached_prescaler_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_clear_reset_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__s_clear_reset_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__CS = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__NS = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_lo_i__DOT__s_count = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_lo_i__DOT__s_count_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_hi_i__DOT__s_count = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__prescaler_hi_i__DOT__s_count_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_lo_i__DOT__s_count = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_lo_i__DOT__s_count_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_hi_i__DOT__s_count = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_timer__DOT__counter_hi_i__DOT__s_count_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__DOT__rvalid_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__DOT__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__DOT__id_q = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__sram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__r_addr_q = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__init_val[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__rdata_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__genblk2__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__genblk2__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__genblk2__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT____Vlvbound_h602425d2__0 = VL_RAND_RESET_I(9);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT____Vlvbound_h3911cf92__0 = VL_RAND_RESET_I(9);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__DOT__rvalid_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__DOT__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__DOT__id_q = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__sram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__r_addr_q = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__init_val[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__rdata_d = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__genblk2__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__genblk2__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__genblk2__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT____Vlvbound_h602425d2__0 = VL_RAND_RESET_I(9);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT____Vlvbound_h3911cf92__0 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(78, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__all_user_sbr_obi_rsp);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_error_obi_rsp = VL_RAND_RESET_Q(39);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(148, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT____Vcellout__i_obi_demux__mgr_ports_req_o);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__dec_valid_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__dec_error_o = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT____Vlvbound_h5761c3a6__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_up = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_d = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__select_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__proc_req__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT____Vlvbound_h76dab4fc__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(73, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT____Vlvbound_h3decd869__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT____Vlvbound_h235a59af__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(73, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT____Vlvbound_h19131224__0);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0 = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__id_q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__valid_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(606, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__reg2hw);
    VL_RAND_RESET_W(132, vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__hw2reg);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__dat = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__reg_we = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__reg_error = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__wr_err = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__reg_rdata_next = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_system_address__q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_block_size_and_count_transfer_block_size__q = VL_RAND_RESET_I(12);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_block_size_and_count_host_dma_buffer_boundary__q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_block_size_and_count_rsvd_15__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_block_size_and_count_blocks_count_for_current_transfer__q = VL_RAND_RESET_I(16);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_argument__q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_dma_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_dma_enable__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_block_count_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_block_count_enable__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_auto_cmd12_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_auto_cmd12_enable__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_rsvd_3__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_rsvd_3__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_data_transfer_direction_select__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_data_transfer_direction_select__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_multi_single_bit_block_select__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_multi_single_bit_block_select__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_rsvd_15__q = VL_RAND_RESET_I(10);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_rsvd_15__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_response_type_select__q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_response_type_select__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_rsvd_18__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_rsvd_18__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_command_crc_check_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_command_crc_check_enable__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_command_index_check_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_command_index_check_enable__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_data_present_select__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_data_present_select__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_command_type__q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_command_type__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_command_index__q = VL_RAND_RESET_I(6);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_command_index__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_rsvd_31__q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_rsvd_31__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_response0__q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_response1__q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_response2__q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_response3__q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_buffer_data_port__q = VL_RAND_RESET_I(32);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_present_state_command_inhibit_cmd__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_present_state_command_inhibit_dat__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_present_state_dat_line_active__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_present_state_rsvd_7__q = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_present_state_write_transfer_active__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_present_state_read_transfer_active__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_present_state_buffer_write_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_present_state_buffer_read_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_present_state_rsvd_15__q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_present_state_card_inserted__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_present_state_card_state_stable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_present_state_card_detect_pin_level__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_present_state_write_protect_switch_pin_level__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_present_state_dat_line_signal_level__q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_present_state_cmd_line_signal_level__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_present_state_rsvd_31__q = VL_RAND_RESET_I(7);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_host_and_power_and_block_gap_and_wakeup_control_led_control__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_host_and_power_and_block_gap_and_wakeup_control_data_transfer_width__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_host_and_power_and_block_gap_and_wakeup_control_high_speed_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_host_and_power_and_block_gap_and_wakeup_control_rsvd_7__q = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_host_and_power_and_block_gap_and_wakeup_control_sd_bus_power__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_host_and_power_and_block_gap_and_wakeup_control_sd_bus_voltage_select__q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_host_and_power_and_block_gap_and_wakeup_control_rsvd_15__q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_host_and_power_and_block_gap_and_wakeup_control_stop_at_block_gap_request__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_host_and_power_and_block_gap_and_wakeup_control_continue_request__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_host_and_power_and_block_gap_and_wakeup_control_read_wait_control__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_host_and_power_and_block_gap_and_wakeup_control_interrupt_at_block_gap__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_host_and_power_and_block_gap_and_wakeup_control_rsvd_23__q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_host_and_power_and_block_gap_and_wakeup_control_wakeup_event_enable_on_card_interrupt__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_host_and_power_and_block_gap_and_wakeup_control_wakeup_event_enable_on_sd_card_insertion__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_host_and_power_and_block_gap_and_wakeup_control_wakeup_event_enable_on_sd_card_removal__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_host_and_power_and_block_gap_and_wakeup_control_rsvd_31__q = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_clock_and_timeout_control_and_software_reset_internal_clock_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_clock_and_timeout_control_and_software_reset_internal_clock_stable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_clock_and_timeout_control_and_software_reset_sd_clock_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_clock_and_timeout_control_and_software_reset_rsvd_7__q = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_clock_and_timeout_control_and_software_reset_sdclk_frequency_select__q = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_clock_and_timeout_control_and_software_reset_data_timeout_counter_value__q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_clock_and_timeout_control_and_software_reset_rsvd_23__q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_clock_and_timeout_control_and_software_reset_software_reset_for_all__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_clock_and_timeout_control_and_software_reset_software_reset_for_cmd_line__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_clock_and_timeout_control_and_software_reset_software_reset_for_dat_line__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_clock_and_timeout_control_and_software_reset_rsvd_31__q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_command_complete__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_transfer_complete__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_block_gap_event__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_dma_interrupt__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_buffer_write_ready__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_buffer_read_ready__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_card_insertion__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_card_removal__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_card_interrupt__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_rsvd_14__q = VL_RAND_RESET_I(6);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_error_interrupt__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_command_timeout_error__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_command_crc_error__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_command_end_bit_error__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_command_index_error__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_data_timeout_error__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_data_crc_error__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_data_end_bit_error__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_current_limit_error__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_auto_cmd12_error__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_rsvd_27__q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_vendor_specific_error_status__q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_command_complete_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_transfer_complete_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_block_gap_event_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_dma_interrupt_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_buffer_write_ready_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_buffer_read_ready_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_card_insertion_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_card_removal_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_card_interrupt_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_rsvd_14__q = VL_RAND_RESET_I(6);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_fixed_to_0__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_command_timeout_error_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_command_crc_error_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_command_end_bit_error_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_command_index_error_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_data_timeout_error_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_data_crc_error_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_data_end_bit_error_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_current_limit_error_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_auto_cmd12_error_status_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_rsvd_27__q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_vendor_specific_error_status_enable__q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_command_complete_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_transfer_complete_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_block_gap_event_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_dma_interrupt_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_buffer_write_ready_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_buffer_read_ready_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_card_insertion_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_card_removal_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_card_interrupt_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_rsvd_14__q = VL_RAND_RESET_I(6);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_fixed_to_0__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_command_timeout_error_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_command_crc_error_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_command_end_bit_error_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_command_index_error_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_data_timeout_error_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_data_crc_error_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_data_end_bit_error_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_current_limit_error_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_auto_cmd12_error_signal_enable__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_rsvd_27__q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_vendor_specific_error_signal_enable__q = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_auto_cmd12_error_status_auto_cmd12_not_executed__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_auto_cmd12_error_status_auto_cmd12_timeout_error__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_auto_cmd12_error_status_auto_cmd12_crc_error__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_auto_cmd12_error_status_auto_cmd12_end_bit_error__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_auto_cmd12_error_status_auto_cmd12_index_error__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_auto_cmd12_error_status_rsvd_6__q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_auto_cmd12_error_status_command_not_issued_by_auto_cmd12_error__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_auto_cmd12_error_status_rsvd_15__q = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_timeout_clock_frequency__q = VL_RAND_RESET_I(6);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_rsvd_6__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_timeout_clock_unit__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_base_clock_frequency_for_sd_clock__q = VL_RAND_RESET_I(6);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_rsvd_15__q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_max_block_length__q = VL_RAND_RESET_I(2);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_rsvd_20__q = VL_RAND_RESET_I(3);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_high_speed_support__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_dma_support__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_suspend_resume_support__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_voltage_support_3_3v__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_voltage_support_3_0v__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_voltage_support_1_8v__q = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_rsvd_63__q = VL_RAND_RESET_I(5);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_maximum_current_capabilities_maximum_current_for_3_3v__q = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_maximum_current_capabilities_maximum_current_for_3_0v__q = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_maximum_current_capabilities_maximum_current_for_1_8v__q = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_maximum_current_capabilities_rsvd_63__q = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_slot_interrupt_status_and_host_controller_version_interrupt_signal_for_each_slot__q = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_slot_interrupt_status_and_host_controller_version_rsvd_15__q = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_slot_interrupt_status_and_host_controller_version_specification_version_number__q = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_slot_interrupt_status_and_host_controller_version_vendor_version_number__q = VL_RAND_RESET_I(8);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__addr_hit = VL_RAND_RESET_I(19);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_system_address__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_system_address__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_block_size_and_count_transfer_block_size__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_block_size_and_count_host_dma_buffer_boundary__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_block_size_and_count_rsvd_15__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_block_size_and_count_blocks_count_for_current_transfer__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_block_size_and_count_blocks_count_for_current_transfer__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_argument__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_argument__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_transfer_mode_and_command_auto_cmd12_enable__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_response0__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_response1__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_response2__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_response3__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_buffer_data_port__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_buffer_data_port__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_command_inhibit_cmd__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_command_inhibit_dat__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_dat_line_active__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_rsvd_7__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_write_transfer_active__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_read_transfer_active__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_buffer_write_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_buffer_read_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_rsvd_15__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_card_inserted__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_card_state_stable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_card_detect_pin_level__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_write_protect_switch_pin_level__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_dat_line_signal_level__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_cmd_line_signal_level__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_rsvd_31__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_led_control__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_data_transfer_width__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_high_speed_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_rsvd_7__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_sd_bus_power__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_sd_bus_voltage_select__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_rsvd_15__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_stop_at_block_gap_request__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_continue_request__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_continue_request__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_continue_request__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_read_wait_control__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_interrupt_at_block_gap__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_rsvd_23__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_wakeup_event_enable_on_card_interrupt__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_wakeup_event_enable_on_sd_card_insertion__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_wakeup_event_enable_on_sd_card_removal__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_rsvd_31__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_internal_clock_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_internal_clock_stable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_sd_clock_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_rsvd_7__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_sdclk_frequency_select__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_data_timeout_counter_value__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_data_timeout_counter_value__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_rsvd_23__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_software_reset_for_all__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_software_reset_for_all__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_software_reset_for_cmd_line__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_software_reset_for_cmd_line__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_software_reset_for_dat_line__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_software_reset_for_dat_line__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_rsvd_31__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_command_complete__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_command_complete__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_transfer_complete__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_transfer_complete__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_block_gap_event__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_block_gap_event__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_dma_interrupt__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_dma_interrupt__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_buffer_write_ready__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_buffer_write_ready__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_buffer_read_ready__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_buffer_read_ready__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_card_insertion__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_card_insertion__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_card_removal__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_card_removal__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_card_interrupt__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_rsvd_14__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_error_interrupt__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_command_timeout_error__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_command_timeout_error__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_command_crc_error__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_command_crc_error__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_command_end_bit_error__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_command_end_bit_error__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_command_index_error__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_command_index_error__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_data_timeout_error__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_data_timeout_error__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_data_crc_error__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_data_crc_error__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_data_end_bit_error__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_data_end_bit_error__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_current_limit_error__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_current_limit_error__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_auto_cmd12_error__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_auto_cmd12_error__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_auto_cmd12_error__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_rsvd_27__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_vendor_specific_error_status__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_vendor_specific_error_status__DOT__wr_data = VL_RAND_RESET_I(4);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_command_complete_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_transfer_complete_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_block_gap_event_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_dma_interrupt_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_buffer_write_ready_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_buffer_read_ready_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_card_insertion_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_card_removal_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_card_interrupt_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_rsvd_14__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_fixed_to_0__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_command_timeout_error_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_command_crc_error_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_command_end_bit_error_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_command_index_error_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_data_timeout_error_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_data_crc_error_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_data_end_bit_error_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_current_limit_error_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_auto_cmd12_error_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_auto_cmd12_error_status_enable__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_rsvd_27__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_vendor_specific_error_status_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_command_complete_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_transfer_complete_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_block_gap_event_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_dma_interrupt_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_buffer_write_ready_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_buffer_read_ready_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_card_insertion_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_card_removal_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_card_interrupt_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_rsvd_14__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_fixed_to_0__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_command_timeout_error_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_command_crc_error_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_command_end_bit_error_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_command_index_error_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_data_timeout_error_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_data_crc_error_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_data_end_bit_error_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_current_limit_error_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_auto_cmd12_error_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_auto_cmd12_error_signal_enable__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_rsvd_27__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_vendor_specific_error_signal_enable__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_auto_cmd12_error_status_auto_cmd12_not_executed__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_auto_cmd12_error_status_auto_cmd12_timeout_error__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_auto_cmd12_error_status_auto_cmd12_crc_error__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_auto_cmd12_error_status_auto_cmd12_end_bit_error__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_auto_cmd12_error_status_auto_cmd12_index_error__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_auto_cmd12_error_status_rsvd_6__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_auto_cmd12_error_status_command_not_issued_by_auto_cmd12_error__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_auto_cmd12_error_status_rsvd_15__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_timeout_clock_frequency__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_rsvd_6__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_timeout_clock_unit__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_base_clock_frequency_for_sd_clock__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_rsvd_15__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_max_block_length__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_rsvd_20__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_high_speed_support__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_dma_support__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_suspend_resume_support__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_voltage_support_3_3v__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_voltage_support_3_0v__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_voltage_support_1_8v__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_rsvd_63__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_maximum_current_capabilities_maximum_current_for_3_3v__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_maximum_current_capabilities_maximum_current_for_3_0v__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_maximum_current_capabilities_maximum_current_for_1_8v__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_maximum_current_capabilities_rsvd_63__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_slot_interrupt_status_and_host_controller_version_interrupt_signal_for_each_slot__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_slot_interrupt_status_and_host_controller_version_rsvd_15__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_slot_interrupt_status_and_host_controller_version_specification_version_number__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_slot_interrupt_status_and_host_controller_version_vendor_version_number__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_sd__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_2_0 = VL_RAND_RESET_I(4);
    vlSelf->__VdfgRegularize_hd87f99a1_4_4 = VL_RAND_RESET_Q(35);
    vlSelf->__VdfgRegularize_hd87f99a1_4_5 = VL_RAND_RESET_Q(35);
    vlSelf->__VdfgRegularize_hd87f99a1_4_6 = VL_RAND_RESET_Q(35);
    vlSelf->__VdfgRegularize_hd87f99a1_4_13 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_4_14 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_4_15 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_4_24 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_4_25 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_4_26 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_4_35 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_4_36 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_4_37 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_4_46 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_4_47 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_4_48 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_4_57 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_4_58 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_4_59 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_4_64 = VL_RAND_RESET_Q(37);
    vlSelf->__VdfgRegularize_hd87f99a1_4_65 = VL_RAND_RESET_Q(37);
    vlSelf->__VdfgRegularize_hd87f99a1_4_66 = VL_RAND_RESET_Q(37);
    vlSelf->__VdfgRegularize_hd87f99a1_4_67 = VL_RAND_RESET_Q(37);
    vlSelf->__VdfgRegularize_hd87f99a1_4_68 = VL_RAND_RESET_Q(37);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_init__16__dmcontrol = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__52__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__1223__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__2016__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__2016__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__data = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__check_write = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write_reg32__2809__idle_cycles = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__2810__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__2810__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__3603__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__3603__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__4396__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__4396__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_halt__7877__status = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__7878__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__9050__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_wait_for_eoc__9843__exit_code = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__9844__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__9844__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__10637__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__10637__wait_sba = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__11430__wait_cmd = 0;
    vlSelf->__Vtask_tb_croc_soc__DOT__jtag_write__11430__wait_sba = 0;
    vlSelf->__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iRDAddr = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState = VL_RAND_RESET_I(3);
    vlSelf->__Vsampled_TOP__tb_croc_soc__DOT__jtag_trst_ni = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_clear = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_sd__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__dat = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_executing_spec__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__special_req__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__clear_resumeack__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(213, vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes__0);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__0 = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(213, vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes__0);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__0 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(213, vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes__0);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__0 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(213, vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes__0);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__0 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(213, vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes__0);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__0 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(234, vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__0);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__addr_hit__0 = VL_RAND_RESET_I(19);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_57__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_58__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_59__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_46__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_47__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_48__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_35__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_36__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_37__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_24__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_25__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_26__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_13__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_14__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_15__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__reg_error__0 = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__instr_executing_spec__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__id_stage_i__DOT__controller_i__DOT__special_req__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__clear_resumeack__1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(213, vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes__1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(213, vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes__1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(213, vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes__1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(213, vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes__1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(213, vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes__1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes__1 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel__1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(234, vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp__1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__addr_hit__1 = VL_RAND_RESET_I(19);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes__1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_57__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_58__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_59__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_46__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_47__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_48__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_35__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_36__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_37__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_24__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_25__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_26__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_13__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_14__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____VdfgRegularize_hd87f99a1_4_15__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes__1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__reg_error__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_rst_sys__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_jtag__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__jtag_trst_ni__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLL__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLM__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIIR__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRBR__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSCR__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iParity__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_SP__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_STB__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCount__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountFinish__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iFStopBit__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__fetch_en_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__uart_tx_o__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_croc_soc__DOT__i_clk_rst_rtc__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 129; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
