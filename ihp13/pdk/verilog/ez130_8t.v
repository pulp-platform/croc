// Modified for Croc by Philippe Sauter for Verilator compatibility:
// the delayed timing-check signals are tied to their inputs and DFFQX1/DFFRQX1
// use a behavioral flop with nonblocking assignment instead of the UDP, whose
// blocking-assignment lowering races in flop chains (VERILATOR only).
// Copyright (c) 2026 ETH Zurich and University of Bologna.
// SPDX-License-Identifier: Apache-2.0

////////////////////////////////////////////////////////////////////////
//
// Copyright 2026 ETH Zurich
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//
// If you use the EZ130 8T library (or parts of it),
// then please cite this reference:
//
// @article{castaneda2026ez130t8, 
//   author = {Casta\~neda, Oscar and Recchioni, Lavinia and
//     Senti, Tobias and Cahenzli, Flurin and Ferroni, Marco and
//     Heekenjann, Thorben and Kenter, Robert and Odermatt, Stefan and
//     Richner, Daniel and Altendorfer, Gabriel and Cannone, Davide and
//     Correa, Miguel and Herger, Ivan and Kr\"oger, Lars and
//     Nanzer, Nicolas and Nonaca, Darja and Reinwardt, Christopher and
//     Winklhofer, Lukas and Zelioli, Enrico and Zhang, Yiheng and
//     Zhang, Yingxue and Keller, Domenic and Mirfarshbafan, Seyed Hadi
//     and Jiang, Zerun and Muheim, Beat and Rubino, Arianna and
//     Guichemerre, J\'er\'emy and G\"urkaynak, Frank K. and
//     Studer, Christoph},
//   title = {An Open-Source Standard-Cell Library for {IHP} 130\,nm
//     Developed by Students},
//   journal = {arXiv preprint arXiv:2609.29965},
//   month = {September},
//   year = {2026},
//   url = {https://arxiv.org/abs/2609.29965}
// }
//
////////////////////////////////////////////////////////////////////////

// Verilog for library ez130_8t created by Liberate 23.2.0.088.isr10 on Sun Sep 13 21:37:12 2026 for SDF version 3.0

