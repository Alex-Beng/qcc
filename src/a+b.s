.data
.align 2
_a : .word 0
_b : .word 0
_n : .word 0
string_3 : .asciiz "\n"
string_5 : .asciiz "got this if equal 10\n"
string_6 : .asciiz "if less 10 you got this \n"
string_1 : .asciiz "input n:"
string_2 : .asciiz "sum of a and b is: "
string_4 : .asciiz "you got to break if greater than 10\n"
.text
.globl main
	j main
main:
	li $v0 4
	la $a0 string_1
	syscall
	li $v0 5
	syscall
	move $t0 $v0
	sw $t0 _n
	add $t1 $0 $0
	sw $t1 -28 ($sp)
label1:
	lw $t2 -28 ($sp)
	lw $t3 _n
	bge $t2 $t3 label2
	lw $t4 -28 ($sp)
	add $t5 $t4 1
	li $v0 5
	syscall
	move $t6 $v0
	sw $t6 _a
	li $v0 5
	syscall
	move $t7 $v0
	sw $t7 _b
	lw $s0 _a
	lw $s1 _b
	add $s2 $s0 $s1
	li $v0 4
	la $a0 string_2
	syscall
	li $v0 1
	move $a0 $s2
	syscall
	li $v0 4
	la $a0 string_3
	syscall
	lw $s3 _a
	lw $s4 _b
	add $s5 $s3 $s4
	ble $s5 10 label3
	li $v0 11
	li $a0 121
	syscall
	li $v0 4
	la $a0 string_4
	syscall
	j label2
label3:
	lw $s6 _a
	lw $s7 _b
	add $fp $s6 $s7
	bne $fp 10 label4
	li $v0 4
	la $a0 string_5
	syscall
	move $t0 $t5
	sw $t0 -28 ($sp)
	j label1
label4:
	li $v0 4
	la $a0 string_6
	syscall
	move $t1 $t5
	sw $t1 -28 ($sp)
	j label1
label2:
	j exit
	jr $ra
exit:
