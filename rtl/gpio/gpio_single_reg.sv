module gpio_single_reg #(
  parameter int DW = 1 // Data width, default is 1
) (
  input   logic           clk_i, 
  input   logic           rst_ni,
  input   logic           re,      // Read enable signal //TODO: Why do i need read enable?
  input   logic           we,      // Write enable signal 
  input   logic [DW-1:0]  wd,      // Write data
  input   logic [DW-1:0]  d,       // Input data
  output  logic [DW-1:0]  q,       // Output data (register output)
  output  logic [DW-1:0]  qs       // Synchronous output (registered output)
);

  logic          re_d, re_q;
  logic [DW-1:0] reg_data_d, reg_data_q; // Internal register to store data
  //TODO: why doesn't there have to be reg_data_d and reg_data_q?

  assign reg_data_d = wd;
  // Always block triggered on the rising edge of the clock or negative reset
  always_ff @(posedge clk_i or negedge rst_ni) begin
      if (!rst_ni) begin
          reg_data_q <= '0; //clear the register data
      end else begin
          if (we) begin //are you allowed to write?
              // Write data to the register
              reg_data_q <= reg_data_d;
          end
      end
  end

  // Assign synchronous output (qs)
  assign qs = reg_data_q;

  // If read enable (re) is asserted, pass the input data (d) to the output (q)
  assign q = (re) ? reg_data_q : '0; //assign q = (re) ? d : '0;

endmodule