/*
 *  ---
 *
 *  The internal logic cell technology mapper.
 *
 *  This Verilog library contains the mapping of internal cells (e.g. $not with
 *  variable bit width) to the internal logic cells (such as the single bit $_NOT_
 *  gate). Usually this logic network is then mapped to the actual technology
 *  using e.g. the "abc" pass.
 *
 *  Note that this library does not map $mem cells. They must be mapped to logic
 *  and $dff cells using the "memory_map" pass first. (Or map it to custom cells,
 *  which is of course highly recommended for larger memories.)
 *
 */

`define MIN(_a, _b) ((_a) < (_b) ? (_a) : (_b))
`define MAX(_a, _b) ((_a) > (_b) ? (_a) : (_b))


// --------------------------------------------------------
// Library of Arithmetic Units
// --------------------------------------------------------

(* techmap_celltype = "lau_FullAdder" *)
module lau_FullAdder (
	input  logic A,
	input  logic B,
	input  logic CI,  // operands
	output logic S,
	output logic CO  // sum and carry out
);
	\$fa #(.WIDTH(1)) ys_fa (.A(A), .B(B), .C(CI), .X(CO), .Y(S));
endmodule

(* techmap_celltype = "lau_PrefixAndOr" *)
module lau_PrefixAndOr #(
	parameter int width = 8, // word width
	parameter int speed = 2  // performance parameter
) (
	input  logic [width-1:0] GI,  // gen./prop. in
	input  logic [width-1:0] PI,  // gen./prop. in
	output logic [width-1:0] GO,  // gen./prop. out
	output logic [width-1:0] PO   // gen./prop. out
);

	// Constants
	localparam int n = width;  // prefix structure width
	localparam int m = $clog2(width);  // prefix structure depth

	// Sklansky parallel-prefix carry-lookahead structure
	if (speed == 2) begin : fastPrefix
		logic [(m+1)*n-1:0] GT, PT;  // gen./prop. temp
			assign GT[n-1:0] = GI;
			assign PT[n-1:0] = PI;
			for (genvar l = 1; l <= m; l++) begin : levels
				for (genvar k = 0; k < 2 ** (m - l); k++) begin : groups
					for (genvar i = 0; i < 2 ** (l - 1); i++) begin : bits
						// pass prop and gen to following nodes
						if ((k * 2 ** l + i) < n) begin : white
							assign GT[l*n+k*2**l+i] = GT[(l-1)*n+k*2**l+i];
							assign PT[l*n+k*2**l+i] = PT[(l-1)*n+k*2**l+i];
						end
						// calculate new propagate and generate
						if ((k * 2 ** l + 2 ** (l - 1) + i) < n) begin : black
							assign GT[l*n + k*2**l + 2**(l-1) + i] = 
												GT[(l-1)*n + k*2**l + 2**(l-1) + i]
											  | (  PT[(l-1)*n + k*2**l + 2**(l-1) + i]
												 & GT[(l-1)*n + k*2**l + 2**(l-1) - 1] );
							assign PT[l*n + k*2**l + 2**(l-1) + i] = 
													PT[(l-1)*n + k*2**l + 2**(l-1) + i]
												  & PT[(l-1)*n + k*2**l + 2**(l-1) - 1];
						end
					end
				end
			end
			assign GO = GT[(m+1)*n-1 : m*n];
			assign PO = PT[(m+1)*n-1 : m*n];
	end

	// Brent-Kung parallel-prefix carry-lookahead structure
	if (speed == 1) begin : mediumPrefix
		logic [(2*m)*n -1:0] GT, PT;  // gen./prop. temp
		assign GT[n-1:0] = GI;
		assign PT[n-1:0] = PI;

		for (genvar l = 1; l <= m; l++) begin : levels1
			for (genvar k = 0; k < 2**(m-l); k++) begin : groups
				for (genvar i = 0; i < 2**l -1; i++) begin : bits
					if ((k* 2**l +i) < n) begin : white
						assign GT[l*n + k* 2**l +i] = GT[(l-1)*n + k* 2**l +i];
						assign PT[l*n + k* 2**l +i] = PT[(l-1)*n + k* 2**l +i];
					end // white
				end // bits
				if ((k* 2**l + 2**l -1) < n) begin : black
					assign GT[l*n + k* 2**l + 2**l -1] =
								GT[(l-1)*n + k* 2**l + 2**l - 1] |
							  | (  PT[(l-1)*n + k* 2**l + 2**l     -1] 
							     & GT[(l-1)*n + k* 2**l + 2**(l-1) -1]);
					assign PT[l*n + k* 2**l + 2**l -1] =
								PT[(l-1)*n + k*2**l + 2**l     -1] 
							  & PT[(l-1)*n + k*2**l + 2**(l-1) -1];
				end // black
			end
		end // level1
		for (genvar l = m +1; l < 2*m; l++) begin : levels2
			for (genvar i = 0; i < 2**(2*m -l); i++) begin : bits
				if (i < n) begin : white
					assign GT[l*n +i] = GT[(l-1)*n +i];
					assign PT[l*n +i] = PT[(l-1)*n +i];
				end // white
			end // bits
			for (genvar k = 1; k < 2**(l-m); k++) begin : groups
				if (l < 2*m -1) begin : empty
					for (genvar i = 0; i < 2**(2*m -l -1) -1; i++) begin : bits
						if ((k* 2**(2*m -l) +i) < n) begin : white
							assign GT[l*n + k* 2**(2*m -l) +i] = GT[(l-1)*n + k* 2**(2*m -l) +i];
							assign PT[l*n + k* 2**(2*m -l) +i] = PT[(l-1)*n + k* 2**(2*m -l) +i];
						end // white
					end
				end // empty
				if ((k* 2**(2*m -l) + 2**(2*m -l -1) -1) < n) begin : black
					assign GT[l*n + k* 2**(2*m -l) + 2**(2*m -l-1) -1] = 
								GT[(l-1)*n + k* 2**(2*m-l) + 2**(2*m -l-1) -1]
							  | (  PT[(l-1)*n + k* 2**(2*m-l) + 2**(2*m-l-1) -1] 
								 & GT[(l-1)*n + k* 2**(2*m-l) -1] );
					assign PT[l*n + k* 2**(2*m -l) + 2**(2*m -l-1) -1] = 
								PT[(l-1)*n + k* 2**(2*m -l) + 2**(2*m -l-1) -1]
							  & PT[(l-1)*n + k* 2**(2*m -l) -1];
				end // black
				for (genvar i = 2**(2*m -l-1); i < 2**(2*m -l); i++) begin : bits
					if ((k* 2**(2*m -l) +i) < n) begin : white
						assign GT[l*n + k* 2**(2*m -l) +i] = GT[(l-1)*n + k* 2**(2*m -l) +i];
						assign PT[l*n + k* 2**(2*m -l) +i] = PT[(l-1)*n + k* 2**(2*m -l) +i];
					end // white
				end
			end
		end // level2
		assign GO = GT[2*m*n -1 : (2*m -1) * n];
		assign PO = PT[2*m*n -1 : (2*m -1) * n];
	end  // Serial-prefix carry-lookahead structure
	else if (speed == 0) begin : slowPrefix
		logic [n-1:0] GT, PT;  // gen./prop. temp
		assign GT[0] = GI[0];
		assign PT[0] = PI[0];
		
		for (genvar i = 1; i < n; i++) begin : bits
			assign GT[i] = GI[i] | (PI[i] & GT[i-1]);
			assign PT[i] = PI[i] & PT[i-1];
		end
		assign GO = GT;
		assign PO = PT;
	end