// type:  
`timescale 1ns/10ps
`celldefine
module AND2X1 (Y, A, B);
	output Y;
	input A, B;

	// Function
	and (Y, A, B);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AND2X1P5 (Y, A, B);
	output Y;
	input A, B;

	// Function
	and (Y, A, B);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AND2X2 (Y, A, B);
	output Y;
	input A, B;

	// Function
	and (Y, A, B);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AND2X3 (Y, A, B);
	output Y;
	input A, B;

	// Function
	and (Y, A, B);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AND3BX1 (Y, AB, B, C);
	output Y;
	input AB, B, C;

	// Function
	wire AB__bar;

	not (AB__bar, AB);
	and (Y, AB__bar, B, C);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AND3BX2 (Y, AB, B, C);
	output Y;
	input AB, B, C;

	// Function
	wire AB__bar;

	not (AB__bar, AB);
	and (Y, AB__bar, B, C);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AND3X1 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	and (Y, A, B, C);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AND3X2 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	and (Y, A, B, C);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AND4X1 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	and (Y, A, B, C, D);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AND4X2 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	and (Y, A, B, C, D);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module ANTENNA2 (A);
	input A;
	// Timing
	specify
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module ANTENNA4 (A);
	input A;
	// Timing
	specify
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module ANTENNA8 (A);
	input A;
	// Timing
	specify
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AO211X1 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire int_fwire_0;

	and (int_fwire_0, A, B);
	or (Y, int_fwire_0, C, D);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && D == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AO211X2 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire int_fwire_0;

	and (int_fwire_0, A, B);
	or (Y, int_fwire_0, C, D);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && D == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AO21X2 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	wire int_fwire_0;

	and (int_fwire_0, A, B);
	or (Y, int_fwire_0, C);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AO22X1 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire int_fwire_0, int_fwire_1;

	and (int_fwire_0, C, D);
	and (int_fwire_1, A, B);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && C == 1'b1 && D == 1'b0)
			(A => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b1)
			(A => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b0)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (A == 1'b1 && C == 1'b1 && D == 1'b0)
			(B => Y) = 0;
		if (A == 1'b1 && C == 1'b0 && D == 1'b1)
			(B => Y) = 0;
		if (A == 1'b1 && C == 1'b0 && D == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AO22X2 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire int_fwire_0, int_fwire_1;

	and (int_fwire_0, C, D);
	and (int_fwire_1, A, B);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && C == 1'b1 && D == 1'b0)
			(A => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b1)
			(A => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b0)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (A == 1'b1 && C == 1'b1 && D == 1'b0)
			(B => Y) = 0;
		if (A == 1'b1 && C == 1'b0 && D == 1'b1)
			(B => Y) = 0;
		if (A == 1'b1 && C == 1'b0 && D == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AO31X1 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire int_fwire_0;

	and (int_fwire_0, A, B, C);
	or (Y, int_fwire_0, D);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (((A == 1'b0) && (B == 1'b1) && (C == 1'b0)) || ((A == 1'b0) && (B == 1'b0) && (C == 1'b1)))
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AO31X2 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire int_fwire_0;

	and (int_fwire_0, A, B, C);
	or (Y, int_fwire_0, D);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (((A == 1'b0) && (B == 1'b1) && (C == 1'b0)) || ((A == 1'b0) && (B == 1'b0) && (C == 1'b1)))
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOAI211X1 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, int_fwire_0, int_fwire_1;

	not (D__bar, D);
	not (C__bar, C);
	not (B__bar, B);
	and (int_fwire_0, B__bar, C__bar);
	not (A__bar, A);
	and (int_fwire_1, A__bar, C__bar);
	or (Y, int_fwire_1, int_fwire_0, D__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOAI211X2 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, int_fwire_0, int_fwire_1;

	not (D__bar, D);
	not (C__bar, C);
	not (B__bar, B);
	and (int_fwire_0, B__bar, C__bar);
	not (A__bar, A);
	and (int_fwire_1, A__bar, C__bar);
	or (Y, int_fwire_1, int_fwire_0, D__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI211X1 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, int_fwire_0, int_fwire_1;

	not (D__bar, D);
	not (C__bar, C);
	not (B__bar, B);
	and (int_fwire_0, B__bar, C__bar, D__bar);
	not (A__bar, A);
	and (int_fwire_1, A__bar, C__bar, D__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && D == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI211X2 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, int_fwire_0, int_fwire_1;

	not (D__bar, D);
	not (C__bar, C);
	not (B__bar, B);
	and (int_fwire_0, B__bar, C__bar, D__bar);
	not (A__bar, A);
	and (int_fwire_1, A__bar, C__bar, D__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && D == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI21BX1 (Y, A, B, CB);
	output Y;
	input A, B, CB;

	// Function
	wire A__bar, B__bar, int_fwire_0;
	wire int_fwire_1;

	not (B__bar, B);
	and (int_fwire_0, B__bar, CB);
	not (A__bar, A);
	and (int_fwire_1, A__bar, CB);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b0)
			(CB => Y) = 0;
		if (A == 1'b0 && B == 1'b1)
			(CB => Y) = 0;
		if (A == 1'b0 && B == 1'b0)
			(CB => Y) = 0;
		ifnone (CB => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI21BX2 (Y, A, B, CB);
	output Y;
	input A, B, CB;

	// Function
	wire A__bar, B__bar, int_fwire_0;
	wire int_fwire_1;

	not (B__bar, B);
	and (int_fwire_0, B__bar, CB);
	not (A__bar, A);
	and (int_fwire_1, A__bar, CB);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b0)
			(CB => Y) = 0;
		if (A == 1'b0 && B == 1'b1)
			(CB => Y) = 0;
		if (A == 1'b0 && B == 1'b0)
			(CB => Y) = 0;
		ifnone (CB => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI21X1 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	wire A__bar, B__bar, C__bar;
	wire int_fwire_0, int_fwire_1;

	not (C__bar, C);
	not (B__bar, B);
	and (int_fwire_0, B__bar, C__bar);
	not (A__bar, A);
	and (int_fwire_1, A__bar, C__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI21X2 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	wire A__bar, B__bar, C__bar;
	wire int_fwire_0, int_fwire_1;

	not (C__bar, C);
	not (B__bar, B);
	and (int_fwire_0, B__bar, C__bar);
	not (A__bar, A);
	and (int_fwire_1, A__bar, C__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI221X1 (Y, A, B, C, D, E);
	output Y;
	input A, B, C, D, E;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, E__bar, int_fwire_0;
	wire int_fwire_1, int_fwire_2, int_fwire_3;

	not (E__bar, E);
	not (D__bar, D);
	not (B__bar, B);
	and (int_fwire_0, B__bar, D__bar, E__bar);
	not (C__bar, C);
	and (int_fwire_1, B__bar, C__bar, E__bar);
	not (A__bar, A);
	and (int_fwire_2, A__bar, D__bar, E__bar);
	and (int_fwire_3, A__bar, C__bar, E__bar);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && C == 1'b1 && D == 1'b0 && E == 1'b0)
			(A => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b1 && E == 1'b0)
			(A => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b0 && E == 1'b0)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (A == 1'b1 && C == 1'b1 && D == 1'b0 && E == 1'b0)
			(B => Y) = 0;
		if (A == 1'b1 && C == 1'b0 && D == 1'b1 && E == 1'b0)
			(B => Y) = 0;
		if (A == 1'b1 && C == 1'b0 && D == 1'b0 && E == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b1 && E == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b1 && E == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && D == 1'b1 && E == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1 && E == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1 && E == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b1 && E == 1'b0)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b1 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b0 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b0 && D == 1'b0)
			(E => Y) = 0;
		ifnone (E => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI221X2 (Y, A, B, C, D, E);
	output Y;
	input A, B, C, D, E;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, E__bar, int_fwire_0;
	wire int_fwire_1, int_fwire_2, int_fwire_3;

	not (E__bar, E);
	not (D__bar, D);
	not (B__bar, B);
	and (int_fwire_0, B__bar, D__bar, E__bar);
	not (C__bar, C);
	and (int_fwire_1, B__bar, C__bar, E__bar);
	not (A__bar, A);
	and (int_fwire_2, A__bar, D__bar, E__bar);
	and (int_fwire_3, A__bar, C__bar, E__bar);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && C == 1'b1 && D == 1'b0 && E == 1'b0)
			(A => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b1 && E == 1'b0)
			(A => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b0 && E == 1'b0)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (A == 1'b1 && C == 1'b1 && D == 1'b0 && E == 1'b0)
			(B => Y) = 0;
		if (A == 1'b1 && C == 1'b0 && D == 1'b1 && E == 1'b0)
			(B => Y) = 0;
		if (A == 1'b1 && C == 1'b0 && D == 1'b0 && E == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b1 && E == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b1 && E == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && D == 1'b1 && E == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1 && E == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1 && E == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b1 && E == 1'b0)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b1 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b0 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b0 && D == 1'b0)
			(E => Y) = 0;
		ifnone (E => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI221X3 (Y, A, B, C, D, E);
	output Y;
	input A, B, C, D, E;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, E__bar, int_fwire_0;
	wire int_fwire_1, int_fwire_2, int_fwire_3;

	not (E__bar, E);
	not (D__bar, D);
	not (B__bar, B);
	and (int_fwire_0, B__bar, D__bar, E__bar);
	not (C__bar, C);
	and (int_fwire_1, B__bar, C__bar, E__bar);
	not (A__bar, A);
	and (int_fwire_2, A__bar, D__bar, E__bar);
	and (int_fwire_3, A__bar, C__bar, E__bar);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && C == 1'b1 && D == 1'b0 && E == 1'b0)
			(A => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b1 && E == 1'b0)
			(A => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b0 && E == 1'b0)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (A == 1'b1 && C == 1'b1 && D == 1'b0 && E == 1'b0)
			(B => Y) = 0;
		if (A == 1'b1 && C == 1'b0 && D == 1'b1 && E == 1'b0)
			(B => Y) = 0;
		if (A == 1'b1 && C == 1'b0 && D == 1'b0 && E == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b1 && E == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b1 && E == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && D == 1'b1 && E == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1 && E == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1 && E == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b1 && E == 1'b0)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b1 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b0 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b0 && D == 1'b0)
			(E => Y) = 0;
		ifnone (E => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI22X1 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, int_fwire_0, int_fwire_1;
	wire int_fwire_2, int_fwire_3;

	not (D__bar, D);
	not (B__bar, B);
	and (int_fwire_0, B__bar, D__bar);
	not (C__bar, C);
	and (int_fwire_1, B__bar, C__bar);
	not (A__bar, A);
	and (int_fwire_2, A__bar, D__bar);
	and (int_fwire_3, A__bar, C__bar);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && C == 1'b1 && D == 1'b0)
			(A => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b1)
			(A => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b0)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (A == 1'b1 && C == 1'b1 && D == 1'b0)
			(B => Y) = 0;
		if (A == 1'b1 && C == 1'b0 && D == 1'b1)
			(B => Y) = 0;
		if (A == 1'b1 && C == 1'b0 && D == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI22X1P5 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, int_fwire_0, int_fwire_1;
	wire int_fwire_2, int_fwire_3;

	not (D__bar, D);
	not (B__bar, B);
	and (int_fwire_0, B__bar, D__bar);
	not (C__bar, C);
	and (int_fwire_1, B__bar, C__bar);
	not (A__bar, A);
	and (int_fwire_2, A__bar, D__bar);
	and (int_fwire_3, A__bar, C__bar);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && C == 1'b1 && D == 1'b0)
			(A => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b1)
			(A => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b0)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (A == 1'b1 && C == 1'b1 && D == 1'b0)
			(B => Y) = 0;
		if (A == 1'b1 && C == 1'b0 && D == 1'b1)
			(B => Y) = 0;
		if (A == 1'b1 && C == 1'b0 && D == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI22X2 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, int_fwire_0, int_fwire_1;
	wire int_fwire_2, int_fwire_3;

	not (D__bar, D);
	not (B__bar, B);
	and (int_fwire_0, B__bar, D__bar);
	not (C__bar, C);
	and (int_fwire_1, B__bar, C__bar);
	not (A__bar, A);
	and (int_fwire_2, A__bar, D__bar);
	and (int_fwire_3, A__bar, C__bar);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && C == 1'b1 && D == 1'b0)
			(A => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b1)
			(A => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b0)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (A == 1'b1 && C == 1'b1 && D == 1'b0)
			(B => Y) = 0;
		if (A == 1'b1 && C == 1'b0 && D == 1'b1)
			(B => Y) = 0;
		if (A == 1'b1 && C == 1'b0 && D == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI2B1X1 (Y, AB, B, C);
	output Y;
	input AB, B, C;

	// Function
	wire B__bar, C__bar, int_fwire_0;
	wire int_fwire_1;

	not (C__bar, C);
	not (B__bar, B);
	and (int_fwire_0, B__bar, C__bar);
	and (int_fwire_1, AB, C__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
		if (AB == 1'b1 && B == 1'b1)
			(C => Y) = 0;
		if (AB == 1'b1 && B == 1'b0)
			(C => Y) = 0;
		if (AB == 1'b0 && B == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI2B1X2 (Y, AB, B, C);
	output Y;
	input AB, B, C;

	// Function
	wire B__bar, C__bar, int_fwire_0;
	wire int_fwire_1;

	not (C__bar, C);
	not (B__bar, B);
	and (int_fwire_0, B__bar, C__bar);
	and (int_fwire_1, AB, C__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
		if (AB == 1'b1 && B == 1'b1)
			(C => Y) = 0;
		if (AB == 1'b1 && B == 1'b0)
			(C => Y) = 0;
		if (AB == 1'b0 && B == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI2B2BX1 (Y, AB, B, CB, D);
	output Y;
	input AB, B, CB, D;

	// Function
	wire B__bar, D__bar, int_fwire_0;
	wire int_fwire_1, int_fwire_2, int_fwire_3;

	not (D__bar, D);
	not (B__bar, B);
	and (int_fwire_0, B__bar, D__bar);
	and (int_fwire_1, B__bar, CB);
	and (int_fwire_2, AB, D__bar);
	and (int_fwire_3, AB, CB);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && CB == 1'b1 && D == 1'b1)
			(AB => Y) = 0;
		if (B == 1'b1 && CB == 1'b1 && D == 1'b0)
			(AB => Y) = 0;
		if (B == 1'b1 && CB == 1'b0 && D == 1'b0)
			(AB => Y) = 0;
		ifnone (AB => Y) = 0;
		if (AB == 1'b0 && CB == 1'b1 && D == 1'b1)
			(B => Y) = 0;
		if (AB == 1'b0 && CB == 1'b1 && D == 1'b0)
			(B => Y) = 0;
		if (AB == 1'b0 && CB == 1'b0 && D == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (AB == 1'b1 && B == 1'b1 && D == 1'b1)
			(CB => Y) = 0;
		if (AB == 1'b1 && B == 1'b0 && D == 1'b1)
			(CB => Y) = 0;
		if (AB == 1'b0 && B == 1'b0 && D == 1'b1)
			(CB => Y) = 0;
		ifnone (CB => Y) = 0;
		if (AB == 1'b1 && B == 1'b1 && CB == 1'b0)
			(D => Y) = 0;
		if (AB == 1'b1 && B == 1'b0 && CB == 1'b0)
			(D => Y) = 0;
		if (AB == 1'b0 && B == 1'b0 && CB == 1'b0)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI2B2BX2 (Y, AB, B, CB, D);
	output Y;
	input AB, B, CB, D;

	// Function
	wire B__bar, D__bar, int_fwire_0;
	wire int_fwire_1, int_fwire_2, int_fwire_3;

	not (D__bar, D);
	not (B__bar, B);
	and (int_fwire_0, B__bar, D__bar);
	and (int_fwire_1, B__bar, CB);
	and (int_fwire_2, AB, D__bar);
	and (int_fwire_3, AB, CB);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && CB == 1'b1 && D == 1'b1)
			(AB => Y) = 0;
		if (B == 1'b1 && CB == 1'b1 && D == 1'b0)
			(AB => Y) = 0;
		if (B == 1'b1 && CB == 1'b0 && D == 1'b0)
			(AB => Y) = 0;
		ifnone (AB => Y) = 0;
		if (AB == 1'b0 && CB == 1'b1 && D == 1'b1)
			(B => Y) = 0;
		if (AB == 1'b0 && CB == 1'b1 && D == 1'b0)
			(B => Y) = 0;
		if (AB == 1'b0 && CB == 1'b0 && D == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (AB == 1'b1 && B == 1'b1 && D == 1'b1)
			(CB => Y) = 0;
		if (AB == 1'b1 && B == 1'b0 && D == 1'b1)
			(CB => Y) = 0;
		if (AB == 1'b0 && B == 1'b0 && D == 1'b1)
			(CB => Y) = 0;
		ifnone (CB => Y) = 0;
		if (AB == 1'b1 && B == 1'b1 && CB == 1'b0)
			(D => Y) = 0;
		if (AB == 1'b1 && B == 1'b0 && CB == 1'b0)
			(D => Y) = 0;
		if (AB == 1'b0 && B == 1'b0 && CB == 1'b0)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI2B2X1 (Y, AB, B, C, D);
	output Y;
	input AB, B, C, D;

	// Function
	wire B__bar, C__bar, D__bar;
	wire int_fwire_0, int_fwire_1, int_fwire_2;
	wire int_fwire_3;

	not (D__bar, D);
	not (B__bar, B);
	and (int_fwire_0, B__bar, D__bar);
	not (C__bar, C);
	and (int_fwire_1, B__bar, C__bar);
	and (int_fwire_2, AB, D__bar);
	and (int_fwire_3, AB, C__bar);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && C == 1'b1 && D == 1'b0)
			(AB => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b1)
			(AB => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b0)
			(AB => Y) = 0;
		ifnone (AB => Y) = 0;
		if (AB == 1'b0 && C == 1'b1 && D == 1'b0)
			(B => Y) = 0;
		if (AB == 1'b0 && C == 1'b0 && D == 1'b1)
			(B => Y) = 0;
		if (AB == 1'b0 && C == 1'b0 && D == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (AB == 1'b1 && B == 1'b1 && D == 1'b1)
			(C => Y) = 0;
		if (AB == 1'b1 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		if (AB == 1'b0 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (AB == 1'b1 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (AB == 1'b1 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (AB == 1'b0 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI2B2X2 (Y, AB, B, C, D);
	output Y;
	input AB, B, C, D;

	// Function
	wire B__bar, C__bar, D__bar;
	wire int_fwire_0, int_fwire_1, int_fwire_2;
	wire int_fwire_3;

	not (D__bar, D);
	not (B__bar, B);
	and (int_fwire_0, B__bar, D__bar);
	not (C__bar, C);
	and (int_fwire_1, B__bar, C__bar);
	and (int_fwire_2, AB, D__bar);
	and (int_fwire_3, AB, C__bar);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && C == 1'b1 && D == 1'b0)
			(AB => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b1)
			(AB => Y) = 0;
		if (B == 1'b1 && C == 1'b0 && D == 1'b0)
			(AB => Y) = 0;
		ifnone (AB => Y) = 0;
		if (AB == 1'b0 && C == 1'b1 && D == 1'b0)
			(B => Y) = 0;
		if (AB == 1'b0 && C == 1'b0 && D == 1'b1)
			(B => Y) = 0;
		if (AB == 1'b0 && C == 1'b0 && D == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (AB == 1'b1 && B == 1'b1 && D == 1'b1)
			(C => Y) = 0;
		if (AB == 1'b1 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		if (AB == 1'b0 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (AB == 1'b1 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (AB == 1'b1 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (AB == 1'b0 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI2BB2X1 (Y, AB, BB, C, D);
	output Y;
	input AB, BB, C, D;

	// Function
	wire C__bar, D__bar, int_fwire_0;
	wire int_fwire_1, int_fwire_2, int_fwire_3;

	not (D__bar, D);
	and (int_fwire_0, BB, D__bar);
	not (C__bar, C);
	and (int_fwire_1, BB, C__bar);
	and (int_fwire_2, AB, D__bar);
	and (int_fwire_3, AB, C__bar);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (BB == 1'b0 && C == 1'b1 && D == 1'b0)
			(AB => Y) = 0;
		if (BB == 1'b0 && C == 1'b0 && D == 1'b1)
			(AB => Y) = 0;
		if (BB == 1'b0 && C == 1'b0 && D == 1'b0)
			(AB => Y) = 0;
		ifnone (AB => Y) = 0;
		if (AB == 1'b0 && C == 1'b1 && D == 1'b0)
			(BB => Y) = 0;
		if (AB == 1'b0 && C == 1'b0 && D == 1'b1)
			(BB => Y) = 0;
		if (AB == 1'b0 && C == 1'b0 && D == 1'b0)
			(BB => Y) = 0;
		ifnone (BB => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI2BB2X2 (Y, AB, BB, C, D);
	output Y;
	input AB, BB, C, D;

	// Function
	wire C__bar, D__bar, int_fwire_0;
	wire int_fwire_1, int_fwire_2, int_fwire_3;

	not (D__bar, D);
	and (int_fwire_0, BB, D__bar);
	not (C__bar, C);
	and (int_fwire_1, BB, C__bar);
	and (int_fwire_2, AB, D__bar);
	and (int_fwire_3, AB, C__bar);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (BB == 1'b0 && C == 1'b1 && D == 1'b0)
			(AB => Y) = 0;
		if (BB == 1'b0 && C == 1'b0 && D == 1'b1)
			(AB => Y) = 0;
		if (BB == 1'b0 && C == 1'b0 && D == 1'b0)
			(AB => Y) = 0;
		ifnone (AB => Y) = 0;
		if (AB == 1'b0 && C == 1'b1 && D == 1'b0)
			(BB => Y) = 0;
		if (AB == 1'b0 && C == 1'b0 && D == 1'b1)
			(BB => Y) = 0;
		if (AB == 1'b0 && C == 1'b0 && D == 1'b0)
			(BB => Y) = 0;
		ifnone (BB => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI31X1 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, int_fwire_0, int_fwire_1;
	wire int_fwire_2;

	not (D__bar, D);
	not (C__bar, C);
	and (int_fwire_0, C__bar, D__bar);
	not (B__bar, B);
	and (int_fwire_1, B__bar, D__bar);
	not (A__bar, A);
	and (int_fwire_2, A__bar, D__bar);
	or (Y, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (((A == 1'b0) && (B == 1'b1) && (C == 1'b0)) || ((A == 1'b0) && (B == 1'b0) && (C == 1'b1)))
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module AOI31X2 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, int_fwire_0, int_fwire_1;
	wire int_fwire_2;

	not (D__bar, D);
	not (C__bar, C);
	and (int_fwire_0, C__bar, D__bar);
	not (B__bar, B);
	and (int_fwire_1, B__bar, D__bar);
	not (A__bar, A);
	and (int_fwire_2, A__bar, D__bar);
	or (Y, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (((A == 1'b0) && (B == 1'b1) && (C == 1'b0)) || ((A == 1'b0) && (B == 1'b0) && (C == 1'b1)))
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module BUFX1 (Y, A);
	output Y;
	input A;

	// Function
	buf (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module BUFX12 (Y, A);
	output Y;
	input A;

	// Function
	buf (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module BUFX16 (Y, A);
	output Y;
	input A;

	// Function
	buf (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module BUFX2 (Y, A);
	output Y;
	input A;

	// Function
	buf (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module BUFX24 (Y, A);
	output Y;
	input A;

	// Function
	buf (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module BUFX3 (Y, A);
	output Y;
	input A;

	// Function
	buf (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module BUFX32 (Y, A);
	output Y;
	input A;

	// Function
	buf (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module BUFX4 (Y, A);
	output Y;
	input A;

	// Function
	buf (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module BUFX44 (Y, A);
	output Y;
	input A;

	// Function
	buf (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module BUFX48 (Y, A);
	output Y;
	input A;

	// Function
	buf (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module BUFX6 (Y, A);
	output Y;
	input A;

	// Function
	buf (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module BUFX64 (Y, A);
	output Y;
	input A;

	// Function
	buf (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module BUFX8 (Y, A);
	output Y;
	input A;

	// Function
	buf (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module CGTSX1 (ECK, E, SE, CK);
	output ECK;
	input E, SE, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_E = E, delayed_SE = SE, delayed_CK = CK;
`else
	wire delayed_E, delayed_SE, delayed_CK;
`endif

	// Function
	wire int_fwire_clk, int_fwire_QE, int_fwire_test;

	not (int_fwire_clk, delayed_CK);
	or (int_fwire_test, delayed_E, delayed_SE);
	altos_latch (int_fwire_QE, notifier, int_fwire_clk, int_fwire_test);
	and (ECK, delayed_CK, int_fwire_QE);

	// Timing

	// Additional timing wires
	wire COND_NOT_E, COND_NOT_E_AND_NOT_SE, COND_NOT_SE;
	wire COND_OP_E_CP_OR_OP_NOT_E_AND_SE_CP, int_twire_0;


	// Additional timing gates
	not (COND_NOT_SE, SE);
	not (COND_NOT_E, E);
	and (int_twire_0, COND_NOT_E, SE);
	or (COND_OP_E_CP_OR_OP_NOT_E_AND_SE_CP, E, int_twire_0);
	and (COND_NOT_E_AND_NOT_SE, COND_NOT_E, COND_NOT_SE);

	specify
		if (((E == 1'b1)) || ((E == 1'b0) && (SE == 1'b1)))
			(negedge CK => (ECK+:1'b0)) = 0;
		if (E == 1'b0 && SE == 1'b0)
			(negedge CK => (ECK+:1'b0)) = 0;
		ifnone (CK => ECK) = 0;
		$setuphold (posedge CK &&& COND_NOT_SE == 1'b1, posedge E &&& COND_NOT_SE == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK &&& COND_NOT_SE == 1'b1, negedge E &&& COND_NOT_SE == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK, posedge E, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK, negedge E, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK &&& COND_NOT_E == 1'b1, posedge SE &&& COND_NOT_E == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$setuphold (posedge CK &&& COND_NOT_E == 1'b1, negedge SE &&& COND_NOT_E == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$setuphold (posedge CK, posedge SE, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$setuphold (posedge CK, negedge SE, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$width (posedge CK &&& COND_OP_E_CP_OR_OP_NOT_E_AND_SE_CP == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_OP_E_CP_OR_OP_NOT_E_AND_SE_CP == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_E_AND_NOT_SE == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module CGTSX1P5 (ECK, E, SE, CK);
	output ECK;
	input E, SE, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_E = E, delayed_SE = SE, delayed_CK = CK;
`else
	wire delayed_E, delayed_SE, delayed_CK;
`endif

	// Function
	wire int_fwire_clk, int_fwire_QE, int_fwire_test;

	not (int_fwire_clk, delayed_CK);
	or (int_fwire_test, delayed_E, delayed_SE);
	altos_latch (int_fwire_QE, notifier, int_fwire_clk, int_fwire_test);
	and (ECK, delayed_CK, int_fwire_QE);

	// Timing

	// Additional timing wires
	wire COND_NOT_E, COND_NOT_E_AND_NOT_SE, COND_NOT_SE;
	wire COND_OP_E_CP_OR_OP_NOT_E_AND_SE_CP, int_twire_0;


	// Additional timing gates
	not (COND_NOT_SE, SE);
	not (COND_NOT_E, E);
	and (int_twire_0, COND_NOT_E, SE);
	or (COND_OP_E_CP_OR_OP_NOT_E_AND_SE_CP, E, int_twire_0);
	and (COND_NOT_E_AND_NOT_SE, COND_NOT_E, COND_NOT_SE);

	specify
		if (((E == 1'b1)) || ((E == 1'b0) && (SE == 1'b1)))
			(negedge CK => (ECK+:1'b0)) = 0;
		if (E == 1'b0 && SE == 1'b0)
			(negedge CK => (ECK+:1'b0)) = 0;
		ifnone (CK => ECK) = 0;
		$setuphold (posedge CK &&& COND_NOT_SE == 1'b1, posedge E &&& COND_NOT_SE == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK &&& COND_NOT_SE == 1'b1, negedge E &&& COND_NOT_SE == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK, posedge E, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK, negedge E, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK &&& COND_NOT_E == 1'b1, posedge SE &&& COND_NOT_E == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$setuphold (posedge CK &&& COND_NOT_E == 1'b1, negedge SE &&& COND_NOT_E == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$setuphold (posedge CK, posedge SE, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$setuphold (posedge CK, negedge SE, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$width (posedge CK &&& COND_OP_E_CP_OR_OP_NOT_E_AND_SE_CP == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_OP_E_CP_OR_OP_NOT_E_AND_SE_CP == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_E_AND_NOT_SE == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module CGTSX2 (ECK, E, SE, CK);
	output ECK;
	input E, SE, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_E = E, delayed_SE = SE, delayed_CK = CK;
`else
	wire delayed_E, delayed_SE, delayed_CK;
`endif

	// Function
	wire int_fwire_clk, int_fwire_QE, int_fwire_test;

	not (int_fwire_clk, delayed_CK);
	or (int_fwire_test, delayed_E, delayed_SE);
	altos_latch (int_fwire_QE, notifier, int_fwire_clk, int_fwire_test);
	and (ECK, delayed_CK, int_fwire_QE);

	// Timing

	// Additional timing wires
	wire COND_NOT_E, COND_NOT_E_AND_NOT_SE, COND_NOT_SE;
	wire COND_OP_E_CP_OR_OP_NOT_E_AND_SE_CP, int_twire_0;


	// Additional timing gates
	not (COND_NOT_SE, SE);
	not (COND_NOT_E, E);
	and (int_twire_0, COND_NOT_E, SE);
	or (COND_OP_E_CP_OR_OP_NOT_E_AND_SE_CP, E, int_twire_0);
	and (COND_NOT_E_AND_NOT_SE, COND_NOT_E, COND_NOT_SE);

	specify
		if (((E == 1'b1)) || ((E == 1'b0) && (SE == 1'b1)))
			(negedge CK => (ECK+:1'b0)) = 0;
		if (E == 1'b0 && SE == 1'b0)
			(negedge CK => (ECK+:1'b0)) = 0;
		ifnone (CK => ECK) = 0;
		$setuphold (posedge CK &&& COND_NOT_SE == 1'b1, posedge E &&& COND_NOT_SE == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK &&& COND_NOT_SE == 1'b1, negedge E &&& COND_NOT_SE == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK, posedge E, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK, negedge E, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK &&& COND_NOT_E == 1'b1, posedge SE &&& COND_NOT_E == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$setuphold (posedge CK &&& COND_NOT_E == 1'b1, negedge SE &&& COND_NOT_E == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$setuphold (posedge CK, posedge SE, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$setuphold (posedge CK, negedge SE, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$width (posedge CK &&& COND_OP_E_CP_OR_OP_NOT_E_AND_SE_CP == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_OP_E_CP_OR_OP_NOT_E_AND_SE_CP == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_E_AND_NOT_SE == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module CGTSX3 (ECK, E, SE, CK);
	output ECK;
	input E, SE, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_E = E, delayed_SE = SE, delayed_CK = CK;
`else
	wire delayed_E, delayed_SE, delayed_CK;
`endif

	// Function
	wire int_fwire_clk, int_fwire_QE, int_fwire_test;

	not (int_fwire_clk, delayed_CK);
	or (int_fwire_test, delayed_E, delayed_SE);
	altos_latch (int_fwire_QE, notifier, int_fwire_clk, int_fwire_test);
	and (ECK, delayed_CK, int_fwire_QE);

	// Timing

	// Additional timing wires
	wire COND_NOT_E, COND_NOT_E_AND_NOT_SE, COND_NOT_SE;
	wire COND_OP_E_CP_OR_OP_NOT_E_AND_SE_CP, int_twire_0;


	// Additional timing gates
	not (COND_NOT_SE, SE);
	not (COND_NOT_E, E);
	and (int_twire_0, COND_NOT_E, SE);
	or (COND_OP_E_CP_OR_OP_NOT_E_AND_SE_CP, E, int_twire_0);
	and (COND_NOT_E_AND_NOT_SE, COND_NOT_E, COND_NOT_SE);

	specify
		if (((E == 1'b1)) || ((E == 1'b0) && (SE == 1'b1)))
			(negedge CK => (ECK+:1'b0)) = 0;
		if (E == 1'b0 && SE == 1'b0)
			(negedge CK => (ECK+:1'b0)) = 0;
		ifnone (CK => ECK) = 0;
		$setuphold (posedge CK &&& COND_NOT_SE == 1'b1, posedge E &&& COND_NOT_SE == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK &&& COND_NOT_SE == 1'b1, negedge E &&& COND_NOT_SE == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK, posedge E, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK, negedge E, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK &&& COND_NOT_E == 1'b1, posedge SE &&& COND_NOT_E == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$setuphold (posedge CK &&& COND_NOT_E == 1'b1, negedge SE &&& COND_NOT_E == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$setuphold (posedge CK, posedge SE, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$setuphold (posedge CK, negedge SE, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$width (posedge CK &&& COND_OP_E_CP_OR_OP_NOT_E_AND_SE_CP == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_OP_E_CP_OR_OP_NOT_E_AND_SE_CP == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_E_AND_NOT_SE == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module CGX1 (ECK, E, CK);
	output ECK;
	input E, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_E = E, delayed_CK = CK;
`else
	wire delayed_E, delayed_CK;
`endif

	// Function
	wire int_fwire_clk, int_fwire_QE;

	not (int_fwire_clk, delayed_CK);
	altos_latch (int_fwire_QE, notifier, int_fwire_clk, delayed_E);
	and (ECK, delayed_CK, int_fwire_QE);

	// Timing

	// Additional timing wires
	wire COND_E, COND_NOT_E;


	// Additional timing gates
	buf (COND_E, E);
	not (COND_NOT_E, E);

	specify
		if (E == 1'b1)
			(negedge CK => (ECK+:1'b0)) = 0;
		if (E == 1'b0)
			(negedge CK => (ECK+:1'b0)) = 0;
		ifnone (CK => ECK) = 0;
		$setuphold (posedge CK, posedge E, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK, negedge E, 0, 0, notifier,,, delayed_CK, delayed_E);
		$width (posedge CK &&& COND_E == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_E == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_E == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module CGX2 (ECK, E, CK);
	output ECK;
	input E, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_E = E, delayed_CK = CK;
`else
	wire delayed_E, delayed_CK;
`endif

	// Function
	wire int_fwire_clk, int_fwire_QE;

	not (int_fwire_clk, delayed_CK);
	altos_latch (int_fwire_QE, notifier, int_fwire_clk, delayed_E);
	and (ECK, delayed_CK, int_fwire_QE);

	// Timing

	// Additional timing wires
	wire COND_E, COND_NOT_E;


	// Additional timing gates
	buf (COND_E, E);
	not (COND_NOT_E, E);

	specify
		if (E == 1'b1)
			(negedge CK => (ECK+:1'b0)) = 0;
		if (E == 1'b0)
			(negedge CK => (ECK+:1'b0)) = 0;
		ifnone (CK => ECK) = 0;
		$setuphold (posedge CK, posedge E, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK, negedge E, 0, 0, notifier,,, delayed_CK, delayed_E);
		$width (posedge CK &&& COND_E == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_E == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_E == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module CGX3 (ECK, E, CK);
	output ECK;
	input E, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_E = E, delayed_CK = CK;
`else
	wire delayed_E, delayed_CK;
`endif

	// Function
	wire int_fwire_clk, int_fwire_QE;

	not (int_fwire_clk, delayed_CK);
	altos_latch (int_fwire_QE, notifier, int_fwire_clk, delayed_E);
	and (ECK, delayed_CK, int_fwire_QE);

	// Timing

	// Additional timing wires
	wire COND_E, COND_NOT_E;


	// Additional timing gates
	buf (COND_E, E);
	not (COND_NOT_E, E);

	specify
		if (E == 1'b1)
			(negedge CK => (ECK+:1'b0)) = 0;
		if (E == 1'b0)
			(negedge CK => (ECK+:1'b0)) = 0;
		ifnone (CK => ECK) = 0;
		$setuphold (posedge CK, posedge E, 0, 0, notifier,,, delayed_CK, delayed_E);
		$setuphold (posedge CK, negedge E, 0, 0, notifier,,, delayed_CK, delayed_E);
		$width (posedge CK &&& COND_E == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_E == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_E == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DECAP16 ();
	// Timing
	specify
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DECAP32 ();
	// Timing
	specify
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DECAP4 ();
	// Timing
	specify
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DECAP8 ();
	// Timing
	specify
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFMRQX2 (Q, D, SD, SE, RB, CK);
	output Q;
	input D, SD, SE, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_SD = SD, delayed_SE = SE, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_SD, delayed_SE, delayed_RB, delayed_CK;
`endif

	// Function
	wire delayed_SE__bar, int_fwire_0, int_fwire_1;
	wire int_fwire_d, int_fwire_IQ, int_fwire_r;
	wire xcr_0;

	and (int_fwire_0, delayed_SD, delayed_SE);
	not (delayed_SE__bar, delayed_SE);
	and (int_fwire_1, delayed_D, delayed_SE__bar);
	or (int_fwire_d, int_fwire_1, int_fwire_0);
	not (int_fwire_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, int_fwire_d, int_fwire_r);
	altos_dff_r (int_fwire_IQ, notifier, delayed_CK, int_fwire_d, int_fwire_r, xcr_0);
	buf (Q, int_fwire_IQ);

	// Timing

	// Additional timing wires
	wire COND_CK, COND_D_AND_NOT_SD_AND_NOT_SE, COND_D_AND_RB_AND_NOT_SD;
	wire COND_D_AND_RB_AND_SE, COND_D_AND_SD, COND_NOT_CK;
	wire COND_NOT_D_AND_RB_AND_SD, COND_NOT_D_AND_RB_AND_SE, COND_NOT_D_AND_SD_AND_SE;
	wire COND_OP_D_AND_RB_AND_NOT_SD_AND_SE_CP_OR_OP_NOT_D_AND_RB_AND_SD_AND_NOT_SE_CP_OR_OP_NOT_D_AND_RB_AND_NOT_SD_CP, COND_OP_D_AND_RB_AND_SD_CP_OR_OP_D_AND_RB_AND_NOT_SD_AND_NOT_SE_CP_OR_OP_NOT_D_AND_RB_AND_SD_AND_SE_CP, COND_RB_AND_NOT_SD_AND_NOT_SE;
	wire COND_RB_AND_SD_AND_NOT_SE, D__bar, int_twire_0;
	wire int_twire_1, int_twire_2, int_twire_3;
	wire int_twire_4, int_twire_5, SD__bar;
	wire SE__bar;


	// Additional timing gates
	not (SE__bar, SE);
	and (COND_RB_AND_SD_AND_NOT_SE, RB, SD, SE__bar);
	not (SD__bar, SD);
	and (COND_RB_AND_NOT_SD_AND_NOT_SE, RB, SD__bar, SE__bar);
	and (COND_D_AND_RB_AND_SE, D, RB, SE);
	not (D__bar, D);
	and (COND_NOT_D_AND_RB_AND_SE, D__bar, RB, SE);
	and (COND_D_AND_RB_AND_NOT_SD, D, RB, SD__bar);
	and (COND_NOT_D_AND_RB_AND_SD, D__bar, RB, SD);
	and (COND_D_AND_SD, D, SD);
	and (COND_D_AND_NOT_SD_AND_NOT_SE, D, SD__bar, SE__bar);
	and (COND_NOT_D_AND_SD_AND_SE, D__bar, SD, SE);
	buf (COND_CK, CK);
	not (COND_NOT_CK, CK);
	and (int_twire_0, D__bar, RB, SD, SE);
	and (int_twire_1, D, RB, SD__bar, SE__bar);
	and (int_twire_2, D, RB, SD);
	or (COND_OP_D_AND_RB_AND_SD_CP_OR_OP_D_AND_RB_AND_NOT_SD_AND_NOT_SE_CP_OR_OP_NOT_D_AND_RB_AND_SD_AND_SE_CP, int_twire_2, int_twire_1, int_twire_0);
	and (int_twire_3, D__bar, RB, SD__bar);
	and (int_twire_4, D__bar, RB, SD, SE__bar);
	and (int_twire_5, D, RB, SD__bar, SE);
	or (COND_OP_D_AND_RB_AND_NOT_SD_AND_SE_CP_OR_OP_NOT_D_AND_RB_AND_SD_AND_NOT_SE_CP_OR_OP_NOT_D_AND_RB_AND_NOT_SD_CP, int_twire_5, int_twire_4, int_twire_3);

	specify
		if (CK == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		(posedge CK => (Q+:((D && SD) || (D && !SD && !SE) || (!D && SD && SE)))) = 0;
		$setuphold (posedge CK &&& COND_RB_AND_SD_AND_NOT_SE == 1'b1, posedge D &&& COND_RB_AND_SD_AND_NOT_SE == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB_AND_SD_AND_NOT_SE == 1'b1, negedge D &&& COND_RB_AND_SD_AND_NOT_SE == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB_AND_NOT_SD_AND_NOT_SE == 1'b1, posedge D &&& COND_RB_AND_NOT_SD_AND_NOT_SE == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB_AND_NOT_SD_AND_NOT_SE == 1'b1, negedge D &&& COND_RB_AND_NOT_SD_AND_NOT_SE == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_D_AND_RB_AND_SE == 1'b1, posedge SD &&& COND_D_AND_RB_AND_SE == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_SD);
		$setuphold (posedge CK &&& COND_D_AND_RB_AND_SE == 1'b1, negedge SD &&& COND_D_AND_RB_AND_SE == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_SD);
		$setuphold (posedge CK &&& COND_NOT_D_AND_RB_AND_SE == 1'b1, posedge SD &&& COND_NOT_D_AND_RB_AND_SE == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_SD);
		$setuphold (posedge CK &&& COND_NOT_D_AND_RB_AND_SE == 1'b1, negedge SD &&& COND_NOT_D_AND_RB_AND_SE == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_SD);
		$setuphold (posedge CK, posedge SD, 0, 0, notifier,,, delayed_CK, delayed_SD);
		$setuphold (posedge CK, negedge SD, 0, 0, notifier,,, delayed_CK, delayed_SD);
		$setuphold (posedge CK &&& COND_D_AND_RB_AND_NOT_SD == 1'b1, posedge SE &&& COND_D_AND_RB_AND_NOT_SD == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$setuphold (posedge CK &&& COND_D_AND_RB_AND_NOT_SD == 1'b1, negedge SE &&& COND_D_AND_RB_AND_NOT_SD == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$setuphold (posedge CK &&& COND_NOT_D_AND_RB_AND_SD == 1'b1, posedge SE &&& COND_NOT_D_AND_RB_AND_SD == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$setuphold (posedge CK &&& COND_NOT_D_AND_RB_AND_SD == 1'b1, negedge SE &&& COND_NOT_D_AND_RB_AND_SD == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$setuphold (posedge CK, posedge SE, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$setuphold (posedge CK, negedge SE, 0, 0, notifier,,, delayed_CK, delayed_SE);
		$recrem (posedge RB &&& COND_D_AND_SD == 1'b1, posedge CK &&& COND_D_AND_SD == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB &&& COND_D_AND_NOT_SD_AND_NOT_SE == 1'b1, posedge CK &&& COND_D_AND_NOT_SD_AND_NOT_SE == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB &&& COND_NOT_D_AND_SD_AND_SE == 1'b1, posedge CK &&& COND_NOT_D_AND_SD_AND_SE == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_OP_D_AND_RB_AND_SD_CP_OR_OP_D_AND_RB_AND_NOT_SD_AND_NOT_SE_CP_OR_OP_NOT_D_AND_RB_AND_SD_AND_SE_CP == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_OP_D_AND_RB_AND_SD_CP_OR_OP_D_AND_RB_AND_NOT_SD_AND_NOT_SE_CP_OR_OP_NOT_D_AND_RB_AND_SD_AND_SE_CP == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_OP_D_AND_RB_AND_NOT_SD_AND_SE_CP_OR_OP_NOT_D_AND_RB_AND_SD_AND_NOT_SE_CP_OR_OP_NOT_D_AND_RB_AND_NOT_SD_CP == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_OP_D_AND_RB_AND_NOT_SD_AND_SE_CP_OR_OP_NOT_D_AND_RB_AND_SD_AND_NOT_SE_CP_OR_OP_NOT_D_AND_RB_AND_NOT_SD_CP == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFQX1 (Q, D, CK);
	output Q;
	input D, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_CK = CK;
`else
	wire delayed_D, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, xcr_0;

`ifdef VERILATOR
	reg int_q;
	always @(posedge CK)
		int_q <= D;
	assign Q = int_q;
`else
	altos_dff_err (xcr_0, delayed_CK, delayed_D);
	altos_dff (int_fwire_IQ, notifier, delayed_CK, delayed_D, xcr_0);
	buf (Q, int_fwire_IQ);
`endif

	// Timing

	// Additional timing wires
	wire COND_D, COND_NOT_D;


	// Additional timing gates
	buf (COND_D, D);
	not (COND_NOT_D, D);

	specify
		(posedge CK => (Q+:D)) = 0;
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$width (posedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFQX1P5 (Q, D, CK);
	output Q;
	input D, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_CK = CK;
`else
	wire delayed_D, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, xcr_0;

	altos_dff_err (xcr_0, delayed_CK, delayed_D);
	altos_dff (int_fwire_IQ, notifier, delayed_CK, delayed_D, xcr_0);
	buf (Q, int_fwire_IQ);

	// Timing

	// Additional timing wires
	wire COND_D, COND_NOT_D;


	// Additional timing gates
	buf (COND_D, D);
	not (COND_NOT_D, D);

	specify
		(posedge CK => (Q+:D)) = 0;
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$width (posedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFQX2 (Q, D, CK);
	output Q;
	input D, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_CK = CK;
`else
	wire delayed_D, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, xcr_0;

	altos_dff_err (xcr_0, delayed_CK, delayed_D);
	altos_dff (int_fwire_IQ, notifier, delayed_CK, delayed_D, xcr_0);
	buf (Q, int_fwire_IQ);

	// Timing

	// Additional timing wires
	wire COND_D, COND_NOT_D;


	// Additional timing gates
	buf (COND_D, D);
	not (COND_NOT_D, D);

	specify
		(posedge CK => (Q+:D)) = 0;
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$width (posedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFQX3 (Q, D, CK);
	output Q;
	input D, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_CK = CK;
`else
	wire delayed_D, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, xcr_0;

	altos_dff_err (xcr_0, delayed_CK, delayed_D);
	altos_dff (int_fwire_IQ, notifier, delayed_CK, delayed_D, xcr_0);
	buf (Q, int_fwire_IQ);

	// Timing

	// Additional timing wires
	wire COND_D, COND_NOT_D;


	// Additional timing gates
	buf (COND_D, D);
	not (COND_NOT_D, D);

	specify
		(posedge CK => (Q+:D)) = 0;
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$width (posedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFQX4 (Q, D, CK);
	output Q;
	input D, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_CK = CK;
`else
	wire delayed_D, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, xcr_0;

	altos_dff_err (xcr_0, delayed_CK, delayed_D);
	altos_dff (int_fwire_IQ, notifier, delayed_CK, delayed_D, xcr_0);
	buf (Q, int_fwire_IQ);

	// Timing

	// Additional timing wires
	wire COND_D, COND_NOT_D;


	// Additional timing gates
	buf (COND_D, D);
	not (COND_NOT_D, D);

	specify
		(posedge CK => (Q+:D)) = 0;
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$width (posedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFQX6 (Q, D, CK);
	output Q;
	input D, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_CK = CK;
`else
	wire delayed_D, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, xcr_0;

	altos_dff_err (xcr_0, delayed_CK, delayed_D);
	altos_dff (int_fwire_IQ, notifier, delayed_CK, delayed_D, xcr_0);
	buf (Q, int_fwire_IQ);

	// Timing

	// Additional timing wires
	wire COND_D, COND_NOT_D;


	// Additional timing gates
	buf (COND_D, D);
	not (COND_NOT_D, D);

	specify
		(posedge CK => (Q+:D)) = 0;
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$width (posedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRQ2X1 (Q0, Q1, D0, D1, RB, CK);
	output Q0, Q1;
	input D0, D1, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D0 = D0, delayed_D1 = D1, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D0, delayed_D1, delayed_RB, delayed_CK;
`endif
	// Missing function for pin Q1

	// Function
	wire int_fwire_1_r, int_fwire_2_r, int_fwire_IQ1;
	wire int_fwire_IQ2, xcr_0, xcr_1;

	not (int_fwire_1_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, D0, int_fwire_1_r);
	altos_dff_r (int_fwire_IQ1, notifier, delayed_CK, D0, int_fwire_1_r, xcr_0);
	buf (Q0, int_fwire_IQ1);
	not (int_fwire_2_r, delayed_RB);
	altos_dff_r_err (xcr_1, delayed_CK, D1, int_fwire_2_r);
	altos_dff_r (int_fwire_IQ2, notifier, delayed_CK, D1, int_fwire_2_r, xcr_1);
	buf (Q1, int_fwire_IQ2);

	// Timing

	// Additional timing wires
	wire COND_CK, COND_NOT_CK, COND_RB;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_CK, CK);
	not (COND_NOT_CK, CK);

	specify
		if (CK == 1'b1)
			(negedge RB => (Q0:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q0:1'b0)) = 0;
		ifnone (negedge RB => (Q0:1'b0)) = 0;
		(posedge CK => (Q0:D0)) = 0;
		if (CK == 1'b1)
			(negedge RB => (Q1:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q1:1'b0)) = 0;
		ifnone (negedge RB => (Q1:1'b0)) = 0;
		(posedge CK => (Q1:D1)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D0 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D0 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK, posedge D0, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK, negedge D0, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D1 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D1 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK, posedge D1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK, negedge D1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRQ2X1P5 (Q0, Q1, D0, D1, RB, CK);
	output Q0, Q1;
	input D0, D1, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D0 = D0, delayed_D1 = D1, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D0, delayed_D1, delayed_RB, delayed_CK;
`endif
	// Missing function for pin Q1

	// Function
	wire int_fwire_1_r, int_fwire_2_r, int_fwire_IQ1;
	wire int_fwire_IQ2, xcr_0, xcr_1;

	not (int_fwire_1_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, D0, int_fwire_1_r);
	altos_dff_r (int_fwire_IQ1, notifier, delayed_CK, D0, int_fwire_1_r, xcr_0);
	buf (Q0, int_fwire_IQ1);
	not (int_fwire_2_r, delayed_RB);
	altos_dff_r_err (xcr_1, delayed_CK, D1, int_fwire_2_r);
	altos_dff_r (int_fwire_IQ2, notifier, delayed_CK, D1, int_fwire_2_r, xcr_1);
	buf (Q1, int_fwire_IQ2);

	// Timing

	// Additional timing wires
	wire COND_CK, COND_NOT_CK, COND_RB;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_CK, CK);
	not (COND_NOT_CK, CK);

	specify
		if (CK == 1'b1)
			(negedge RB => (Q0:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q0:1'b0)) = 0;
		ifnone (negedge RB => (Q0:1'b0)) = 0;
		(posedge CK => (Q0:D0)) = 0;
		if (CK == 1'b1)
			(negedge RB => (Q1:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q1:1'b0)) = 0;
		ifnone (negedge RB => (Q1:1'b0)) = 0;
		(posedge CK => (Q1:D1)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D0 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D0 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK, posedge D0, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK, negedge D0, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D1 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D1 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK, posedge D1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK, negedge D1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRQ2X2 (Q0, Q1, D0, D1, RB, CK);
	output Q0, Q1;
	input D0, D1, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D0 = D0, delayed_D1 = D1, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D0, delayed_D1, delayed_RB, delayed_CK;
`endif
	// Missing function for pin Q1

	// Function
	wire int_fwire_1_r, int_fwire_2_r, int_fwire_IQ1;
	wire int_fwire_IQ2, xcr_0, xcr_1;

	not (int_fwire_1_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, D0, int_fwire_1_r);
	altos_dff_r (int_fwire_IQ1, notifier, delayed_CK, D0, int_fwire_1_r, xcr_0);
	buf (Q0, int_fwire_IQ1);
	not (int_fwire_2_r, delayed_RB);
	altos_dff_r_err (xcr_1, delayed_CK, D1, int_fwire_2_r);
	altos_dff_r (int_fwire_IQ2, notifier, delayed_CK, D1, int_fwire_2_r, xcr_1);
	buf (Q1, int_fwire_IQ2);

	// Timing

	// Additional timing wires
	wire COND_CK, COND_NOT_CK, COND_RB;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_CK, CK);
	not (COND_NOT_CK, CK);

	specify
		if (CK == 1'b1)
			(negedge RB => (Q0:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q0:1'b0)) = 0;
		ifnone (negedge RB => (Q0:1'b0)) = 0;
		(posedge CK => (Q0:D0)) = 0;
		if (CK == 1'b1)
			(negedge RB => (Q1:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q1:1'b0)) = 0;
		ifnone (negedge RB => (Q1:1'b0)) = 0;
		(posedge CK => (Q1:D1)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D0 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D0 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK, posedge D0, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK, negedge D0, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D1 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D1 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK, posedge D1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK, negedge D1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRQ2X3 (Q0, Q1, D0, D1, RB, CK);
	output Q0, Q1;
	input D0, D1, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D0 = D0, delayed_D1 = D1, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D0, delayed_D1, delayed_RB, delayed_CK;
`endif
	// Missing function for pin Q1

	// Function
	wire int_fwire_1_r, int_fwire_2_r, int_fwire_IQ1;
	wire int_fwire_IQ2, xcr_0, xcr_1;

	not (int_fwire_1_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, D0, int_fwire_1_r);
	altos_dff_r (int_fwire_IQ1, notifier, delayed_CK, D0, int_fwire_1_r, xcr_0);
	buf (Q0, int_fwire_IQ1);
	not (int_fwire_2_r, delayed_RB);
	altos_dff_r_err (xcr_1, delayed_CK, D1, int_fwire_2_r);
	altos_dff_r (int_fwire_IQ2, notifier, delayed_CK, D1, int_fwire_2_r, xcr_1);
	buf (Q1, int_fwire_IQ2);

	// Timing

	// Additional timing wires
	wire COND_CK, COND_NOT_CK, COND_RB;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_CK, CK);
	not (COND_NOT_CK, CK);

	specify
		if (CK == 1'b1)
			(negedge RB => (Q0:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q0:1'b0)) = 0;
		ifnone (negedge RB => (Q0:1'b0)) = 0;
		(posedge CK => (Q0:D0)) = 0;
		if (CK == 1'b1)
			(negedge RB => (Q1:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q1:1'b0)) = 0;
		ifnone (negedge RB => (Q1:1'b0)) = 0;
		(posedge CK => (Q1:D1)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D0 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D0 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK, posedge D0, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK, negedge D0, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D1 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D1 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK, posedge D1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK, negedge D1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRQ4X1 (Q0, Q1, Q2, Q3, D0, D1, D2, D3, RB, CK);
	output Q0, Q1, Q2, Q3;
	input D0, D1, D2, D3, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D0 = D0, delayed_D1 = D1, delayed_D2 = D2, delayed_D3 = D3, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D0, delayed_D1, delayed_D2, delayed_D3, delayed_RB, delayed_CK;
`endif
	// Missing function for pin Q1
	// Missing function for pin Q2
	// Missing function for pin Q3

	// Function
	wire int_fwire_1_r, int_fwire_2_r, int_fwire_3_r;
	wire int_fwire_4_r, int_fwire_IQ1, int_fwire_IQ2;
	wire int_fwire_IQ3, int_fwire_IQ4, xcr_0;
	wire xcr_1, xcr_2, xcr_3;

	not (int_fwire_1_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, D0, int_fwire_1_r);
	altos_dff_r (int_fwire_IQ1, notifier, delayed_CK, D0, int_fwire_1_r, xcr_0);
	buf (Q0, int_fwire_IQ1);
	not (int_fwire_2_r, delayed_RB);
	altos_dff_r_err (xcr_1, delayed_CK, D1, int_fwire_2_r);
	altos_dff_r (int_fwire_IQ2, notifier, delayed_CK, D1, int_fwire_2_r, xcr_1);
	buf (Q1, int_fwire_IQ2);
	not (int_fwire_3_r, delayed_RB);
	altos_dff_r_err (xcr_2, delayed_CK, D2, int_fwire_3_r);
	altos_dff_r (int_fwire_IQ3, notifier, delayed_CK, D2, int_fwire_3_r, xcr_2);
	buf (Q2, int_fwire_IQ3);
	not (int_fwire_4_r, delayed_RB);
	altos_dff_r_err (xcr_3, delayed_CK, D3, int_fwire_4_r);
	altos_dff_r (int_fwire_IQ4, notifier, delayed_CK, D3, int_fwire_4_r, xcr_3);
	buf (Q3, int_fwire_IQ4);

	// Timing

	// Additional timing wires
	wire COND_CK, COND_NOT_CK, COND_RB;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_CK, CK);
	not (COND_NOT_CK, CK);

	specify
		if (CK == 1'b1)
			(negedge RB => (Q0:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q0:1'b0)) = 0;
		ifnone (negedge RB => (Q0:1'b0)) = 0;
		(posedge CK => (Q0:D0)) = 0;
		if (CK == 1'b1)
			(negedge RB => (Q1:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q1:1'b0)) = 0;
		ifnone (negedge RB => (Q1:1'b0)) = 0;
		(posedge CK => (Q1:D1)) = 0;
		if (CK == 1'b1)
			(negedge RB => (Q2:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q2:1'b0)) = 0;
		ifnone (negedge RB => (Q2:1'b0)) = 0;
		(posedge CK => (Q2:D2)) = 0;
		if (CK == 1'b1)
			(negedge RB => (Q3:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q3:1'b0)) = 0;
		ifnone (negedge RB => (Q3:1'b0)) = 0;
		(posedge CK => (Q3:D3)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D0 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D0 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK, posedge D0, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK, negedge D0, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D1 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D1 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK, posedge D1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK, negedge D1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D2 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D2);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D2 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D2);
		$setuphold (posedge CK, posedge D2, 0, 0, notifier,,, delayed_CK, delayed_D2);
		$setuphold (posedge CK, negedge D2, 0, 0, notifier,,, delayed_CK, delayed_D2);
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D3 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D3);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D3 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D3);
		$setuphold (posedge CK, posedge D3, 0, 0, notifier,,, delayed_CK, delayed_D3);
		$setuphold (posedge CK, negedge D3, 0, 0, notifier,,, delayed_CK, delayed_D3);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRQ4X1P5 (Q0, Q1, Q2, Q3, D0, D1, D2, D3, RB, CK);
	output Q0, Q1, Q2, Q3;
	input D0, D1, D2, D3, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D0 = D0, delayed_D1 = D1, delayed_D2 = D2, delayed_D3 = D3, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D0, delayed_D1, delayed_D2, delayed_D3, delayed_RB, delayed_CK;
`endif
	// Missing function for pin Q1
	// Missing function for pin Q2
	// Missing function for pin Q3

	// Function
	wire int_fwire_1_r, int_fwire_2_r, int_fwire_3_r;
	wire int_fwire_4_r, int_fwire_IQ1, int_fwire_IQ2;
	wire int_fwire_IQ3, int_fwire_IQ4, xcr_0;
	wire xcr_1, xcr_2, xcr_3;

	not (int_fwire_1_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, D0, int_fwire_1_r);
	altos_dff_r (int_fwire_IQ1, notifier, delayed_CK, D0, int_fwire_1_r, xcr_0);
	buf (Q0, int_fwire_IQ1);
	not (int_fwire_2_r, delayed_RB);
	altos_dff_r_err (xcr_1, delayed_CK, D1, int_fwire_2_r);
	altos_dff_r (int_fwire_IQ2, notifier, delayed_CK, D1, int_fwire_2_r, xcr_1);
	buf (Q1, int_fwire_IQ2);
	not (int_fwire_3_r, delayed_RB);
	altos_dff_r_err (xcr_2, delayed_CK, D2, int_fwire_3_r);
	altos_dff_r (int_fwire_IQ3, notifier, delayed_CK, D2, int_fwire_3_r, xcr_2);
	buf (Q2, int_fwire_IQ3);
	not (int_fwire_4_r, delayed_RB);
	altos_dff_r_err (xcr_3, delayed_CK, D3, int_fwire_4_r);
	altos_dff_r (int_fwire_IQ4, notifier, delayed_CK, D3, int_fwire_4_r, xcr_3);
	buf (Q3, int_fwire_IQ4);

	// Timing

	// Additional timing wires
	wire COND_CK, COND_NOT_CK, COND_RB;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_CK, CK);
	not (COND_NOT_CK, CK);

	specify
		if (CK == 1'b1)
			(negedge RB => (Q0:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q0:1'b0)) = 0;
		ifnone (negedge RB => (Q0:1'b0)) = 0;
		(posedge CK => (Q0:D0)) = 0;
		if (CK == 1'b1)
			(negedge RB => (Q1:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q1:1'b0)) = 0;
		ifnone (negedge RB => (Q1:1'b0)) = 0;
		(posedge CK => (Q1:D1)) = 0;
		if (CK == 1'b1)
			(negedge RB => (Q2:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q2:1'b0)) = 0;
		ifnone (negedge RB => (Q2:1'b0)) = 0;
		(posedge CK => (Q2:D2)) = 0;
		if (CK == 1'b1)
			(negedge RB => (Q3:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q3:1'b0)) = 0;
		ifnone (negedge RB => (Q3:1'b0)) = 0;
		(posedge CK => (Q3:D3)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D0 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D0 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK, posedge D0, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK, negedge D0, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D1 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D1 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK, posedge D1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK, negedge D1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D2 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D2);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D2 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D2);
		$setuphold (posedge CK, posedge D2, 0, 0, notifier,,, delayed_CK, delayed_D2);
		$setuphold (posedge CK, negedge D2, 0, 0, notifier,,, delayed_CK, delayed_D2);
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D3 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D3);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D3 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D3);
		$setuphold (posedge CK, posedge D3, 0, 0, notifier,,, delayed_CK, delayed_D3);
		$setuphold (posedge CK, negedge D3, 0, 0, notifier,,, delayed_CK, delayed_D3);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRQ4X2 (Q0, Q1, Q2, Q3, D0, D1, D2, D3, RB, CK);
	output Q0, Q1, Q2, Q3;
	input D0, D1, D2, D3, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D0 = D0, delayed_D1 = D1, delayed_D2 = D2, delayed_D3 = D3, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D0, delayed_D1, delayed_D2, delayed_D3, delayed_RB, delayed_CK;
`endif
	// Missing function for pin Q1
	// Missing function for pin Q2
	// Missing function for pin Q3

	// Function
	wire int_fwire_1_r, int_fwire_2_r, int_fwire_3_r;
	wire int_fwire_4_r, int_fwire_IQ1, int_fwire_IQ2;
	wire int_fwire_IQ3, int_fwire_IQ4, xcr_0;
	wire xcr_1, xcr_2, xcr_3;

	not (int_fwire_1_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, D0, int_fwire_1_r);
	altos_dff_r (int_fwire_IQ1, notifier, delayed_CK, D0, int_fwire_1_r, xcr_0);
	buf (Q0, int_fwire_IQ1);
	not (int_fwire_2_r, delayed_RB);
	altos_dff_r_err (xcr_1, delayed_CK, D1, int_fwire_2_r);
	altos_dff_r (int_fwire_IQ2, notifier, delayed_CK, D1, int_fwire_2_r, xcr_1);
	buf (Q1, int_fwire_IQ2);
	not (int_fwire_3_r, delayed_RB);
	altos_dff_r_err (xcr_2, delayed_CK, D2, int_fwire_3_r);
	altos_dff_r (int_fwire_IQ3, notifier, delayed_CK, D2, int_fwire_3_r, xcr_2);
	buf (Q2, int_fwire_IQ3);
	not (int_fwire_4_r, delayed_RB);
	altos_dff_r_err (xcr_3, delayed_CK, D3, int_fwire_4_r);
	altos_dff_r (int_fwire_IQ4, notifier, delayed_CK, D3, int_fwire_4_r, xcr_3);
	buf (Q3, int_fwire_IQ4);

	// Timing

	// Additional timing wires
	wire COND_CK, COND_NOT_CK, COND_RB;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_CK, CK);
	not (COND_NOT_CK, CK);

	specify
		if (CK == 1'b1)
			(negedge RB => (Q0:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q0:1'b0)) = 0;
		ifnone (negedge RB => (Q0:1'b0)) = 0;
		(posedge CK => (Q0:D0)) = 0;
		if (CK == 1'b1)
			(negedge RB => (Q1:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q1:1'b0)) = 0;
		ifnone (negedge RB => (Q1:1'b0)) = 0;
		(posedge CK => (Q1:D1)) = 0;
		if (CK == 1'b1)
			(negedge RB => (Q2:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q2:1'b0)) = 0;
		ifnone (negedge RB => (Q2:1'b0)) = 0;
		(posedge CK => (Q2:D2)) = 0;
		if (CK == 1'b1)
			(negedge RB => (Q3:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q3:1'b0)) = 0;
		ifnone (negedge RB => (Q3:1'b0)) = 0;
		(posedge CK => (Q3:D3)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D0 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D0 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK, posedge D0, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK, negedge D0, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D1 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D1 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK, posedge D1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK, negedge D1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D2 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D2);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D2 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D2);
		$setuphold (posedge CK, posedge D2, 0, 0, notifier,,, delayed_CK, delayed_D2);
		$setuphold (posedge CK, negedge D2, 0, 0, notifier,,, delayed_CK, delayed_D2);
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D3 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D3);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D3 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D3);
		$setuphold (posedge CK, posedge D3, 0, 0, notifier,,, delayed_CK, delayed_D3);
		$setuphold (posedge CK, negedge D3, 0, 0, notifier,,, delayed_CK, delayed_D3);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRQ4X3 (Q0, Q1, Q2, Q3, D0, D1, D2, D3, RB, CK);
	output Q0, Q1, Q2, Q3;
	input D0, D1, D2, D3, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D0 = D0, delayed_D1 = D1, delayed_D2 = D2, delayed_D3 = D3, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D0, delayed_D1, delayed_D2, delayed_D3, delayed_RB, delayed_CK;
`endif
	// Missing function for pin Q1
	// Missing function for pin Q2
	// Missing function for pin Q3

	// Function
	wire int_fwire_1_r, int_fwire_2_r, int_fwire_3_r;
	wire int_fwire_4_r, int_fwire_IQ1, int_fwire_IQ2;
	wire int_fwire_IQ3, int_fwire_IQ4, xcr_0;
	wire xcr_1, xcr_2, xcr_3;

	not (int_fwire_1_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, D0, int_fwire_1_r);
	altos_dff_r (int_fwire_IQ1, notifier, delayed_CK, D0, int_fwire_1_r, xcr_0);
	buf (Q0, int_fwire_IQ1);
	not (int_fwire_2_r, delayed_RB);
	altos_dff_r_err (xcr_1, delayed_CK, D1, int_fwire_2_r);
	altos_dff_r (int_fwire_IQ2, notifier, delayed_CK, D1, int_fwire_2_r, xcr_1);
	buf (Q1, int_fwire_IQ2);
	not (int_fwire_3_r, delayed_RB);
	altos_dff_r_err (xcr_2, delayed_CK, D2, int_fwire_3_r);
	altos_dff_r (int_fwire_IQ3, notifier, delayed_CK, D2, int_fwire_3_r, xcr_2);
	buf (Q2, int_fwire_IQ3);
	not (int_fwire_4_r, delayed_RB);
	altos_dff_r_err (xcr_3, delayed_CK, D3, int_fwire_4_r);
	altos_dff_r (int_fwire_IQ4, notifier, delayed_CK, D3, int_fwire_4_r, xcr_3);
	buf (Q3, int_fwire_IQ4);

	// Timing

	// Additional timing wires
	wire COND_CK, COND_NOT_CK, COND_RB;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_CK, CK);
	not (COND_NOT_CK, CK);

	specify
		if (CK == 1'b1)
			(negedge RB => (Q0:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q0:1'b0)) = 0;
		ifnone (negedge RB => (Q0:1'b0)) = 0;
		(posedge CK => (Q0:D0)) = 0;
		if (CK == 1'b1)
			(negedge RB => (Q1:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q1:1'b0)) = 0;
		ifnone (negedge RB => (Q1:1'b0)) = 0;
		(posedge CK => (Q1:D1)) = 0;
		if (CK == 1'b1)
			(negedge RB => (Q2:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q2:1'b0)) = 0;
		ifnone (negedge RB => (Q2:1'b0)) = 0;
		(posedge CK => (Q2:D2)) = 0;
		if (CK == 1'b1)
			(negedge RB => (Q3:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q3:1'b0)) = 0;
		ifnone (negedge RB => (Q3:1'b0)) = 0;
		(posedge CK => (Q3:D3)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D0 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D0 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK, posedge D0, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK, negedge D0, 0, 0, notifier,,, delayed_CK, delayed_D0);
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D1 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D1 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK, posedge D1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK, negedge D1, 0, 0, notifier,,, delayed_CK, delayed_D1);
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D2 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D2);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D2 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D2);
		$setuphold (posedge CK, posedge D2, 0, 0, notifier,,, delayed_CK, delayed_D2);
		$setuphold (posedge CK, negedge D2, 0, 0, notifier,,, delayed_CK, delayed_D2);
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D3 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D3);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D3 &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D3);
		$setuphold (posedge CK, posedge D3, 0, 0, notifier,,, delayed_CK, delayed_D3);
		$setuphold (posedge CK, negedge D3, 0, 0, notifier,,, delayed_CK, delayed_D3);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRQX1 (Q, D, RB, CK);
	output Q;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, int_fwire_r, xcr_0;

`ifdef VERILATOR
	reg int_q;
	always @(posedge CK or negedge RB)
		if (!RB) int_q <= 1'b0;
		else int_q <= D;
	assign Q = int_q;
`else
	not (int_fwire_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, delayed_D, int_fwire_r);
	altos_dff_r (int_fwire_IQ, notifier, delayed_CK, delayed_D, int_fwire_r, xcr_0);
	buf (Q, int_fwire_IQ);
`endif

	// Timing

	// Additional timing wires
	wire COND_CK_AND_D, COND_CK_AND_NOT_D, COND_D;
	wire COND_D_AND_RB, COND_NOT_CK, COND_NOT_D_AND_RB;
	wire COND_RB, D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	and (COND_CK_AND_D, CK, D);
	not (D__bar, D);
	and (COND_CK_AND_NOT_D, CK, D__bar);
	not (COND_NOT_CK, CK);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		(posedge CK => (Q+:D)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, posedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRQX1P5 (Q, D, RB, CK);
	output Q;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, int_fwire_r, xcr_0;

	not (int_fwire_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, delayed_D, int_fwire_r);
	altos_dff_r (int_fwire_IQ, notifier, delayed_CK, delayed_D, int_fwire_r, xcr_0);
	buf (Q, int_fwire_IQ);

	// Timing

	// Additional timing wires
	wire COND_CK_AND_D, COND_CK_AND_NOT_D, COND_D;
	wire COND_D_AND_RB, COND_NOT_CK, COND_NOT_D_AND_RB;
	wire COND_RB, D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	and (COND_CK_AND_D, CK, D);
	not (D__bar, D);
	and (COND_CK_AND_NOT_D, CK, D__bar);
	not (COND_NOT_CK, CK);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		(posedge CK => (Q+:D)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, posedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRQX2 (Q, D, RB, CK);
	output Q;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, int_fwire_r, xcr_0;

	not (int_fwire_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, delayed_D, int_fwire_r);
	altos_dff_r (int_fwire_IQ, notifier, delayed_CK, delayed_D, int_fwire_r, xcr_0);
	buf (Q, int_fwire_IQ);

	// Timing

	// Additional timing wires
	wire COND_CK_AND_D, COND_CK_AND_NOT_D, COND_D;
	wire COND_D_AND_RB, COND_NOT_CK, COND_NOT_D_AND_RB;
	wire COND_RB, D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	and (COND_CK_AND_D, CK, D);
	not (D__bar, D);
	and (COND_CK_AND_NOT_D, CK, D__bar);
	not (COND_NOT_CK, CK);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		(posedge CK => (Q+:D)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, posedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRQX3 (Q, D, RB, CK);
	output Q;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, int_fwire_r, xcr_0;

	not (int_fwire_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, delayed_D, int_fwire_r);
	altos_dff_r (int_fwire_IQ, notifier, delayed_CK, delayed_D, int_fwire_r, xcr_0);
	buf (Q, int_fwire_IQ);

	// Timing

	// Additional timing wires
	wire COND_CK_AND_D, COND_CK_AND_NOT_D, COND_D;
	wire COND_D_AND_RB, COND_NOT_CK, COND_NOT_D_AND_RB;
	wire COND_RB, D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	and (COND_CK_AND_D, CK, D);
	not (D__bar, D);
	and (COND_CK_AND_NOT_D, CK, D__bar);
	not (COND_NOT_CK, CK);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		(posedge CK => (Q+:D)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, posedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRQX4 (Q, D, RB, CK);
	output Q;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, int_fwire_r, xcr_0;

	not (int_fwire_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, delayed_D, int_fwire_r);
	altos_dff_r (int_fwire_IQ, notifier, delayed_CK, delayed_D, int_fwire_r, xcr_0);
	buf (Q, int_fwire_IQ);

	// Timing

	// Additional timing wires
	wire COND_CK_AND_D, COND_CK_AND_NOT_D, COND_D;
	wire COND_D_AND_RB, COND_NOT_CK, COND_NOT_D_AND_RB;
	wire COND_RB, D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	and (COND_CK_AND_D, CK, D);
	not (D__bar, D);
	and (COND_CK_AND_NOT_D, CK, D__bar);
	not (COND_NOT_CK, CK);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		(posedge CK => (Q+:D)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, posedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRQX6 (Q, D, RB, CK);
	output Q;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, int_fwire_r, xcr_0;

	not (int_fwire_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, delayed_D, int_fwire_r);
	altos_dff_r (int_fwire_IQ, notifier, delayed_CK, delayed_D, int_fwire_r, xcr_0);
	buf (Q, int_fwire_IQ);

	// Timing

	// Additional timing wires
	wire COND_CK_AND_D, COND_CK_AND_NOT_D, COND_D;
	wire COND_D_AND_RB, COND_NOT_CK, COND_NOT_D_AND_RB;
	wire COND_RB, D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	and (COND_CK_AND_D, CK, D);
	not (D__bar, D);
	and (COND_CK_AND_NOT_D, CK, D__bar);
	not (COND_NOT_CK, CK);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		(posedge CK => (Q+:D)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, posedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRX1 (Q, QB, D, RB, CK);
	output Q, QB;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, int_fwire_IQB, int_fwire_r;
	wire xcr_0;

	not (int_fwire_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, delayed_D, int_fwire_r);
	altos_dff_r (int_fwire_IQ, notifier, delayed_CK, delayed_D, int_fwire_r, xcr_0);
	buf (Q, int_fwire_IQ);
	not (int_fwire_IQB, int_fwire_IQ);
	buf (QB, int_fwire_IQB);

	// Timing

	// Additional timing wires
	wire COND_CK_AND_D, COND_CK_AND_NOT_D, COND_D;
	wire COND_D_AND_RB, COND_NOT_CK, COND_NOT_D_AND_RB;
	wire COND_RB, D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	and (COND_CK_AND_D, CK, D);
	not (D__bar, D);
	and (COND_CK_AND_NOT_D, CK, D__bar);
	not (COND_NOT_CK, CK);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		(posedge CK => (Q+:D)) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		ifnone (negedge RB => (QB-:1'b0)) = 0;
		(posedge CK => (QB-:D)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, posedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRX1P5 (Q, QB, D, RB, CK);
	output Q, QB;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, int_fwire_IQB, int_fwire_r;
	wire xcr_0;

	not (int_fwire_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, delayed_D, int_fwire_r);
	altos_dff_r (int_fwire_IQ, notifier, delayed_CK, delayed_D, int_fwire_r, xcr_0);
	buf (Q, int_fwire_IQ);
	not (int_fwire_IQB, int_fwire_IQ);
	buf (QB, int_fwire_IQB);

	// Timing

	// Additional timing wires
	wire COND_CK_AND_D, COND_CK_AND_NOT_D, COND_D;
	wire COND_D_AND_RB, COND_NOT_CK, COND_NOT_D_AND_RB;
	wire COND_RB, D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	and (COND_CK_AND_D, CK, D);
	not (D__bar, D);
	and (COND_CK_AND_NOT_D, CK, D__bar);
	not (COND_NOT_CK, CK);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		(posedge CK => (Q+:D)) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		ifnone (negedge RB => (QB-:1'b0)) = 0;
		(posedge CK => (QB-:D)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, posedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRX2 (Q, QB, D, RB, CK);
	output Q, QB;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, int_fwire_IQB, int_fwire_r;
	wire xcr_0;

	not (int_fwire_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, delayed_D, int_fwire_r);
	altos_dff_r (int_fwire_IQ, notifier, delayed_CK, delayed_D, int_fwire_r, xcr_0);
	buf (Q, int_fwire_IQ);
	not (int_fwire_IQB, int_fwire_IQ);
	buf (QB, int_fwire_IQB);

	// Timing

	// Additional timing wires
	wire COND_CK_AND_D, COND_CK_AND_NOT_D, COND_D;
	wire COND_D_AND_RB, COND_NOT_CK, COND_NOT_D_AND_RB;
	wire COND_RB, D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	and (COND_CK_AND_D, CK, D);
	not (D__bar, D);
	and (COND_CK_AND_NOT_D, CK, D__bar);
	not (COND_NOT_CK, CK);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		(posedge CK => (Q+:D)) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		ifnone (negedge RB => (QB-:1'b0)) = 0;
		(posedge CK => (QB-:D)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, posedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRX3 (Q, QB, D, RB, CK);
	output Q, QB;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, int_fwire_IQB, int_fwire_r;
	wire xcr_0;

	not (int_fwire_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, delayed_D, int_fwire_r);
	altos_dff_r (int_fwire_IQ, notifier, delayed_CK, delayed_D, int_fwire_r, xcr_0);
	buf (Q, int_fwire_IQ);
	not (int_fwire_IQB, int_fwire_IQ);
	buf (QB, int_fwire_IQB);

	// Timing

	// Additional timing wires
	wire COND_CK_AND_D, COND_CK_AND_NOT_D, COND_D;
	wire COND_D_AND_RB, COND_NOT_CK, COND_NOT_D_AND_RB;
	wire COND_RB, D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	and (COND_CK_AND_D, CK, D);
	not (D__bar, D);
	and (COND_CK_AND_NOT_D, CK, D__bar);
	not (COND_NOT_CK, CK);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		(posedge CK => (Q+:D)) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		ifnone (negedge RB => (QB-:1'b0)) = 0;
		(posedge CK => (QB-:D)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, posedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRX4 (Q, QB, D, RB, CK);
	output Q, QB;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, int_fwire_IQB, int_fwire_r;
	wire xcr_0;

	not (int_fwire_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, delayed_D, int_fwire_r);
	altos_dff_r (int_fwire_IQ, notifier, delayed_CK, delayed_D, int_fwire_r, xcr_0);
	buf (Q, int_fwire_IQ);
	not (int_fwire_IQB, int_fwire_IQ);
	buf (QB, int_fwire_IQB);

	// Timing

	// Additional timing wires
	wire COND_CK_AND_D, COND_CK_AND_NOT_D, COND_D;
	wire COND_D_AND_RB, COND_NOT_CK, COND_NOT_D_AND_RB;
	wire COND_RB, D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	and (COND_CK_AND_D, CK, D);
	not (D__bar, D);
	and (COND_CK_AND_NOT_D, CK, D__bar);
	not (COND_NOT_CK, CK);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		(posedge CK => (Q+:D)) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		ifnone (negedge RB => (QB-:1'b0)) = 0;
		(posedge CK => (QB-:D)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, posedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DFFRX6 (Q, QB, D, RB, CK);
	output Q, QB;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, int_fwire_IQB, int_fwire_r;
	wire xcr_0;

	not (int_fwire_r, delayed_RB);
	altos_dff_r_err (xcr_0, delayed_CK, delayed_D, int_fwire_r);
	altos_dff_r (int_fwire_IQ, notifier, delayed_CK, delayed_D, int_fwire_r, xcr_0);
	buf (Q, int_fwire_IQ);
	not (int_fwire_IQB, int_fwire_IQ);
	buf (QB, int_fwire_IQB);

	// Timing

	// Additional timing wires
	wire COND_CK_AND_D, COND_CK_AND_NOT_D, COND_D;
	wire COND_D_AND_RB, COND_NOT_CK, COND_NOT_D_AND_RB;
	wire COND_RB, D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	and (COND_CK_AND_D, CK, D);
	not (D__bar, D);
	and (COND_CK_AND_NOT_D, CK, D__bar);
	not (COND_NOT_CK, CK);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		(posedge CK => (Q+:D)) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		ifnone (negedge RB => (QB-:1'b0)) = 0;
		(posedge CK => (QB-:D)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, posedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module DLY1X2 (Y, A);
	output Y;
	input A;

	// Function
	buf (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module FAX1 (CO, S, A, B, CI);
	output CO, S;
	input A, B, CI;

	// Function
	wire A__bar, B__bar, CI__bar;
	wire int_fwire_0, int_fwire_1, int_fwire_2;
	wire int_fwire_3, int_fwire_4, int_fwire_5;
	wire int_fwire_6;

	and (int_fwire_0, B, CI);
	and (int_fwire_1, A, CI);
	and (int_fwire_2, A, B);
	or (CO, int_fwire_2, int_fwire_1, int_fwire_0);
	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_3, A__bar, B__bar, CI);
	not (CI__bar, CI);
	and (int_fwire_4, A__bar, B, CI__bar);
	and (int_fwire_5, A, B__bar, CI__bar);
	and (int_fwire_6, A, B, CI);
	or (S, int_fwire_6, int_fwire_5, int_fwire_4, int_fwire_3);

	// Timing
	specify
		if (B == 1'b1 && CI == 1'b0)
			(A => CO) = 0;
		if (B == 1'b0 && CI == 1'b1)
			(A => CO) = 0;
		ifnone (A => CO) = 0;
		if (A == 1'b1 && CI == 1'b0)
			(B => CO) = 0;
		if (A == 1'b0 && CI == 1'b1)
			(B => CO) = 0;
		ifnone (B => CO) = 0;
		if (A == 1'b1 && B == 1'b0)
			(CI => CO) = 0;
		if (A == 1'b0 && B == 1'b1)
			(CI => CO) = 0;
		ifnone (CI => CO) = 0;
		if (B == 1'b1 && CI == 1'b1)
			(A => S) = 0;
		if (B == 1'b0 && CI == 1'b0)
			(A => S) = 0;
		ifnone (A => S) = 0;
		if (B == 1'b1 && CI == 1'b0)
			(A => S) = 0;
		if (B == 1'b0 && CI == 1'b1)
			(A => S) = 0;
		if (A == 1'b1 && CI == 1'b1)
			(B => S) = 0;
		if (A == 1'b0 && CI == 1'b0)
			(B => S) = 0;
		ifnone (B => S) = 0;
		if (A == 1'b1 && CI == 1'b0)
			(B => S) = 0;
		if (A == 1'b0 && CI == 1'b1)
			(B => S) = 0;
		if (A == 1'b1 && B == 1'b1)
			(CI => S) = 0;
		if (A == 1'b0 && B == 1'b0)
			(CI => S) = 0;
		ifnone (CI => S) = 0;
		if (A == 1'b1 && B == 1'b0)
			(CI => S) = 0;
		if (A == 1'b0 && B == 1'b1)
			(CI => S) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module HAX2 (CO, S, A, B);
	output CO, S;
	input A, B;

	// Function
	wire A__bar, B__bar, int_fwire_0;
	wire int_fwire_1;

	and (CO, A, B);
	not (A__bar, A);
	and (int_fwire_0, A__bar, B);
	not (B__bar, B);
	and (int_fwire_1, A, B__bar);
	or (S, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A => CO) = 0;
		(B => CO) = 0;
		if (B == 1'b0)
			(A => S) = 0;
		if (B == 1'b1)
			(A => S) = 0;
		if (A == 1'b0)
			(B => S) = 0;
		if (A == 1'b1)
			(B => S) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module INVX1 (Y, A);
	output Y;
	input A;

	// Function
	not (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module INVX14 (Y, A);
	output Y;
	input A;

	// Function
	not (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module INVX16 (Y, A);
	output Y;
	input A;

	// Function
	not (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module INVX2 (Y, A);
	output Y;
	input A;

	// Function
	not (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module INVX3 (Y, A);
	output Y;
	input A;

	// Function
	not (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module INVX32 (Y, A);
	output Y;
	input A;

	// Function
	not (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module INVX4 (Y, A);
	output Y;
	input A;

	// Function
	not (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module INVX6 (Y, A);
	output Y;
	input A;

	// Function
	not (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module INVX64 (Y, A);
	output Y;
	input A;

	// Function
	not (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module INVX8 (Y, A);
	output Y;
	input A;

	// Function
	not (Y, A);

	// Timing
	specify
		(A => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module LATNQX1 (Q, D, CK);
	output Q;
	input D, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_CK = CK;
`else
	wire delayed_D, delayed_CK;
`endif

	// Function
	wire int_fwire_clk, int_fwire_IQ;

	not (int_fwire_clk, delayed_CK);
	altos_latch (int_fwire_IQ, notifier, int_fwire_clk, delayed_D);
	buf (Q, int_fwire_IQ);

	// Timing

	// Additional timing wires
	wire COND_D, COND_NOT_D;


	// Additional timing gates
	buf (COND_D, D);
	not (COND_NOT_D, D);

	specify
		(D => Q) = 0;
		(negedge CK => (Q+:D)) = 0;
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$width (negedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module LATNQX2 (Q, D, CK);
	output Q;
	input D, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_CK = CK;
`else
	wire delayed_D, delayed_CK;
`endif

	// Function
	wire int_fwire_clk, int_fwire_IQ;

	not (int_fwire_clk, delayed_CK);
	altos_latch (int_fwire_IQ, notifier, int_fwire_clk, delayed_D);
	buf (Q, int_fwire_IQ);

	// Timing

	// Additional timing wires
	wire COND_D, COND_NOT_D;


	// Additional timing gates
	buf (COND_D, D);
	not (COND_NOT_D, D);

	specify
		(D => Q) = 0;
		(negedge CK => (Q+:D)) = 0;
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$width (negedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module LATNQX3 (Q, D, CK);
	output Q;
	input D, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_CK = CK;
`else
	wire delayed_D, delayed_CK;
`endif

	// Function
	wire int_fwire_clk, int_fwire_IQ;

	not (int_fwire_clk, delayed_CK);
	altos_latch (int_fwire_IQ, notifier, int_fwire_clk, delayed_D);
	buf (Q, int_fwire_IQ);

	// Timing

	// Additional timing wires
	wire COND_D, COND_NOT_D;


	// Additional timing gates
	buf (COND_D, D);
	not (COND_NOT_D, D);

	specify
		(D => Q) = 0;
		(negedge CK => (Q+:D)) = 0;
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$width (negedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module LATNRX1 (Q, QB, D, RB, CK);
	output Q, QB;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_clk, int_fwire_IQ, int_fwire_IQB;
	wire int_fwire_r;

	not (int_fwire_clk, delayed_CK);
	not (int_fwire_r, delayed_RB);
	altos_latch_r (int_fwire_IQ, notifier, int_fwire_clk, delayed_D, int_fwire_r);
	buf (Q, int_fwire_IQ);
	not (int_fwire_IQB, int_fwire_IQ);
	buf (QB, int_fwire_IQB);

	// Timing

	// Additional timing wires
	wire COND_CK_AND_D, COND_CK_AND_NOT_D, COND_D;
	wire COND_D_AND_RB, COND_NOT_D_AND_RB, COND_RB;
	wire D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	and (COND_CK_AND_D, CK, D);
	not (D__bar, D);
	and (COND_CK_AND_NOT_D, CK, D__bar);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		(D => Q) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		ifnone (posedge RB => (Q+:1'b1)) = 0;
		(negedge CK => (Q+:D)) = 0;
		(D => QB) = 0;
		(posedge RB => (QB-:1'b1)) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		ifnone (negedge RB => (QB-:1'b0)) = 0;
		(negedge CK => (QB-:D)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, posedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module LATNRX1P5 (Q, QB, D, RB, CK);
	output Q, QB;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_clk, int_fwire_IQ, int_fwire_IQB;
	wire int_fwire_r;

	not (int_fwire_clk, delayed_CK);
	not (int_fwire_r, delayed_RB);
	altos_latch_r (int_fwire_IQ, notifier, int_fwire_clk, delayed_D, int_fwire_r);
	buf (Q, int_fwire_IQ);
	not (int_fwire_IQB, int_fwire_IQ);
	buf (QB, int_fwire_IQB);

	// Timing

	// Additional timing wires
	wire COND_CK_AND_D, COND_CK_AND_NOT_D, COND_D;
	wire COND_D_AND_RB, COND_NOT_D_AND_RB, COND_RB;
	wire D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	and (COND_CK_AND_D, CK, D);
	not (D__bar, D);
	and (COND_CK_AND_NOT_D, CK, D__bar);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		(D => Q) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		ifnone (posedge RB => (Q+:1'b1)) = 0;
		(negedge CK => (Q+:D)) = 0;
		(D => QB) = 0;
		(posedge RB => (QB-:1'b1)) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		ifnone (negedge RB => (QB-:1'b0)) = 0;
		(negedge CK => (QB-:D)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, posedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module LATNRX2 (Q, QB, D, RB, CK);
	output Q, QB;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_clk, int_fwire_IQ, int_fwire_IQB;
	wire int_fwire_r;

	not (int_fwire_clk, delayed_CK);
	not (int_fwire_r, delayed_RB);
	altos_latch_r (int_fwire_IQ, notifier, int_fwire_clk, delayed_D, int_fwire_r);
	buf (Q, int_fwire_IQ);
	not (int_fwire_IQB, int_fwire_IQ);
	buf (QB, int_fwire_IQB);

	// Timing

	// Additional timing wires
	wire COND_CK_AND_D, COND_CK_AND_NOT_D, COND_D;
	wire COND_D_AND_RB, COND_NOT_D_AND_RB, COND_RB;
	wire D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	and (COND_CK_AND_D, CK, D);
	not (D__bar, D);
	and (COND_CK_AND_NOT_D, CK, D__bar);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		(D => Q) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		ifnone (posedge RB => (Q+:1'b1)) = 0;
		(negedge CK => (Q+:D)) = 0;
		(D => QB) = 0;
		(posedge RB => (QB-:1'b1)) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		ifnone (negedge RB => (QB-:1'b0)) = 0;
		(negedge CK => (QB-:D)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, posedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module LATNRX3 (Q, QB, D, RB, CK);
	output Q, QB;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_clk, int_fwire_IQ, int_fwire_IQB;
	wire int_fwire_r;

	not (int_fwire_clk, delayed_CK);
	not (int_fwire_r, delayed_RB);
	altos_latch_r (int_fwire_IQ, notifier, int_fwire_clk, delayed_D, int_fwire_r);
	buf (Q, int_fwire_IQ);
	not (int_fwire_IQB, int_fwire_IQ);
	buf (QB, int_fwire_IQB);

	// Timing

	// Additional timing wires
	wire COND_CK_AND_D, COND_CK_AND_NOT_D, COND_D;
	wire COND_D_AND_RB, COND_NOT_D_AND_RB, COND_RB;
	wire D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	and (COND_CK_AND_D, CK, D);
	not (D__bar, D);
	and (COND_CK_AND_NOT_D, CK, D__bar);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		(D => Q) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		ifnone (posedge RB => (Q+:1'b1)) = 0;
		(negedge CK => (Q+:D)) = 0;
		(D => QB) = 0;
		(posedge RB => (QB-:1'b1)) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b1 && D == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		ifnone (negedge RB => (QB-:1'b0)) = 0;
		(negedge CK => (QB-:D)) = 0;
		$setuphold (posedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (posedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, posedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, posedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (negedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module LATQX1 (Q, D, CK);
	output Q;
	input D, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_CK = CK;
`else
	wire delayed_D, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ;

	altos_latch (int_fwire_IQ, notifier, delayed_CK, delayed_D);
	buf (Q, int_fwire_IQ);

	// Timing

	// Additional timing wires
	wire COND_D, COND_NOT_D;


	// Additional timing gates
	buf (COND_D, D);
	not (COND_NOT_D, D);

	specify
		(D => Q) = 0;
		(posedge CK => (Q+:D)) = 0;
		$setuphold (negedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (negedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$width (posedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module LATQX2 (Q, D, CK);
	output Q;
	input D, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_CK = CK;
`else
	wire delayed_D, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ;

	altos_latch (int_fwire_IQ, notifier, delayed_CK, delayed_D);
	buf (Q, int_fwire_IQ);

	// Timing

	// Additional timing wires
	wire COND_D, COND_NOT_D;


	// Additional timing gates
	buf (COND_D, D);
	not (COND_NOT_D, D);

	specify
		(D => Q) = 0;
		(posedge CK => (Q+:D)) = 0;
		$setuphold (negedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (negedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$width (posedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module LATQX3 (Q, D, CK);
	output Q;
	input D, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_CK = CK;
`else
	wire delayed_D, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ;

	altos_latch (int_fwire_IQ, notifier, delayed_CK, delayed_D);
	buf (Q, int_fwire_IQ);

	// Timing

	// Additional timing wires
	wire COND_D, COND_NOT_D;


	// Additional timing gates
	buf (COND_D, D);
	not (COND_NOT_D, D);

	specify
		(D => Q) = 0;
		(posedge CK => (Q+:D)) = 0;
		$setuphold (negedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (negedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$width (posedge CK &&& COND_D == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module LATRX1 (Q, QB, D, RB, CK);
	output Q, QB;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, int_fwire_IQB, int_fwire_r;

	not (int_fwire_r, delayed_RB);
	altos_latch_r (int_fwire_IQ, notifier, delayed_CK, delayed_D, int_fwire_r);
	buf (Q, int_fwire_IQ);
	not (int_fwire_IQB, int_fwire_IQ);
	buf (QB, int_fwire_IQB);

	// Timing

	// Additional timing wires
	wire CK__bar, COND_D, COND_D_AND_RB;
	wire COND_NOT_CK_AND_D, COND_NOT_CK_AND_NOT_D, COND_NOT_D_AND_RB;
	wire COND_RB, D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	not (CK__bar, CK);
	and (COND_NOT_CK_AND_D, CK__bar, D);
	not (D__bar, D);
	and (COND_NOT_CK_AND_NOT_D, CK__bar, D__bar);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		(D => Q) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		ifnone (posedge RB => (Q+:1'b1)) = 0;
		(posedge CK => (Q+:D)) = 0;
		(D => QB) = 0;
		(posedge RB => (QB-:1'b1)) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		ifnone (negedge RB => (QB-:1'b0)) = 0;
		(posedge CK => (QB-:D)) = 0;
		$setuphold (negedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (negedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (negedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (negedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, negedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, negedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_NOT_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module LATRX1P5 (Q, QB, D, RB, CK);
	output Q, QB;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, int_fwire_IQB, int_fwire_r;

	not (int_fwire_r, delayed_RB);
	altos_latch_r (int_fwire_IQ, notifier, delayed_CK, delayed_D, int_fwire_r);
	buf (Q, int_fwire_IQ);
	not (int_fwire_IQB, int_fwire_IQ);
	buf (QB, int_fwire_IQB);

	// Timing

	// Additional timing wires
	wire CK__bar, COND_D, COND_D_AND_RB;
	wire COND_NOT_CK_AND_D, COND_NOT_CK_AND_NOT_D, COND_NOT_D_AND_RB;
	wire COND_RB, D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	not (CK__bar, CK);
	and (COND_NOT_CK_AND_D, CK__bar, D);
	not (D__bar, D);
	and (COND_NOT_CK_AND_NOT_D, CK__bar, D__bar);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		(D => Q) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		ifnone (posedge RB => (Q+:1'b1)) = 0;
		(posedge CK => (Q+:D)) = 0;
		(D => QB) = 0;
		(posedge RB => (QB-:1'b1)) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		ifnone (negedge RB => (QB-:1'b0)) = 0;
		(posedge CK => (QB-:D)) = 0;
		$setuphold (negedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (negedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (negedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (negedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, negedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, negedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_NOT_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module LATRX2 (Q, QB, D, RB, CK);
	output Q, QB;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, int_fwire_IQB, int_fwire_r;

	not (int_fwire_r, delayed_RB);
	altos_latch_r (int_fwire_IQ, notifier, delayed_CK, delayed_D, int_fwire_r);
	buf (Q, int_fwire_IQ);
	not (int_fwire_IQB, int_fwire_IQ);
	buf (QB, int_fwire_IQB);

	// Timing

	// Additional timing wires
	wire CK__bar, COND_D, COND_D_AND_RB;
	wire COND_NOT_CK_AND_D, COND_NOT_CK_AND_NOT_D, COND_NOT_D_AND_RB;
	wire COND_RB, D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	not (CK__bar, CK);
	and (COND_NOT_CK_AND_D, CK__bar, D);
	not (D__bar, D);
	and (COND_NOT_CK_AND_NOT_D, CK__bar, D__bar);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		(D => Q) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		ifnone (posedge RB => (Q+:1'b1)) = 0;
		(posedge CK => (Q+:D)) = 0;
		(D => QB) = 0;
		(posedge RB => (QB-:1'b1)) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		ifnone (negedge RB => (QB-:1'b0)) = 0;
		(posedge CK => (QB-:D)) = 0;
		$setuphold (negedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (negedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (negedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (negedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, negedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, negedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_NOT_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module LATRX3 (Q, QB, D, RB, CK);
	output Q, QB;
	input D, RB, CK;
	reg notifier;
`ifdef VERILATOR
	wire delayed_D = D, delayed_RB = RB, delayed_CK = CK;
`else
	wire delayed_D, delayed_RB, delayed_CK;
`endif

	// Function
	wire int_fwire_IQ, int_fwire_IQB, int_fwire_r;

	not (int_fwire_r, delayed_RB);
	altos_latch_r (int_fwire_IQ, notifier, delayed_CK, delayed_D, int_fwire_r);
	buf (Q, int_fwire_IQ);
	not (int_fwire_IQB, int_fwire_IQ);
	buf (QB, int_fwire_IQB);

	// Timing

	// Additional timing wires
	wire CK__bar, COND_D, COND_D_AND_RB;
	wire COND_NOT_CK_AND_D, COND_NOT_CK_AND_NOT_D, COND_NOT_D_AND_RB;
	wire COND_RB, D__bar;


	// Additional timing gates
	buf (COND_RB, RB);
	buf (COND_D, D);
	not (CK__bar, CK);
	and (COND_NOT_CK_AND_D, CK__bar, D);
	not (D__bar, D);
	and (COND_NOT_CK_AND_NOT_D, CK__bar, D__bar);
	and (COND_D_AND_RB, D, RB);
	and (COND_NOT_D_AND_RB, D__bar, RB);

	specify
		(D => Q) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b1)
			(negedge RB => (Q+:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b0)
			(negedge RB => (Q+:1'b0)) = 0;
		ifnone (negedge RB => (Q+:1'b0)) = 0;
		ifnone (posedge RB => (Q+:1'b1)) = 0;
		(posedge CK => (Q+:D)) = 0;
		(D => QB) = 0;
		(posedge RB => (QB-:1'b1)) = 0;
		if (CK == 1'b1 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b1)
			(negedge RB => (QB-:1'b0)) = 0;
		if (CK == 1'b0 && D == 1'b0)
			(negedge RB => (QB-:1'b0)) = 0;
		ifnone (negedge RB => (QB-:1'b0)) = 0;
		(posedge CK => (QB-:D)) = 0;
		$setuphold (negedge CK &&& COND_RB == 1'b1, posedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (negedge CK &&& COND_RB == 1'b1, negedge D &&& COND_RB == 1'b1, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (negedge CK, posedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$setuphold (negedge CK, negedge D, 0, 0, notifier,,, delayed_CK, delayed_D);
		$recrem (posedge RB &&& COND_D == 1'b1, negedge CK &&& COND_D == 1'b1, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$recrem (posedge RB, negedge CK, 0, 0, notifier,,, delayed_RB, delayed_CK);
		$width (negedge RB &&& COND_NOT_CK_AND_D == 1'b1, 0, 0, notifier);
		$width (negedge RB &&& COND_NOT_CK_AND_NOT_D == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_D_AND_RB == 1'b1, 0, 0, notifier);
		$width (posedge CK &&& COND_NOT_D_AND_RB == 1'b1, 0, 0, notifier);
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module MIN3X1 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	wire A__bar, B__bar, C__bar;
	wire int_fwire_0, int_fwire_1, int_fwire_2;

	not (C__bar, C);
	not (B__bar, B);
	and (int_fwire_0, B__bar, C__bar);
	not (A__bar, A);
	and (int_fwire_1, A__bar, C__bar);
	and (int_fwire_2, A__bar, B__bar);
	or (Y, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && C == 1'b0)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b1)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (A == 1'b1 && C == 1'b0)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b1)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && B == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module MIN3X1P5 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	wire A__bar, B__bar, C__bar;
	wire int_fwire_0, int_fwire_1, int_fwire_2;

	not (C__bar, C);
	not (B__bar, B);
	and (int_fwire_0, B__bar, C__bar);
	not (A__bar, A);
	and (int_fwire_1, A__bar, C__bar);
	and (int_fwire_2, A__bar, B__bar);
	or (Y, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && C == 1'b0)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b1)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (A == 1'b1 && C == 1'b0)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b1)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && B == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module MIN3X2 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	wire A__bar, B__bar, C__bar;
	wire int_fwire_0, int_fwire_1, int_fwire_2;

	not (C__bar, C);
	not (B__bar, B);
	and (int_fwire_0, B__bar, C__bar);
	not (A__bar, A);
	and (int_fwire_1, A__bar, C__bar);
	and (int_fwire_2, A__bar, B__bar);
	or (Y, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && C == 1'b0)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b1)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (A == 1'b1 && C == 1'b0)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b1)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && B == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module MUX2X1 (Y, A0, A1, S0);
	output Y;
	input A0, A1, S0;

	// Function
	wire int_fwire_0, int_fwire_1, S0__bar;

	and (int_fwire_0, A1, S0);
	not (S0__bar, S0);
	and (int_fwire_1, A0, S0__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (A1 == 1'b1 && S0 == 1'b0)
			(A0 => Y) = 0;
		if (A1 == 1'b0 && S0 == 1'b0)
			(A0 => Y) = 0;
		ifnone (A0 => Y) = 0;
		if (A0 == 1'b1 && S0 == 1'b1)
			(A1 => Y) = 0;
		if (A0 == 1'b0 && S0 == 1'b1)
			(A1 => Y) = 0;
		ifnone (A1 => Y) = 0;
		if (A0 == 1'b0 && A1 == 1'b1)
			(S0 => Y) = 0;
		if (A0 == 1'b1 && A1 == 1'b0)
			(S0 => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module MUX2X2 (Y, A0, A1, S0);
	output Y;
	input A0, A1, S0;

	// Function
	wire int_fwire_0, int_fwire_1, S0__bar;

	and (int_fwire_0, A1, S0);
	not (S0__bar, S0);
	and (int_fwire_1, A0, S0__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (A1 == 1'b1 && S0 == 1'b0)
			(A0 => Y) = 0;
		if (A1 == 1'b0 && S0 == 1'b0)
			(A0 => Y) = 0;
		ifnone (A0 => Y) = 0;
		if (A0 == 1'b1 && S0 == 1'b1)
			(A1 => Y) = 0;
		if (A0 == 1'b0 && S0 == 1'b1)
			(A1 => Y) = 0;
		ifnone (A1 => Y) = 0;
		if (A0 == 1'b0 && A1 == 1'b1)
			(S0 => Y) = 0;
		if (A0 == 1'b1 && A1 == 1'b0)
			(S0 => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module MUX4X1 (Y, A0, A1, A2, A3, S0, S1);
	output Y;
	input A0, A1, A2, A3, S0, S1;

	// Function
	wire int_fwire_0, int_fwire_1, int_fwire_2;
	wire int_fwire_3, S0__bar, S1__bar;

	and (int_fwire_0, A3, S0, S1);
	not (S0__bar, S0);
	and (int_fwire_1, A2, S0__bar, S1);
	not (S1__bar, S1);
	and (int_fwire_2, A1, S0, S1__bar);
	and (int_fwire_3, A0, S0__bar, S1__bar);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A0 => Y) = 0;
		(A1 => Y) = 0;
		(A2 => Y) = 0;
		(A3 => Y) = 0;
		if (A2 == 1'b0 && A3 == 1'b1 && S1 == 1'b1)
			(S0 => Y) = 0;
		if (A0 == 1'b0 && A1 == 1'b1 && S1 == 1'b0)
			(S0 => Y) = 0;
		ifnone (S0 => Y) = 0;
		if (A2 == 1'b1 && A3 == 1'b0 && S1 == 1'b1)
			(S0 => Y) = 0;
		if (A0 == 1'b1 && A1 == 1'b0 && S1 == 1'b0)
			(S0 => Y) = 0;
		if (A1 == 1'b0 && A3 == 1'b1 && S0 == 1'b1)
			(S1 => Y) = 0;
		if (A0 == 1'b0 && A2 == 1'b1 && S0 == 1'b0)
			(S1 => Y) = 0;
		ifnone (S1 => Y) = 0;
		if (A1 == 1'b1 && A3 == 1'b0 && S0 == 1'b1)
			(S1 => Y) = 0;
		if (A0 == 1'b1 && A2 == 1'b0 && S0 == 1'b0)
			(S1 => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module MUX4X1P5 (Y, A0, A1, A2, A3, S0, S1);
	output Y;
	input A0, A1, A2, A3, S0, S1;

	// Function
	wire int_fwire_0, int_fwire_1, int_fwire_2;
	wire int_fwire_3, S0__bar, S1__bar;

	and (int_fwire_0, A3, S0, S1);
	not (S0__bar, S0);
	and (int_fwire_1, A2, S0__bar, S1);
	not (S1__bar, S1);
	and (int_fwire_2, A1, S0, S1__bar);
	and (int_fwire_3, A0, S0__bar, S1__bar);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A0 => Y) = 0;
		(A1 => Y) = 0;
		(A2 => Y) = 0;
		(A3 => Y) = 0;
		if (A2 == 1'b0 && A3 == 1'b1 && S1 == 1'b1)
			(S0 => Y) = 0;
		if (A0 == 1'b0 && A1 == 1'b1 && S1 == 1'b0)
			(S0 => Y) = 0;
		ifnone (S0 => Y) = 0;
		if (A2 == 1'b1 && A3 == 1'b0 && S1 == 1'b1)
			(S0 => Y) = 0;
		if (A0 == 1'b1 && A1 == 1'b0 && S1 == 1'b0)
			(S0 => Y) = 0;
		if (A1 == 1'b0 && A3 == 1'b1 && S0 == 1'b1)
			(S1 => Y) = 0;
		if (A0 == 1'b0 && A2 == 1'b1 && S0 == 1'b0)
			(S1 => Y) = 0;
		ifnone (S1 => Y) = 0;
		if (A1 == 1'b1 && A3 == 1'b0 && S0 == 1'b1)
			(S1 => Y) = 0;
		if (A0 == 1'b1 && A2 == 1'b0 && S0 == 1'b0)
			(S1 => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module MUX4X2 (Y, A0, A1, A2, A3, S0, S1);
	output Y;
	input A0, A1, A2, A3, S0, S1;

	// Function
	wire int_fwire_0, int_fwire_1, int_fwire_2;
	wire int_fwire_3, S0__bar, S1__bar;

	and (int_fwire_0, A3, S0, S1);
	not (S0__bar, S0);
	and (int_fwire_1, A2, S0__bar, S1);
	not (S1__bar, S1);
	and (int_fwire_2, A1, S0, S1__bar);
	and (int_fwire_3, A0, S0__bar, S1__bar);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A0 => Y) = 0;
		(A1 => Y) = 0;
		(A2 => Y) = 0;
		(A3 => Y) = 0;
		if (A2 == 1'b0 && A3 == 1'b1 && S1 == 1'b1)
			(S0 => Y) = 0;
		if (A0 == 1'b0 && A1 == 1'b1 && S1 == 1'b0)
			(S0 => Y) = 0;
		ifnone (S0 => Y) = 0;
		if (A2 == 1'b1 && A3 == 1'b0 && S1 == 1'b1)
			(S0 => Y) = 0;
		if (A0 == 1'b1 && A1 == 1'b0 && S1 == 1'b0)
			(S0 => Y) = 0;
		if (A1 == 1'b0 && A3 == 1'b1 && S0 == 1'b1)
			(S1 => Y) = 0;
		if (A0 == 1'b0 && A2 == 1'b1 && S0 == 1'b0)
			(S1 => Y) = 0;
		ifnone (S1 => Y) = 0;
		if (A1 == 1'b1 && A3 == 1'b0 && S0 == 1'b1)
			(S1 => Y) = 0;
		if (A0 == 1'b1 && A2 == 1'b0 && S0 == 1'b0)
			(S1 => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module MUX4X3 (Y, A0, A1, A2, A3, S0, S1);
	output Y;
	input A0, A1, A2, A3, S0, S1;

	// Function
	wire int_fwire_0, int_fwire_1, int_fwire_2;
	wire int_fwire_3, S0__bar, S1__bar;

	and (int_fwire_0, A3, S0, S1);
	not (S0__bar, S0);
	and (int_fwire_1, A2, S0__bar, S1);
	not (S1__bar, S1);
	and (int_fwire_2, A1, S0, S1__bar);
	and (int_fwire_3, A0, S0__bar, S1__bar);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A0 => Y) = 0;
		(A1 => Y) = 0;
		(A2 => Y) = 0;
		(A3 => Y) = 0;
		if (A2 == 1'b0 && A3 == 1'b1 && S1 == 1'b1)
			(S0 => Y) = 0;
		if (A0 == 1'b0 && A1 == 1'b1 && S1 == 1'b0)
			(S0 => Y) = 0;
		ifnone (S0 => Y) = 0;
		if (A2 == 1'b1 && A3 == 1'b0 && S1 == 1'b1)
			(S0 => Y) = 0;
		if (A0 == 1'b1 && A1 == 1'b0 && S1 == 1'b0)
			(S0 => Y) = 0;
		if (A1 == 1'b0 && A3 == 1'b1 && S0 == 1'b1)
			(S1 => Y) = 0;
		if (A0 == 1'b0 && A2 == 1'b1 && S0 == 1'b0)
			(S1 => Y) = 0;
		ifnone (S1 => Y) = 0;
		if (A1 == 1'b1 && A3 == 1'b0 && S0 == 1'b1)
			(S1 => Y) = 0;
		if (A0 == 1'b1 && A2 == 1'b0 && S0 == 1'b0)
			(S1 => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module MUXI2X1 (Y, A0, A1, S0);
	output Y;
	input A0, A1, S0;

	// Function
	wire A0__bar, A1__bar, int_fwire_0;
	wire int_fwire_1, S0__bar;

	not (A1__bar, A1);
	and (int_fwire_0, A1__bar, S0);
	not (S0__bar, S0);
	not (A0__bar, A0);
	and (int_fwire_1, A0__bar, S0__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (A1 == 1'b1 && S0 == 1'b0)
			(A0 => Y) = 0;
		if (A1 == 1'b0 && S0 == 1'b0)
			(A0 => Y) = 0;
		ifnone (A0 => Y) = 0;
		if (A0 == 1'b1 && S0 == 1'b1)
			(A1 => Y) = 0;
		if (A0 == 1'b0 && S0 == 1'b1)
			(A1 => Y) = 0;
		ifnone (A1 => Y) = 0;
		if (A0 == 1'b1 && A1 == 1'b0)
			(S0 => Y) = 0;
		if (A0 == 1'b0 && A1 == 1'b1)
			(S0 => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module MUXI2X2 (Y, A0, A1, S0);
	output Y;
	input A0, A1, S0;

	// Function
	wire A0__bar, A1__bar, int_fwire_0;
	wire int_fwire_1, S0__bar;

	not (A1__bar, A1);
	and (int_fwire_0, A1__bar, S0);
	not (S0__bar, S0);
	not (A0__bar, A0);
	and (int_fwire_1, A0__bar, S0__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (A1 == 1'b1 && S0 == 1'b0)
			(A0 => Y) = 0;
		if (A1 == 1'b0 && S0 == 1'b0)
			(A0 => Y) = 0;
		ifnone (A0 => Y) = 0;
		if (A0 == 1'b1 && S0 == 1'b1)
			(A1 => Y) = 0;
		if (A0 == 1'b0 && S0 == 1'b1)
			(A1 => Y) = 0;
		ifnone (A1 => Y) = 0;
		if (A0 == 1'b1 && A1 == 1'b0)
			(S0 => Y) = 0;
		if (A0 == 1'b0 && A1 == 1'b1)
			(S0 => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND2BX1 (Y, AB, B);
	output Y;
	input AB, B;

	// Function
	wire B__bar;

	not (B__bar, B);
	or (Y, AB, B__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND2BX1P5 (Y, AB, B);
	output Y;
	input AB, B;

	// Function
	wire B__bar;

	not (B__bar, B);
	or (Y, AB, B__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND2BX2 (Y, AB, B);
	output Y;
	input AB, B;

	// Function
	wire B__bar;

	not (B__bar, B);
	or (Y, AB, B__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND2BX3 (Y, AB, B);
	output Y;
	input AB, B;

	// Function
	wire B__bar;

	not (B__bar, B);
	or (Y, AB, B__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND2BX4 (Y, AB, B);
	output Y;
	input AB, B;

	// Function
	wire B__bar;

	not (B__bar, B);
	or (Y, AB, B__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND2X1 (Y, A, B);
	output Y;
	input A, B;

	// Function
	wire A__bar, B__bar;

	not (B__bar, B);
	not (A__bar, A);
	or (Y, A__bar, B__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND2X1P5 (Y, A, B);
	output Y;
	input A, B;

	// Function
	wire A__bar, B__bar;

	not (B__bar, B);
	not (A__bar, A);
	or (Y, A__bar, B__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND2X2 (Y, A, B);
	output Y;
	input A, B;

	// Function
	wire A__bar, B__bar;

	not (B__bar, B);
	not (A__bar, A);
	or (Y, A__bar, B__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND2X3 (Y, A, B);
	output Y;
	input A, B;

	// Function
	wire A__bar, B__bar;

	not (B__bar, B);
	not (A__bar, A);
	or (Y, A__bar, B__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND2X4 (Y, A, B);
	output Y;
	input A, B;

	// Function
	wire A__bar, B__bar;

	not (B__bar, B);
	not (A__bar, A);
	or (Y, A__bar, B__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND3BX1 (Y, AB, B, C);
	output Y;
	input AB, B, C;

	// Function
	wire B__bar, C__bar;

	not (C__bar, C);
	not (B__bar, B);
	or (Y, AB, B__bar, C__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND3BX2 (Y, AB, B, C);
	output Y;
	input AB, B, C;

	// Function
	wire B__bar, C__bar;

	not (C__bar, C);
	not (B__bar, B);
	or (Y, AB, B__bar, C__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND3BX3 (Y, AB, B, C);
	output Y;
	input AB, B, C;

	// Function
	wire B__bar, C__bar;

	not (C__bar, C);
	not (B__bar, B);
	or (Y, AB, B__bar, C__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND3X1 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	wire A__bar, B__bar, C__bar;

	not (C__bar, C);
	not (B__bar, B);
	not (A__bar, A);
	or (Y, A__bar, B__bar, C__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND3X2 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	wire A__bar, B__bar, C__bar;

	not (C__bar, C);
	not (B__bar, B);
	not (A__bar, A);
	or (Y, A__bar, B__bar, C__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND4BBX1 (Y, AB, BB, C, D);
	output Y;
	input AB, BB, C, D;

	// Function
	wire C__bar, D__bar;

	not (D__bar, D);
	not (C__bar, C);
	or (Y, AB, BB, C__bar, D__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(BB => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND4BBX2 (Y, AB, BB, C, D);
	output Y;
	input AB, BB, C, D;

	// Function
	wire C__bar, D__bar;

	not (D__bar, D);
	not (C__bar, C);
	or (Y, AB, BB, C__bar, D__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(BB => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND4BX1 (Y, AB, B, C, D);
	output Y;
	input AB, B, C, D;

	// Function
	wire B__bar, C__bar, D__bar;

	not (D__bar, D);
	not (C__bar, C);
	not (B__bar, B);
	or (Y, AB, B__bar, C__bar, D__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND4BX2 (Y, AB, B, C, D);
	output Y;
	input AB, B, C, D;

	// Function
	wire B__bar, C__bar, D__bar;

	not (D__bar, D);
	not (C__bar, C);
	not (B__bar, B);
	or (Y, AB, B__bar, C__bar, D__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NAND4X2 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar;

	not (D__bar, D);
	not (C__bar, C);
	not (B__bar, B);
	not (A__bar, A);
	or (Y, A__bar, B__bar, C__bar, D__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR2BX1 (Y, AB, B);
	output Y;
	input AB, B;

	// Function
	wire B__bar;

	not (B__bar, B);
	and (Y, AB, B__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR2BX2 (Y, AB, B);
	output Y;
	input AB, B;

	// Function
	wire B__bar;

	not (B__bar, B);
	and (Y, AB, B__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR2X1 (Y, A, B);
	output Y;
	input A, B;

	// Function
	wire A__bar, B__bar;

	not (B__bar, B);
	not (A__bar, A);
	and (Y, A__bar, B__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR2X2 (Y, A, B);
	output Y;
	input A, B;

	// Function
	wire A__bar, B__bar;

	not (B__bar, B);
	not (A__bar, A);
	and (Y, A__bar, B__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR2X3 (Y, A, B);
	output Y;
	input A, B;

	// Function
	wire A__bar, B__bar;

	not (B__bar, B);
	not (A__bar, A);
	and (Y, A__bar, B__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR2X4 (Y, A, B);
	output Y;
	input A, B;

	// Function
	wire A__bar, B__bar;

	not (B__bar, B);
	not (A__bar, A);
	and (Y, A__bar, B__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR3BX1 (Y, AB, B, C);
	output Y;
	input AB, B, C;

	// Function
	wire B__bar, C__bar;

	not (C__bar, C);
	not (B__bar, B);
	and (Y, AB, B__bar, C__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR3BX1P5 (Y, AB, B, C);
	output Y;
	input AB, B, C;

	// Function
	wire B__bar, C__bar;

	not (C__bar, C);
	not (B__bar, B);
	and (Y, AB, B__bar, C__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR3BX2 (Y, AB, B, C);
	output Y;
	input AB, B, C;

	// Function
	wire B__bar, C__bar;

	not (C__bar, C);
	not (B__bar, B);
	and (Y, AB, B__bar, C__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR3BX3 (Y, AB, B, C);
	output Y;
	input AB, B, C;

	// Function
	wire B__bar, C__bar;

	not (C__bar, C);
	not (B__bar, B);
	and (Y, AB, B__bar, C__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR3X1 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	wire A__bar, B__bar, C__bar;

	not (C__bar, C);
	not (B__bar, B);
	not (A__bar, A);
	and (Y, A__bar, B__bar, C__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR3X2 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	wire A__bar, B__bar, C__bar;

	not (C__bar, C);
	not (B__bar, B);
	not (A__bar, A);
	and (Y, A__bar, B__bar, C__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR4BBX1 (Y, AB, BB, C, D);
	output Y;
	input AB, BB, C, D;

	// Function
	wire C__bar, D__bar;

	not (D__bar, D);
	not (C__bar, C);
	and (Y, AB, BB, C__bar, D__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(BB => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR4BBX2 (Y, AB, BB, C, D);
	output Y;
	input AB, BB, C, D;

	// Function
	wire C__bar, D__bar;

	not (D__bar, D);
	not (C__bar, C);
	and (Y, AB, BB, C__bar, D__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(BB => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR4BX1 (Y, AB, B, C, D);
	output Y;
	input AB, B, C, D;

	// Function
	wire B__bar, C__bar, D__bar;

	not (D__bar, D);
	not (C__bar, C);
	not (B__bar, B);
	and (Y, AB, B__bar, C__bar, D__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR4BX2 (Y, AB, B, C, D);
	output Y;
	input AB, B, C, D;

	// Function
	wire B__bar, C__bar, D__bar;

	not (D__bar, D);
	not (C__bar, C);
	not (B__bar, B);
	and (Y, AB, B__bar, C__bar, D__bar);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR4X1 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar;

	not (D__bar, D);
	not (C__bar, C);
	not (B__bar, B);
	not (A__bar, A);
	and (Y, A__bar, B__bar, C__bar, D__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module NOR4X2 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar;

	not (D__bar, D);
	not (C__bar, C);
	not (B__bar, B);
	not (A__bar, A);
	and (Y, A__bar, B__bar, C__bar, D__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OA211X1 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire int_fwire_0, int_fwire_1;

	and (int_fwire_0, B, C, D);
	and (int_fwire_1, A, C, D);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OA211X2 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire int_fwire_0, int_fwire_1;

	and (int_fwire_0, B, C, D);
	and (int_fwire_1, A, C, D);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OA21X2 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	wire int_fwire_0, int_fwire_1;

	and (int_fwire_0, B, C);
	and (int_fwire_1, A, C);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b1)
			(C => Y) = 0;
		if (A == 1'b1 && B == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OAI211X1 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, int_fwire_0;

	not (D__bar, D);
	not (C__bar, C);
	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_0, A__bar, B__bar);
	or (Y, int_fwire_0, C__bar, D__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OAI211X2 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, int_fwire_0;

	not (D__bar, D);
	not (C__bar, C);
	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_0, A__bar, B__bar);
	or (Y, int_fwire_0, C__bar, D__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OAI21X1 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	wire A__bar, B__bar, C__bar;
	wire int_fwire_0;

	not (C__bar, C);
	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_0, A__bar, B__bar);
	or (Y, int_fwire_0, C__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b1)
			(C => Y) = 0;
		if (A == 1'b1 && B == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OAI21X2 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	wire A__bar, B__bar, C__bar;
	wire int_fwire_0;

	not (C__bar, C);
	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_0, A__bar, B__bar);
	or (Y, int_fwire_0, C__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b1)
			(C => Y) = 0;
		if (A == 1'b1 && B == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OAI221X1 (Y, A, B, C, D, E);
	output Y;
	input A, B, C, D, E;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, E__bar, int_fwire_0;
	wire int_fwire_1;

	not (E__bar, E);
	not (D__bar, D);
	not (C__bar, C);
	and (int_fwire_0, C__bar, D__bar);
	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_1, A__bar, B__bar);
	or (Y, int_fwire_1, int_fwire_0, E__bar);

	// Timing
	specify
		if (B == 1'b0 && C == 1'b1 && D == 1'b1 && E == 1'b1)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b1 && D == 1'b0 && E == 1'b1)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b0 && D == 1'b1 && E == 1'b1)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (A == 1'b0 && C == 1'b1 && D == 1'b1 && E == 1'b1)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b1 && D == 1'b0 && E == 1'b1)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b0 && D == 1'b1 && E == 1'b1)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && D == 1'b0 && E == 1'b1)
			(C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b0 && E == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b0 && E == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b0 && E == 1'b1)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0 && E == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0 && E == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b1 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b1 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b0 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0 && D == 1'b1)
			(E => Y) = 0;
		ifnone (E => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OAI221X2 (Y, A, B, C, D, E);
	output Y;
	input A, B, C, D, E;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, E__bar, int_fwire_0;
	wire int_fwire_1;

	not (E__bar, E);
	not (D__bar, D);
	not (C__bar, C);
	and (int_fwire_0, C__bar, D__bar);
	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_1, A__bar, B__bar);
	or (Y, int_fwire_1, int_fwire_0, E__bar);

	// Timing
	specify
		if (B == 1'b0 && C == 1'b1 && D == 1'b1 && E == 1'b1)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b1 && D == 1'b0 && E == 1'b1)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b0 && D == 1'b1 && E == 1'b1)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (A == 1'b0 && C == 1'b1 && D == 1'b1 && E == 1'b1)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b1 && D == 1'b0 && E == 1'b1)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b0 && D == 1'b1 && E == 1'b1)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && D == 1'b0 && E == 1'b1)
			(C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b0 && E == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b0 && E == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b0 && E == 1'b1)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0 && E == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0 && E == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b1 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b1 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b0 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b1 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1 && D == 1'b1)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b1 && D == 1'b0)
			(E => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0 && D == 1'b1)
			(E => Y) = 0;
		ifnone (E => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OAI22X1 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, int_fwire_0, int_fwire_1;

	not (D__bar, D);
	not (C__bar, C);
	and (int_fwire_0, C__bar, D__bar);
	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_1, A__bar, B__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b0 && C == 1'b1 && D == 1'b1)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b1 && D == 1'b0)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b0 && D == 1'b1)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (A == 1'b0 && C == 1'b1 && D == 1'b1)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b1 && D == 1'b0)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b0 && D == 1'b1)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && D == 1'b0)
			(C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OAI22X2 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, int_fwire_0, int_fwire_1;

	not (D__bar, D);
	not (C__bar, C);
	and (int_fwire_0, C__bar, D__bar);
	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_1, A__bar, B__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b0 && C == 1'b1 && D == 1'b1)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b1 && D == 1'b0)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b0 && D == 1'b1)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (A == 1'b0 && C == 1'b1 && D == 1'b1)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b1 && D == 1'b0)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b0 && D == 1'b1)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && D == 1'b0)
			(C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OAI2B2BX1 (Y, AB, B, CB, D);
	output Y;
	input AB, B, CB, D;

	// Function
	wire B__bar, D__bar, int_fwire_0;
	wire int_fwire_1;

	not (D__bar, D);
	and (int_fwire_0, CB, D__bar);
	not (B__bar, B);
	and (int_fwire_1, AB, B__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b0 && CB == 1'b1 && D == 1'b1)
			(AB => Y) = 0;
		if (B == 1'b0 && CB == 1'b0 && D == 1'b1)
			(AB => Y) = 0;
		if (B == 1'b0 && CB == 1'b0 && D == 1'b0)
			(AB => Y) = 0;
		ifnone (AB => Y) = 0;
		if (AB == 1'b1 && CB == 1'b1 && D == 1'b1)
			(B => Y) = 0;
		if (AB == 1'b1 && CB == 1'b0 && D == 1'b1)
			(B => Y) = 0;
		if (AB == 1'b1 && CB == 1'b0 && D == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (AB == 1'b1 && B == 1'b1 && D == 1'b0)
			(CB => Y) = 0;
		if (AB == 1'b0 && B == 1'b1 && D == 1'b0)
			(CB => Y) = 0;
		if (AB == 1'b0 && B == 1'b0 && D == 1'b0)
			(CB => Y) = 0;
		ifnone (CB => Y) = 0;
		if (AB == 1'b1 && B == 1'b1 && CB == 1'b1)
			(D => Y) = 0;
		if (AB == 1'b0 && B == 1'b1 && CB == 1'b1)
			(D => Y) = 0;
		if (AB == 1'b0 && B == 1'b0 && CB == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OAI2B2BX1P5 (Y, AB, B, CB, D);
	output Y;
	input AB, B, CB, D;

	// Function
	wire B__bar, D__bar, int_fwire_0;
	wire int_fwire_1;

	not (D__bar, D);
	and (int_fwire_0, CB, D__bar);
	not (B__bar, B);
	and (int_fwire_1, AB, B__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b0 && CB == 1'b1 && D == 1'b1)
			(AB => Y) = 0;
		if (B == 1'b0 && CB == 1'b0 && D == 1'b1)
			(AB => Y) = 0;
		if (B == 1'b0 && CB == 1'b0 && D == 1'b0)
			(AB => Y) = 0;
		ifnone (AB => Y) = 0;
		if (AB == 1'b1 && CB == 1'b1 && D == 1'b1)
			(B => Y) = 0;
		if (AB == 1'b1 && CB == 1'b0 && D == 1'b1)
			(B => Y) = 0;
		if (AB == 1'b1 && CB == 1'b0 && D == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (AB == 1'b1 && B == 1'b1 && D == 1'b0)
			(CB => Y) = 0;
		if (AB == 1'b0 && B == 1'b1 && D == 1'b0)
			(CB => Y) = 0;
		if (AB == 1'b0 && B == 1'b0 && D == 1'b0)
			(CB => Y) = 0;
		ifnone (CB => Y) = 0;
		if (AB == 1'b1 && B == 1'b1 && CB == 1'b1)
			(D => Y) = 0;
		if (AB == 1'b0 && B == 1'b1 && CB == 1'b1)
			(D => Y) = 0;
		if (AB == 1'b0 && B == 1'b0 && CB == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OAI2B2BX2 (Y, AB, B, CB, D);
	output Y;
	input AB, B, CB, D;

	// Function
	wire B__bar, D__bar, int_fwire_0;
	wire int_fwire_1;

	not (D__bar, D);
	and (int_fwire_0, CB, D__bar);
	not (B__bar, B);
	and (int_fwire_1, AB, B__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b0 && CB == 1'b1 && D == 1'b1)
			(AB => Y) = 0;
		if (B == 1'b0 && CB == 1'b0 && D == 1'b1)
			(AB => Y) = 0;
		if (B == 1'b0 && CB == 1'b0 && D == 1'b0)
			(AB => Y) = 0;
		ifnone (AB => Y) = 0;
		if (AB == 1'b1 && CB == 1'b1 && D == 1'b1)
			(B => Y) = 0;
		if (AB == 1'b1 && CB == 1'b0 && D == 1'b1)
			(B => Y) = 0;
		if (AB == 1'b1 && CB == 1'b0 && D == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (AB == 1'b1 && B == 1'b1 && D == 1'b0)
			(CB => Y) = 0;
		if (AB == 1'b0 && B == 1'b1 && D == 1'b0)
			(CB => Y) = 0;
		if (AB == 1'b0 && B == 1'b0 && D == 1'b0)
			(CB => Y) = 0;
		ifnone (CB => Y) = 0;
		if (AB == 1'b1 && B == 1'b1 && CB == 1'b1)
			(D => Y) = 0;
		if (AB == 1'b0 && B == 1'b1 && CB == 1'b1)
			(D => Y) = 0;
		if (AB == 1'b0 && B == 1'b0 && CB == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OAI2B2BX3 (Y, AB, B, CB, D);
	output Y;
	input AB, B, CB, D;

	// Function
	wire B__bar, D__bar, int_fwire_0;
	wire int_fwire_1;

	not (D__bar, D);
	and (int_fwire_0, CB, D__bar);
	not (B__bar, B);
	and (int_fwire_1, AB, B__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b0 && CB == 1'b1 && D == 1'b1)
			(AB => Y) = 0;
		if (B == 1'b0 && CB == 1'b0 && D == 1'b1)
			(AB => Y) = 0;
		if (B == 1'b0 && CB == 1'b0 && D == 1'b0)
			(AB => Y) = 0;
		ifnone (AB => Y) = 0;
		if (AB == 1'b1 && CB == 1'b1 && D == 1'b1)
			(B => Y) = 0;
		if (AB == 1'b1 && CB == 1'b0 && D == 1'b1)
			(B => Y) = 0;
		if (AB == 1'b1 && CB == 1'b0 && D == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (AB == 1'b1 && B == 1'b1 && D == 1'b0)
			(CB => Y) = 0;
		if (AB == 1'b0 && B == 1'b1 && D == 1'b0)
			(CB => Y) = 0;
		if (AB == 1'b0 && B == 1'b0 && D == 1'b0)
			(CB => Y) = 0;
		ifnone (CB => Y) = 0;
		if (AB == 1'b1 && B == 1'b1 && CB == 1'b1)
			(D => Y) = 0;
		if (AB == 1'b0 && B == 1'b1 && CB == 1'b1)
			(D => Y) = 0;
		if (AB == 1'b0 && B == 1'b0 && CB == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OAI2BB2X2 (Y, AB, BB, C, D);
	output Y;
	input AB, BB, C, D;

	// Function
	wire C__bar, D__bar, int_fwire_0;
	wire int_fwire_1;

	not (D__bar, D);
	not (C__bar, C);
	and (int_fwire_0, C__bar, D__bar);
	and (int_fwire_1, AB, BB);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (BB == 1'b1 && C == 1'b1 && D == 1'b1)
			(AB => Y) = 0;
		if (BB == 1'b1 && C == 1'b1 && D == 1'b0)
			(AB => Y) = 0;
		if (BB == 1'b1 && C == 1'b0 && D == 1'b1)
			(AB => Y) = 0;
		ifnone (AB => Y) = 0;
		if (AB == 1'b1 && C == 1'b1 && D == 1'b1)
			(BB => Y) = 0;
		if (AB == 1'b1 && C == 1'b1 && D == 1'b0)
			(BB => Y) = 0;
		if (AB == 1'b1 && C == 1'b0 && D == 1'b1)
			(BB => Y) = 0;
		ifnone (BB => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OAI31X1 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, int_fwire_0;

	not (D__bar, D);
	not (C__bar, C);
	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_0, A__bar, B__bar, C__bar);
	or (Y, int_fwire_0, D__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (((A == 1'b1) && (B == 1'b0) && (C == 1'b1)) || ((A == 1'b0) && (B == 1'b1) && (C == 1'b1)))
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OAI31X2 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, int_fwire_0;

	not (D__bar, D);
	not (C__bar, C);
	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_0, A__bar, B__bar, C__bar);
	or (Y, int_fwire_0, D__bar);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (((A == 1'b1) && (B == 1'b0) && (C == 1'b1)) || ((A == 1'b0) && (B == 1'b1) && (C == 1'b1)))
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OAOI211X1 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, int_fwire_0, int_fwire_1;

	not (D__bar, D);
	not (C__bar, C);
	and (int_fwire_0, C__bar, D__bar);
	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_1, A__bar, B__bar, D__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && D == 1'b0)
			(C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OAOI211X2 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	wire A__bar, B__bar, C__bar;
	wire D__bar, int_fwire_0, int_fwire_1;

	not (D__bar, D);
	not (C__bar, C);
	and (int_fwire_0, C__bar, D__bar);
	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_1, A__bar, B__bar, D__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && D == 1'b0)
			(C => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && D == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && D == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b1 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b1 && C == 1'b0)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b1)
			(D => Y) = 0;
		if (A == 1'b0 && B == 1'b0 && C == 1'b0)
			(D => Y) = 0;
		ifnone (D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OR2X1 (Y, A, B);
	output Y;
	input A, B;

	// Function
	or (Y, A, B);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OR2X2 (Y, A, B);
	output Y;
	input A, B;

	// Function
	or (Y, A, B);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OR2X3 (Y, A, B);
	output Y;
	input A, B;

	// Function
	or (Y, A, B);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OR3BX1 (Y, AB, B, C);
	output Y;
	input AB, B, C;

	// Function
	wire AB__bar;

	not (AB__bar, AB);
	or (Y, AB__bar, B, C);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OR3BX2 (Y, AB, B, C);
	output Y;
	input AB, B, C;

	// Function
	wire AB__bar;

	not (AB__bar, AB);
	or (Y, AB__bar, B, C);

	// Timing
	specify
		(AB => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OR3X1 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	or (Y, A, B, C);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OR3X2 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	or (Y, A, B, C);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OR4X1 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	or (Y, A, B, C, D);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module OR4X2 (Y, A, B, C, D);
	output Y;
	input A, B, C, D;

	// Function
	or (Y, A, B, C, D);

	// Timing
	specify
		(A => Y) = 0;
		(B => Y) = 0;
		(C => Y) = 0;
		(D => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module TBUFX1 (Y, A, E);
	output Y;
	input A, E;

	// Function
	bufif1 (Y, A, E);

	// Timing
	specify
		(A => Y) = 0;
		(E => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module TBUFX2 (Y, A, E);
	output Y;
	input A, E;

	// Function
	bufif1 (Y, A, E);

	// Timing
	specify
		(A => Y) = 0;
		(E => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module TIEHI (Y);
	output Y;

	// Function
	buf (Y, 1'b1);

	// Timing
	specify
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module TIELO (Y);
	output Y;

	// Function
	buf (Y, 1'b0);

	// Timing
	specify
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module TINVX1 (Y, A, E);
	output Y;
	input A, E;

	// Function
	notif1 (Y, A, E);

	// Timing
	specify
		(A => Y) = 0;
		(E => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module TINVX2 (Y, A, E);
	output Y;
	input A, E;

	// Function
	notif1 (Y, A, E);

	// Timing
	specify
		(A => Y) = 0;
		(E => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module XNOR2X1 (Y, A, B);
	output Y;
	input A, B;

	// Function
	wire A__bar, B__bar, int_fwire_0;
	wire int_fwire_1;

	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_0, A__bar, B__bar);
	and (int_fwire_1, A, B);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1)
			(A => Y) = 0;
		if (B == 1'b0)
			(A => Y) = 0;
		if (A == 1'b1)
			(B => Y) = 0;
		if (A == 1'b0)
			(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module XNOR2X2 (Y, A, B);
	output Y;
	input A, B;

	// Function
	wire A__bar, B__bar, int_fwire_0;
	wire int_fwire_1;

	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_0, A__bar, B__bar);
	and (int_fwire_1, A, B);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1)
			(A => Y) = 0;
		if (B == 1'b0)
			(A => Y) = 0;
		if (A == 1'b1)
			(B => Y) = 0;
		if (A == 1'b0)
			(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module XNOR3X1 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	wire A__bar, B__bar, C__bar;
	wire int_fwire_0, int_fwire_1, int_fwire_2;
	wire int_fwire_3;

	not (C__bar, C);
	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_0, A__bar, B__bar, C__bar);
	and (int_fwire_1, A__bar, B, C);
	and (int_fwire_2, A, B__bar, C);
	and (int_fwire_3, A, B, C__bar);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && C == 1'b0)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b1)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (B == 1'b1 && C == 1'b1)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b0)
			(A => Y) = 0;
		if (A == 1'b1 && C == 1'b0)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b1)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && C == 1'b1)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b0)
			(B => Y) = 0;
		if (A == 1'b1 && B == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0)
			(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module XNOR3X2 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	wire A__bar, B__bar, C__bar;
	wire int_fwire_0, int_fwire_1, int_fwire_2;
	wire int_fwire_3;

	not (C__bar, C);
	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_0, A__bar, B__bar, C__bar);
	and (int_fwire_1, A__bar, B, C);
	and (int_fwire_2, A, B__bar, C);
	and (int_fwire_3, A, B, C__bar);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && C == 1'b0)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b1)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (B == 1'b1 && C == 1'b1)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b0)
			(A => Y) = 0;
		if (A == 1'b1 && C == 1'b0)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b1)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && C == 1'b1)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b0)
			(B => Y) = 0;
		if (A == 1'b1 && B == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0)
			(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module XOR2X1 (Y, A, B);
	output Y;
	input A, B;

	// Function
	wire A__bar, B__bar, int_fwire_0;
	wire int_fwire_1;

	not (A__bar, A);
	and (int_fwire_0, A__bar, B);
	not (B__bar, B);
	and (int_fwire_1, A, B__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b0)
			(A => Y) = 0;
		if (B == 1'b1)
			(A => Y) = 0;
		if (A == 1'b0)
			(B => Y) = 0;
		if (A == 1'b1)
			(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module XOR2X2 (Y, A, B);
	output Y;
	input A, B;

	// Function
	wire A__bar, B__bar, int_fwire_0;
	wire int_fwire_1;

	not (A__bar, A);
	and (int_fwire_0, A__bar, B);
	not (B__bar, B);
	and (int_fwire_1, A, B__bar);
	or (Y, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b0)
			(A => Y) = 0;
		if (B == 1'b1)
			(A => Y) = 0;
		if (A == 1'b0)
			(B => Y) = 0;
		if (A == 1'b1)
			(B => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module XOR3X1 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	wire A__bar, B__bar, C__bar;
	wire int_fwire_0, int_fwire_1, int_fwire_2;
	wire int_fwire_3;

	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_0, A__bar, B__bar, C);
	not (C__bar, C);
	and (int_fwire_1, A__bar, B, C__bar);
	and (int_fwire_2, A, B__bar, C__bar);
	and (int_fwire_3, A, B, C);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && C == 1'b1)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b0)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (B == 1'b1 && C == 1'b0)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b1)
			(A => Y) = 0;
		if (A == 1'b1 && C == 1'b1)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && C == 1'b0)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b1)
			(B => Y) = 0;
		if (A == 1'b1 && B == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1)
			(C => Y) = 0;
	endspecify
endmodule
`endcelldefine

// type:  
`timescale 1ns/10ps
`celldefine
module XOR3X2 (Y, A, B, C);
	output Y;
	input A, B, C;

	// Function
	wire A__bar, B__bar, C__bar;
	wire int_fwire_0, int_fwire_1, int_fwire_2;
	wire int_fwire_3;

	not (B__bar, B);
	not (A__bar, A);
	and (int_fwire_0, A__bar, B__bar, C);
	not (C__bar, C);
	and (int_fwire_1, A__bar, B, C__bar);
	and (int_fwire_2, A, B__bar, C__bar);
	and (int_fwire_3, A, B, C);
	or (Y, int_fwire_3, int_fwire_2, int_fwire_1, int_fwire_0);

	// Timing
	specify
		if (B == 1'b1 && C == 1'b1)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b0)
			(A => Y) = 0;
		ifnone (A => Y) = 0;
		if (B == 1'b1 && C == 1'b0)
			(A => Y) = 0;
		if (B == 1'b0 && C == 1'b1)
			(A => Y) = 0;
		if (A == 1'b1 && C == 1'b1)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b0)
			(B => Y) = 0;
		ifnone (B => Y) = 0;
		if (A == 1'b1 && C == 1'b0)
			(B => Y) = 0;
		if (A == 1'b0 && C == 1'b1)
			(B => Y) = 0;
		if (A == 1'b1 && B == 1'b1)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b0)
			(C => Y) = 0;
		ifnone (C => Y) = 0;
		if (A == 1'b1 && B == 1'b0)
			(C => Y) = 0;
		if (A == 1'b0 && B == 1'b1)
			(C => Y) = 0;
	endspecify
endmodule
`endcelldefine


`ifdef _udp_def_altos_latch_
`else
`define _udp_def_altos_latch_
primitive altos_latch (q, v, clk, d);
	output q;
	reg q;
	input v, clk, d;

	table
		* ? ? : ? : x;
		? 1 0 : ? : 0;
		? 1 1 : ? : 1;
		? x 0 : 0 : -;
		? x 1 : 1 : -;
		? 0 ? : ? : -;
	endtable
endprimitive
`endif

`ifdef _udp_def_altos_dff_err_
`else
`define _udp_def_altos_dff_err_
primitive altos_dff_err (q, clk, d);
	output q;
	reg q;
	input clk, d;

	table
		(0x) ? : ? : 0;
		(1x) ? : ? : 1;
	endtable
endprimitive
`endif

`ifdef _udp_def_altos_dff_
`else
`define _udp_def_altos_dff_
primitive altos_dff (q, v, clk, d, xcr);
	output q;
	reg q;
	input v, clk, d, xcr;

	table
		*  ?   ? ? : ? : x;
		? (x1) 0 0 : ? : 0;
		? (x1) 1 0 : ? : 1;
		? (x1) 0 1 : 0 : 0;
		? (x1) 1 1 : 1 : 1;
		? (x1) ? x : ? : -;
		? (bx) 0 ? : 0 : -;
		? (bx) 1 ? : 1 : -;
		? (x0) b ? : ? : -;
		? (x0) ? x : ? : -;
		? (01) 0 ? : ? : 0;
		? (01) 1 ? : ? : 1;
		? (10) ? ? : ? : -;
		?  b   * ? : ? : -;
		?  ?   ? * : ? : -;
	endtable
endprimitive
`endif

`ifdef _udp_def_altos_dff_r_err_
`else
`define _udp_def_altos_dff_r_err_
primitive altos_dff_r_err (q, clk, d, r);
	output q;
	reg q;
	input clk, d, r;

	table
		 ?   0 (0x) : ? : -;
		 ?   0 (x0) : ? : -;
		(0x) ?  0   : ? : 0;
		(0x) 0  x   : ? : 0;
		(1x) ?  0   : ? : 1;
		(1x) 0  x   : ? : 1;
	endtable
endprimitive
`endif

`ifdef _udp_def_altos_dff_r_
`else
`define _udp_def_altos_dff_r_
primitive altos_dff_r (q, v, clk, d, r, xcr);
	output q;
	reg q;
	input v, clk, d, r, xcr;

	table
		*  ?   ?  ?   ? : ? : x;
		?  ?   ?  1   ? : ? : 0;
		?  b   ? (1?) ? : 0 : -;
		?  x   0 (1?) ? : 0 : -;
		?  ?   ? (10) ? : ? : -;
		?  ?   ? (x0) ? : ? : -;
		?  ?   ? (0x) ? : 0 : -;
		? (x1) 0  ?   0 : ? : 0;
		? (x1) 1  0   0 : ? : 1;
		? (x1) 0  ?   1 : 0 : 0;
		? (x1) 1  0   1 : 1 : 1;
		? (x1) ?  ?   x : ? : -;
		? (bx) 0  ?   ? : 0 : -;
		? (bx) 1  0   ? : 1 : -;
		? (x0) 0  ?   ? : ? : -;
		? (x0) 1  0   ? : ? : -;
		? (x0) ?  0   x : ? : -;
		? (01) 0  ?   ? : ? : 0;
		? (01) 1  0   ? : ? : 1;
		? (10) ?  ?   ? : ? : -;
		?  b   *  ?   ? : ? : -;
		?  ?   ?  ?   * : ? : -;
	endtable
endprimitive
`endif

`ifdef _udp_def_altos_dff_s_err_
`else
`define _udp_def_altos_dff_s_err_
primitive altos_dff_s_err (q, clk, d, s);
	output q;
	reg q;
	input clk, d, s;

	table
		 ?   1 (0x) : ? : -;
		 ?   1 (x0) : ? : -;
		(0x) ?  0   : ? : 0;
		(0x) 1  x   : ? : 0;
		(1x) ?  0   : ? : 1;
		(1x) 1  x   : ? : 1;
	endtable
endprimitive
`endif

`ifdef _udp_def_altos_dff_s_
`else
`define _udp_def_altos_dff_s_
primitive altos_dff_s (q, v, clk, d, s, xcr);
	output q;
	reg q;
	input v, clk, d, s, xcr;

	table
		*  ?   ?  ?   ? : ? : x;
		?  ?   ?  1   ? : ? : 1;
		?  b   ? (1?) ? : 1 : -;
		?  x   1 (1?) ? : 1 : -;
		?  ?   ? (10) ? : ? : -;
		?  ?   ? (x0) ? : ? : -;
		?  ?   ? (0x) ? : 1 : -;
		? (x1) 0  0   0 : ? : 0;
		? (x1) 1  ?   0 : ? : 1;
		? (x1) 1  ?   1 : 1 : 1;
		? (x1) 0  0   1 : 0 : 0;
		? (x1) ?  ?   x : ? : -;
		? (bx) 1  ?   ? : 1 : -;
		? (bx) 0  0   ? : 0 : -;
		? (x0) 1  ?   ? : ? : -;
		? (x0) 0  0   ? : ? : -;
		? (x0) ?  0   x : ? : -;
		? (01) 1  ?   ? : ? : 1;
		? (01) 0  0   ? : ? : 0;
		? (10) ?  ?   ? : ? : -;
		?  b   *  ?   ? : ? : -;
		?  ?   ?  ?   * : ? : -;
	endtable
endprimitive
`endif

`ifdef _udp_def_altos_dff_sr_err_
`else
`define _udp_def_altos_dff_sr_err_
primitive altos_dff_sr_err (q, clk, d, s, r);
	output q;
	reg q;
	input clk, d, s, r;

	table
		 ?   1 (0x)  ?   : ? : -;
		 ?   0  ?   (0x) : ? : -;
		 ?   0  ?   (x0) : ? : -;
		(0x) ?  0    0   : ? : 0;
		(0x) 1  x    0   : ? : 0;
		(0x) 0  0    x   : ? : 0;
		(1x) ?  0    0   : ? : 1;
		(1x) 1  x    0   : ? : 1;
		(1x) 0  0    x   : ? : 1;
	endtable
endprimitive
`endif

`ifdef _udp_def_altos_dff_sr_0
`else
`define _udp_def_altos_dff_sr_0
primitive altos_dff_sr_0 (q, v, clk, d, s, r, xcr);
	output q;
	reg q;
	input v, clk, d, s, r, xcr;

	table
	//	v,  clk, d, s, r : q' : q;

		*  ?   ?   ?   ?   ? : ? : x;
		?  ?   ?   ?   1   ? : ? : 0;
		?  ?   ?   1   0   ? : ? : 1;
		?  b   ? (1?)  0   ? : 1 : -;
		?  x   1 (1?)  0   ? : 1 : -;
		?  ?   ? (10)  0   ? : ? : -;
		?  ?   ? (x0)  0   ? : ? : -;
		?  ?   ? (0x)  0   ? : 1 : -;
		?  b   ?  0   (1?) ? : 0 : -;
		?  x   0  0   (1?) ? : 0 : -;
		?  ?   ?  0   (10) ? : ? : -;
		?  ?   ?  0   (x0) ? : ? : -;
		?  ?   ?  0   (0x) ? : 0 : -;
		? (x1) 0  0    ?   0 : ? : 0;
		? (x1) 1  ?    0   0 : ? : 1;
		? (x1) 0  0    ?   1 : 0 : 0;
		? (x1) 1  ?    0   1 : 1 : 1;
		? (x1) ?  ?    0   x : ? : -;
		? (x1) ?  0    ?   x : ? : -;
		? (1x) 0  0    ?   ? : 0 : -;
		? (1x) 1  ?    0   ? : 1 : -;
		? (x0) 0  0    ?   ? : ? : -;
		? (x0) 1  ?    0   ? : ? : -;
		? (x0) ?  0    0   x : ? : -;
		? (0x) 0  0    ?   ? : 0 : -;
		? (0x) 1  ?    0   ? : 1 : -;
		? (01) 0  0    ?   ? : ? : 0;
		? (01) 1  ?    0   ? : ? : 1;
		? (10) ?  0    ?   ? : ? : -;
		? (10) ?  ?    0   ? : ? : -;
		?  b   *  0    ?   ? : ? : -;
		?  b   *  ?    0   ? : ? : -;
		?  ?   ?  ?    ?   * : ? : -;
	endtable
endprimitive
`endif

`ifdef _udp_def_altos_dff_sr_1
`else
`define _udp_def_altos_dff_sr_1
primitive altos_dff_sr_1 (q, v, clk, d, s, r, xcr);
	output q;
	reg q;
	input v, clk, d, s, r, xcr;

	table
	//	v,  clk, d, s, r : q' : q;

		*  ?   ?   ?   ?   ? : ? : x;
		?  ?   ?   0   1   ? : ? : 0;
		?  ?   ?   1   ?   ? : ? : 1;
		?  b   ? (1?)  0   ? : 1 : -;
		?  x   1 (1?)  0   ? : 1 : -;
		?  ?   ? (10)  0   ? : ? : -;
		?  ?   ? (x0)  0   ? : ? : -;
		?  ?   ? (0x)  0   ? : 1 : -;
		?  b   ?  0   (1?) ? : 0 : -;
		?  x   0  0   (1?) ? : 0 : -;
		?  ?   ?  0   (10) ? : ? : -;
		?  ?   ?  0   (x0) ? : ? : -;
		?  ?   ?  0   (0x) ? : 0 : -;
		? (x1) 0  0    ?   0 : ? : 0;
		? (x1) 1  ?    0   0 : ? : 1;
		? (x1) 0  0    ?   1 : 0 : 0;
		? (x1) 1  ?    0   1 : 1 : 1;
		? (x1) ?  ?    0   x : ? : -;
		? (x1) ?  0    ?   x : ? : -;
		? (1x) 0  0    ?   ? : 0 : -;
		? (1x) 1  ?    0   ? : 1 : -;
		? (x0) 0  0    ?   ? : ? : -;
		? (x0) 1  ?    0   ? : ? : -;
		? (x0) ?  0    0   x : ? : -;
		? (0x) 0  0    ?   ? : 0 : -;
		? (0x) 1  ?    0   ? : 1 : -;
		? (01) 0  0    ?   ? : ? : 0;
		? (01) 1  ?    0   ? : ? : 1;
		? (10) ?  0    ?   ? : ? : -;
		? (10) ?  ?    0   ? : ? : -;
		?  b   *  0    ?   ? : ? : -;
		?  b   *  ?    0   ? : ? : -;
		?  ?   ?  ?    ?   * : ? : -;
	endtable
endprimitive
`endif

`ifdef _udp_def_altos_latch_r_
`else
`define _udp_def_altos_latch_r_
primitive altos_latch_r (q, v, clk, d, r);
	output q;
	reg q;
	input v, clk, d, r;

	table
		* ? ? ? : ? : x;
		? ? ? 1 : ? : 0;
		? 0 ? 0 : ? : -;
		? 0 ? x : 0 : -;
		? 1 0 0 : ? : 0;
		? 1 0 x : ? : 0;
		? 1 1 0 : ? : 1;
		? x 0 0 : 0 : -;
		? x 0 x : 0 : -;
		? x 1 0 : 1 : -;
	endtable
endprimitive
`endif

`ifdef _udp_def_altos_latch_s_
`else
`define _udp_def_altos_latch_s_
primitive altos_latch_s (q, v, clk, d, s);
	output q;
	reg q;
	input v, clk, d, s;

	table
		* ? ? ? : ? : x;
		? ? ? 1 : ? : 1;
		? 0 ? 0 : ? : -;
		? 0 ? x : 1 : -;
		? 1 1 0 : ? : 1;
		? 1 1 x : ? : 1;
		? 1 0 0 : ? : 0;
		? x 1 0 : 1 : -;
		? x 1 x : 1 : -;
		? x 0 0 : 0 : -;
	endtable
endprimitive
`endif

`ifdef _udp_def_altos_latch_sr_0
`else
`define _udp_def_altos_latch_sr_0
primitive altos_latch_sr_0 (q, v, clk, d, s, r);
	output q;
	reg q;
	input v, clk, d, s, r;

	table
		* ? ? ? ? : ? : x;
		? 1 1 ? 0 : ? : 1;
		? 1 0 0 ? : ? : 0;
		? ? ? 1 0 : ? : 1;
		? ? ? ? 1 : ? : 0;
		? 0 * ? ? : ? : -;
		? 0 ? * 0 : 1 : 1;
		? 0 ? 0 * : 0 : 0;
		? * 1 ? 0 : 1 : 1;
		? * 0 0 ? : 0 : 0;
		? ? 1 * 0 : 1 : 1;
		? ? 0 0 * : 0 : 0;
	endtable
endprimitive
`endif

`ifdef _udp_def_altos_latch_sr_1
`else
`define _udp_def_altos_latch_sr_1
primitive altos_latch_sr_1 (q, v, clk, d, s, r);
	output q;
	reg q;
	input v, clk, d, s, r;

	table
		* ? ? ? ? : ? : x;
		? 1 1 ? 0 : ? : 1;
		? 1 0 0 ? : ? : 0;
		? ? ? 1 ? : ? : 1;
		? ? ? 0 1 : ? : 0;
		? 0 * ? ? : ? : -;
		? 0 ? * 0 : 1 : 1;
		? 0 ? 0 * : 0 : 0;
		? * 1 ? 0 : 1 : 1;
		? * 0 0 ? : 0 : 0;
		? ? 1 * 0 : 1 : 1;
		? ? 0 0 * : 0 : 0;
	endtable
endprimitive
`endif
