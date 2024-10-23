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
    logic                        valid_d, valid_q; //needs to be delayed for the response phase                   
    logic                        err;                                      
    logic [BlockAw-1:0]          word_addr_d, word_addr_q; //needs to be delayed for the response phase    
    logic [ObiCfg.IdWidth-1:0]   id_d, id_q; //needs to be delayed for the response phase 
         
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
    //register//
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    // Storage for registers
    gpio_reg_union_t reg_d, reg_q; 

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //COMB LOGIC//
    ////////////////////////////////////////////////////////////////////////////////////////////////////
     
    //byte enable/strobe defines which subset of bytes is written to by wdata of the OBI request 
    logic [ObiCfg.DataWidth - 1:0] be_mask; // Amount of wdata Bytes

    for (genvar i = 0; unsigned'(i) < ObiCfg.DataWidth/8; ++i ) begin : gen_be_mask
      assign be_mask[8*i +: 8] = {8{obi_req_i.a.be[i]}};
    end

    always_comb begin
      //---------------------------------------------------------------------------------------------
      //WRITE
      //---------------------------------------------------------------------------------------------

      //----OBI-Writes-------------------------------------------------------------------------------
      if (obi_req_i.req & obi_req_i.a.we) begin
        err = 1'b0;
        case (word_addr_q)
          GPIO_DIR_OFFSET: begin
            reg_d.str.in = 
            (~be_mask & reg_q.str.in) | (be_mask & obi_req_i.a.wdata[GpioCount-1:0]); 
          end

          GPIO_EN_OFFSET: begin
            reg_d.str.en = 
            (~be_mask & reg_q.str.en) | (be_mask & obi_req_i.a.wdata[GpioCount-1:0]); 
          end

          GPIO_OUT_OFFSET: begin
            reg_d.str.out = 
            (~be_mask & reg_q.str.out) | (be_mask & obi_req_i.a.wdata[GpioCount-1:0]);
          end

          GPIO_TOGGLE_OFFSET: begin
            reg_d.str.toggle = 
            (~be_mask & reg_q.str.toggle) | (be_mask & obi_req_i.a.wdata[GpioCount-1:0]);
            // mark every GPIO with 1 that has been written to !
            reg2hw.gpio_toggle_r_allw = be_mask; 
          end

          GPIO_INTRPT_RISE_FALL_EN_OFFSET: begin
            reg_d.str.irpt_en = 
            (~be_mask & reg_q.str.irpt_en) | (be_mask & obi_req_i.a.wdata[GpioCount-1:0]);
          end 

          GPIO_INTRPT_RISE_FALL_STATUS_OFFSET: begin
            reg_d.str.irpt_st = 
            (~be_mask & reg_q.str.irpt_st) | (be_mask & obi_req_i.a.wdata[GpioCount-1:0]);
            // mark every GPIO with 1 that has been written to !
            reg2hw.intrpt_rise_fall_status_r_allw = be_mask; 
          end

          default: begin
            err = 1'b1; // unmapped register access
          end
        endcase
      //----GPIO-Intern-Writes----------------------------------------------------------------------
      end else begin
        // write In Register from Internal GPIO logic
        reg_d.str.in = hw2reg.gpio_in_w; 
        // write Out from Internal GPIO logic to GPIOs but only to the ones allowed
        reg_d.str.out= 
        (~hw2reg.gpio_out_w_allw & reg_q.str.out) | (hw2reg.gpio_out_w_allw & hw2reg.gpio_out_w); 
        // write Irpt Status from Internal GPIO logic to GPIOs but only to the ones allowed
        reg_d.str.irpt_st = 
        (~hw2reg.intrpt_rise_fall_status_w_allw & reg_q.str.irpt_st) | 
        (hw2reg.intrpt_rise_fall_status_w_allw & hw2reg.intrpt_rise_fall_status_w); 
      end
    

      //-----------------------------------------------------------------------------------------------
      //READ
      //-----------------------------------------------------------------------------------------------

      //----OBI-Reads----------------------------------------------------------------------------------
      rsp_data = 32'h0;  // Default value for read data
      err = 1'b0;
      if (obi_req_i.req & ~obi_req_i.a.we) begin

        case (word_addr_q)
          GPIO_DIR_OFFSET: begin
            rsp_data = reg_q.str.dir;
          end

          GPIO_EN_OFFSET: begin
            rsp_data = reg_q.str.en;
          end

          GPIO_IN_OFFSET: begin
            rsp_data = reg_q.str.in;
          end

          GPIO_OUT_OFFSET: begin
            rsp_data = reg_q.str.out;
          end

          GPIO_TOGGLE_OFFSET: begin
            rsp_data = reg_q.str.toggle;
          end

          GPIO_INTRPT_RISE_FALL_EN_OFFSET: begin 
            rsp_data = reg_q.str.irpt_en;
          end

          GPIO_INTRPT_RISE_FALL_STATUS_OFFSET: begin
            rsp_data = reg_q.str.irpt_st;
          end

          default: begin
          rsp_data = 32'hBADCAB1E;  // Return error value in devmode for unmapped reads
          err = 1'b1;
          end
        endcase
      //----GPIO-Intern-Reads--------------------------------------------------------------------------
      end else begin
        reg2hw.gpio_dir_r = reg_q.str.dir; 
        reg2hw.gpio_en_r  = reg_q.str.en;
        reg2hw.gpio_out_r = reg_q.str.out;
        reg2hw.intrpt_rise_fall_en_r = reg_q.str.irpt_en;

        // Read Toggle, but only when indicated by read allow
        reg2hw.gpio_toggle_r = 
        (~reg2hw.gpio_toggle_r_allw & reg2hw.gpio_toggle_r) | (reg2hw.gpio_toggle_r_allw & reg_q.str.toggle);
        // Reset read allow after
        reg2hw.gpio_toggle_r_allw = '0;

        // Read Irpt Status, but only when indicated by read allow
        reg2hw.intrpt_rise_fall_status_r = 
        (~reg2hw.intrpt_rise_fall_status_r_allw & reg2hw.intrpt_rise_fall_status_r) | 
        (reg2hw.intrpt_rise_fall_status_r_allw & reg_q.str.irpt_st);
        // Reset read allow after
        reg2hw.intrpt_rise_fall_status_r_allw = '0;
      end
    end

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //SEQ LOGIC//
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    `FF(reg_q.arr, reg_d.arr, '0, clk_i, rst_ni)

endmodule
