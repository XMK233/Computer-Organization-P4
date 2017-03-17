`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:22:57 11/18/2015 
// Design Name: 
// Module Name:    ext 
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
module EXT(
    input [15:0]inComing,
    input ExtOp,
    output [31:0]ExtResult
    );
	assign ExtResult = (ExtOp == 1'b1) ? {inComing, 16'b0} : 
							 (ExtOp == 1'b0) ? {16'b0, inComing}: 32'bx; 
endmodule 
