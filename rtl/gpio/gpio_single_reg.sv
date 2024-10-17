module gpio_single_reg #(
  parameter int AW = 11
) (
  input logic clk_i, 
  input logic rst_ni,
  input logic en,  //enable has to be one that you can write the data into the register
  input  logic [3:0] d, //4-bit input data
  output rogic [3:0] q, //4-bit output data

);

  import gpio_reg_pkg::* ;

  always_ff @( posedge clk or negedge rst_ni ) begin
    if (!rst_ni)
      q <= 4'b0;
    else if (en)
    q <= d;
  end
  
endmodule