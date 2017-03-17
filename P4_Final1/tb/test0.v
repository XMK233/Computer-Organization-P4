`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:59:37 11/18/2015
// Design Name:   mips
// Module Name:   G:/ISE Files/P4_Final1/tb/test0.v
// Project Name:  P4_Final1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test0;

	// Inputs
	reg clk;
	reg rst;

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.rst(rst)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		#3;
		rst = 0;
		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end
	
	always begin
		clk = ~clk;
		#10;
	end 
      
endmodule

