`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:21:15 11/18/2015 
// Design Name: 
// Module Name:    npc 
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
module NPC(
    input [31:0]PC,
	 //input [31:0]IMM,
	 input [31:0]Instruction,
	 input Ifbeq,
	 input Zero,
	 input  Ifjal,
	 input Ifjr,//??????
	 input Ifj,
	 input [31:0]GPR31,//????
	 output [31:0]nPC,
	 output [31:0]PC_4
	 );
	 assign nPC = (Ifbeq && Zero) ? PC + 4 + {Instruction[15:0], 2'b00} :
					  (Ifjal) ? {PC[31:28], Instruction[25:0], 2'b00} : 
					  (Ifjr) ? GPR31: 
					  (Ifj) ? {PC[31:28], Instruction[25:0], 2'b00} :PC + 32'b100 ;//???????
    assign PC_4 = /*(Ifjal) ? */PC + 32'b100 /*: PC*/ ;
	 /*reg [31:2]NPC;
	 always begin
		if (jalSym != 6'b000011) begin
			 NPC = PC + 1;//some mystery
		end
		else if (jalSym == 6'b000011) begin
			NPC = PC + 1 + IMM[11:2];//要存储到数据地方31号寄存器
		end
	end*/
endmodule 