`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:25:24 11/18/2015 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
	 input rst
	 );
	 
	 wire [31:0]NPC, 
					PC, 
					//IMM, 
					Instruction, 
					PC_4;
	 wire Zero,
			RegDst, 
			ALUSrc, 
			MemtoReg, 
			RegWrite, 
			MemWrite, 
			BEQ, 
			JAL, 
			JR,
			ExtOp,
			J;
	wire [3:0]ALUCtrl;
	wire [4:0]RD_WA;
	wire [31:0]RData2,
				  ExtResult,ALUA,
				  ALUB,
				  ALUResult, 
				  WData,
				  dout;			
	//				
	PC programCounter (
							 clk, 
							 rst, 
							 NPC[31:0], 
							 PC[31:0]
							);
	im_4k instructionMemory (
								 PC[11:2], 
								 Instruction[31:0]
								 );
	NPC nextProgramCounter( 
									PC[31:0], 
								   //IMM[31:0], 
									Instruction[31:0], 
									BEQ, 
									Zero, 
									JAL,
									JR,
									J,
									ALUA[31:0],//????
									NPC[31:0], 
									PC_4[31:0]
								  );
	Controller controller(
								 Instruction[31:26], 
							    Instruction[5:0], 
								 RegDst, 
								 ALUSrc, 
								 MemtoReg, 
								 RegWrite, 
								 MemWrite, 
								 BEQ, 
								 JAL, 
								 JR,
								 ExtOp,
								 J,
								 ALUCtrl[3:0]
								 );
	MP5 multiPlexer5 (
							Instruction[20:16],
							Instruction[15:11],
							RegDst,
							RD_WA[4:0]
							);
	GPR generalPurposeRegister (
										 clk,
										 rst,
										 Instruction[25:21],
										 Instruction[20:16],
										 RD_WA[4:0],
										 RegWrite,
										 PC_4[31:0],
										 WData[31:0],
										 JAL, 
										 ALUA[31:0],
										 RData2[31:0]
										);
	EXT extender (
						Instruction[15:0],
						ExtOp,
						ExtResult[31:0]					
					 );
	MX32 multiPlexer32 (
								RData2[32:0],
								ExtResult[31:0],
								ALUSrc,
								ALUB[31:0]
							  );
	ALU arithmeticLogicUnit(
									ALUA[31:0],
									ALUB[31:0],
									ALUCtrl[3:0],
									ALUResult[31:0],
									Zero
								   );
	dm_4k dataMemory (
						ALUResult[11:2],
						RData2[31:0],
						//ALUResult[31:0],
						//MemtoReg,
						MemWrite,
						clk,
						//rst,
						dout[31:0]
					  );
	MP32_MemReg chooseDataMTR (
										MemtoReg,
										dout[31:0],
										ALUResult[31:0],
										WData[31:0]
										);

endmodule

