`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:23:27 11/18/2015 
// Design Name: 
// Module Name:    mp32 
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
module MX32(
    input [31:0]RData2,
    input [31:0]Extended,
    input ALUSrc,
    output [31:0]ALUB
    );
	assign ALUB = (ALUSrc == 1) ? Extended : RData2;

endmodule

