// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_CROC_SOC__SYMS_H_
#define VERILATED_VTB_CROC_SOC__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_croc_soc.h"

// INCLUDE MODULE CLASSES
#include "Vtb_croc_soc___024root.h"
#include "Vtb_croc_soc_soc_ctrl_reg_pkg.h"
#include "Vtb_croc_soc_sdhci_reg_pkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_croc_soc__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_croc_soc* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_croc_soc___024root         TOP;
    Vtb_croc_soc_sdhci_reg_pkg     TOP__sdhci_reg_pkg;
    Vtb_croc_soc_soc_ctrl_reg_pkg  TOP__soc_ctrl_reg_pkg;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_croc_soc;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_ibex__cs_registers_i;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_ibex__ex_block_i__alu_i;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_ibex__id_stage_i;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_ibex__id_stage_i__controller_i;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_ibex__id_stage_i__decoder_i;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_ibex__id_stage_i__rf_wdata_id_mux;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_csrs;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_csrs__csr_read_write;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem__p_abstract_cmd_rom;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem__p_rw_logic;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__i_dmi_cdc__i_cdc_req;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__i_dmi_cdc__i_cdc_req__no_valid_i_during_clear_i;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__i_dmi_jtag_tap;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__i_dmi_jtag_tap__p_out_sel;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__p_fsm;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_soc_ctrl;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_uart__i_reg_uart_reg_to_apb;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_uart__i_reg_uart_reg_to_apb__apb_fsm;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_user__i_user_sdhci__i_regs;
    VerilatedScope __Vscope_tb_croc_soc__i_croc_soc__i_user__i_user_sdhci__i_sd;
    VerilatedScope __Vscope_tb_croc_soc__jtag_init;
    VerilatedScope __Vscope_tb_croc_soc__jtag_load_hex;
    VerilatedScope __Vscope_tb_croc_soc__jtag_write__unnamedblk1;
    VerilatedScope __Vscope_tb_croc_soc__jtag_write__unnamedblk2;
    VerilatedScope __Vscope_tb_croc_soc__jtag_write_reg32__unnamedblk3;

    // CONSTRUCTORS
    Vtb_croc_soc__Syms(VerilatedContext* contextp, const char* namep, Vtb_croc_soc* modelp);
    ~Vtb_croc_soc__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
