`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:19:06 11/18/2015 
// Design Name: 
// Module Name:    pc 
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
module PC(
    input Clk,
	 input Reset,
	 input [31:0]NPC,
	 output [31:0]pc
	 );
	 reg [31:0]pc;
	 always @(posedge Clk) begin
		if (Reset) begin
			pc <= 32'h0000_3000;
		end
		else begin
			pc = NPC;
		end
	 end
endmodule 
