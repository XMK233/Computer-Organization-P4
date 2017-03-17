`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:22:10 11/18/2015 
// Design Name: 
// Module Name:    gpr 
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
module GPR(
    input Clk,
    input ResetReg,
    input [4:0]RS1,
    input [4:0]RS2,
    input [4:0]RD_WA,
    input RegWrite,
	 input [31:0]PC_4,
    input [31:0]WData,
	 input Ifjal, 
    output [31:0]RData1,
    output [31:0]RData2
    );
	reg [31:0]data[31:0];
	integer i;
	always @(posedge Clk /*or Clk*/)
		begin
			if (Ifjal) begin
					data[31] = PC_4;
				end
			//
			if (ResetReg) begin
				for (i = 0; i<32; i = i + 1) begin
					data[i] = 32'b0;
				end
			end
			else if (RegWrite && ~Ifjal) begin//jal时输入寄存器的值是未知值，不予录入，于是加入了一个~IFjal
				data[RD_WA] = WData;
			end
		end
	
	assign RData1 = data[RS1];
	assign RData2 = data[RS2];
endmodule 
