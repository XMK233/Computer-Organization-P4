`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:50:45 11/18/2015 
// Design Name: 
// Module Name:    mp32_MemReg 
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
module MP32_MemReg(
    input MemtoReg,
    input [31:0]dout,
    input [31:0]ALUResult,
    output [31:0]WData
    );
	 assign WData = (MemtoReg) ?  dout : ALUResult;


endmodule
