// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

`include "common_cells/registers.svh"

/// Bootrom containing WFI trampoline, register init, trap handlers, and EOC.
/// After reset the core fetches from here:
/// 1. Enables MSIE, executes WFI, waits until woken by CLINT msip
/// 2. Clears msip, disables interrupts, clears registers x1/x3-x15
/// 3. Sets mtvec to bootrom trap handler
/// 4. Reads boot address from soc_ctrl, jumps there with jalr zero (ra = &_eoc)
/// 5. On main() return: _eoc packs retval, writes CORESTATUS, halts
/// Trap handler dispatches to SRAM function pointer table at 0x1000_0000.
/// Source: bootrom.S
module bootrom #(
    /// The OBI configuration for all ports.
    parameter obi_pkg::obi_cfg_t ObiCfg = obi_pkg::ObiDefaultConfig,
    /// OBI request type
    parameter type obi_req_t = logic,
    /// OBI response type
    parameter type obi_rsp_t = logic
) (
    input  logic     clk_i,
    input  logic     rst_ni,
    input  obi_req_t obi_req_i,
    output obi_rsp_t obi_rsp_o
);

    //-----------------------------------------------------------------------------------
    // Bootrom divided into blocks per contiguous label
    //-----------------------------------------------------------------------------------
    // Contiguous block starting at 0x02000000: _start
    localparam int unsigned StartRomWords = 25;
    localparam logic [31:0] StartRom [StartRomWords] = '{
        // <_start>
        32'h30445073, // 0x02000000: csrwi mie,8
        32'h10500073, // 0x02000004: wfi
        32'h020402B7, // 0x02000008: lui t0,0x2040
        32'h0002A023, // 0x0200000C: sw zero,0(t0) # 2040000 <__global_pointer$+0x3e4d0>
        32'h30405073, // 0x02000010: csrwi mie,0
        32'h00000193, // 0x02000014: li gp,0
        32'h00000213, // 0x02000018: li tp,0
        32'h00000313, // 0x0200001C: li t1,0
        32'h00000393, // 0x02000020: li t2,0
        32'h00000413, // 0x02000024: li s0,0
        32'h00000493, // 0x02000028: li s1,0
        32'h00000513, // 0x0200002C: li a0,0
        32'h00000593, // 0x02000030: li a1,0
        32'h00000613, // 0x02000034: li a2,0
        32'h00000693, // 0x02000038: li a3,0
        32'h00000713, // 0x0200003C: li a4,0
        32'h00000793, // 0x02000040: li a5,0
        32'h00000297, // 0x02000044: auipc t0,0x0
        32'h1BC28293, // 0x02000048: addi t0,t0,444 # 2000200 <_trap_handler_wrapper>
        32'h30529073, // 0x0200004C: csrw mtvec,t0
        32'h030002B7, // 0x02000050: lui t0,0x3000
        32'h0002A283, // 0x02000054: lw t0,0(t0) # 3000000 <__global_pointer$+0xffe4d0>
        32'h00000097, // 0x02000058: auipc ra,0x0
        32'h0A808093, // 0x0200005C: addi ra,ra,168 # 2000100 <_eoc>
        32'h00028067 // 0x02000060: jr t0
    };

    // Contiguous block starting at 0x02000100: _eoc
    localparam int unsigned EocRomWords = 5;
    localparam logic [31:0] EocRom [EocRomWords] = '{
        // <_eoc>
        32'h00151293, // 0x02000100: slli t0,a0,0x1
        32'h0012E293, // 0x02000104: ori t0,t0,1
        32'h03000337, // 0x02000108: lui t1,0x3000
        32'h00532423, // 0x0200010C: sw t0,8(t1) # 3000008 <__global_pointer$+0xffe4d8>
        32'h10500073 // 0x02000110: wfi
    };

    // Contiguous block starting at 0x02000200: _trap_handler_wrapper
    localparam int unsigned TrapHandlerRomWords = 22;
    localparam logic [31:0] TrapHandlerRom [TrapHandlerRomWords] = '{
        // <_trap_handler_wrapper>
        32'hFB010113, // 0x02000200: addi sp,sp,-80
        32'h04112423, // 0x02000204: sw ra,72(sp)
        32'h04512023, // 0x02000208: sw t0,64(sp)
        32'h02612C23, // 0x0200020C: sw t1,56(sp)
        32'h02712823, // 0x02000210: sw t2,48(sp)
        32'h02A12423, // 0x02000214: sw a0,40(sp)
        32'h02B12023, // 0x02000218: sw a1,32(sp)
        32'h00C12C23, // 0x0200021C: sw a2,24(sp)
        32'h00D12823, // 0x02000220: sw a3,16(sp)
        32'h00E12423, // 0x02000224: sw a4,8(sp)
        32'h00F12023, // 0x02000228: sw a5,0(sp)
        32'h100002B7, // 0x0200022C: lui t0,0x10000
        32'h34202573, // 0x02000230: csrr a0,mcause
        32'h00054863, // 0x02000234: bltz a0,2000244 <_handle_interrupt>
        32'h0042A303, // 0x02000238: lw t1,4(t0) # 10000004 <__global_pointer$+0xdffe4d4>
        32'h000300E7, // 0x0200023C: jalr t1
        32'h0C00006F, // 0x02000240: j 2000300 <_trap_exit>
        32'h00151513, // 0x02000244: slli a0,a0,0x1
        32'h00155513, // 0x02000248: srli a0,a0,0x1
        32'h0082A303, // 0x0200024C: lw t1,8(t0)
        32'h000300E7, // 0x02000250: jalr t1
        32'h0AC0006F // 0x02000254: j 2000300 <_trap_exit>
    };

    // Contiguous block starting at 0x02000300: _trap_exit
    localparam int unsigned TrapExitRomWords = 12;
    localparam logic [31:0] TrapExitRom [TrapExitRomWords] = '{
        // <_trap_exit>
        32'h04812083, // 0x02000300: lw ra,72(sp)
        32'h04012283, // 0x02000304: lw t0,64(sp)
        32'h03812303, // 0x02000308: lw t1,56(sp)
        32'h03012383, // 0x0200030C: lw t2,48(sp)
        32'h02812503, // 0x02000310: lw a0,40(sp)
        32'h02012583, // 0x02000314: lw a1,32(sp)
        32'h01812603, // 0x02000318: lw a2,24(sp)
        32'h01012683, // 0x0200031C: lw a3,16(sp)
        32'h00812703, // 0x02000320: lw a4,8(sp)
        32'h00012783, // 0x02000324: lw a5,0(sp)
        32'h05010113, // 0x02000328: addi sp,sp,80
        32'h30200073 // 0x0200032C: mret
    };

    // --------------------------------------------------------------------------
    // Handle OBI requests
    // --------------------------------------------------------------------------
    localparam int unsigned WordAddressWidth = 10; // 12-bit byte address

    logic                        we_d, we_q;
    logic                        req_d, req_q;
    logic [ObiCfg.IdWidth-1:0]   id_d, id_q;
    logic [WordAddressWidth-1:0] word_addr_d, word_addr_q;

    assign req_d       = obi_req_i.req;
    assign we_d        = obi_req_i.a.we;
    assign id_d        = obi_req_i.a.aid;
    assign word_addr_d = obi_req_i.a.addr[WordAddressWidth+2-1:2];

    // Latch request for one-cycle response
    `FF(req_q, req_d, '0, clk_i, rst_ni)
    `FF(we_q, we_d, '0, clk_i, rst_ni)
    `FF(id_q, id_d, '0, clk_i, rst_ni)
    `FF(word_addr_q, word_addr_d, '0, clk_i, rst_ni)

    // --------------------------------------------------------------------------
    // Mask-based ROM decode:
    // - upper 4 bits of the *word address* select the ROM block
    // - lower 6 bits index the word within that block
    // --------------------------------------------------------------------------
    logic        rom_req;
    logic [ 3:0] rom_select;
    logic [ 5:0] rom_idx, rom_size;
    logic        rom_error;
    logic [31:0] rom_rdata;

    assign rom_req    = req_q && !we_q;
    assign rom_select = word_addr_q[WordAddressWidth-1 -: 4];
    assign rom_idx    = word_addr_q[5:0];

    always_comb begin
        rom_rdata = 32'h0000_0000;
        rom_error = 1'b1;

        case (rom_select)
            4'b0000: rom_size  = StartRomWords;
            4'b0001: rom_size  = EocRomWords;
            4'b0010: rom_size  = TrapHandlerRomWords;
            4'b0011: rom_size  = TrapExitRomWords;
            default: rom_size = 6'h00;
        endcase

        rom_error = (rom_idx >= rom_size);

        if (!rom_error && rom_req) begin
            case (rom_select)
                4'b0000: rom_rdata = StartRom[rom_idx];
                4'b0001: rom_rdata = EocRom[rom_idx];
                4'b0010: rom_rdata = TrapHandlerRom[rom_idx];
                4'b0011: rom_rdata = TrapExitRom[rom_idx];
                default: rom_rdata = 32'h0000_0000;
            endcase
        end
    end

    always_comb begin
        obi_rsp_o         = '0;
        obi_rsp_o.gnt     = 1'b1; // always grant
        obi_rsp_o.rvalid  = req_q;
        obi_rsp_o.r.rid   = id_q;
        if (we_q) begin
            // write request
            obi_rsp_o.r.rdata = 32'hBADCAB1E;
            obi_rsp_o.r.err   = 1'b1;
        end else begin
            obi_rsp_o.r.rdata = rom_rdata;
            obi_rsp_o.r.err   = rom_error;
        end
    end

endmodule
