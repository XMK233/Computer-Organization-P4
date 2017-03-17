`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:24:08 11/18/2015 
// Design Name: 
// Module Name:    alu 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ALU(
    input [31:0]A,
    input [31:0]B,
    input [3:0]ALUCtrl,
    output [31:0]Result,
    output Zero
    );
	assign Result = (ALUCtrl == 4'b0001) ? A + B : 
						 (ALUCtrl == 4'b0010) ? A - B :
						 (ALUCtrl == 4'b0100) ? A | B : 
						 (ALUCtrl == 4'b1000) ? B : 32'bx;
	assign Zero = (Result == 32'b0) ? 1 : 0;
endmodule

