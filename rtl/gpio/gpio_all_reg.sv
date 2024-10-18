module gpio_all_reg #(
  parameter type reg_req_t = logic,
  parameter type reg_rsp_t = logic,
  parameter int AW = 11,
) (
  input logic clk_i,
  input logic rst_ni,
  input  obi_req_t obi_reg_req_i, //a.addr, a.we, a.be, a.wdata, a.aid, a.a_optional | rready, req, 
  output obi_rsp_t obi_reg_rsp_o, //r.rdata, r.rid, r.err, r.r_optional | gnt, rvalid,

  // To HW
  output gpio_reg_pkg::gpio_reg2hw_t reg2hw, // Write
  input  gpio_reg_pkg::gpio_hw2reg_t hw2reg, // Read

  // Config
  input devmode_i // If 1, explicit error return for unmapped register access
);

    import gpio_reg_pkg::*;

    //////////////////////////////////////////////////////////////////////////////////////////////////////
    //Defining Signals- OBI and local Reg Signals interfaced//
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    localparam int DW = 32;
    localparam int DBW = DW/8; //Byte Width

    //obi signals
    logic [ObiCfg.IdWidth-1:0] reg_id_d, reg_id_q;
    logic reg_valid_d, reg_valid_q;
    logic [AW-1:0] reg_addr_d, reg_addr_q;

    //-----------------------------------------------------------------------------------------------
    //Local Register Signals (LRS)
    //-----------------------------------------------------------------------------------------------
    logic           reg_we;
    logic           reg_re;
    logic [AW-1:0]  reg_addr;
    logic [DW-1:0]  reg_wdata;
    logic [DBW-1:0] reg_be;
    logic [DW-1:0]  reg_rdata;
    logic           reg_error;

    logic           addrmiss, wr_err;

    logic [DW-1:0]  reg_rdata_next;

    //-----------------------------------------------------------------------------------------------
    //LRS assigned to and from OBI 
    //-----------------------------------------------------------------------------------------------

    //---TO--------------------------------------------------------------------------------------------
    assign reg_we             = obi_reg_req_i.rready & obi_reg_req_i.a.we; 
    assign reg_re             = obi_reg_req_i.rready & ~obi_reg_req_i.a.we; 
    assign reg_addr           = reg_addr_q;
    assign reg_wdata          = obi_reg_req_i.a.wdata;
    assign reg_be             = obi_reg_req_i.a.be;
    
    assign reg_addr_d         = obi_reg_req_i.a.addr[AW-1:0];
    assign reg_valid_d        = obi_reg_req_i.req;
    assign reg_id_d           = obi_reg_req_i.a.aid;

    //---FROM--------------------------------------------------------------------------------------------
    assign obi_reg_rsp_o.r.rdata = reg_rdata;
    assign obi_reg_rsp_o.r.err = reg_error;

    assign obi_reg_rsp_o.rvalid = reg_valid_q; //assign obi_reg_intf_rsp.rvalid = 1'b1; 
    assign obi_reg_rsp_o.r.rid   = reg_id_q;
    assign obi_reg_rsp_o.r.r_optional = '0;

    //---PRESERVE--------------------------------------------------------------------------------------------
    always_ff @(posedge clk_i or negedge rst_ni) begin
      if(!rst_ni) begin
        reg_addr_q   <= '0;
        reg_valid_q  <= '0;
        reg_id_q     <= '0;
      end else begin
        reg_addr_q  <= reg_addr_d;
        reg_valid_q <= reg_valid_d;
        reg_id_q    <= reg_id_d; //aid sent during request phase, response phase is delayed, we need to preserve ID
      end
    end

    assign reg_rdata = reg_rdata_next ;
    assign reg_error = (devmode_i & addrmiss) | wr_err;

    //-----------------------------------------------------------------------------------------------
    // Single Register I/O Signals
    //-----------------------------------------------------------------------------------------------
    // Format: <reg>_<field>_{wd|we|qs}
    //        or <reg>_{wd|we|qs} if field == 1 or 0
    logic [GpioCount-1:0] gpio_dir_qs;
    logic [GpioCount-1:0] gpio_dir_wd;
    logic [GpioCount-1:0] gpio_dir_we;

    logic [GpioCount-1:0] gpio_en_qs;
    logic [GpioCount-1:0] gpio_en_wd;
    logic [GpioCount-1:0] gpio_en_we;

    logic [GpioCount-1:0] gpio_in_qs;
    logic [GpioCount-1:0] gpio_in_re;

    logic [GpioCount-1:0] gpio_out_qs;
    logic [GpioCount-1:0] gpio_out_wd;
    logic [GpioCount-1:0] gpio_out_we;

    logic [GpioCount-1:0] gpio_toggle_wd;
    logic [GpioCount-1:0] gpio_toggle_we;
    
    logic [GpioCount-1:0] gpio_intrpt_rise_fall_en_qs;
    logic [GpioCount-1:0] gpio_intrpt_rise_fall_en_wd;
    logic [GpioCount-1:0] gpio_intrpt_rise_fall_en_we;

    logic [GpioCount-1:0] gpio_intrpt_rise_fall_status_qs;
    logic [GpioCount-1:0] gpio_intrpt_rise_fall_status_wd;
    logic [GpioCount-1:0] gpio_intrpt_rise_fall_status_we;

    //////////////////////////////////////////////////////////////////////////////////////////////////////
    //Instantiating Single Registers// 
    //////////////////////////////////////////////////////////////////////////////////////////////////////

    //-----------------------------------------------------------------------------------------------
    //gpio_dir registers 
    //-----------------------------------------------------------------------------------------------
    for (int idx = 0; idx < GpioCount; idx++) begin
      gpio_single_reg *(
          .DW (1) 
      ) u_reg_cell_gpio_dir (
          .clk_i,
          .rst_ni,
          .re     (1'b0),   
          .we     (gpio_dir_we[idx]),                  
          .wd     (gpio_dir_wd[idx]),  

          .de     (1'b0),               
          .d      ('0),  

          .qe     (),               
          .q      (reg2hw.gpio_dir[idx].q),

          .qs     (gpio_dir_qs[idx]) 
      );
    end

    //-----------------------------------------------------------------------------------------------
    //gpio_en registers 
    //-----------------------------------------------------------------------------------------------
    for (int idx = 0; idx < GpioCount; idx++) begin
      gpio_single_reg *(
          .DW (1) 
      ) u_reg_cell_gpio_en (
          .clk_i,
          .rst_ni,
          .re     (1'b0),   
          .we     (gpio_en_we[idx]),                  
          .wd     (gpio_en_wd[idx]),  

          .de     (1'b0),               
          .d      ('0),  

          .qe     (),               
          .q      (reg2hw.gpio_en[idx].q), 

          .qs     (gpio_en_qs[idx]) 
      );
    end

    //-----------------------------------------------------------------------------------------------
    //gpio_in registers 
    //-----------------------------------------------------------------------------------------------
    for (int idx = 0; idx < GpioCount; idx++) begin
      gpio_single_reg *(
          .DW (1) 
      ) u_reg_cell_gpio_in (
          .clk_i,
          .rst_ni,
          .re     (gpio_in_re[idx]),   
          .we     (1'b0),                  
          .wd     ('0),  

          .de     ('0),               
          .d      (hw2reg.gpio_in[idx].d),  

          .qe     (),              
          .q      (),   

          .qs     (gpio_in_qs[idx]) 
      );
    end

    //-----------------------------------------------------------------------------------------------
    //gpio_out registers 
    //-----------------------------------------------------------------------------------------------
    for (int idx = 0; idx < GpioCount; idx++) begin
      gpio_single_reg *(
          .DW (1) 
      ) u_reg_cell_gpio_out (
          .clk_i,
          .rst_ni,
          .re     (1'b0),   
          .we     (gpio_out_we[idx]),                  
          .wd     (gpio_out_wd[idx]),  

          .de     (hw2reg.gpio_out[idx].de),               
          .d      (hw2reg.gpio_out[idx].d),  

          .qe     (),            
          .q      (reg2hw.gpio_out[idx].q),    

          .qs     (gpio_out_qs[idx]) 
      );
    end

    //-----------------------------------------------------------------------------------------------
    //gpio_toggle registers 
    //-----------------------------------------------------------------------------------------------
    for (int idx = 0; idx < GpioCount; idx++) begin
      gpio_single_reg *(
          .DW (1) 
      ) u_reg_cell_gpio_toggle (
          .clk_i,
          .rst_ni,
          .re     (1'b0),   
          .we     (gpio_toggle_we[idx]),                  
          .wd     (gpio_toggle_wd[idx]),  

          .de     ('0),               
          .d      ('0),  

          .qe     (reg2hw.gpio_toggle[idx].qe),            
          .q      (reg2hw.gpio_toggle[idx].q),    

          .qs     () 
      );
    end

    //-----------------------------------------------------------------------------------------------
    //gpio_intrpt_rise_fall_en registers 
    //-----------------------------------------------------------------------------------------------
    for (int idx = 0; idx < GpioCount; idx++) begin
      gpio_single_reg *(
          .DW (1) 
      ) u_reg_cell_gpio_intrpt_rise_fall_en (
          .clk_i,
          .rst_ni,
          .re     (1'b0),   
          .we     (gpio_intrpt_rise_fall_en_we[idx]),                  
          .wd     (gpio_intrpt_rise_fall_en_wd[idx]),  

          .de     (1'b0),               
          .d      ('0),  

          .qe     (),            
          .q      (reg2hw.gpio_intrpt_rise_fall_en[idx].q),    

          .qs     (gpio_intrpt_rise_fall_en_qs) 
      );
    end


    //-----------------------------------------------------------------------------------------------
    //gpio_intrpt_rise_fall_status registers
    //-----------------------------------------------------------------------------------------------
    for (int idx = 0; idx < GpioCount; idx++) begin
      gpio_single_reg *(
          .DW (1) 
      ) u_reg_cell_gpio_intrpt_rise_fall_status (
          .clk_i,
          .rst_ni,
          .re     (1'b0),   
          .we     (gpio_intrpt_rise_fall_status_we[idx]),                  
          .wd     (gpio_intrpt_rise_fall_status_wd[idx]),  

          .de     (hw2reg.gpio_intrpt_rise_fall_status[idx].de),               
          .d      (hw2reg.gpio_intrpt_rise_fall_status[idx].d),  

          .qe     (),            
          .q      (reg2hw.gpio_intrpt_rise_fall_status[idx].q),    

          .qs     (gpio_intrpt_rise_fall_status_qs) 
      );
    end

    //////////////////////////////////////////////////////////////////////////////////////////////////////
    //Address Hit - For which register is the request?//
    //////////////////////////////////////////////////////////////////////////////////////////////////////

    logic [18:0] addr_hit;
    always_comb begin
      addr_hit = '0;
      addr_hit[ 0] = (reg_addr == GPIO_GPIO_DIR_OFFSET); //say wether you want in or output
      addr_hit[ 1] = (reg_addr == GPIO_GPIO_EN_OFFSET); //Enable the GPIOS you want to use
      addr_hit[ 2] = (reg_addr == GPIO_GPIO_IN_OFFSET); //Read out input
      addr_hit[ 3] = (reg_addr == GPIO_GPIO_OUT_OFFSET); //Write in what you want to output
      addr_hit[ 4] = (reg_addr == GPIO_GPIO_TOGGLE_OFFSET); //Write in if you want to toggle the output
      addr_hit[ 5] = (reg_addr == GPIO_INTRPT_RISE_FALL_EN_OFFSET); //Write if you want to detect and create interrupt
      addr_hit[ 6] = (reg_addr == GPIO_INTRPT_RISE_FALL_STATUS_OFFSET); //Read out interrupt status
    end

    assign addrmiss = (reg_re || reg_we) ? ~|addr_hit : 1'b0 ; //TODO: What is this?

    // Check sub-word write is permitted
    always_comb begin
      wr_err = (reg_we &
               ((addr_hit[ 0] & (|(GPIO_PERMIT[ 0] & ~reg_be))) |
                (addr_hit[ 1] & (|(GPIO_PERMIT[ 1] & ~reg_be))) |
                (addr_hit[ 2] & (|(GPIO_PERMIT[ 2] & ~reg_be))) |
                (addr_hit[ 3] & (|(GPIO_PERMIT[ 3] & ~reg_be))) |
                (addr_hit[ 4] & (|(GPIO_PERMIT[ 4] & ~reg_be))) |
                (addr_hit[ 5] & (|(GPIO_PERMIT[ 5] & ~reg_be))) |
                (addr_hit[ 6] & (|(GPIO_PERMIT[ 6] & ~reg_be)))));
    end

    //////////////////////////////////////////////////////////////////////////////////////////////////////
    //Assignments//
    //////////////////////////////////////////////////////////////////////////////////////////////////////

    //-----------------------------------------------------------------------------------------------
    // Assign input data for register
    //-----------------------------------------------------------------------------------------------

    assign gpio_dir_we = {GpioCount{addr_hit[0] & reg_we & !reg_error}}; //assign für jeden value im array
    assign gpio_dir_wd = reg_wdata; //sind beides schon arrays

    assign gpio_en_we = {GpioCount{addr_hit[1] & reg_we & !reg_error}}; 
    assign gpio_en_wd = reg_wdata; 

    assign gpio_in_re = {GpioCount{addr_hit[2] & reg_re & !reg_error}};

    assign gpio_out_we = {GpioCount{addr_hit[3] & reg_we & !reg_error}}; 
    assign gpio_out_wd = reg_wdata; 

    assign gpio_toggle_we = {GpioCount{addr_hit[4] & reg_we & !reg_error}}; 
    assign gpio_toggle_wd = reg_wdata; 

    assign gpio_intrpt_rise_fall_en_we = {GpioCount{addr_hit[5] & reg_we & !reg_error}}; 
    assign gpio_intrpt_rise_fall_en_wd = reg_wdata; 

    assign gpio_intrpt_rise_fall_status_we = {GpioCount{addr_hit[6] & reg_we & !reg_error}}; 
    assign gpio_intrpt_rise_fall_status_wd = reg_wdata;

    //-----------------------------------------------------------------------------------------------
    // Fetch output data from registers
    //-----------------------------------------------------------------------------------------------

    always_comb begin
    reg_rdata_next = '0;
    unique case (1'b1)

      addr_hit[0]: begin
        reg_rdata_next = gpio_dir_qs; 
      end

      addr_hit[1]: begin
        reg_rdata_next = gpio_en_qs;
      end

      addr_hit[2]: begin
        reg_rdata_next = gpio_in_qs;
      end

      addr_hit[3]: begin
        reg_rdata_next = gpio_out_qs;
      end

      addr_hit[4]: begin
        reg_rdata_next = '0; //toggle does not have output data!
      end

      addr_hit[5]: begin
        reg_rdata_next = gpio_intrpt_rise_fall_en_qs;
      end

      addr_hit[6]: begin
        reg_rdata_next = gpio_intrpt_rise_fall_status_qs;
      end

      default: begin
        reg_rdata_next = '1;
      end
    endcase
  end

  // Unused signal tieoff

  // wdata / byte enable are not always fully used
  // add a blanket unused statement to handle lint waivers
  logic unused_wdata;
  logic unused_be;
  assign unused_wdata = ^reg_wdata;
  assign unused_be = ^reg_be;

  // Assertions for Register Interface
  `ASSERT(en2addrHit, (reg_we || reg_re) |-> $onehot0(addr_hit))

endmodule