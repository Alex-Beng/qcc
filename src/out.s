.data
_c : .byte 0
_d : .byte 0
_ii : .space 90
.align 2
_a : .word 0
_b : .word 0
string_4 : .asciiz "    t2: "
string_1 : .asciiz " "
string_2 : .asciiz "\n"
string_3 : .asciiz "t1: "
.text
.globl main
	j main
func_f:
	li $v0 1
	lw $t0 -0 ($sp)
	move $a0 $t0
	syscall
	li $v0 4
	la $a0 string_1
	syscall
	li $v0 1
	lw $t1 -4 ($sp)
	move $a0 $t1
	syscall
	li $v0 4
	la $a0 string_2
	syscall
	lw $t2 -0 ($sp)
	bne $t2 0 label1
	li $v0 0
	jr $ra
label1:
	lw $t3 -0 ($sp)
	bne $t3 1 label2
	li $v0 1
	jr $ra
label2:
	lw $t4 -0 ($sp)
	blt $t4 2 label3
	li $v0 1
	jr $ra
label3:
	jr $ra
main:
	li $t9 0
	sw $t9 -32 ($sp)
	li $t9 1
	sw $t9 -36 ($sp)
	li $t0 2
	sw $t0 -28 ($sp)
label4:
	lw $t1 -28 ($sp)
	bge $t1 10 label5
	lw $t2 -28 ($sp)
	add $t3 $t2 1
	lw $t4 -28 ($sp)
	sub $t5 $t4 1
	sll $t9 $t5 2
	addi $t9 $t9 32
	sub $t9 $sp $t9
	lw $t6 ($t9)
	move $t7 $t6
	sw $t7 -76 ($sp)
	lw $s0 -28 ($sp)
	sub $s1 $s0 2
	sll $t9 $s1 2
	addi $t9 $t9 32
	sub $t9 $sp $t9
	lw $s2 ($t9)
	move $s3 $s2
	sw $s3 -80 ($sp)
	li $v0 4
	la $a0 string_3
	syscall
	li $v0 1
	lw $s4 -76 ($sp)
	move $a0 $s4
	syscall
	li $v0 4
	la $a0 string_4
	syscall
	li $v0 1
	lw $s5 -80 ($sp)
	move $a0 $s5
	syscall
	li $v0 4
	la $a0 string_2
	syscall
	lw $s6 -76 ($sp)
	lw $s7 -80 ($sp)
	add $fp $s6 $s7
	move $t0 $fp
	sw $t0 -72 ($sp)
	li $v0 1
	lw $t1 -72 ($sp)
	move $a0 $t1
	syscall
	li $v0 4
	la $a0 string_2
	syscall
	lw $t2 -72 ($sp)
	sw $t3 -8 ($sp)
	lw $t3 -28 ($sp)
	sll $t8 $t3 2
	addi $t8 $t8 32
	sub $t8 $sp $t8
	sw $t2  ($t8)
	lw $t4 -8 ($sp)
	move $t5 $t4
	sw $t5 -28 ($sp)
	j label4
label5:
	j exit
	jr $ra
exit:
