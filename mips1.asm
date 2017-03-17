j main
ABS: 
	addu $14, $5, $13#$14 = $5 + $13
	subu $15, $6, $11#$15 + $6 + $11
	jr $ra #jump back to linked one
changdao:
	addu $18, $16, $11#$18, 
	addu $19, $5, $13
	lui $20, 10
	
	sw $19, 16($3)
	jr $ra
main:ori $1, $1, 20#$1 give 20 to this register
ori $2, $2, 21#give 21 to this register
ori $3, $3, 1#give 1 to $3
addu $4, $2, $3#addu $2+$3 = $4 
lui $4, 8#the lui
lui $5, 9# the lui
addu $6, $5, $4#$5 + $4 = $6
subu $7, $4, $3#$7 = $4 - $3
addu $8, $1, $2
addu $21, $0, $1
douye: subu $9, $8, $7
sw $6,4($1)#store content in $6 to $1 shift 4
sw $7,3($2)#
lw $10, ($1)#load $1 contents to $10     
lw $11, 4($1)#
sw $4, ($1)
jal ABS
lw $5, -1($3)#shift is minus
subu $5, $5, $3
addu $6, $6, $2
ori $13, $13, 1#ori, let the content of $13 to be 1
addu $12, $11, $13# $12 = $13 + $11
subu $21, $21, $3
beq $21, $3, continue
j douye
continue: addu $5, $0, $7
addu $13, $3, $6
lui $6, 12
ori $11, $11, 26
sw $15,($1)
addu $3, $1, $0
sw $14, -12($3)
lw $16, 16($3)
subu $17, $12, $16
sw $17, 7($2)
jal changdao
hehe: subu $12, $12, $3#if $12 is equal to $11 then to jump to the hehe, do the loop
	beq $11, $12, hehe