endmodule


(* techmap_celltype = "lau_Add" *)
module lau_Add #(
	parameter int width = 8, // word width
	parameter int speed = 2  // performance parameter
) (
	input  logic [width-1:0] A,  // operands
	input  logic [width-1:0] B,
	output logic [width-1:0] S   // sum
);
	// Function: Binary adder using parallel-prefix carry-lookahead logic.

	logic [width-1:0] GI, PI;  // prefix gen./prop. in
	logic [width-1:0] GO, PO;  // prefix gen./prop. out
	logic [width-1:0] PT;  // adder propagate temp

	// Internal signals for unsigned operands
	logic [width-1:0] Auns, Buns, Suns;

	// default ripple-carry adder as slow implementation
	if (speed == 0) begin
		// type conversion: std_logic_vector -> unsigned
		assign Auns = A;
		assign Buns = B;

		logic [width:0] C;
		assign C[0] = 1'b0;

		// linear arrangement of full-adders
		for (genvar i = 0; i < width; i++) begin : linear
			lau_FullAdder fa (
				.A (A[i]),
				.B (B[i]),
				.CI(C[i]),
				.S (S[i]),
				.CO(C[i+1])
			);
		end

		// type conversion: unsigned -> std_logic_vector
		assign S = Suns;
	end else begin
		// parallel-prefix adders as medium and fast implementations

		// calculate prefix input generate/propagate signals
		assign GI = A & B;
		assign PI = A | B;
		// calculate adder propagate signals (PT = A xor B)
		assign PT = ~GI & PI;

		// calculate prefix output generate/propagate signals
		lau_PrefixAndOr #(
			.width(width),
			.speed(2)
		) i_prefix_and_or (
			.GI(GI),
			.PI(PI),
			.GO(GO),
			.PO(PO)
		);

		// calculate sum bits
		assign S = PT ^ {GO[width-2:0], 1'b0};
	end
endmodule



(* techmap_celltype = "lau_AddCsv" *)
module lau_AddCsv #(
	parameter int width = 8  // word width
) (
	input  logic [width-1:0] A1,  // operands
	input  logic [width-1:0] A2,
	input  logic [width-1:0] A3,
	output logic [width-1:0] S,   // sum / carry vector
	output logic [width-1:0] C
);

	logic [width-1:0] CT;  // unshifted output carries

	// carry-save addition using full-adders
	for (genvar i = 0; i < width; i++) begin : bits
		lau_FullAdder fa (
		.A  (A1[i]),
		.B  (A2[i]),
		.CI (A3[i]),
		.S  (S[i] ),
		.CO (CT[i])
		);
	end

	// rotate output carries by one position
	assign C = {CT[width-2:0], 1'b0};

endmodule


(* techmap_celltype = "lau_Cpr" *)
module lau_Cpr #(
	parameter int depth = 4, // number of input bits
	parameter int speed = 2  // performance parameter
) (
	input  logic [depth-1:0] A,   // input bits
	input  logic [depth-4:0] CI,  // intermediate carries in
	output logic             S,   // sum out
	output logic             C,   // carry out
	output logic [depth-4:0] CO   // intermediate carries out
);

	logic [depth+2*(depth-2)-1:0] F;  // FIFO vector of internal signals
	logic [            depth-3:0] CIT, COT;  // temp. int. carries

	// put input bits to beginning of FIFO vector
	assign F[depth-1:0] = A;

	// temporary intermediate carries in
	assign CIT[depth-3:0] = {1'b0, CI[depth-4:0]};

	// compressor with linear structure
	if (speed == 0) begin : slowCpr
		// first full-adder
		lau_FullAdder fa0 (
			.A (F[0]),
			.B (F[1]),
			.CI(F[2]),
			.S (F[depth]),
			.CO(COT[0])
		);

		// linear arrangement of full-adders
		for (genvar i = 1; i < depth-2; i++) begin : linear
			lau_FullAdder fa (
				.A (F[i+2]),
				.B (CIT[i-1]),
				.CI(F[depth+(i-1)*2]),
				.S (F[depth+i*2]),
				.CO(COT[i])
			);
		end
	end  // compressor with tree structure
	else begin : fastCpr
		// tree arrangement of full-adders

		for (genvar i = 0; i < depth-2; i++) begin : tree
			// take inputs from beginning of FIFO vector
			// attach sum output to end of FIFO vector
			// put carry output to intermediate carry-out
			lau_FullAdder fa (
				.A (F[i*3]),
				.B (F[i*3+1]),
				.CI(F[i*3+2]),
				.S (F[depth+i*2]),
				.CO(COT[i])
			);
			// attach intermediate carry-in to end of FIFO vector
			assign F[depth+i*2+1] = CIT[i];
		end
	end

	// intermediate carries out
	assign CO = COT[depth-4:0];

	// sum and carry out
	assign S  = F[3*depth-6];
	assign C  = COT[depth-3];

endmodule


(* techmap_celltype = "lau_AddMopCsv" *)
module lau_AddMopCsv #(
	parameter int width = 8, // word width
	parameter int depth = 4, // number of operands
	parameter int speed = 2  // performance parameter
) (
	input  logic [(depth*width)-1:0] A,  // operands
	output logic [        width-1:0] S,  // sum
	output logic [        width-1:0] C   // carry vector
);

	logic [      (depth*width)-1:0] AT;  // re-arranged inputs
	logic [(depth-3)*(width+1)-1:0] CI;  // intermediate carries
	logic [              width-1:0] CT;  // unshifted output carries

	wire [1023:0] _TECHMAP_DO_ = "proc;;";

	// re-arrange input bits: group bits of same magnitude
	always_comb begin : swizzle
		for (int k = 0; k < depth; k++) begin
			for (int i = 0; i < width; i++) begin
				AT[i*depth+k] = A[k*width+i];
			end
		end
	end

	// set intermediate carries into first slice
	assign CI[depth-4:0] = 1'b0;

	// carry-save addition using (m,2) compressor bit-slices
	for (genvar i = 0; i < width; i++) begin : bits
		lau_Cpr #(
			.depth(depth),
			.speed(speed)
		) slice (
			.A (AT[(i+1)*depth -1 : i*depth]),
			.CI(CI[(i+1)*(depth-3) -1 : i*(depth-3)]),
			.S (S[i]),
			.C (CT[i]),
			.CO(CI[(i+2)*(depth-3) -1 : (i+1)*(depth-3)])
		);
	end

	// shift left output carries by one position
	assign C = {CT[width-2:0], 1'b0};

endmodule



(* techmap_celltype = "lau_MulPPGenSgn" *)
module lau_MulPPGenSgn #(
	parameter int widthX = 8,  // word width of X
	parameter int widthY = 8   // word width of Y
) (
	input logic [widthX-1:0] X,  // multiplier
	input logic [widthY-1:0] Y,  // multiplicand
	output logic [(widthX+2)*(widthX+widthY)-1:0] PP  // partial products
);

	localparam int unsigned widthP = widthX + widthY;  // width of single part. prod.

	wire [1023:0] _TECHMAP_DO_ = "proc;;";

	always_comb begin
		logic [(widthX+2)*widthP-1:0] ppt;  // partial product vector

		// Initialize ppt to all zeros
		ppt = '0;

		// Generate partial products x(i)y(k)
		for (int i = 0; i < widthX-1; i++) begin
			for (int k = 0; k < widthY-1; k++) begin
				ppt[i*widthP+i+k] = X[i] & Y[k];
			end
			ppt[i*widthP+i+widthY-1] = ~X[i] & Y[widthY-1];
		end

		for (int k = 0; k < widthY-1; k++) begin
			ppt[(widthX-1)*widthP+(widthX-1)+k] = X[widthX-1] & ~Y[k];
		end
		ppt[(widthX-1)*widthP+(widthX-1)+widthY-1] = X[widthX-1] & Y[widthY-1];

		// Generate correction terms
		ppt[(widthX+1)*widthP-2] = ~X[widthX-1];
		ppt[widthX*widthP+widthX-1] = X[widthX-1];
		ppt[(widthX+2)*widthP-1] = 1'b1;
		ppt[(widthX+2)*widthP-2] = ~Y[widthY-1];
		ppt[(widthX+1)*widthP+widthY-1] = Y[widthY-1];

		// Assign output
		PP = ppt;
	end

endmodule


(* techmap_celltype = "lau_MulPPGenUns" *)
module lau_MulPPGenUns #(
	parameter widthX = 8,  // word width of X
	parameter widthY = 8
)  // word width of Y
(
	input logic [widthX-1:0] X,  // multiplier
	input logic [widthY-1:0] Y,  // multiplicand
	output logic [widthX*(widthX+widthY)-1:0] PP
);

	// width of single part. prod.
	localparam widthP = widthX + widthY;

	logic [widthX*widthP-1:0] ppt;  // partial products

	wire [1023:0] _TECHMAP_DO_ = "proc;;";

	always_comb begin : ppGen
		ppt = '0;  // partial products

		// partial products x(i)y(k)
		for (int i = 0; i < widthX; i++) begin
			for (int k = 0; k < widthY; k++) begin
				ppt[i*widthP+i+k] = X[i] & Y[k];
			end
		end

		PP = ppt;
	end

endmodule



(* techmap_celltype = "lau_MulSgn" *)
module lau_MulSgn #(
	parameter int widthX = 8, // word width of X (X <= Y)
	parameter int widthY = 8, // word width of Y
	parameter int speed  = 2  // performance parameter
) (
	input logic [widthX-1:0] X,  // multiplier
	input logic [widthY-1:0] Y,  // multiplicand
	output logic [widthX+widthY-1:0] P  // product
);

	logic [(widthX+2)*(widthX+widthY)-1:0] PP;  // partial products
	logic [widthX+widthY-1:0] ST, CT;  // intermediate sum/carry bits

	// Generation of partial products
	lau_MulPPGenSgn #(
		.widthX(widthX),
		.widthY(widthY)
	) ppGen (
		.X (X),
		.Y (Y),
		.PP(PP)
	);

	// Carry-save addition of partial products
	lau_AddMopCsv #(
		.width(widthX+widthY),
		.depth(widthX+2),
		.speed (speed)
	) csvAdd (
		.A(PP),
		.S(ST),
		.C(CT)
	);

	// Final carry-propagate addition
	lau_Add #(
		.width(widthX + widthY),
		.speed(speed)
	) cpAdd (
		.A(ST),
		.B(CT),
		.S(P)
	);

