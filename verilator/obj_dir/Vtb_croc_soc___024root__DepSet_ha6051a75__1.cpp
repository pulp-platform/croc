// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc___024root.h"

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__47(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__47\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes 
        = (((IData)((0U != (0xcU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
            << 2U) | (((IData)((0U != (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
                       << 1U) | (IData)((0U != (6U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__0__KET____DOT__i_mux__mgr_port_req_o[0U] 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__0__KET____DOT__i_mux__mgr_port_req_o[0U]) 
           | ((2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__48(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__48\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__49(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__49\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | ((((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                 ? 2U : 3U) << 4U) | ((((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                                         ? 0U : 1U) 
                                       << 2U) | (3U 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                     ? 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 4U))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__50(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__50\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | ((((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                 ? 2U : 3U) << 4U) | ((((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                                         ? 0U : 1U) 
                                       << 2U) | (3U 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                     ? 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 4U))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__51(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__51\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__52(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__52\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__53(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__53\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | ((((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                 ? 2U : 3U) << 4U) | ((((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                                         ? 0U : 1U) 
                                       << 2U) | (3U 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                     ? 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 4U))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__54(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__54\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | ((((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                 ? 2U : 3U) << 4U) | ((((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                                         ? 0U : 1U) 
                                       << 2U) | (3U 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                     ? 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 4U))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__55(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__55\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__56(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__56\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__57(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__57\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | ((((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                 ? 2U : 3U) << 4U) | ((((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                                         ? 0U : 1U) 
                                       << 2U) | (3U 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                     ? 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 4U))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__58(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__58\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | ((((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                 ? 2U : 3U) << 4U) | ((((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                                         ? 0U : 1U) 
                                       << 2U) | (3U 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                     ? 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 4U))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__59(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__59\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__60(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__60\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__61(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__61\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | ((((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                 ? 2U : 3U) << 4U) | ((((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                                         ? 0U : 1U) 
                                       << 2U) | (3U 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                     ? 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 4U))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__62(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__62\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | ((((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                 ? 2U : 3U) << 4U) | ((((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                                         ? 0U : 1U) 
                                       << 2U) | (3U 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                     ? 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 4U))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__63(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__63\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__64(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__64\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__65(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__65\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | ((((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                 ? 2U : 3U) << 4U) | ((((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                                         ? 0U : 1U) 
                                       << 2U) | (3U 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                     ? 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 4U))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__66(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__66\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | ((((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                 ? 2U : 3U) << 4U) | ((((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                                         ? 0U : 1U) 
                                       << 2U) | (3U 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                     ? 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 4U))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__67(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__67\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__68(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__68\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[6U] 
                          << 0x12U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                       >> 0xeU)) : 
                     ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
                       << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                    >> 7U)));
    __Vtemp_1[2U] = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                            << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U] 
                                         >> 7U)) : 
                       vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[0U]) 
                      << 7U) | (0x7fU & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                             >> 0xeU)
                                          : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                              << 0x19U) 
                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                >> 7U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0x12U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
                             >> 0xeU)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 0x19U) 
                                          | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                             >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                  << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U] 
                               >> 7U)) : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[0U]) 
            >> 0x19U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                               << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                                            >> 7U))
                           : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[1U]) 
                         << 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                  << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                              >> 0x15U)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                             << 0x12U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                                               >> 0xeU))) 
            << 0xeU) | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                               << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                                            >> 7U))
                           : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[1U]) 
                         >> 0x19U) | (0x3f80U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                                    << 0x19U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                                                      >> 7U))
                                                   : 
                                                  vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U]) 
                                                 << 7U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                  << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                              >> 0x15U)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                             << 0x12U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                                               >> 0xeU))) 
            >> 0x12U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
                               << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                                           >> 0x15U))
                           : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                               << 0x12U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                            >> 0xeU))) 
                         << 0xeU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
                  << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                              >> 0x15U)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                                             << 0x12U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                               >> 0xeU))) 
            >> 0x12U) | (0x1fc000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                        ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
                                           >> 0x15U)
                                        : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                                            << 0x12U) 
                                           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                                              >> 0xeU))) 
                                      << 0xeU)));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__69(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__69\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
            << 4U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                       << 2U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                  ? (2U | (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                                 >> 4U)))
                                  : (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                           >> 2U)))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__70(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__70\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i) 
                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__71(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__71\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i) 
                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__72(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__72\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i) 
                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__73(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__73\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i) 
                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__74(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__74\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i) 
                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___act_comb__TOP__75(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___act_comb__TOP__75\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__0__KET____DOT__i_mux__mgr_port_req_o[0U] 
        = (0xffffffe3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__0__KET____DOT__i_mux__mgr_port_req_o[0U]);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__0__KET____DOT__i_mux__mgr_port_req_o[0U] 
        = ((3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__0__KET____DOT__i_mux__mgr_port_req_o[0U]) 
           | ((0xffffffe0U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[0U] 
                              << 3U)) | (4U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                               << 1U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__0__KET____DOT__i_mux__mgr_port_req_o[1U] 
        = ((3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[0U] 
                  >> 0x1dU)) | (((0x18U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           << 3U)) 
                                 | (4U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                          >> 0x1dU))) 
                                | (0xffffffe0U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                  << 3U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__0__KET____DOT__i_mux__mgr_port_req_o[2U] 
        = (0x3ffU & ((3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[1U] 
                            >> 0x1dU)) | (((0x18U & 
                                            (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                             << 3U)) 
                                           | (4U & 
                                              (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                               >> 0x1dU))) 
                                          | (0x3e0U 
                                             & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                                << 3U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__0__KET____DOT__i_mux__mgr_port_req_o[0U] 
        = ((0xffffffe1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__0__KET____DOT__i_mux__mgr_port_req_o[0U]) 
           | (0xfffffffeU & ((0x18U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                       << 3U)) | (6U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                                     << 1U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__0__KET____DOT__i_mux__mgr_port_req_o[0U] 
                 & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp 
                            >> 1U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__gate_clock = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q)));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp)) 
          & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__gate_clock = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_q)));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__xbar_error_obi_rsp)) 
          & (1U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_n 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
            = (((~ ((IData)(3U) << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n)) 
               | (0xfU & ((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes)) 
                          << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__mem_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
         & (1U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0 
            = (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__0__KET____DOT__i_mux__mgr_port_req_o[0U] 
                     >> 2U));
        if ((2U >= (3U & ((IData)(3U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_q))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__mem_n 
                = (((~ ((IData)(7U) << (3U & ((IData)(3U) 
                                              * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__mem_n)) 
                   | (7U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT____Vlvbound_h3dcab515__0) 
                            << (3U & ((IData)(3U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_xbar_err__DOT__i_id_fifo__DOT__write_pointer_q))))));
        }
    }
}

void Vtb_croc_soc___024root___nba_sequent__TOP__0(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__1(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__2(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__3(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__4(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__5(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__6(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__7(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__8(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__9(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__0(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__1(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__2(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__3(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__4(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__13(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__6(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__21(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__19(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__9(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__23(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__24(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__25(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_sequent__TOP__22(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__10(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__11(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__14(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__15(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__16(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__0(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__12(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__18(Vtb_croc_soc___024root* vlSelf);
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
void Vtb_croc_soc___024root___act_comb__TOP__2(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__10(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__31(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__32(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__13(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__33(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__34(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__35(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__36(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__37(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__38(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__4(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__5(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__14(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__41(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__27(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__28(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__29(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__30(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__31(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__32(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__25(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__49(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__50(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__12(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__13(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__15(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__53(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_sequent__TOP__16(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__33(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__34(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__35(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__36(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__37(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__1(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__3(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__26(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__38(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__39(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__40(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__41(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__11(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__42(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__43(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__44(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___act_comb__TOP__45(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__71(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__77(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__78(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__83(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__84(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__89(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__90(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__95(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___nba_comb__TOP__96(Vtb_croc_soc___024root* vlSelf);

void Vtb_croc_soc___024root___eval_nba(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x3eU] = 1U;
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x3fU] = 1U;
    }
    if ((0x400000000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x1800ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x40U] = 1U;
    }
    if ((0xc000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x41U] = 1U;
    }
    if ((0x3f8d00000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x18000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x3fe0000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x1ffe0000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_sequent__TOP__9(vlSelf);
    }
    if (((0x100000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x42U] = 1U;
    }
    if (((0x80000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x43U] = 1U;
    }
    if (((0x40000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x44U] = 1U;
    }
    if (((0x20000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x45U] = 1U;
    }
    if (((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x46U] = 1U;
    }
    if (((0x200000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_sequent__TOP__13(vlSelf);
    }
    if (((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x47U] = 1U;
    }
    if (((0x10000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_sequent__TOP__21(vlSelf);
    }
    if (((0x8000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_sequent__TOP__19(vlSelf);
    }
    if (((0x20000000002000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__9(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x48U] = 1U;
    }
    if (((0x400000000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_sequent__TOP__23(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x49U] = 1U;
    }
    if (((0x1000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_sequent__TOP__24(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x4aU] = 1U;
    }
    if (((0x800000000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_sequent__TOP__25(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x4bU] = 1U;
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_sequent__TOP__22(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x4cU] = 1U;
    }
    if ((0x4080000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_sequent__TOP__11(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x4dU] = 1U;
    }
    if (((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0xc000ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__14(vlSelf);
    }
    if (((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0xc000ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((0xc800ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_comb__TOP__16(vlSelf);
    }
    if ((0x80000000c800ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x4eU] = 1U;
    }
    if ((0x1800000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_sequent__TOP__12(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x4fU] = 1U;
    }
    if (((0x108000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__18(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x50U] = 1U;
    }
    if (((0x8000000080000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__14(vlSelf);
    }
    if (((0x8000000080100000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__15(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x51U] = 1U;
    }
    if (((0x10080000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__16(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x52U] = 1U;
    }
    if (((0x40080000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__17(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x53U] = 1U;
    }
    if (((0x20080000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__18(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x54U] = 1U;
    }
    if (((0x40000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2810ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__19(vlSelf);
    }
    if (((0x40800000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2810ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__20(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x55U] = 1U;
    }
    if (((0x2040000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__21(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x56U] = 1U;
    }
    if (((0x8040000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__22(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x57U] = 1U;
    }
    if (((0x4040000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__23(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x58U] = 1U;
    }
    if (((0x20000200000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__2(vlSelf);
    }
    if (((0x10000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2c00ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__10(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x59U] = 1U;
    }
    if (((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__31(vlSelf);
    }
    if (((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__32(vlSelf);
    }
    if ((0x3f8d00000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_sequent__TOP__13(vlSelf);
    }
    if (((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__33(vlSelf);
    }
    if (((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__34(vlSelf);
    }
    if ((0x3fe0002800ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_comb__TOP__35(vlSelf);
    }
    if ((0x6800ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_comb__TOP__36(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x5aU] = 1U;
    }
    if (((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0xe800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__37(vlSelf);
    }
    if (((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0xe800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__38(vlSelf);
    }
    if (((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x80000000c800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x5bU] = 1U;
    }
    if (((8ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x80000000c800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x5cU] = 1U;
    }
    if ((0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_sequent__TOP__14(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x5dU] = 1U;
    }
    if (((0x108000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x1ffe2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__41(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x5eU] = 1U;
    }
    if (((0x108000800ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__27(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x5fU] = 1U;
    }
    if (((0x400000108000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__28(vlSelf);
    }
    if (((0x400000108020000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__29(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x60U] = 1U;
    }
    if (((0x80108000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__30(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x61U] = 1U;
    }
    if (((0x200108000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__31(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x62U] = 1U;
    }
    if (((0x100108000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__32(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x63U] = 1U;
    }
    if (((0x30000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2c00ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__25(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x64U] = 1U;
    }
    if (((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0xe800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__49(vlSelf);
    }
    if (((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0xe800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__50(vlSelf);
    }
    if (((0x600ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x80000000e800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__12(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x65U] = 1U;
    }
    if (((0x18ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x80000000e800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x3f8d00000000ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_sequent__TOP__15(vlSelf);
    }
    if (((0x108000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__53(vlSelf);
    }
    if ((0x1800ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        Vtb_croc_soc___024root___nba_sequent__TOP__16(vlSelf);
    }
    if (((0x30000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e00ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__33(vlSelf);
    }
    if (((0x34000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e00ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__34(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x66U] = 1U;
    }
    if (((0x430000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2c00ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__35(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x67U] = 1U;
    }
    if (((0x1030000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2c00ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__36(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x68U] = 1U;
    }
    if (((0x830000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2c00ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__37(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x69U] = 1U;
    }
    if (((0x180ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0xe800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x6aU] = 1U;
    }
    if (((0x60ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0xe800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x6bU] = 1U;
    }
    if (((0x618ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x80000000e800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__26(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x6cU] = 1U;
    }
    if (((0x84200001fc922000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__38(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x6dU] = 1U;
    }
    if (((0x4925f8000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2c00ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__39(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x6eU] = 1U;
    }
    if (((0x12491f8000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2c00ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__40(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x6fU] = 1U;
    }
    if (((0x9249f8000000ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2c00ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__41(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x70U] = 1U;
    }
    if (((0x1e0ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0xe800ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__11(vlSelf);
    }
    if (((0x12491f8000860ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0xec00ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__42(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x71U] = 1U;
    }
    if (((0x9249f8000001ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2c00ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__43(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x72U] = 1U;
    }
    if (((0x9249f8000007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2c00ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__44(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x73U] = 1U;
    }
    if (((0xdb6df8000007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2c00ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__45(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x74U] = 1U;
    }
    if (((0x8421fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__71(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x75U] = 1U;
    }
    if (((0x8421fffffc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__47(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x76U] = 1U;
    }
    if (((0x8621fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__48(vlSelf);
    }
    if (((0x8721fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__49(vlSelf);
    }
    if (((0x84e1fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__50(vlSelf);
    }
    if (((0x8461fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__51(vlSelf);
    }
    if (((0x8421fffdfc92a007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__77(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x77U] = 1U;
    }
    if (((0x8421fffdfc932007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__78(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x78U] = 1U;
    }
    if (((0xc421fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__52(vlSelf);
    }
    if (((0xe421fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__53(vlSelf);
    }
    if (((0x9c21fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__54(vlSelf);
    }
    if (((0x8c21fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__55(vlSelf);
    }
    if (((0x8421fffdfc962007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__83(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x79U] = 1U;
    }
    if (((0x8421fffdfc9a2007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__84(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x7aU] = 1U;
    }
    if (((0x8421fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e18ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__56(vlSelf);
    }
    if (((0x8421fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e1cULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__57(vlSelf);
    }
    if (((0x8421fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e13ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__58(vlSelf);
    }
    if (((0x8421fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e11ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__59(vlSelf);
    }
    if (((0x8421fffdfcb22007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__89(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x7bU] = 1U;
    }
    if (((0x8421fffdfcd22007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__90(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x7cU] = 1U;
    }
    if (((0x8421fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2f10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__60(vlSelf);
    }
    if (((0x8421fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2f90ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__61(vlSelf);
    }
    if (((0x8421fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e70ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__62(vlSelf);
    }
    if (((0x8421fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e30ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__63(vlSelf);
    }
    if (((0x8421fffdfd922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__95(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x7dU] = 1U;
    }
    if (((0x8421fffdfe922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___nba_comb__TOP__96(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x7eU] = 1U;
    }
    if (((0x8431fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__64(vlSelf);
    }
    if (((0x8439fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__65(vlSelf);
    }
    if (((0x8427fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__66(vlSelf);
    }
    if (((0x8423fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__67(vlSelf);
    }
    if (((0x8421fffffc923007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__68(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x7fU] = 1U;
    }
    if (((0x8421fffffc926007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__69(vlSelf);
    }
    if (((0x87e1fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__70(vlSelf);
    }
    if (((0xfc21fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__71(vlSelf);
    }
    if (((0x8421fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e1fULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__72(vlSelf);
    }
    if (((0x8421fffdfc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2ff0ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__73(vlSelf);
    }
    if (((0x843ffffffc922007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__74(vlSelf);
    }
    if (((0x8421fffffc927007ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0x2e10ULL & vlSelfRef.__VnbaTriggered.word(1U)))) {
        Vtb_croc_soc___024root___act_comb__TOP__75(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x80U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__0(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_hed88a7da_2_1;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_hed88a7da_2_1 = 0;
    CData/*4:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_hed88a7da_2_2;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_hed88a7da_2_2 = 0;
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_d;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_hed88a7da_2_1 
        = ((0x20U <= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                       >> 0x22U)))) 
           & (0x27U >= (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                         >> 0x22U)))));
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_hed88a7da_2_2 
        = (((0x16U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                        >> 0x22U)))) 
            << 4U) | (((0x12U == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U)))) 
                       << 3U) | (((0x11U == (0x7fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x22U)))) 
                                  << 2U) | (((0x10U 
                                              == (0x7fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                             >> 0x22U)))) 
                                             << 1U) 
                                            | ((4U 
                                                <= 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U)))) 
                                               & (5U 
                                                  >= 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                              >> 0x22U)))))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_hed88a7da_2_3 
        = (((0x3dU == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                        >> 0x22U)))) 
            << 0x11U) | (((0x3cU == (0x7fU & (IData)(
                                                     (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                      >> 0x22U)))) 
                          << 0x10U) | (((0x3aU == (0x7fU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                              >> 0x22U)))) 
                                        << 0xfU) | 
                                       (((0x39U == 
                                          (0x7fU & (IData)(
                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U)))) 
                                         << 0xeU) | 
                                        (((0x38U == 
                                           (0x7fU & (IData)(
                                                            (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                             >> 0x22U)))) 
                                          << 0xdU) 
                                         | (((0x35U 
                                              == (0x7fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                             >> 0x22U)))) 
                                             << 0xcU) 
                                            | (((0x34U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                             >> 0x22U)))) 
                                                << 0xbU) 
                                               | (((0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                >> 0x22U)))) 
                                                   << 0xaU) 
                                                  | (((0x40U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                   >> 0x22U)))) 
                                                      << 9U) 
                                                     | (((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_hed88a7da_2_1) 
                                                         << 8U) 
                                                        | (((0x1dU 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(
                                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                         >> 0x22U)))) 
                                                            << 7U) 
                                                           | (((0x17U 
                                                                == 
                                                                (0x7fU 
                                                                 & (IData)(
                                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                            >> 0x22U)))) 
                                                               << 6U) 
                                                              | (((0x18U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (IData)(
                                                                              (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                               >> 0x22U)))) 
                                                                  << 5U) 
                                                                 | (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_hed88a7da_2_2))))))))))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_hed88a7da_2_4 
        = (((0x3dU == (0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                        >> 0x22U)))) 
            << 0xdU) | (((0x3cU == (0x7fU & (IData)(
                                                    (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x22U)))) 
                         << 0xcU) | (((0x3aU == (0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x22U)))) 
                                      << 0xbU) | ((
                                                   (0x39U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                >> 0x22U)))) 
                                                   << 0xaU) 
                                                  | (((0x38U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                   >> 0x22U)))) 
                                                      << 9U) 
                                                     | (((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_hed88a7da_2_1) 
                                                         << 8U) 
                                                        | (((0x18U 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(
                                                                        (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                         >> 0x22U)))) 
                                                            << 7U) 
                                                           | (((0x1dU 
                                                                == 
                                                                (0x7fU 
                                                                 & (IData)(
                                                                           (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                            >> 0x22U)))) 
                                                               << 6U) 
                                                              | (((0x17U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (IData)(
                                                                              (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                               >> 0x22U)))) 
                                                                  << 5U) 
                                                                 | (IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_hed88a7da_2_2))))))))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__3(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__rst_n)
            ? (1U | (0xeU & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q) 
                             << 1U))) : 0U);
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h989774d6_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h7a289fe3_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h5860cad4_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_croc_soc__ConstPool__TABLE_h839331c2_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__5(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*2:0*/ __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q;
    __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q = 0;
    // Body
    __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q;
    if (vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q));
        __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q 
            = ((6U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q 
            = ((6U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d;
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q;
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q;
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d;
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = 0U;
        __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q = 0xc0c5db3U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q = 0ULL;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                     >> 2U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_req));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_req));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_req));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_req));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni))) 
           || (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni))) 
           || (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q 
        = __Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q;
    __Vtableidx7 = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_select 
        = Vtb_croc_soc__ConstPool__TABLE_h989774d6_0
        [__Vtableidx7];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_select 
        = Vtb_croc_soc__ConstPool__TABLE_h7a289fe3_0
        [__Vtableidx7];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_select 
        = Vtb_croc_soc__ConstPool__TABLE_h5860cad4_0
        [__Vtableidx7];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_select 
        = Vtb_croc_soc__ConstPool__TABLE_h839331c2_0
        [__Vtableidx7];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready 
        = ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                  >> 2U)) == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q) 
           != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__6(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState;
    vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iRXFinished = 0U;
    if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN)))) {
                    vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState = 5U;
                }
            } else {
                vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState 
                    = ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCount))
                        ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iFStopBit)
                            ? 0U : 5U) : 4U);
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState)))) {
                if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCount))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iRXFinished = 1U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState))) {
        vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState 
            = ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState))
                ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep)
                    ? 4U : 3U) : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountFinish)
                                   ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN)
                                       ? 3U : 4U) : 2U));
    } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState))) {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep) {
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ)))) {
                vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState = 2U;
            }
        } else {
            vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState = 1U;
        }
    } else if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN)))) {
        vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState = 1U;
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__7(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
                                              && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tdo_mux));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__tdo_oe_o 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni) 
           && ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_ir) 
               | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_dr)));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__8(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__8\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 0U;
    if ((8U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState)))) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout 
                        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_SP)
                                  ? (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS))
                                  : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS)
                                      ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iParity)
                                      : (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iParity)))));
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout 
                    = (1U & ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))
                              ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                                 >> 7U) : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                                           >> 6U)));
            }
        }
        if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState)))) {
                    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart) {
                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 1U;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
                if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_STB) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 0xcU;
                } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart) {
                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 1U;
                }
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 0xbU;
            }
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState 
                = ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))
                    ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN)
                        ? 0xaU : 0xbU) : ((2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS))
                                           ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN)
                                               ? 0xaU
                                               : 0xbU)
                                           : 9U));
        }
    } else if ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout 
                    = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                             >> 5U));
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState 
                    = ((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS))
                        ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN)
                            ? 0xaU : 0xbU) : 8U);
            } else {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout 
                    = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                             >> 4U));
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState 
                    = ((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS))
                        ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN)
                            ? 0xaU : 0xbU) : 7U);
            }
        } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout 
                = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                         >> 3U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 6U;
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout 
                = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                         >> 2U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
        if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout 
                = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                         >> 1U));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 4U;
        } else {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout 
                = (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR));
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 2U;
    } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState = 1U;
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__9(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__9\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellout__i_apb_uart__PRDATA 
        = ((0xffffff00U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellout__i_apb_uart__PRDATA) 
           | ((4U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR))
               ? ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR))
                   ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR))
                       ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSCR)
                       : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR))
                   : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR))
                       ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR)
                       : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR)))
               : ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR))
                   ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR))
                       ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR)
                       : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIIR))
                   : ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR))
                       ? ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB)
                           ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLM)
                           : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER))
                       : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB)
                           ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLL)
                           : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRBR))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellout__i_apb_uart__PRDATA 
        = (0xffU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellout__i_apb_uart__PRDATA);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp 
        = ((1ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp) 
           | ((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellout__i_apb_uart__PRDATA)) 
              << 2U));
}

extern const VlWide<15>/*479:0*/ Vtb_croc_soc__ConstPool__CONST_h9c531624_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__0(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__1__KET____DOT__i_mux__mgr_port_req_o[0U] 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__1__KET____DOT__i_mux__mgr_port_req_o[0U]) 
           | ((2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i = 0U;
    while ((5U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)) {
        if (((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__1__KET____DOT__i_mux__mgr_port_req_o[2U] 
                << 0x16U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__1__KET____DOT__i_mux__mgr_port_req_o[1U] 
                             >> 0xaU)) >= ((0x1dfU 
                                            >= ((IData)(0x20U) 
                                                + (0x1ffU 
                                                   & ((IData)(0x60U) 
                                                      * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))
                                            ? (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     (0x1ffU 
                                                      & ((IData)(0x60U) 
                                                         * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))))
                                                 ? 0U
                                                 : 
                                                (Vtb_croc_soc__ConstPool__CONST_h9c531624_0[
                                                 (((IData)(0x3fU) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(0x60U) 
                                                       * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x20U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x60U) 
                                                          * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))))) 
                                               | (Vtb_croc_soc__ConstPool__CONST_h9c531624_0[
                                                  (((IData)(0x20U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x60U) 
                                                        * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x20U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x60U) 
                                                          * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))))
                                            : 0U)) 
             & ((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__1__KET____DOT__i_mux__mgr_port_req_o[2U] 
                   << 0x16U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__1__KET____DOT__i_mux__mgr_port_req_o[1U] 
                                >> 0xaU)) < ((0x1dfU 
                                              >= (0x1ffU 
                                                  & ((IData)(0x60U) 
                                                     * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))
                                              ? (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x60U) 
                                                       * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))
                                                   ? 0U
                                                   : 
                                                  (Vtb_croc_soc__ConstPool__CONST_h9c531624_0[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0x1ffU 
                                                      & ((IData)(0x60U) 
                                                         * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x60U) 
                                                        * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))) 
                                                 | (Vtb_croc_soc__ConstPool__CONST_h9c531624_0[
                                                    (0xfU 
                                                     & (((IData)(0x60U) 
                                                         * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(0x60U) 
                                                        * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))
                                              : 0U)) 
                | (0U == ((0x1dfU >= (0x1ffU & ((IData)(0x60U) 
                                                * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x60U) 
                                                * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))
                                ? 0U : (Vtb_croc_soc__ConstPool__CONST_h9c531624_0[
                                        (((IData)(0x1fU) 
                                          + (0x1ffU 
                                             & ((IData)(0x60U) 
                                                * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x60U) 
                                             * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))) 
                              | (Vtb_croc_soc__ConstPool__CONST_h9c531624_0[
                                 (0xfU & (((IData)(0x60U) 
                                           * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i) 
                                          >> 5U))] 
                                 >> (0x1fU & ((IData)(0x60U) 
                                              * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))
                           : 0U))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT____Vlvbound_hfbbc2329__0 = 1U;
            if (VL_LIKELY((4U >= (7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules 
                    = (((~ ((IData)(1U) << (7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                        & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules)) 
                       | (0x1fU & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT____Vlvbound_hfbbc2329__0) 
                                   << (7U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))));
            }
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 1U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__periph_idx 
                = ((0x1dfU >= ((IData)(0x40U) + (0x1ffU 
                                                 & ((IData)(0x60U) 
                                                    * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))
                    ? (7U & (((0U == (0x1fU & ((IData)(0x40U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x60U) 
                                                     * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))))
                               ? 0U : (Vtb_croc_soc__ConstPool__CONST_h9c531624_0[
                                       (((IData)(0x42U) 
                                         + (0x1ffU 
                                            & ((IData)(0x60U) 
                                               * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x40U) 
                                            + (0x1ffU 
                                               & ((IData)(0x60U) 
                                                  * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))))) 
                             | (Vtb_croc_soc__ConstPool__CONST_h9c531624_0[
                                (((IData)(0x40U) + 
                                  (0x1ffU & ((IData)(0x60U) 
                                             * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                 >> 5U)] >> (0x1fU 
                                             & ((IData)(0x40U) 
                                                + (0x1ffU 
                                                   & ((IData)(0x60U) 
                                                      * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))))))
                    : 0U);
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i);
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__1(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h7100c9d7__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h7100c9d7__0 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h8a4584b4__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h8a4584b4__0 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h8c009986__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h8c009986__0 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h689630a4__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h689630a4__0 = 0;
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__2__KET____DOT__i_mux__mgr_port_req_o[0U] 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__2__KET____DOT__i_mux__mgr_port_req_o[0U]) 
           | ((2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i = 0U;
    while ((1U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram__rdata_o 
            = (((~ ((IData)(0xffffffffU) << (0x1fU 
                                             & VL_SHIFTL_III(5,32,32, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i, 5U)))) 
                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram__rdata_o) 
               | (0xffffffffULL & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__rdata_q 
                                    >> (0x1fU & VL_SHIFTL_III(5,32,32, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i, 5U))) 
                                   << (0x1fU & VL_SHIFTL_III(5,32,32, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i, 5U)))));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__rdata_d 
            = (((~ ((IData)(0xffffffffU) << (0x1fU 
                                             & VL_SHIFTL_III(5,32,32, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i, 5U)))) 
                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__rdata_d) 
               | (0xffffffffULL & (((((0U >= (1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)) 
                                      && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__2__KET____DOT__i_mux__mgr_port_req_o[0U] 
                                                >> 
                                                (1U 
                                                 & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)))) 
                                     & (~ ((0U >= (1U 
                                                   & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)) 
                                           && (1U & 
                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__2__KET____DOT__i_mux__mgr_port_req_o[
                                                (((IData)(0x29U) 
                                                  + 
                                                  (1U 
                                                   & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)) 
                                                 >> 5U)] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x29U) 
                                                    + 
                                                    (1U 
                                                     & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i))))))))
                                     ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__sram
                                    [((8U >= (0xfU 
                                              & ((IData)(9U) 
                                                 * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)))
                                       ? (0x1ffU & 
                                          (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x2cU) 
                                                 + 
                                                 (0xfU 
                                                  & ((IData)(9U) 
                                                     * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)))))
                                             ? 0U : 
                                            (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__2__KET____DOT__i_mux__mgr_port_req_o[
                                             (((IData)(0x34U) 
                                               + (0xfU 
                                                  & ((IData)(9U) 
                                                     * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x2cU) 
                                                     + 
                                                     (0xfU 
                                                      & ((IData)(9U) 
                                                         * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i))))))) 
                                           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__2__KET____DOT__i_mux__mgr_port_req_o[
                                              (((IData)(0x2cU) 
                                                + (0xfU 
                                                   & ((IData)(9U) 
                                                      * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i))) 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & ((IData)(0x2cU) 
                                                     + 
                                                     (0xfU 
                                                      & ((IData)(9U) 
                                                         * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)))))))
                                       : 0U)] : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__sram
                                    [((8U >= (0xfU 
                                              & ((IData)(9U) 
                                                 * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)))
                                       ? (0x1ffU & 
                                          ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__r_addr_q) 
                                           >> (0xfU 
                                               & ((IData)(9U) 
                                                  * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i))))
                                       : 0U)]) << (0x1fU 
                                                   & VL_SHIFTL_III(5,32,32, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i, 5U)))));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o 
        = ((0x7ffffffffcULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o) 
           | (IData)((IData)((2U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__DOT__rvalid_q)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o 
        = ((7ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o) 
           | (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram__rdata_o)) 
               << 7U) | ((QData)((IData)(((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__DOT__id_q) 
                                          << 1U))) 
                         << 3U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i 
        = ((2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
           & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o 
                      >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__DOT__rvalid_d 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__2__KET____DOT__i_mux__mgr_port_req_o[0U] 
                 & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o 
                            >> 1U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i = 0U;
    while ((4U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h9bca8d48__0 = 0ULL;
        if (VL_LIKELY((0x8bU >= (0xffU & ((IData)(0x23U) 
                                          * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i))))) {
            VL_ASSIGNSEL_WQ(140,35,(0xffU & ((IData)(0x23U) 
                                             * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i)), vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h9bca8d48__0);
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_rvalid 
            = ((~ ((IData)(1U) << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i))) 
               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_rvalid));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i);
    }
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h7100c9d7__0 
        = (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o 
                   >> 7U));
    if ((0x8bU >= ((IData)(3U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id)))))) {
        VL_ASSIGNSEL_WI(140,32,((IData)(3U) + (0xffU 
                                               & ((IData)(0x23U) 
                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id)))), vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r, tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h7100c9d7__0);
    }
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h8a4584b4__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o 
                         >> 4U)));
    if ((0x8bU >= ((IData)(2U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id)))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[(
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x23U) 
                                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id)))) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(2U) 
                                             + (0xffU 
                                                & ((IData)(0x23U) 
                                                   * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id))))))) 
                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[
                (((IData)(2U) + (0xffU & ((IData)(0x23U) 
                                          * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id)))) 
                 >> 5U)]) | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h8a4584b4__0) 
                             << (0x1fU & ((IData)(2U) 
                                          + (0xffU 
                                             & ((IData)(0x23U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id)))))));
    }
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h8c009986__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o 
                         >> 3U)));
    if ((0x8bU >= ((IData)(1U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id)))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[(
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x23U) 
                                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id)))) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(1U) 
                                             + (0xffU 
                                                & ((IData)(0x23U) 
                                                   * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id))))))) 
                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[
                (((IData)(1U) + (0xffU & ((IData)(0x23U) 
                                          * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id)))) 
                 >> 5U)]) | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h8c009986__0) 
                             << (0x1fU & ((IData)(1U) 
                                          + (0xffU 
                                             & ((IData)(0x23U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id)))))));
    }
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h689630a4__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o 
                         >> 2U)));
    if ((0x8bU >= (0xffU & ((IData)(0x23U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[(7U 
                                                                                & (((IData)(0x23U) 
                                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x23U) 
                                             * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id))))) 
                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[
                (7U & (((IData)(0x23U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id)) 
                       >> 5U))]) | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vlvbound_h689630a4__0) 
                                    << (0x1fU & ((IData)(0x23U) 
                                                 * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_rvalid 
        = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id))) 
            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_rvalid)) 
           | (0xfU & ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o)) 
                      << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__response_id))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__DOT__rvalid_d) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q)));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q)));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__DOT__rvalid_d) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__obi_rsp_o)) 
          & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q;
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__2(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h7100c9d7__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h7100c9d7__0 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h8a4584b4__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h8a4584b4__0 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h8c009986__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h8c009986__0 = 0;
    CData/*0:0*/ tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h689630a4__0;
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h689630a4__0 = 0;
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__3__KET____DOT__i_mux__mgr_port_req_o[0U] 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__3__KET____DOT__i_mux__mgr_port_req_o[0U]) 
           | ((2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i = 0U;
    while ((1U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram__rdata_o 
            = (((~ ((IData)(0xffffffffU) << (0x1fU 
                                             & VL_SHIFTL_III(5,32,32, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i, 5U)))) 
                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram__rdata_o) 
               | (0xffffffffULL & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__rdata_q 
                                    >> (0x1fU & VL_SHIFTL_III(5,32,32, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i, 5U))) 
                                   << (0x1fU & VL_SHIFTL_III(5,32,32, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i, 5U)))));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__rdata_d 
            = (((~ ((IData)(0xffffffffU) << (0x1fU 
                                             & VL_SHIFTL_III(5,32,32, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i, 5U)))) 
                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__rdata_d) 
               | (0xffffffffULL & (((((0U >= (1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)) 
                                      && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__3__KET____DOT__i_mux__mgr_port_req_o[0U] 
                                                >> 
                                                (1U 
                                                 & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)))) 
                                     & (~ ((0U >= (1U 
                                                   & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)) 
                                           && (1U & 
                                               (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__3__KET____DOT__i_mux__mgr_port_req_o[
                                                (((IData)(0x29U) 
                                                  + 
                                                  (1U 
                                                   & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)) 
                                                 >> 5U)] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x29U) 
                                                    + 
                                                    (1U 
                                                     & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i))))))))
                                     ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__sram
                                    [((8U >= (0xfU 
                                              & ((IData)(9U) 
                                                 * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)))
                                       ? (0x1ffU & 
                                          (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x2cU) 
                                                 + 
                                                 (0xfU 
                                                  & ((IData)(9U) 
                                                     * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)))))
                                             ? 0U : 
                                            (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__3__KET____DOT__i_mux__mgr_port_req_o[
                                             (((IData)(0x34U) 
                                               + (0xfU 
                                                  & ((IData)(9U) 
                                                     * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x2cU) 
                                                     + 
                                                     (0xfU 
                                                      & ((IData)(9U) 
                                                         * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i))))))) 
                                           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__3__KET____DOT__i_mux__mgr_port_req_o[
                                              (((IData)(0x2cU) 
                                                + (0xfU 
                                                   & ((IData)(9U) 
                                                      * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i))) 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & ((IData)(0x2cU) 
                                                     + 
                                                     (0xfU 
                                                      & ((IData)(9U) 
                                                         * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)))))))
                                       : 0U)] : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__sram
                                    [((8U >= (0xfU 
                                              & ((IData)(9U) 
                                                 * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i)))
                                       ? (0x1ffU & 
                                          ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__r_addr_q) 
                                           >> (0xfU 
                                               & ((IData)(9U) 
                                                  * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i))))
                                       : 0U)]) << (0x1fU 
                                                   & VL_SHIFTL_III(5,32,32, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i, 5U)))));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram__DOT__gen_read_lat__DOT__unnamedblk2__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o = 0ULL;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o 
        = ((0x7ffffffffcULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o) 
           | (IData)((IData)((2U | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__DOT__rvalid_q)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o 
        = ((7ULL & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o) 
           | (((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram__rdata_o)) 
               << 7U) | ((QData)((IData)(((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__DOT__id_q) 
                                          << 1U))) 
                         << 3U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i 
        = ((2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
           & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o 
                      >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__DOT__rvalid_d 
        = (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__3__KET____DOT__i_mux__mgr_port_req_o[0U] 
                 & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o 
                            >> 1U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i = 0U;
    while ((4U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h9bca8d48__0 = 0ULL;
        if (VL_LIKELY((0x8bU >= (0xffU & ((IData)(0x23U) 
                                          * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i))))) {
            VL_ASSIGNSEL_WQ(140,35,(0xffU & ((IData)(0x23U) 
                                             * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i)), vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r, vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h9bca8d48__0);
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_rvalid 
            = ((~ ((IData)(1U) << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i))) 
               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_rvalid));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__proc_sbr_rsp__DOT__unnamedblk1__DOT__i);
    }
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h7100c9d7__0 
        = (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o 
                   >> 7U));
    if ((0x8bU >= ((IData)(3U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id)))))) {
        VL_ASSIGNSEL_WI(140,32,((IData)(3U) + (0xffU 
                                               & ((IData)(0x23U) 
                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id)))), vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r, tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h7100c9d7__0);
    }
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h8a4584b4__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o 
                         >> 4U)));
    if ((0x8bU >= ((IData)(2U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id)))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[(
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x23U) 
                                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id)))) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(2U) 
                                             + (0xffU 
                                                & ((IData)(0x23U) 
                                                   * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id))))))) 
                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[
                (((IData)(2U) + (0xffU & ((IData)(0x23U) 
                                          * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id)))) 
                 >> 5U)]) | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h8a4584b4__0) 
                             << (0x1fU & ((IData)(2U) 
                                          + (0xffU 
                                             & ((IData)(0x23U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id)))))));
    }
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h8c009986__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o 
                         >> 3U)));
    if ((0x8bU >= ((IData)(1U) + (0xffU & ((IData)(0x23U) 
                                           * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id)))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[(
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x23U) 
                                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id)))) 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(1U) 
                                             + (0xffU 
                                                & ((IData)(0x23U) 
                                                   * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id))))))) 
                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[
                (((IData)(1U) + (0xffU & ((IData)(0x23U) 
                                          * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id)))) 
                 >> 5U)]) | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h8c009986__0) 
                             << (0x1fU & ((IData)(1U) 
                                          + (0xffU 
                                             & ((IData)(0x23U) 
                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id)))))));
    }
    tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h689630a4__0 
        = (1U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o 
                         >> 2U)));
    if ((0x8bU >= (0xffU & ((IData)(0x23U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id))))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[(7U 
                                                                                & (((IData)(0x23U) 
                                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x23U) 
                                             * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id))))) 
                & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[
                (7U & (((IData)(0x23U) * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id)) 
                       >> 5U))]) | ((IData)(tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vlvbound_h689630a4__0) 
                                    << (0x1fU & ((IData)(0x23U) 
                                                 * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id)))));
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_rvalid 
        = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id))) 
            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_rvalid)) 
           | (0xfU & ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o)) 
                      << (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__response_id))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = 1U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__DOT__rvalid_d) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__gate_clock = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q)));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_q)));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__DOT__rvalid_d) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__obi_rsp_o)) 
          & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q;
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__3(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__4__KET____DOT__i_mux__mgr_port_req_o[0U] 
        = ((0xfffffffeU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__4__KET____DOT__i_mux__mgr_port_req_o[0U]) 
           | ((2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)) 
              & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i = 0U;
    while ((1U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)) {
        __Vtemp_1[0U] = 0x20001000U;
        __Vtemp_1[1U] = 0x20000000U;
        __Vtemp_1[2U] = 1U;
        __Vtemp_2[0U] = 0x20001000U;
        __Vtemp_2[1U] = 0x20000000U;
        __Vtemp_2[2U] = 1U;
        __Vtemp_3[0U] = 0x20001000U;
        __Vtemp_3[1U] = 0x20000000U;
        __Vtemp_3[2U] = 1U;
        if (((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__4__KET____DOT__i_mux__mgr_port_req_o[2U] 
                << 0x16U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__4__KET____DOT__i_mux__mgr_port_req_o[1U] 
                             >> 0xaU)) >= ((0x5fU >= 
                                            ((IData)(0x20U) 
                                             + (0x7fU 
                                                & ((IData)(0x60U) 
                                                   * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))
                                            ? (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x60U) 
                                                         * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))))
                                                 ? 0U
                                                 : 
                                                (__Vtemp_1[
                                                 (((IData)(0x3fU) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x60U) 
                                                       * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x20U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x60U) 
                                                          * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))))) 
                                               | (__Vtemp_1[
                                                  (((IData)(0x20U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x60U) 
                                                        * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x20U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x60U) 
                                                          * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))))
                                            : 0U)) 
             & ((((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__4__KET____DOT__i_mux__mgr_port_req_o[2U] 
                   << 0x16U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_mux__BRA__4__KET____DOT__i_mux__mgr_port_req_o[1U] 
                                >> 0xaU)) < ((0x5fU 
                                              >= (0x7fU 
                                                  & ((IData)(0x60U) 
                                                     * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))
                                              ? (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x60U) 
                                                       * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))
                                                   ? 0U
                                                   : 
                                                  (__Vtemp_2[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x60U) 
                                                         * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x60U) 
                                                        * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))) 
                                                 | (__Vtemp_2[
                                                    (3U 
                                                     & (((IData)(0x60U) 
                                                         * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(0x60U) 
                                                        * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))
                                              : 0U)) 
                | (0U == ((0x5fU >= (0x7fU & ((IData)(0x60U) 
                                              * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x60U) 
                                                * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))
                                ? 0U : (__Vtemp_3[(
                                                   ((IData)(0x1fU) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x60U) 
                                                        * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                                   >> 5U)] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x60U) 
                                                  * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))) 
                              | (__Vtemp_3[(3U & (((IData)(0x60U) 
                                                   * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i) 
                                                  >> 5U))] 
                                 >> (0x1fU & ((IData)(0x60U) 
                                              * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))))
                           : 0U))))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT____Vlvbound_h5761c3a6__0 = 1U;
            if (VL_LIKELY((0U >= (1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules 
                    = (((~ ((IData)(1U) << (1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                        & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules)) 
                       | (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT____Vlvbound_h5761c3a6__0) 
                                << (1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))));
            }
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__dec_valid_o = 1U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__dec_error_o = 0U;
            __Vtemp_4[0U] = 0x20001000U;
            __Vtemp_4[1U] = 0x20000000U;
            __Vtemp_4[2U] = 1U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__user_idx 
                = ((0x5fU >= ((IData)(0x40U) + (0x7fU 
                                                & ((IData)(0x60U) 
                                                   * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))) 
                   && (1U & (__Vtemp_4[(((IData)(0x40U) 
                                         + (0x7fU & 
                                            ((IData)(0x60U) 
                                             * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i))) 
                                        >> 5U)] >> 
                             (0x1fU & ((IData)(0x40U) 
                                       + (0x7fU & ((IData)(0x60U) 
                                                   * vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i)))))));
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__unnamedblk1__DOT__i);
    }
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_hc9596cd5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h74391a90_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h75769a12_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h26e006ec_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h07de3b35_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__4(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
    __Vtableidx17 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_ack_q) 
                      << 6U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_ack_q) 
                                 << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_d 
        = Vtb_croc_soc__ConstPool__TABLE_hc9596cd5_0
        [__Vtableidx17];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req 
        = Vtb_croc_soc__ConstPool__TABLE_h74391a90_0
        [__Vtableidx17];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_h75769a12_0
        [__Vtableidx17];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_h26e006ec_0
        [__Vtableidx17];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase 
        = Vtb_croc_soc__ConstPool__TABLE_h07de3b35_0
        [__Vtableidx17];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__6(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
    __Vtableidx13 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_ack_q) 
                      << 6U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_ack_q) 
                                 << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_d 
        = Vtb_croc_soc__ConstPool__TABLE_hc9596cd5_0
        [__Vtableidx13];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req 
        = Vtb_croc_soc__ConstPool__TABLE_h74391a90_0
        [__Vtableidx13];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_h75769a12_0
        [__Vtableidx13];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_h26e006ec_0
        [__Vtableidx13];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase 
        = Vtb_croc_soc__ConstPool__TABLE_h07de3b35_0
        [__Vtableidx13];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__9(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__9\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_68 = ((0x1ffffffffcULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                      << 0x22U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[0U])) 
                                                        << 2U))) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & (((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                         << 1U) 
                                                                        & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes))) 
                                                                    | (1U 
                                                                       & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_rvalid))))));
}

extern const VlUnpacked<CData/*0:0*/, 512> Vtb_croc_soc__ConstPool__TABLE_h7d6f163e_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__10(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__10\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    // Body
    __Vtableidx31 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS) 
                      << 8U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iParity 
        = Vtb_croc_soc__ConstPool__TABLE_h7d6f163e_0
        [__Vtableidx31];
}

extern const VlUnpacked<CData/*1:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_hd2240648_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_h48239473_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_croc_soc__ConstPool__TABLE_ha76d49eb_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__11(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__11\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCount 
        = (0xfU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_BRC__DOT__iCounter));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRBR 
        = (0xffU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOQ));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIIR 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFOEnable) 
            << 7U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFOEnable) 
                       << 6U) | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFO64E) 
                                   & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFOEnable)) 
                                  << 5U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IIC__DOT__iIIR))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no))) 
           || (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q 
        = ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no))) 
           || (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_d));
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d;
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIERWrite) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER 
                = ((0xf0U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER)) 
                   | (0xfU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[0U] 
                              >> 4U)));
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER 
            = (0xfU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER));
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iWrite) 
             & (7U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSCR 
                = (0xffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[0U] 
                            >> 4U));
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iWrite) 
             & (3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR 
                = (0xffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[0U] 
                            >> 4U));
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iWrite) 
             & (4U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellinp__i_apb_uart__PADDR)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR 
                = ((0xc0U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR)) 
                   | (0x3fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[0U] 
                               >> 4U)));
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR 
            = (0x3fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR));
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_3) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLM 
                = (0xffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[0U] 
                            >> 4U));
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT____VdfgRegularize_h16099899_1_2) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLL 
                = (0xffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[0U] 
                            >> 4U));
        }
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountInit) {
            vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount = 0U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT = 0U;
        } else if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep) 
                    & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountFinish)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT 
                = (((~ ((IData)(1U) << (7U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount)))) 
                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT)) 
                   | (0xffU & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ) 
                               << (7U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount)))));
            vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount)));
        }
        if ((0xaU <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iCounter))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ = 1U;
        } else if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRCLK) 
                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iCounter 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iCounter)));
        }
        if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCountClear) 
             | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStepD))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iCounter = 0U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ = 0U;
        }
    } else {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q = 1U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSCR = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLM = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLL = 1U;
        vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iCounter = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ = 0U;
    }
    __Vtableidx32 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_IFSB__DOT__iCount) 
                      << 3U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN) 
                                 << 2U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRCLK) 
                                            << 1U) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no))))));
    if ((1U & Vtb_croc_soc__ConstPool__TABLE_hd2240648_0
         [__Vtableidx32])) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_IFSB__DOT__iCount 
            = Vtb_croc_soc__ConstPool__TABLE_h48239473_0
            [__Vtableidx32];
    }
    if ((2U & Vtb_croc_soc__ConstPool__TABLE_hd2240648_0
         [__Vtableidx32])) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iFStopBit 
            = Vtb_croc_soc__ConstPool__TABLE_ha76d49eb_0
            [__Vtableidx32];
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U] 
        = (0xffffffdfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U]);
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_reg_uart_reg_to_apb__DOT__state_q) {
        if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_reg_uart_reg_to_apb__DOT__state_q) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U] 
                = (0x20U | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__uart_apb_req[1U]);
        }
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount 
        = vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready 
        = ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                  >> 2U)) == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q) 
           != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_synced_q1));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_STB 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
                 >> 2U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_SP 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
                 >> 5U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
                 >> 3U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
                 >> 4U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
                 >> 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IIC__DOT__iMSRInterrupt 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER) 
            >> 3U) & (((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                           >> 5U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dCTS)) 
                      | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dDSR) 
                         | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_TERI) 
                            | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dDCD)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DCD 
        = (1U & ((IData)((0x18U == (0x18U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR)))) 
                 | ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                        >> 4U)) & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDCDn)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_RI 
        = (1U & ((IData)((0x14U == (0x14U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR)))) 
                 | ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                        >> 4U)) & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRIn)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DSR 
        = (1U & ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                   >> 4U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR)) 
                 | ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                        >> 4U)) & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDSRn)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_CTS 
        = (1U & ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                   >> 4U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRTS)) 
                 | ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                        >> 4U)) & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iCTSn)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DCD) 
            << 7U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_RI) 
                       << 6U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DSR) 
                                  << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_CTS) 
                                             << 4U) 
                                            | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dDCD) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_TERI) 
                                                   << 2U) 
                                                  | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dDSR) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_dCTS))))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRCLK 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RCLK__DOT__iDd)) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iBAUDOUTN));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStepD 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_BRC__DOT__iCounter) 
                 >> 4U));
}

extern const VlUnpacked<CData/*1:0*/, 16> Vtb_croc_soc__ConstPool__TABLE_h2f78bf09_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_croc_soc__ConstPool__TABLE_hab2a13bb_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_croc_soc__ConstPool__TABLE_h53994f1c_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__14(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__14\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    // Body
    __Vtableidx24 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h2f78bf09_0
        [__Vtableidx24];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtb_croc_soc__ConstPool__TABLE_hab2a13bb_0
        [__Vtableidx24];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtb_croc_soc__ConstPool__TABLE_h53994f1c_0
        [__Vtableidx24];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__15(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__15\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    __Vtableidx12 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h2f78bf09_0
        [__Vtableidx12];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtb_croc_soc__ConstPool__TABLE_hab2a13bb_0
        [__Vtableidx12];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtb_croc_soc__ConstPool__TABLE_h53994f1c_0
        [__Vtableidx12];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__16(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__16\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q;
    if ((((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                 >> 2U)) != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1)) 
         & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q;
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__12(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__12\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP40 
        = (1U & VL_REDXOR_8((0x1fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP50 
        = (1U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                  >> 5U) ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP40)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP60 
        = (1U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                  >> 6U) ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP50)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP70 
        = (IData)((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR) 
                    >> 7U) ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP60)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iParity 
        = ((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS))
            ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP40)
            : ((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS))
                ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP50)
                : ((2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS))
                    ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP60)
                    : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP70))));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__31(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__31\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    // Body
    __Vtableidx20 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h2f78bf09_0
        [__Vtableidx20];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtb_croc_soc__ConstPool__TABLE_hab2a13bb_0
        [__Vtableidx20];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtb_croc_soc__ConstPool__TABLE_h53994f1c_0
        [__Vtableidx20];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__32(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__32\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    __Vtableidx16 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack) 
                      << 3U) | ((4U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                       << 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_h2f78bf09_0
        [__Vtableidx16];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid 
        = Vtb_croc_soc__ConstPool__TABLE_hab2a13bb_0
        [__Vtableidx16];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d 
        = Vtb_croc_soc__ConstPool__TABLE_h53994f1c_0
        [__Vtableidx16];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__13(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__13\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountInit = 0U;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCountClear = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState) 
                      >> 1U)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountInit = 1U;
            if ((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState)))) {
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCountClear = 1U;
            }
        }
    }
}

extern const VlUnpacked<CData/*1:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_hc42c41d2_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_hc5db95a4_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_h60d83682_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_croc_soc__ConstPool__TABLE_h2be7108d_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__33(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__33\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    __Vtableidx19 = ((0x80U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                               << 6U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_clear_seq_phase) 
                                           << 5U) | 
                                          (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_req) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_hc42c41d2_0
        [__Vtableidx19];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = Vtb_croc_soc__ConstPool__TABLE_hc5db95a4_0
        [__Vtableidx19];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = Vtb_croc_soc__ConstPool__TABLE_h60d83682_0
        [__Vtableidx19];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack 
        = Vtb_croc_soc__ConstPool__TABLE_h2be7108d_0
        [__Vtableidx19];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__34(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__34\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    __Vtableidx15 = ((0x80U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                               << 6U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_clear_seq_phase) 
                                           << 5U) | 
                                          (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_req) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d 
        = Vtb_croc_soc__ConstPool__TABLE_hc42c41d2_0
        [__Vtableidx15];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d 
        = Vtb_croc_soc__ConstPool__TABLE_hc5db95a4_0
        [__Vtableidx15];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d 
        = Vtb_croc_soc__ConstPool__TABLE_h60d83682_0
        [__Vtableidx15];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack 
        = Vtb_croc_soc__ConstPool__TABLE_h2be7108d_0
        [__Vtableidx15];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__35(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__35\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSOUT 
        = ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
               >> 6U)) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN 
        = (1U & ((0x10U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR))
                  ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSOUT)
                  : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IS_SIN__DOT__iD) 
                     >> 1U)));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__36(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__36\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q;
    if ((((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                 >> 2U)) != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_synced_q1)) 
         & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q;
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h3501f3a9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h2a8df8d6_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_croc_soc__ConstPool__TABLE_h575c3510_0;

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__37(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__37\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    // Body
    __Vtableidx22 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q) 
                      << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q) 
                                 << 4U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_h3501f3a9_0
        [__Vtableidx22];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_h2a8df8d6_0
        [__Vtableidx22];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack 
        = Vtb_croc_soc__ConstPool__TABLE_h575c3510_0
        [__Vtableidx22];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__38(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__38\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    __Vtableidx10 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q) 
                      << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q) 
                                 << 4U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_h3501f3a9_0
        [__Vtableidx10];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_h2a8df8d6_0
        [__Vtableidx10];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack 
        = Vtb_croc_soc__ConstPool__TABLE_h575c3510_0
        [__Vtableidx10];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__14(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__14\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS 
        = (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountFinish 
        = (((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS)) 
            & (5U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount))) 
           | (((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS)) 
               & (6U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount))) 
              | (((2U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS)) 
                  & (7U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount))) 
                 | ((3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS)) 
                    & (8U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount))))));
    if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFORead = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXRunning = 0U;
        if ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State))) {
            if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State))) {
                vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State = 0U;
            } else {
                vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State 
                    = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iFinished)
                        ? 3U : 2U);
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXRunning = 1U;
                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR 
                = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFOQ;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart = 1U;
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFORead = 1U;
            vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State = 2U;
        } else if (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXEnable) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart = 1U;
            vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State = 1U;
        } else {
            vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State = 0U;
        }
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFOQ 
            = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFIFOMem
            [(0x3fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iRDAddr))];
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iFinished = 0U;
        if (((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iLast)) 
             & (0xbU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState)))) {
            vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iFinished = 1U;
        }
    } else {
        vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFORead = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXRunning = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFOQ = 0U;
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iFinished = 0U;
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State 
        = vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXEnable 
        = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iEMPTY)) 
                 & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                        >> 5U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                                    >> 5U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_CTS)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFOEnable) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_FIFOERR)) 
            << 7U) | ((((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXRunning)) 
                        & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iEMPTY)) 
                       << 6U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iEMPTY) 
                                  << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_BI) 
                                             << 4U) 
                                            | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_FE) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_PE) 
                                                   << 2U) 
                                                  | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_OE) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_DR))))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFE 
        = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iFStopBit)) 
           & (4U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState)));
    vlSelfRef.__VdlyCommitQueuetb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFIFOMem.commit(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFIFOMem);
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iRDAddr 
        = vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iRDAddr;
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFULL 
        = (((0x3fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iRDAddr)) 
            == (0x3fU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iWRAddr))) 
           & ((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iRDAddr) 
                     >> 6U)) != (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iWRAddr) 
                                       >> 6U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iLast 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no) 
           && (0xbU == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState 
        = vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState;
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__41(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__41\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_3;
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_uart_translate__gnt_o 
        = (1U & ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
                  >> 0x1eU) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp)));
    __Vtemp_3[3U] = (((IData)((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_rdata_q)) 
                                << 7U) | (QData)((IData)(
                                                         (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_id_q) 
                                                           << 4U) 
                                                          | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_opc_q) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_uart_translate__gnt_o) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_valid_q)))))))) 
                      << 0x15U) | (((IData)((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_rdata_q)) 
                                              << 7U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_id_q) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_opc_q) 
                                                                    << 3U) 
                                                                   | ((2U 
                                                                       & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                                                                          >> 0x13U)) 
                                                                      | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_valid_q)))))))) 
                                    >> 0x12U) | ((IData)(
                                                         ((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_rdata_q)) 
                                                            << 7U) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_id_q) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_opc_q) 
                                                                                << 3U) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                                                                                >> 0x13U)) 
                                                                                | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_valid_q))))))) 
                                                          >> 0x20U)) 
                                                 << 0xeU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__slave_rid_q)) 
                    << 0x2bU) | (((QData)((IData)((2U 
                                                   | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__slave_rvalid_q)))) 
                                  << 0x27U) | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__error_obi_rsp)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[1U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_enable32_q)
              ? (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux 
                         >> 0x20U)) : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux)) 
            << 0xeU) | (IData)(((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__slave_rid_q)) 
                                  << 0x2bU) | (((QData)((IData)(
                                                                (2U 
                                                                 | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__slave_rvalid_q)))) 
                                                << 0x27U) 
                                               | vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__error_obi_rsp)) 
                                >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[2U] 
        = (((IData)((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_rdata_q)) 
                      << 7U) | (QData)((IData)((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_id_q) 
                                                 << 4U) 
                                                | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_opc_q) 
                                                    << 3U) 
                                                   | ((2U 
                                                       & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                                                          >> 0x13U)) 
                                                      | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_soc_ctrl_translate__DOT__r_valid_q)))))))) 
            << 0xeU) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_enable32_q)
                          ? (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux 
                                     >> 0x20U)) : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux)) 
                        >> 0x12U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[3U] 
        = __Vtemp_3[3U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[4U] 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gpio_obi_rsp) 
            << 0x1cU) | (((IData)((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_rdata_q)) 
                                    << 7U) | (QData)((IData)(
                                                             (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_id_q) 
                                                               << 4U) 
                                                              | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_opc_q) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_uart_translate__gnt_o) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_valid_q)))))))) 
                          >> 0xbU) | ((IData)(((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_rdata_q)) 
                                                 << 7U) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_id_q) 
                                                                    << 4U) 
                                                                   | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_opc_q) 
                                                                       << 3U) 
                                                                      | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_uart_translate__gnt_o) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_valid_q))))))) 
                                               >> 0x20U)) 
                                      << 0x15U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[5U] 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gpio_obi_rsp) 
            >> 4U) | ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gpio_obi_rsp 
                               >> 0x20U)) << 0x1cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[6U] 
        = (((IData)((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_rdata_o)) 
                      << 7U) | (QData)((IData)((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_id_o) 
                                                 << 4U) 
                                                | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__gnt_o) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_valid_o))))))) 
            << 3U) | ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gpio_obi_rsp 
                               >> 0x20U)) >> 4U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__all_periph_obi_rsp[7U] 
        = (((IData)((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_rdata_o)) 
                      << 7U) | (QData)((IData)((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_id_o) 
                                                 << 4U) 
                                                | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__gnt_o) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_valid_o))))))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_rdata_o)) 
                                    << 7U) | (QData)((IData)(
                                                             (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_id_o) 
                                                               << 4U) 
                                                              | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__gnt_o) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_timer__r_valid_o)))))) 
                                  >> 0x20U)) << 3U));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__49(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__49\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    __Vtableidx18 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q) 
                      << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_ack_q) 
                                 << 4U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_clear_ack_q) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_h3501f3a9_0
        [__Vtableidx18];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_h2a8df8d6_0
        [__Vtableidx18];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack 
        = Vtb_croc_soc__ConstPool__TABLE_h575c3510_0
        [__Vtableidx18];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__50(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__50\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    __Vtableidx14 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q) 
                      << 5U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_ack_q) 
                                 << 4U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_clear_ack_q) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out 
        = Vtb_croc_soc__ConstPool__TABLE_h3501f3a9_0
        [__Vtableidx14];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out 
        = Vtb_croc_soc__ConstPool__TABLE_h2a8df8d6_0
        [__Vtableidx14];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack 
        = Vtb_croc_soc__ConstPool__TABLE_h575c3510_0
        [__Vtableidx14];
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__15(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__15\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState 
        = vlSelfRef.__Vdly__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState;
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__53(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__53\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFOWrite 
        = ((((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFOEnable)) 
             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iEMPTY)) 
            | ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFO64E)
                    ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFULL)
                    : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iUSAGE) 
                       >> 4U))) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFOEnable))) 
           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTHRWrite));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_sequent__TOP__16(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_sequent__TOP__16\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no 
        = (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q) 
                 >> 3U));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__71(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__71\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_88;
    VlWide<5>/*159:0*/ __Vtemp_91;
    VlWide<4>/*127:0*/ __Vtemp_95;
    VlWide<5>/*159:0*/ __Vtemp_98;
    VlWide<4>/*127:0*/ __Vtemp_102;
    VlWide<5>/*159:0*/ __Vtemp_105;
    VlWide<4>/*127:0*/ __Vtemp_109;
    VlWide<5>/*159:0*/ __Vtemp_112;
    VlWide<4>/*127:0*/ __Vtemp_116;
    VlWide<5>/*159:0*/ __Vtemp_119;
    VlWide<10>/*319:0*/ __Vtemp_120;
    VlWide<14>/*447:0*/ __Vtemp_121;
    VlWide<19>/*607:0*/ __Vtemp_122;
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[0U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[3U] 
            << 0x17U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                         >> 9U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[1U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[4U] 
            << 0x17U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[3U] 
                         >> 9U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U] 
        = (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[3U] 
             << 0x1eU) | (0x3fffff80U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                         >> 2U))) | 
           (0x7fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                     >> 9U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
        = ((0x7fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[3U] 
                     >> 2U)) | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                                 << 0x1eU) | (0x3fffff80U 
                                              & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[3U] 
                                                 >> 2U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
        = ((0xffffc000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                           << 5U)) | ((0x7fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                                                >> 2U)) 
                                      | (0x3f80U & 
                                         (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                                          >> 2U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
        = (((0x3fe0U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[3U] 
                        << 5U)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                   >> 0x1bU)) | (0xffffc000U 
                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[3U] 
                                                    << 5U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
        = ((0xffe00000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                           << 0xcU)) | (((0x3fe0U & 
                                          (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                                           << 5U)) 
                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[3U] 
                                            >> 0x1bU)) 
                                        | (0x1fc000U 
                                           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                                              << 5U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
        = (((0x1ff000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[3U] 
                          << 0xcU)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                       >> 0x14U)) | 
           (0xffe00000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[3U] 
                           << 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
        = (((0x1ff000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                          << 0xcU)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[3U] 
                                       >> 0x14U)) | 
           (0xfe00000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                          << 0xcU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[0U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[5U] 
            << 0xfU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                        >> 0x11U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[1U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[6U] 
            << 0xfU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[5U] 
                        >> 0x11U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U] 
        = (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[5U] 
             << 0x16U) | (0x3fff80U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                                       >> 0xaU))) | 
           (0x7fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                     >> 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
        = ((0x7fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[5U] 
                     >> 0xaU)) | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                   << 0x16U) | (0x3fff80U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[5U] 
                                                   >> 0xaU))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
        = (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[5U] 
             << 0x1dU) | (0x1fffc000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                                         >> 3U))) | 
           ((0x7fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                      >> 0xaU)) | (0x3f80U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                              >> 0xaU))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
        = ((0x3fffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[5U] 
                       >> 3U)) | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                   << 0x1dU) | (0x1fffc000U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[5U] 
                                                   >> 3U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
        = ((0xffe00000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                           << 4U)) | ((0x3fffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                                  >> 3U)) 
                                      | (0x1fc000U 
                                         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                            >> 3U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
        = (((0x1ffff0U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[5U] 
                          << 4U)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                                     >> 0x1cU)) | (0xffe00000U 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[5U] 
                                                      << 4U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
        = (((0x1ffff0U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                          << 4U)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[5U] 
                                     >> 0x1cU)) | (0xfe00000U 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                                      << 4U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[0U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[7U] 
            << 7U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                      >> 0x19U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[1U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[8U] 
            << 7U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[7U] 
                      >> 0x19U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U] 
        = (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[7U] 
             << 0xeU) | (0x3f80U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                    >> 0x12U))) | (
                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[8U] 
                                                   >> 0x19U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
        = ((0x7fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[7U] 
                     >> 0x12U)) | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[8U] 
                                    << 0xeU) | (0x3f80U 
                                                & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[7U] 
                                                   >> 0x12U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
        = (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[7U] 
             << 0x15U) | (0x1fc000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                       >> 0xbU))) | 
           ((0x7fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[8U] 
                      >> 0x12U)) | (0x3f80U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[8U] 
                                               >> 0x12U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
        = ((0x3fffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[7U] 
                       >> 0xbU)) | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[8U] 
                                     << 0x15U) | (0x1fc000U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[7U] 
                                                     >> 0xbU))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
        = (((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[7U] 
             << 0x1cU) | (0xfe00000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                        >> 4U))) | 
           ((0x3fffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[8U] 
                        >> 0xbU)) | (0x1fc000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[8U] 
                                                  >> 0xbU))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
        = ((0x1fffffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[7U] 
                         >> 4U)) | ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[8U] 
                                     << 0x1cU) | (0xfe00000U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[7U] 
                                                     >> 4U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
        = ((0x1fffffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[8U] 
                         >> 4U)) | (0xfe00000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[8U] 
                                                  >> 4U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[0U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
            << 0x1fU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[9U] 
                         >> 1U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[1U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[0xbU] 
            << 0x1fU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
                         >> 1U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U] 
        = ((0xffffff80U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[9U] 
                           << 6U)) | (0x7fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[0xbU] 
                                               >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
        = (((0x40U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
                      << 6U)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[9U] 
                                 >> 0x1aU)) | (0xffffff80U 
                                               & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
                                                  << 6U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
        = ((0xffffc000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[9U] 
                           << 0xdU)) | (((0x40U & (
                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[0xbU] 
                                                   << 6U)) 
                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
                                            >> 0x1aU)) 
                                        | (0x3f80U 
                                           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[0xbU] 
                                              << 6U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
        = (((0x2000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
                        << 0xdU)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[9U] 
                                     >> 0x13U)) | (0xffffc000U 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
                                                      << 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
        = ((0xffe00000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[9U] 
                           << 0x14U)) | (((0x2000U 
                                           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[0xbU] 
                                              << 0xdU)) 
                                          | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
                                             >> 0x13U)) 
                                         | (0x1fc000U 
                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[0xbU] 
                                               << 0xdU))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
        = (((0x100000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
                          << 0x14U)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[9U] 
                                        >> 0xcU)) | 
           (0xffe00000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
                           << 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
        = (((0x100000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[0xbU] 
                          << 0x14U)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[0xaU] 
                                        >> 0xcU)) | 
           (0xfe00000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[0xbU] 
                          << 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[0U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[1U] 
            << 0x1fU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[0U] 
                         >> 1U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[1U] 
        = ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[2U] 
            << 0x1fU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[1U] 
                         >> 1U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U] 
        = ((0xffffff80U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[0U] 
                           << 6U)) | (0x7fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                               >> 1U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
        = (((0x40U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[1U] 
                      << 6U)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[0U] 
                                 >> 0x1aU)) | (0xffffff80U 
                                               & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[1U] 
                                                  << 6U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
        = ((0xffffc000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[0U] 
                           << 0xdU)) | (((0x40U & (
                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                                   << 6U)) 
                                         | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[1U] 
                                            >> 0x1aU)) 
                                        | (0x3f80U 
                                           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                              << 6U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
        = (((0x2000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[1U] 
                        << 0xdU)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[0U] 
                                     >> 0x13U)) | (0xffffc000U 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[1U] 
                                                      << 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
        = ((0xffe00000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[0U] 
                           << 0x14U)) | (((0x2000U 
                                           & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                              << 0xdU)) 
                                          | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[1U] 
                                             >> 0x13U)) 
                                         | (0x1fc000U 
                                            & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                               << 0xdU))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
        = (((0x100000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[1U] 
                          << 0x14U)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[0U] 
                                        >> 0xcU)) | 
           (0xffe00000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[1U] 
                           << 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
        = (((0x100000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                          << 0x14U)) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[1U] 
                                        >> 0xcU)) | 
           (0xfe00000U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                          << 0x14U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((8U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                      >> 5U)) | ((4U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                        >> 6U)) | (
                                                   (2U 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                                       >> 7U)) 
                                                   | (1U 
                                                      & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                                         >> 8U))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((8U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                      >> 0xdU)) | ((4U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                                          >> 0xeU)) 
                                   | ((2U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                                             >> 0xfU)) 
                                      | (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                                               >> 0x10U))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((8U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                      >> 0x15U)) | ((4U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                           >> 0x16U)) 
                                    | ((2U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                              >> 0x17U)) 
                                       | (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                                >> 0x18U))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((8U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[9U] 
                      << 3U)) | ((4U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[9U] 
                                        << 2U)) | (
                                                   (2U 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[9U] 
                                                       << 1U)) 
                                                   | (1U 
                                                      & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[9U])))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((8U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[0U] 
                      << 3U)) | ((4U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[0U] 
                                        << 2U)) | (
                                                   (2U 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[0U] 
                                                       << 1U)) 
                                                   | (1U 
                                                      & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[0U])))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes 
        = (((IData)((0U != (0xcU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
            << 2U) | (((IData)((0U != (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
                       << 1U) | (IData)((0U != (6U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((4U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
               | (0xfU & ((1U & (((0xfffffff8U & ((
                                                   (3U 
                                                    <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                                   << 3U) 
                                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                  | ((0xfffffffcU & 
                                      (((2U <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                        << 2U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                     | ((0xfffffffeU 
                                         & (((1U <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                             << 1U) 
                                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                        | (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))))) 
                                 >> (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                          << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((4U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
               | (0xfU & ((1U & (((0xfffffff8U & ((
                                                   (3U 
                                                    > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                                   << 3U) 
                                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                  | ((0xfffffffcU & 
                                      (((2U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                        << 2U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                     | (0xfffffffeU 
                                        & (((1U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                            << 1U) 
                                           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))))) 
                                 >> (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                          << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes 
        = (((IData)((0U != (0xcU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
            << 2U) | (((IData)((0U != (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
                       << 1U) | (IData)((0U != (6U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((4U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
               | (0xfU & ((1U & (((0xfffffff8U & ((
                                                   (3U 
                                                    <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                                   << 3U) 
                                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                  | ((0xfffffffcU & 
                                      (((2U <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                        << 2U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                     | ((0xfffffffeU 
                                         & (((1U <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                             << 1U) 
                                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                        | (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))))) 
                                 >> (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                          << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((4U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
               | (0xfU & ((1U & (((0xfffffff8U & ((
                                                   (3U 
                                                    > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                                   << 3U) 
                                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                  | ((0xfffffffcU & 
                                      (((2U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                        << 2U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                     | (0xfffffffeU 
                                        & (((1U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                            << 1U) 
                                           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))))) 
                                 >> (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                          << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes 
        = (((IData)((0U != (0xcU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
            << 2U) | (((IData)((0U != (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
                       << 1U) | (IData)((0U != (6U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((4U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
               | (0xfU & ((1U & (((0xfffffff8U & ((
                                                   (3U 
                                                    <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                                   << 3U) 
                                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                  | ((0xfffffffcU & 
                                      (((2U <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                        << 2U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                     | ((0xfffffffeU 
                                         & (((1U <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                             << 1U) 
                                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                        | (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))))) 
                                 >> (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                          << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((4U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
               | (0xfU & ((1U & (((0xfffffff8U & ((
                                                   (3U 
                                                    > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                                   << 3U) 
                                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                  | ((0xfffffffcU & 
                                      (((2U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                        << 2U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                     | (0xfffffffeU 
                                        & (((1U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                            << 1U) 
                                           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))))) 
                                 >> (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                          << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes 
        = (((IData)((0U != (0xcU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
            << 2U) | (((IData)((0U != (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)))) 
                       << 1U) | (IData)((0U != (6U 
                                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes))))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((4U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
               | (0xfU & ((1U & (((0xfffffff8U & ((
                                                   (3U 
                                                    <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                                   << 3U) 
                                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                  | ((0xfffffffcU & 
                                      (((2U <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                        << 2U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                     | ((0xfffffffeU 
                                         & (((1U <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                             << 1U) 
                                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                        | (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))))) 
                                 >> (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                          << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((4U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
               | (0xfU & ((1U & (((0xfffffff8U & ((
                                                   (3U 
                                                    > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                                   << 3U) 
                                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                  | ((0xfffffffcU & 
                                      (((2U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                        << 2U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                     | (0xfffffffeU 
                                        & (((1U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                            << 1U) 
                                           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))))) 
                                 >> (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                          << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((4U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
               | (0xfU & ((1U & (((0xfffffff8U & ((
                                                   (3U 
                                                    <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                                   << 3U) 
                                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                  | ((0xfffffffcU & 
                                      (((2U <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                        << 2U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                     | ((0xfffffffeU 
                                         & (((1U <= (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                             << 1U) 
                                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                        | (1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))))) 
                                 >> (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                          << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i = 0U;
    while ((4U > vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
               | (0xfU & ((1U & (((0xfffffff8U & ((
                                                   (3U 
                                                    > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                                   << 3U) 
                                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                  | ((0xfffffffcU & 
                                      (((2U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                        << 2U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))) 
                                     | (0xfffffffeU 
                                        & (((1U > (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)) 
                                            << 1U) 
                                           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d))))) 
                                 >> (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))) 
                          << (3U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i))));
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__flip_vector__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_24 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  >> 2U) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_25 = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                    >> 2U));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_35 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  >> 2U) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_36 = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                    >> 2U));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_46 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  >> 2U) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_47 = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                    >> 2U));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_57 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  >> 2U) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_58 = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                    >> 2U));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_13 = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  >> 2U) 
                                                 & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_14 = ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                    >> 2U));
    __Vtemp_88[2U] = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                   << 0x1aU) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                     >> 6U)))) 
                       << 0xcU) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_58) 
                                    << 0xbU) | ((0x400U 
                                                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                    << 8U)) 
                                                | (((IData)(
                                                            (0x7ffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                 << 0x1dU) 
                                                                | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                                   >> 3U)))) 
                                                    >> 0x19U) 
                                                   | ((IData)(
                                                              ((0x7ffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                    << 0x1dU) 
                                                                   | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                                      >> 3U))) 
                                                               >> 0x20U)) 
                                                      << 7U)))));
    __Vtemp_91[3U] = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                                   << 0x17U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                     >> 9U)))) 
                       << 0x11U) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_57) 
                                     << 0x10U) | ((0x8000U 
                                                   & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                      << 0xcU)) 
                                                  | (((IData)(
                                                              (0x7ffffffffULL 
                                                               & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                                   << 0x1aU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                     >> 6U)))) 
                                                      >> 0x14U) 
                                                     | ((IData)(
                                                                ((0x7ffffffffULL 
                                                                  & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                                      << 0x1aU) 
                                                                     | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                        >> 6U))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU)))));
    __Vtemp_95[2U] = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                   << 0x1aU) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                     >> 6U)))) 
                       << 0xcU) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_47) 
                                    << 0xbU) | ((0x400U 
                                                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                    << 8U)) 
                                                | (((IData)(
                                                            (0x7ffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                 << 0x1dU) 
                                                                | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                                   >> 3U)))) 
                                                    >> 0x19U) 
                                                   | ((IData)(
                                                              ((0x7ffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                    << 0x1dU) 
                                                                   | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                                      >> 3U))) 
                                                               >> 0x20U)) 
                                                      << 7U)))));
    __Vtemp_98[3U] = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                                   << 0x17U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                     >> 9U)))) 
                       << 0x11U) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_46) 
                                     << 0x10U) | ((0x8000U 
                                                   & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                      << 0xcU)) 
                                                  | (((IData)(
                                                              (0x7ffffffffULL 
                                                               & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                                   << 0x1aU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                     >> 6U)))) 
                                                      >> 0x14U) 
                                                     | ((IData)(
                                                                ((0x7ffffffffULL 
                                                                  & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                                      << 0x1aU) 
                                                                     | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                        >> 6U))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU)))));
    __Vtemp_102[2U] = (((IData)((0x7ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                      >> 6U)))) 
                        << 0xcU) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_36) 
                                     << 0xbU) | ((0x400U 
                                                  & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                     << 8U)) 
                                                 | (((IData)(
                                                             (0x7ffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                  << 0x1dU) 
                                                                 | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                                    >> 3U)))) 
                                                     >> 0x19U) 
                                                    | ((IData)(
                                                               ((0x7ffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                     << 0x1dU) 
                                                                    | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                                       >> 3U))) 
                                                                >> 0x20U)) 
                                                       << 7U)))));
    __Vtemp_105[3U] = (((IData)((0x7ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                      >> 9U)))) 
                        << 0x11U) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_35) 
                                      << 0x10U) | (
                                                   (0x8000U 
                                                    & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                       << 0xcU)) 
                                                   | (((IData)(
                                                               (0x7ffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                                    << 0x1aU) 
                                                                   | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                      >> 6U)))) 
                                                       >> 0x14U) 
                                                      | ((IData)(
                                                                 ((0x7ffffffffULL 
                                                                   & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                                       << 0x1aU) 
                                                                      | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                         >> 6U))) 
                                                                  >> 0x20U)) 
                                                         << 0xcU)))));
    __Vtemp_109[2U] = (((IData)((0x7ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                      >> 6U)))) 
                        << 0xcU) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_25) 
                                     << 0xbU) | ((0x400U 
                                                  & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                     << 8U)) 
                                                 | (((IData)(
                                                             (0x7ffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                  << 0x1dU) 
                                                                 | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                                    >> 3U)))) 
                                                     >> 0x19U) 
                                                    | ((IData)(
                                                               ((0x7ffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                     << 0x1dU) 
                                                                    | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                                       >> 3U))) 
                                                                >> 0x20U)) 
                                                       << 7U)))));
    __Vtemp_112[3U] = (((IData)((0x7ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                      >> 9U)))) 
                        << 0x11U) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_24) 
                                      << 0x10U) | (
                                                   (0x8000U 
                                                    & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                       << 0xcU)) 
                                                   | (((IData)(
                                                               (0x7ffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                                    << 0x1aU) 
                                                                   | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                      >> 6U)))) 
                                                       >> 0x14U) 
                                                      | ((IData)(
                                                                 ((0x7ffffffffULL 
                                                                   & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                                       << 0x1aU) 
                                                                      | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                         >> 6U))) 
                                                                  >> 0x20U)) 
                                                         << 0xcU)))));
    __Vtemp_116[2U] = (((IData)((0x7ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                      >> 6U)))) 
                        << 0xcU) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_14) 
                                     << 0xbU) | ((0x400U 
                                                  & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                     << 8U)) 
                                                 | (((IData)(
                                                             (0x7ffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                  << 0x1dU) 
                                                                 | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                                    >> 3U)))) 
                                                     >> 0x19U) 
                                                    | ((IData)(
                                                               ((0x7ffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                     << 0x1dU) 
                                                                    | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                                       >> 3U))) 
                                                                >> 0x20U)) 
                                                       << 7U)))));
    __Vtemp_119[3U] = (((IData)((0x7ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                      >> 9U)))) 
                        << 0x11U) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_13) 
                                      << 0x10U) | (
                                                   (0x8000U 
                                                    & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                       << 0xcU)) 
                                                   | (((IData)(
                                                               (0x7ffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                                    << 0x1aU) 
                                                                   | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                      >> 6U)))) 
                                                       >> 0x14U) 
                                                      | ((IData)(
                                                                 ((0x7ffffffffULL 
                                                                   & (((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                                       << 0x1aU) 
                                                                      | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                                         >> 6U))) 
                                                                  >> 0x20U)) 
                                                         << 0xcU)))));
    __Vtemp_120[5U] = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_26)) 
                                  << 0x26U) | (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                    >> 1U)))) 
                                                << 0x25U) 
                                               | vlSelfRef.__VdfgRegularize_hd87f99a1_4_67))) 
                        >> 0xcU) | (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                    >> 3U)))) 
                                     << 0x1bU) | ((IData)(
                                                          ((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_26)) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                                >> 1U)))) 
                                                                << 0x25U) 
                                                               | vlSelfRef.__VdfgRegularize_hd87f99a1_4_67)) 
                                                           >> 0x20U)) 
                                                  << 0x14U)));
    __Vtemp_121[0xaU] = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_37)) 
                                    << 0x26U) | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                      >> 1U)))) 
                                                  << 0x25U) 
                                                 | vlSelfRef.__VdfgRegularize_hd87f99a1_4_66))) 
                          >> 0x18U) | (((IData)((0x7ffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                     << 0x1dU) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                       >> 3U)))) 
                                        << 0xfU) | 
                                       ((IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_37)) 
                                                   << 0x26U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                          >> 1U)))) 
                                                      << 0x25U) 
                                                     | vlSelfRef.__VdfgRegularize_hd87f99a1_4_66)) 
                                                 >> 0x20U)) 
                                        << 8U)));
    __Vtemp_122[0xdU] = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_48)) 
                                    << 0x26U) | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                      >> 1U)))) 
                                                  << 0x25U) 
                                                 | vlSelfRef.__VdfgRegularize_hd87f99a1_4_65))) 
                          << 0x1cU) | ((__Vtemp_105[3U] 
                                        >> 0x18U) | 
                                       ((0x1ffff00U 
                                         & ((IData)(
                                                    (0x7ffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                                         << 0x17U) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                           >> 9U)))) 
                                            >> 7U)) 
                                        | ((IData)(
                                                   ((0x7ffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                                         << 0x17U) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                           >> 9U))) 
                                                    >> 0x20U)) 
                                           << 0x19U))));
    __Vtemp_122[0xeU] = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_48)) 
                                    << 0x26U) | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                      >> 1U)))) 
                                                  << 0x25U) 
                                                 | vlSelfRef.__VdfgRegularize_hd87f99a1_4_65))) 
                          >> 4U) | ((IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_48)) 
                                               << 0x26U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                      >> 1U)))) 
                                                  << 0x25U) 
                                                 | vlSelfRef.__VdfgRegularize_hd87f99a1_4_65)) 
                                             >> 0x20U)) 
                                    << 0x1cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_15)) 
                    << 0x26U) | (((QData)((IData)((1U 
                                                   & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                      >> 1U)))) 
                                  << 0x25U) | vlSelfRef.__VdfgRegularize_hd87f99a1_4_68)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[1U] 
        = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                        >> 3U)))) << 7U) 
           | (IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_15)) 
                        << 0x26U) | (((QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                          >> 1U)))) 
                                      << 0x25U) | vlSelfRef.__VdfgRegularize_hd87f99a1_4_68)) 
                      >> 0x20U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[2U] 
        = __Vtemp_116[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[3U] 
        = __Vtemp_119[3U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[4U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_26)) 
                      << 0x26U) | (((QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                        >> 1U)))) 
                                    << 0x25U) | vlSelfRef.__VdfgRegularize_hd87f99a1_4_67))) 
            << 0x14U) | (((IData)((0x7ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                     << 0x17U) | ((QData)((IData)(
                                                                  vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                  >> 9U)))) 
                          >> 0xfU) | ((IData)(((0x7ffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                      >> 9U))) 
                                               >> 0x20U)) 
                                      << 0x11U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[5U] 
        = __Vtemp_120[5U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[6U] 
        = (((0xfffffU & ((IData)((0x7ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                    << 0x1dU) | ((QData)((IData)(
                                                                 vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                 >> 3U)))) 
                         >> 5U)) | ((IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_26)) 
                                               << 0x26U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                      >> 1U)))) 
                                                  << 0x25U) 
                                                 | vlSelfRef.__VdfgRegularize_hd87f99a1_4_67)) 
                                             >> 0x20U)) 
                                    >> 0xcU)) | (__Vtemp_109[2U] 
                                                 << 0x14U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[7U] 
        = ((__Vtemp_109[2U] >> 0xcU) | (__Vtemp_112[3U] 
                                        << 0x14U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[8U] 
        = ((__Vtemp_112[3U] >> 0xcU) | (0xfff00000U 
                                        & ((IData)(
                                                   (0x7ffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                                        << 0x17U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                          >> 9U)))) 
                                           << 5U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[9U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_37)) 
                      << 0x26U) | (((QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                        >> 1U)))) 
                                    << 0x25U) | vlSelfRef.__VdfgRegularize_hd87f99a1_4_66))) 
            << 8U) | (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                                   << 0x17U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                     >> 9U)))) 
                       >> 0x1bU) | (0xfffe0U & ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                                              << 0x17U) 
                                                             | ((QData)((IData)(
                                                                                vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                                >> 9U))) 
                                                         >> 0x20U)) 
                                                << 5U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[0xaU] 
        = __Vtemp_121[0xaU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[0xbU] 
        = (((0xffU & ((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                  vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                    >> 3U)))) 
                      >> 0x11U)) | ((IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_37)) 
                                               << 0x26U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                      >> 1U)))) 
                                                  << 0x25U) 
                                                 | vlSelfRef.__VdfgRegularize_hd87f99a1_4_66)) 
                                             >> 0x20U)) 
                                    >> 0x18U)) | (__Vtemp_102[2U] 
                                                  << 8U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[0xcU] 
        = ((__Vtemp_102[2U] >> 0x18U) | (__Vtemp_105[3U] 
                                         << 8U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[0xdU] 
        = __Vtemp_122[0xdU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[0xeU] 
        = __Vtemp_122[0xeU];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[0xfU] 
        = (((0xffffff8U & ((IData)((0x7ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                        >> 3U)))) << 3U)) 
            | ((IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_48)) 
                          << 0x26U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                            >> 1U)))) 
                                        << 0x25U) | vlSelfRef.__VdfgRegularize_hd87f99a1_4_65)) 
                        >> 0x20U)) >> 4U)) | (__Vtemp_95[2U] 
                                              << 0x1cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[0x10U] 
        = ((__Vtemp_95[2U] >> 4U) | (__Vtemp_98[3U] 
                                     << 0x1cU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[0x11U] 
        = ((__Vtemp_98[3U] >> 4U) | (0xf0000000U & 
                                     ((IData)((0x7ffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                                   << 0x17U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                     >> 9U)))) 
                                      << 0xdU)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[0x12U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_59)) 
                      << 0x26U) | (((QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                        >> 1U)))) 
                                    << 0x25U) | vlSelfRef.__VdfgRegularize_hd87f99a1_4_64))) 
            << 0x10U) | (((IData)((0x7ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                     << 0x17U) | ((QData)((IData)(
                                                                  vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                  >> 9U)))) 
                          >> 0x13U) | (0xfffe000U & 
                                       ((IData)(((0x7ffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                                      << 0x17U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                        >> 9U))) 
                                                 >> 0x20U)) 
                                        << 0xdU))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[0x13U] 
        = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_59)) 
                      << 0x26U) | (((QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                        >> 1U)))) 
                                    << 0x25U) | vlSelfRef.__VdfgRegularize_hd87f99a1_4_64))) 
            >> 0x10U) | (((IData)((0x7ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                  >> 3U)))) 
                          << 0x17U) | ((IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_59)) 
                                                  << 0x26U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                         >> 1U)))) 
                                                     << 0x25U) 
                                                    | vlSelfRef.__VdfgRegularize_hd87f99a1_4_64)) 
                                                >> 0x20U)) 
                                       << 0x10U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[0x14U] 
        = (((0xffffU & ((IData)((0x7ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[2U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[1U])) 
                                                      >> 3U)))) 
                        >> 9U)) | ((IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_59)) 
                                              << 0x26U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_rvalid) 
                                                                     >> 1U)))) 
                                                 << 0x25U) 
                                                | vlSelfRef.__VdfgRegularize_hd87f99a1_4_64)) 
                                            >> 0x20U)) 
                                   >> 0x10U)) | (__Vtemp_88[2U] 
                                                 << 0x10U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[0x15U] 
        = ((__Vtemp_88[2U] >> 0x10U) | (__Vtemp_91[3U] 
                                        << 0x10U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[0x16U] 
        = ((__Vtemp_91[3U] >> 0x10U) | (0xffff0000U 
                                        & ((IData)(
                                                   (0x7ffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                                        << 0x17U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                          >> 9U)))) 
                                           << 1U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__mgr_rsps[0x17U] 
        = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                        << 0x17U) | 
                                       ((QData)((IData)(
                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                        >> 9U)))) >> 0x1fU) 
           | (0xfffeU & ((IData)(((0x7ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[4U])) 
                                     << 0x17U) | ((QData)((IData)(
                                                                  vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__sbr_rsp_r[3U])) 
                                                  >> 9U))) 
                                  >> 0x20U)) << 1U)));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__77(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__77\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[6U] 
                          << 0x12U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                       >> 0xeU)) : 
                     ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
                       << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                    >> 7U)));
    __Vtemp_1[2U] = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                            << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U] 
                                         >> 7U)) : 
                       vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[0U]) 
                      << 7U) | (0x7fU & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                             >> 0xeU)
                                          : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                              << 0x19U) 
                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                >> 7U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0x12U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
                             >> 0xeU)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 0x19U) 
                                          | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                             >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                  << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U] 
                               >> 7U)) : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[0U]) 
            >> 0x19U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                               << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                                            >> 7U))
                           : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[1U]) 
                         << 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                  << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                              >> 0x15U)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                             << 0x12U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                                               >> 0xeU))) 
            << 0xeU) | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                               << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                                            >> 7U))
                           : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[1U]) 
                         >> 0x19U) | (0x3f80U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                                    << 0x19U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                                                      >> 7U))
                                                   : 
                                                  vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U]) 
                                                 << 7U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                  << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                              >> 0x15U)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                             << 0x12U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                                               >> 0xeU))) 
            >> 0x12U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
                               << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                                           >> 0x15U))
                           : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                               << 0x12U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                            >> 0xeU))) 
                         << 0xeU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
                  << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                              >> 0x15U)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                                             << 0x12U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                               >> 0xeU))) 
            >> 0x12U) | (0x1fc000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                        ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
                                           >> 0x15U)
                                        : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                                            << 0x12U) 
                                           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                                              >> 0xeU))) 
                                      << 0xeU)));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__78(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__78\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
            << 4U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                       << 2U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                  ? (2U | (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                                 >> 4U)))
                                  : (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                           >> 2U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
            = (((~ ((IData)(3U) << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n)) 
               | (0xfU & ((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes)) 
                          << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))));
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__83(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__83\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[6U] 
                          << 0x12U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                       >> 0xeU)) : 
                     ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
                       << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                    >> 7U)));
    __Vtemp_1[2U] = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                            << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U] 
                                         >> 7U)) : 
                       vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[0U]) 
                      << 7U) | (0x7fU & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                             >> 0xeU)
                                          : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                              << 0x19U) 
                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                >> 7U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0x12U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
                             >> 0xeU)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 0x19U) 
                                          | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                             >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                  << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U] 
                               >> 7U)) : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[0U]) 
            >> 0x19U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                               << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                                            >> 7U))
                           : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[1U]) 
                         << 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                  << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                              >> 0x15U)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                             << 0x12U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                                               >> 0xeU))) 
            << 0xeU) | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                               << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                                            >> 7U))
                           : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[1U]) 
                         >> 0x19U) | (0x3f80U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                                    << 0x19U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                                                      >> 7U))
                                                   : 
                                                  vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U]) 
                                                 << 7U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                  << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                              >> 0x15U)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                             << 0x12U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                                               >> 0xeU))) 
            >> 0x12U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
                               << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                                           >> 0x15U))
                           : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                               << 0x12U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                            >> 0xeU))) 
                         << 0xeU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
                  << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                              >> 0x15U)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                                             << 0x12U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                               >> 0xeU))) 
            >> 0x12U) | (0x1fc000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                        ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
                                           >> 0x15U)
                                        : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                                            << 0x12U) 
                                           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                                              >> 0xeU))) 
                                      << 0xeU)));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__84(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__84\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
            << 4U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                       << 2U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                  ? (2U | (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                                 >> 4U)))
                                  : (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                           >> 2U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__0__KET____DOT__i_sram_shim__DOT__rvalid_d) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
            = (((~ ((IData)(3U) << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n)) 
               | (0xfU & ((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes)) 
                          << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))));
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__89(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__89\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[6U] 
                          << 0x12U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                       >> 0xeU)) : 
                     ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
                       << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                    >> 7U)));
    __Vtemp_1[2U] = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                            << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U] 
                                         >> 7U)) : 
                       vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[0U]) 
                      << 7U) | (0x7fU & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                             >> 0xeU)
                                          : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                              << 0x19U) 
                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                >> 7U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0x12U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
                             >> 0xeU)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 0x19U) 
                                          | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                             >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                  << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U] 
                               >> 7U)) : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[0U]) 
            >> 0x19U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                               << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                                            >> 7U))
                           : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[1U]) 
                         << 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                  << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                              >> 0x15U)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                             << 0x12U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                                               >> 0xeU))) 
            << 0xeU) | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                               << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                                            >> 7U))
                           : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[1U]) 
                         >> 0x19U) | (0x3f80U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                                    << 0x19U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                                                      >> 7U))
                                                   : 
                                                  vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U]) 
                                                 << 7U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                  << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                              >> 0x15U)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                             << 0x12U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                                               >> 0xeU))) 
            >> 0x12U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
                               << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                                           >> 0x15U))
                           : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                               << 0x12U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                            >> 0xeU))) 
                         << 0xeU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
                  << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                              >> 0x15U)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                                             << 0x12U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                               >> 0xeU))) 
            >> 0x12U) | (0x1fc000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                        ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
                                           >> 0x15U)
                                        : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                                            << 0x12U) 
                                           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                                              >> 0xeU))) 
                                      << 0xeU)));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__90(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__90\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
            << 4U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                       << 2U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                  ? (2U | (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                                 >> 4U)))
                                  : (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                           >> 2U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__gen_sram_bank__BRA__1__KET____DOT__i_sram_shim__DOT__rvalid_d) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
            = (((~ ((IData)(3U) << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n)) 
               | (0xfU & ((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes)) 
                          << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))));
    }
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__95(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__95\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[6U] 
                          << 0x12U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                       >> 0xeU)) : 
                     ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
                       << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                    >> 7U)));
    __Vtemp_1[2U] = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                            << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U] 
                                         >> 7U)) : 
                       vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[0U]) 
                      << 7U) | (0x7fU & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                             >> 0xeU)
                                          : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                              << 0x19U) 
                                             | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                >> 7U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0x12U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
                             >> 0xeU)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 0x19U) 
                                          | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                             >> 7U)));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                  << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U] 
                               >> 7U)) : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[0U]) 
            >> 0x19U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                               << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                                            >> 7U))
                           : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[1U]) 
                         << 7U));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                  << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                              >> 0x15U)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                             << 0x12U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                                               >> 0xeU))) 
            << 0xeU) | ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                               << 0x19U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[3U] 
                                            >> 7U))
                           : vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[1U]) 
                         >> 0x19U) | (0x3f80U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                                    << 0x19U) 
                                                   | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                                                      >> 7U))
                                                   : 
                                                  vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[2U]) 
                                                 << 7U))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                  << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                              >> 0x15U)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                             << 0x12U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[4U] 
                                               >> 0xeU))) 
            >> 0x12U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
                               << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                                           >> 0x15U))
                           : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                               << 0x12U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                            >> 0xeU))) 
                         << 0xeU));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
                  << 0xbU) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                              >> 0x15U)) : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                                             << 0x12U) 
                                            | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[5U] 
                                               >> 0xeU))) 
            >> 0x12U) | (0x1fc000U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                        ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[8U] 
                                           >> 0x15U)
                                        : ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[7U] 
                                            << 0x12U) 
                                           | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__data_i[6U] 
                                              >> 0xeU))) 
                                      << 0xeU)));
}

