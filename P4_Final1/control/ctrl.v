`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:17:44 11/18/2015 
// Design Name: 
// Module Name:    ctrl 
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
module Controller(
	input [5:0]op,
	input [5:0]func,
	output RegDst,
	output ALUSrc,
	output MemtoReg,
	output RegWrite,
	output MemWrite,
	output BEQ,
	output JAL,
	output JR,
	output ExtOp,
	output J,
	output [3:0]ALUCtrl
	 );
	wire fcAdd, fcSub;
	wire add, sub, ori, lw, sw, beq, lui, jal;
	wire Add, Subtract;
	wire j;
	//
	assign fcAdd = (func[5] & ~func[4] & ~func[3] & ~func[2] & ~func[1] & func[0]);
	assign fcSub = (func[5] & ~func[4] & ~func[3] & ~func[2] & func[1] & func[0]);
	assign fcJr = (~func[5] & ~func[4] & func[3] & ~func[2] & ~func[1] & ~func[0]);
	//this is the first and logic
	assign addu = (~op[5] & ~op[4] & ~op[3] & ~op[2] & ~op[1] & ~op[0] & fcAdd);
	assign subu = (~op[5] & ~op[4] & ~op[3] & ~op[2] & ~op[1] & ~op[0] & fcSub);
	assign ori = (~op[5] & ~op[4] & op[3] & op[2] & ~op[1] & op[0]);
	assign lw = (op[5] & ~op[4] & ~op[3] & ~op[2] & op[1] & op[0]);
	assign sw = (op[5] & ~op[4] & op[3] & ~op[2] & op[1] & op[0]);
	assign beq = (~op[5] & ~op[4] & ~op[3] & op[2] & ~op[1] & ~op[0]);
	assign lui = (~op[5] & ~op[4] & op[3] & op[2] & op[1] & op[0]);
	assign jal = (~op[5] & ~op[4] & ~op[3] & ~op[2] & op[1] & op[0]);
	assign jr = (~op[5] & ~op[4] & ~op[3] & ~op[2] & ~op[1] & ~op[0] & fcJr);
	assign j = (~op[5] & ~op[4] & ~op[3] & ~op[2] & op[1] & ~op[0]);
	//or logic
	assign RegDst = addu | subu /*| jr*/;
	assign ALUSrc = ori | sw | lw | lui;
	assign MemtoReg = lw; 
	assign RegWrite = addu | subu | ori | lw | lui | jal;
	assign MemWrite = sw;
	assign BEQ = beq;
	assign ExtOp = lui;
	assign Add = addu | sw | lw;
	assign Subtract = subu | beq;
	assign ALUCtrl = { lui, ori, Subtract, Add}; 
	assign JAL = jal;
	assign JR = jr;
	assign J = j;
endmodule 