endmodule



(* techmap_celltype = "lau_MulUns" *)
module lau_MulUns #(
	parameter int widthX = 16, // word width of X (X <= Y)
	parameter int widthY = 16, // word width of Y
	parameter int speed  = 2   // performance parameter
) (
	input logic [widthX-1:0] X,  // multiplier
	input logic [widthY-1:0] Y,  // multiplicand
	output logic [widthX+widthY-1:0] P  // product
);

	logic [widthX*(widthX+widthY)-1:0] PP;  // partial products
	logic [widthX+widthY-1:0] ST, CT;  // intermediate sum/carry bits

	// Generation of partial products
	lau_MulPPGenUns #(
		.widthX(widthX),
		.widthY(widthY)
	) ppGen (
		.X (X),
		.Y (Y),
		.PP(PP)
	);

	// Carry-save addition of partial products
	lau_AddMopCsv #(
		.width(widthX+widthY),
		.depth(widthX),
		.speed (speed)
	) csvAdd (
		.A(PP),
		.S(ST),
		.C(CT)
	);

	// Final carry-propagate addition
	lau_Add #(
		.width(widthX+widthY),
		.speed(speed)
	) cpAdd (
		.A(ST),
		.B(CT),
		.S(P)
	);

endmodule



// --------------------------------------------------------
// Library of Arithmetic Units Wrappers
// --------------------------------------------------------

