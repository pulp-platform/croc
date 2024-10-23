`include "common_cells/registers.svh"

module gpio_reg_top #(
    parameter obi_pkg::obi_cfg_t           ObiCfg      = obi_pkg::ObiDefaultConfig,
    parameter type obi_req_t = logic,   // OBI request type
    parameter type obi_rsp_t = logic   // OBI response type
) (
    input logic clk_i,                  // Clock
    input logic rst_ni,                 // Active-low reset

    //Connection to Obi
    input obi_req_t  obi_req_i,      // OBI request interface : a.addr, a.we, a.be, a.wdata, a.aid, a.a_optional | rready, req
    output obi_rsp_t obi_rsp_o,     // OBI response interface : r.rdata, r.rid, r.err, r.r_optional | gnt, rvalid

    // To Hardware
    output gpio_reg_pkg::gpio_reg2hw_t reg2hw,   // Write from reg to HW
    input gpio_reg_pkg::gpio_hw2reg_t  hw2reg    // Read from HW to reg
);

    // Import the GPIO package for register definitions and parameters
    import gpio_reg_pkg::*;

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //obi preparations//
    /////////////////////////////////////////////////////////////////////////////////////////////////////

    // Signals for the OBI response
    logic [ObiCfg.DataWidth-1:0] rsp_data;         
    logic                        valid_d, valid_q;  //needs to be delayed for the response phase                   
    logic                        err;                                      
    logic [BlockAw-1:0]          word_addr_d, word_addr_q;  //needs to be delayed for the response phase    
    logic [ObiCfg.IdWidth-1:0]   id_d, id_q;   //needs to be delayed for the response phase 
         
    //OBI rsp Assignment
    always_comb begin
        obi_rsp_o.r.rdata       = rsp_data;
        obi_rsp_o.r.rid         = id_q;
        obi_rsp_o.r.err         = err; 
        obi_rsp_o.r.r_optional  = '0;
        obi_rsp_o.gnt           = obi_req_i.req;
        obi_rsp_o.rvalid        = valid_q;
    end

    //id, valid and address handling
    assign id_d          = obi_req_i.a.aid;
    assign valid_d       = obi_req_i.req;
    assign word_addr_d   = obi_req_i.a.addr[BlockAw+1:2];
   
    //FF for the obi rsp signals (id and valid)
    `FF(id_q, id_d, '0, clk_i, rst_ni)
    `FF(valid_q, valid_d, '0, clk_i, rst_ni)
    `FF(word_addr_q, word_addr_d, '0, clk_i, rst_ni)

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //registers//
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    // Storage for registers
    logic [7*GpioCount-1:0] reg_d, reg_q; 
    //Index Offsets
    parameter int OffsetDir     = 0;
    parameter int OffsetEn      = 1*GpioCount;
    parameter int OffsetIn      = 2*GpioCount;
    parameter int OffsetOut     = 3*GpioCount;
    parameter int OffsetToggle  = 4*GpioCount;
    parameter int OffsetIrptEn  = 5*GpioCount;
    parameter int OffsetIrptSt  = 6*GpioCount;

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //COMB LOGIC//
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    
    //-----------------------------------------------------------------------------------------------
    //WRITE
    //-----------------------------------------------------------------------------------------------
     
    //byte enable/strobe defines which subset of bytes is written to by wdata of the OBI request 
    logic [ObiCfg.DataWidth/8 - 1:0] be_mask; // Amount of wdata Bytes

    for (genvar i = 0; unsigned'(i) < ObiCfg.DataWidth/8; ++i ) begin : gen_be_mask
      assign be_mask[8*i +: 8] = {8{obi_req_i.a.be[i]}};
    end

    //----OBI-Writes--------------------------------------------------------------------------------
    always comb begin
      err = 1'b0:
      case (word_addr_q)
        GPIO_DIR_OFFSET: begin
          if (obi_req_i.req & obi_req_i.a.we) begin
            reg_d[OffsetEn-1:OffsetDir] = 
            (~be_mask & reg_q[OffsetEn-1:OffsetDir]) | (be_mask & obi_req_i.a.wdata[GpioCount-1:0]); 
          end
        end

        GPIO_EN_OFFSET: begin
          if (obi_req_i.req & obi_req_i.a.we) begin
            reg_d[OffsetIn-1:OffsetEn] = 
            (~be_mask & reg_q[OffsetIn-1:OffsetEn]) | (be_mask & obi_req_i.a.wdata[GpioCount-1:0]); 
          end
        end

        GPIO_OUT_OFFSET: begin
          if (obi_req_i.req & obi_req_i.a.we) begin
            reg_d[OffsetToggle-1:OffsetOut] = 
            (~be_mask & reg_q[OffsetToggle-1:OffsetOut]) | (be_mask & obi_req_i.a.wdata[GpioCount-1:0]);
          end
        end

        GPIO_TOGGLE_OFFSET: begin
          if (obi_req_i.req & obi_req_i.a.we) begin
            reg_d[OffsetIrptEn-1:OffsetToggle] = 
            (~be_mask & reg_q[OffsetIrptEn-1:OffsetToggle]) | (be_mask & obi_req_i.a.wdata[GpioCount-1:0]);

            reg2hw.gpio_toggle_r_allw = be_mask; // mark every GPIO with 1 that has been written to !
          end
        end

        GPIO_INTRPT_RISE_FALL_EN_OFFSET: begin
          if (obi_req_i.req & obi_req_i.a.we) begin
            reg_d[OffsetIrptSt-1:OffsetIrptEn] = 
            (~be_mask & reg_q[OffsetIrptSt-1:OffsetIrptEn]) | (be_mask & obi_req_i.a.wdata[GpioCount-1:0]);
          end
        end 

        GPIO_INTRPT_RISE_FALL_STATUS_OFFSET: begin
          if (obi_req_i.req & obi_req_i.a.we) begin
            reg_d[7*GpioCount-1:OffsetIrptSt] = 
            (~be_mask & reg_q[7*GpioCount-1:OffsetIrptSt]) | (be_mask & obi_req_i.a.wdata[GpioCount-1:0]);

            reg2hw.intrpt_rise_fall_status_r_allw = be_mask; // mark every GPIO with 1 that has been written to !
          end
        end

        default: begin
          err = 1'b1; // unmapped register access
        end
      endcase
    end

    //----GPIO-Intern-Writes----------------------------------------------------------------------------
    always_comb begin
      // write In Register from Internal GPIO logic
      reg_d[OffsetOut-1:OffsetIn] = hw2reg.gpio_in_w; 
      //write from GPIOlogic to GPIOs but only to the ones allowed
      reg_d[OffsetToggle-1:OffsetOut] = 
      (~hw2reg.gpio_out_w_allw & reg_q[OffsetToggle-1:OffsetOut]) | 
      (hw2reg.gpio_out_w_allw & hw2reg.gpio_out_w); 
      // write Irpt Status from Internal GPIO logic to GPIOs but only to the ones allowed
      reg_d[7*GpioCount-1:OffsetIrptSt] = 
      (~hw2reg.intrpt_rise_fall_status_w_allw & reg_q[7*GpioCount-1:OffsetIrptSt]) | 
      (hw2reg.intrpt_rise_fall_status_w_allw & hw2reg.intrpt_rise_fall_status_w); 
    end

    //-----------------------------------------------------------------------------------------------
    //READ
    //-----------------------------------------------------------------------------------------------

    //----OBI-Reads--------------------------------------------------------------------------------
    always_comb begin
      rsp_data = 32'h0;  // Default value for read data
      err = 1'b0;
        case (word_addr_q)
          GPIO_DIR_OFFSET: begin
            if (obi_req_i.req & ~obi_req_i.a.we) begin
              rsp_data = reg_q[OffsetEn:OffsetDir];
            end
          end

          GPIO_EN_OFFSET: begin
            if (obi_req_i.req & ~obi_req_i.a.we) begin
              rsp_data = reg_q[OffsetIn:OffsetEn];
            end
          end

          GPIO_IN_OFFSET: begin
            if (obi_req_i.req & ~obi_req_i.a.we) begin
              rsp_data = reg_q[OffsetOut:OffsetIn];
            end 
          end

          GPIO_OUT_OFFSET: begin
            if (obi_req_i.req & ~obi_req_i.a.we) begin
              rsp_data = reg_q[OffsetToggle:OffsetOut];
            end
          end

          GPIO_TOGGLE_OFFSET: begin
            if (obi_req_i.req & ~obi_req_i.a.we) begin
              rsp_data = reg_q[OffsetIrptEn:OffsetToggle];
            end
          end

          GPIO_INTRPT_RISE_FALL_EN_OFFSET: begin 
            if (obi_req_i.req & ~obi_req_i.a.we) begin
              rsp_data = reg_q[OffsetIrptSt:OffsetIrptEn];
            end
          end

          GPIO_INTRPT_RISE_FALL_STATUS_OFFSET: begin
            if (obi_req_i.req & ~obi_req_i.a.we) begin
              rsp_data = reg_q[7*GpioCount-1:OffsetIrptSt];
            end
          end

          default: begin
            rsp_data = 32'hBADCAB1E;  // Return error value in devmode for unmapped reads
            err = 1'b1;
          end
        endcase
    end

    //----GPIO-Intern-Reads--------------------------------------------------------------------------------
    always_comb begin 
      reg2hw.gpio_dir_r = reg_q[OffsetEn:OffsetDir]; 
      reg2hw.gpio_en_r  = reg_q[OffsetIn:OffsetEn];
      reg2hw.gpio_out_r = reg_q[OffsetOut:OffsetOut];
      //Read Toggle, but only when indicated by read allow, reset read allow after
      for (genvar gpio_idx = 0; gpio_idx < NrGPIOs; gpio_idx++) begin : gen_gpios
        if(reg2hw.gpio_toggle_r_allw[gpio_idx]) begin 
          reg2hw.gpio_toggle_r[gpio_idx] = reg_q[gpio_idx + OffsetToggle];
          reg2hw.gpio_toggle_r_allw[gpio_idx] = 1'b0; 
        end
      end
      reg2hw.intrpt_rise_fall_en_r = reg_q[OffsetIrptSt:OffsetIrptEn];
      //Read Irpt Status, but only when indicated by read allow, reset read allow after
      for (genvar gpio_idx = 0; gpio_idx < NrGPIOs; gpio_idx++) begin : gen_gpios
        if (reg2hw.intrpt_rise_fall_status_r_allw[gpio_idx]) begin 
          reg2hw.intrpt_rise_fall_status_r[gpio_idx] = reg_q[gpio_idx + OffsetIrptSt];
          reg2hw.intrpt_rise_fall_status_r_allw[gpio_idx] = 1'b0; 
        end
      end
    end

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //SEQ LOGIC//
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    `FF(reg_q, reg_d, '0, clk_i, rst_ni);

endmodule
