// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_croc_soc.h for the primary calling header

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc__Syms.h"
#include "Vtb_croc_soc_sdhci_reg_pkg.h"

// Parameter definitions for Vtb_croc_soc_sdhci_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 19> Vtb_croc_soc_sdhci_reg_pkg::__PVT__SDHCI_PERMIT;


void Vtb_croc_soc_sdhci_reg_pkg___ctor_var_reset(Vtb_croc_soc_sdhci_reg_pkg* vlSelf);

Vtb_croc_soc_sdhci_reg_pkg::Vtb_croc_soc_sdhci_reg_pkg(Vtb_croc_soc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_croc_soc_sdhci_reg_pkg___ctor_var_reset(this);
}

void Vtb_croc_soc_sdhci_reg_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_croc_soc_sdhci_reg_pkg::~Vtb_croc_soc_sdhci_reg_pkg() {
}