(* techmap_celltype = "$add" *)
module _lau_add (A, B, Y);
	parameter A_SIGNED = 0;
	parameter B_SIGNED = 0;
	parameter A_WIDTH  = 1;
	parameter B_WIDTH  = 1;
	parameter Y_WIDTH  = 1;

	(* force_downto *)
	input [A_WIDTH-1:0] A;
	(* force_downto *)
	input [B_WIDTH-1:0] B;
	(* force_downto *)
	output [Y_WIDTH-1:0] Y;

	// max width of operands, add another bit if the output is larger
	localparam MAX_WIDTH = `MAX(A_WIDTH, B_WIDTH);
	localparam INP_WIDTH = (Y_WIDTH > MAX_WIDTH) ? (MAX_WIDTH+1) : MAX_WIDTH;

	// (sign) extend operands
	wire [INP_WIDTH-1:0] A_ext;
	wire [INP_WIDTH-1:0] B_ext;
	wire [INP_WIDTH-1:0] Y_ext;

	assign A_ext = (A_SIGNED) ? $signed(A) : A;
	assign B_ext = (A_SIGNED) ? $signed(B) : B;

	lau_Add #(.width(INP_WIDTH), .speed(2)) i_lau_add (.A(A_ext), .B(B_ext), .S(Y_ext));
	assign Y = $signed(Y_ext);

endmodule



// (* techmap_celltype = "$mul" *)
// module _lau_mul (A, B, Y);
// 	parameter A_SIGNED = 0;
// 	parameter B_SIGNED = 0;
// 	parameter A_WIDTH  = 1;
// 	parameter B_WIDTH  = 1;
// 	parameter Y_WIDTH  = 1;

// 	(* force_downto *)
// 	input [A_WIDTH-1:0] A;
// 	(* force_downto *)
// 	input [B_WIDTH-1:0] B;
// 	(* force_downto *)
// 	output [Y_WIDTH-1:0] Y;

// 	// max width of operands, add another bit if the output is larger
// 	localparam MAX_WIDTH = `MAX(A_WIDTH, B_WIDTH);
// 	localparam INP_WIDTH = (Y_WIDTH > MAX_WIDTH) ? Y_WIDTH : MAX_WIDTH;

// 	// (sign) extend operands
// 	wire [INP_WIDTH-1:0] A_ext;
// 	wire [INP_WIDTH-1:0] B_ext;

// 	assign A_ext = (A_SIGNED) ? $signed(A) : A;
// 	assign B_ext = (A_SIGNED) ? $signed(B) : B;

// 	if(A_SIGNED || B_SIGNED) begin
// 		lau_MulSgn #(
// 			.widthX(INP_WIDTH),
// 			.widthY(Y_WIDTH),
// 			.speed (2)
// 		) i_lau_mul (
// 			.X(A_ext),
// 			.Y(B_ext),
// 			.P(Y)
// 		);
// 	end else begin 
// 		lau_MulUns #(
// 			.widthX(INP_WIDTH),
// 			.widthY(Y_WIDTH),
// 			.speed (2)
// 		) i_lau_mul (
// 			.X(A_ext),
// 			.Y(B_ext),
// 			.P(Y)
// 		);
// 	end

// endmodule