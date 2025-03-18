// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_croc_soc.h for the primary calling header

#ifndef VERILATED_VTB_CROC_SOC_SOC_CTRL_REG_PKG_H_
#define VERILATED_VTB_CROC_SOC_SOC_CTRL_REG_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_croc_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_croc_soc_soc_ctrl_reg_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_croc_soc__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*3:0*/, 4> __PVT__SOC_CTRL_PERMIT = {{
        0x0fU, 0x01U, 0x0fU, 0x01U
    }};

    // CONSTRUCTORS
    Vtb_croc_soc_soc_ctrl_reg_pkg(Vtb_croc_soc__Syms* symsp, const char* v__name);
    ~Vtb_croc_soc_soc_ctrl_reg_pkg();
    VL_UNCOPYABLE(Vtb_croc_soc_soc_ctrl_reg_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
