`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:21:43 11/18/2015 
// Design Name: 
// Module Name:    mp5 
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
module MP5(
    input [4:0]RT,
    input [4:0]RD,
    input RegDst,
    output [4:0]RD_WA
    );
	assign RD_WA = (RegDst) ? RD : RT; 

endmodule 
