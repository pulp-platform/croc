// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc__Syms.h"
#include "Vtb_croc_soc___024root.h"

void Vtb_croc_soc___024root___ctor_var_reset(Vtb_croc_soc___024root* vlSelf);

Vtb_croc_soc___024root::Vtb_croc_soc___024root(Vtb_croc_soc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_croc_soc___024root___ctor_var_reset(this);
}

void Vtb_croc_soc___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_croc_soc___024root::~Vtb_croc_soc___024root() {
}