VL_INLINE_OPT void Vtb_croc_soc___024root___nba_comb__TOP__96(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___nba_comb__TOP__96\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes 
        = (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
            << 4U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                       << 2U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                  ? (2U | (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                                 >> 4U)))
                                  : (1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                           >> 2U)))));
    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_q;
    if (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__gen_no_id_assign__DOT__i_fifo__push_i) 
         & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n 
            = (((~ ((IData)(3U) << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__mem_n)) 
               | (0xfU & ((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes)) 
                          << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__write_pointer_q), 1U)))));
    }
}

void Vtb_croc_soc___024root___timing_resume(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        vlSelfRef.__VtrigSched_h83675457__0.resume(
                                                   "@(posedge tb_croc_soc.i_clk_jtag.clk)");
    }
    if ((0x1000000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        vlSelfRef.__VtrigSched_h29129822__0.resume(
                                                   "@(posedge tb_croc_soc.fetch_en_i)");
    }
    if ((0x2000000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        vlSelfRef.__VtrigSched_hc1663615__0.resume(
                                                   "@(negedge tb_croc_soc.uart_tx_o)");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(1U))) {
        vlSelfRef.__VtrigSched_hb13caed5__0.resume(
                                                   "@(posedge tb_croc_soc.i_clk_rst_sys.clk)");
    }
    if ((0x4000000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        vlSelfRef.__VtrigSched_h5713dd64__0.resume(
                                                   "@(posedge tb_croc_soc.i_clk_rst_rtc.clk)");
    }
    if ((0x800000000000ULL & vlSelfRef.__VactTriggered.word(1U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_croc_soc___024root___timing_commit(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x4000ULL & vlSelfRef.__VactTriggered.word(1U)))) {
        vlSelfRef.__VtrigSched_h83675457__0.commit(
                                                   "@(posedge tb_croc_soc.i_clk_jtag.clk)");
    }
    if ((! (0x1000000000000ULL & vlSelfRef.__VactTriggered.word(1U)))) {
        vlSelfRef.__VtrigSched_h29129822__0.commit(
                                                   "@(posedge tb_croc_soc.fetch_en_i)");
    }
    if ((! (0x2000000000000ULL & vlSelfRef.__VactTriggered.word(1U)))) {
        vlSelfRef.__VtrigSched_hc1663615__0.commit(
                                                   "@(negedge tb_croc_soc.uart_tx_o)");
    }
    if ((! (0x800ULL & vlSelfRef.__VactTriggered.word(1U)))) {
        vlSelfRef.__VtrigSched_hb13caed5__0.commit(
                                                   "@(posedge tb_croc_soc.i_clk_rst_sys.clk)");
    }
    if ((! (0x4000000000000ULL & vlSelfRef.__VactTriggered.word(1U)))) {
        vlSelfRef.__VtrigSched_h5713dd64__0.commit(
                                                   "@(posedge tb_croc_soc.i_clk_rst_rtc.clk)");
    }
}

void Vtb_croc_soc___024root___eval_triggers__act(Vtb_croc_soc___024root* vlSelf);
void Vtb_croc_soc___024root___eval_act(Vtb_croc_soc___024root* vlSelf);

bool Vtb_croc_soc___024root___eval_phase__act(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<115> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_croc_soc___024root___eval_triggers__act(vlSelf);
    Vtb_croc_soc___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_croc_soc___024root___timing_resume(vlSelf);
        Vtb_croc_soc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_croc_soc___024root___eval_phase__nba(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_croc_soc___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_croc_soc___024root___dump_triggers__nba(Vtb_croc_soc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_croc_soc___024root___dump_triggers__act(Vtb_croc_soc___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_croc_soc___024root___eval(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__jtag_trst_ni 
        = vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_clear 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_clear;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_req_valid 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_req_valid;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_sd__DOT___Vpast_0_0 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_sd__DOT___Vpast_0_0;
    vlSelfRef.__Vsampled_TOP__tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__dat 
        = vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__dat;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_croc_soc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/fosic/designs/croc/rtl/tb_croc_soc.sv", 10, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_croc_soc___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/fosic/designs/croc/rtl/tb_croc_soc.sv", 10, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_croc_soc___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_croc_soc___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_croc_soc___024root___eval_debug_assertions(Vtb_croc_soc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
