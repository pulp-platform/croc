// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_croc_soc__pch.h"
#include "Vtb_croc_soc.h"
#include "Vtb_croc_soc___024root.h"
#include "Vtb_croc_soc_soc_ctrl_reg_pkg.h"
#include "Vtb_croc_soc_sdhci_reg_pkg.h"

// FUNCTIONS
Vtb_croc_soc__Syms::~Vtb_croc_soc__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_croc_soc__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_croc_soc__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_croc_soc__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_croc_soc__Syms::Vtb_croc_soc__Syms(VerilatedContext* contextp, const char* namep, Vtb_croc_soc* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__sdhci_reg_pkg{this, Verilated::catName(namep, "sdhci_reg_pkg")}
    , TOP__soc_ctrl_reg_pkg{this, Verilated::catName(namep, "soc_ctrl_reg_pkg")}
{
        // Check resources
        Verilated::stackCheck(6533);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__sdhci_reg_pkg = &TOP__sdhci_reg_pkg;
    TOP.__PVT__soc_ctrl_reg_pkg = &TOP__soc_ctrl_reg_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__sdhci_reg_pkg.__Vconfigure(true);
    TOP__soc_ctrl_reg_pkg.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_croc_soc.configure(this, name(), "tb_croc_soc", "tb_croc_soc", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_ibex__cs_registers_i.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_ibex.cs_registers_i", "cs_registers_i", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_ibex__ex_block_i__alu_i.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_ibex.ex_block_i.alu_i", "alu_i", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_ibex__id_stage_i.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_ibex.id_stage_i", "id_stage_i", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_ibex__id_stage_i__controller_i.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_ibex.id_stage_i.controller_i", "controller_i", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_ibex__id_stage_i__decoder_i.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_ibex.id_stage_i.decoder_i", "decoder_i", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_core_wrap__i_ibex__id_stage_i__rf_wdata_id_mux.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_core_wrap.i_ibex.id_stage_i.rf_wdata_id_mux", "rf_wdata_id_mux", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_csrs.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_dm_top.i_dm_top.i_dm_csrs", "i_dm_csrs", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_csrs__csr_read_write.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_dm_top.i_dm_top.i_dm_csrs.csr_read_write", "csr_read_write", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_dm_top.i_dm_top.i_dm_mem", "i_dm_mem", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem__p_abstract_cmd_rom.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_dm_top.i_dm_top.i_dm_mem.p_abstract_cmd_rom", "p_abstract_cmd_rom", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dm_top__i_dm_top__i_dm_mem__p_rw_logic.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_dm_top.i_dm_top.i_dm_mem.p_rw_logic", "p_rw_logic", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag", "i_dmi_jtag", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__i_dmi_cdc__i_cdc_req.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req", "i_cdc_req", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__i_dmi_cdc__i_cdc_req__no_valid_i_during_clear_i.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_cdc.i_cdc_req.no_valid_i_during_clear_i", "no_valid_i_during_clear_i", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__i_dmi_jtag_tap.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_jtag_tap", "i_dmi_jtag_tap", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__i_dmi_jtag_tap__p_out_sel.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.i_dmi_jtag_tap.p_out_sel", "p_out_sel", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_dmi_jtag__p_fsm.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_dmi_jtag.p_fsm", "p_fsm", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_soc_ctrl.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_soc_ctrl", "i_soc_ctrl", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_uart__i_reg_uart_reg_to_apb.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_uart.i_reg_uart_reg_to_apb", "i_reg_uart_reg_to_apb", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_croc__i_uart__i_reg_uart_reg_to_apb__apb_fsm.configure(this, name(), "tb_croc_soc.i_croc_soc.i_croc.i_uart.i_reg_uart_reg_to_apb.apb_fsm", "apb_fsm", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_user__i_user_sdhci__i_regs.configure(this, name(), "tb_croc_soc.i_croc_soc.i_user.i_user_sdhci.i_regs", "i_regs", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__i_croc_soc__i_user__i_user_sdhci__i_sd.configure(this, name(), "tb_croc_soc.i_croc_soc.i_user.i_user_sdhci.i_sd", "i_sd", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__jtag_init.configure(this, name(), "tb_croc_soc.jtag_init", "jtag_init", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__jtag_load_hex.configure(this, name(), "tb_croc_soc.jtag_load_hex", "jtag_load_hex", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__jtag_write__unnamedblk1.configure(this, name(), "tb_croc_soc.jtag_write.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__jtag_write__unnamedblk2.configure(this, name(), "tb_croc_soc.jtag_write.unnamedblk2", "unnamedblk2", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_croc_soc__jtag_write_reg32__unnamedblk3.configure(this, name(), "tb_croc_soc.jtag_write_reg32.unnamedblk3", "unnamedblk3", -12, VerilatedScope::SCOPE_OTHER);
}
