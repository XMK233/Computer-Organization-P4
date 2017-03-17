`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:24:46 11/18/2015 
// Design Name: 
// Module Name:    dm 
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
module dm_4k(
    input [11:2]addr,
    input [31:0]din,
    /*input [31:0]ALUResult,//
    input MemtoReg,/*/
    input we,
    input clk,
    //input Clr,
    output [31:0]dout
    );
	 reg [31:0]dm[1023:0];
	 integer i; 
	 initial begin
		for (i = 0; i < 32; i = i + 1 ) begin
					dm[i] <= 32'b0;
				end
	 end
	 always @(posedge clk) begin
			/*if (Clr) begin
				
			end
			else */if (we) begin
				dm[addr] = din;
			end
			//
    end
	 assign dout = /*(MemtoReg) ? */dm[addr] /*0: ALUResult*/;
endmodule

