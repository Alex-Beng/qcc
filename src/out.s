.data
.align 2
.text
.globl main
	j main
func_f:
	lw $t0 -36 ($sp)
	bne $t0 0 label1
	li $v0 0
	jr $ra
label1:
	lw $t1 -36 ($sp)
	bne $t1 1 label2
	li $v0 1
	jr $ra
label2:
	lw $t2 -36 ($sp)
	blt $t2 2 label3
	lw $t3 -36 ($sp)
	sub $t4 $t3 1
	sw $t4 -108 ($sp)
	sw $ra -212 ($sp)
	addi $sp $sp -108
	jal func_f
	addi $sp $sp 108
	lw $ra -212 ($sp)
	move $t5 $v0
	lw $t6 -36 ($sp)
	sub $t7 $t6 2
	sw $t7 -108 ($sp)
	sw $t5 -144 ($sp)
	sw $ra -212 ($sp)
	addi $sp $sp -108
	jal func_f
	addi $sp $sp 108
	lw $ra -212 ($sp)
	lw $t5 -144 ($sp)
	move $s0 $v0
	add $s1 $t5 $t5
	move $v0 $s1
	jr $ra
label3:
	jr $ra
main:
	li $t0 127
	sw $t0 -4 ($sp)
	lw $t1 -4 ($sp)
	sll $t9 $t1 2
	addi $t9 $t9 8
	sub $t9 $sp $t9
	lw $t2 ($t9)
	move $t3 $t2
	sw $t3 -48 ($sp)
	li $v0 1
	lw $t4 -48 ($sp)
	move $a0 $t4
	syscall
	j exit
	jr $ra
exit:
