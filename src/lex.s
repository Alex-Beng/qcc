.data
_b : .byte 0
_d : .space 23
.align 2
_a : .word 0
_c : .space 92
string_3 : .asciiz "\n"
string_1 : .asciiz "hello world!\n"
string_8 : .asciiz "test ass: "
string_7 : .asciiz "test out 23*a - (90) + 100/10 * (23+a): "
string_4 : .asciiz "test out char b: "
string_6 : .asciiz "test out const char f: "
string_5 : .asciiz "test out const int e: "
string_2 : .asciiz "test out int a: "
.text
.globl main
	j main
func_test_recusion:
	lw $t0 -0 ($sp)
	bne $t0 0 label1
	li $v0 0
	jr $ra
	j label2
label1:
	lw $t1 -0 ($sp)
	bne $t1 1 label3
	li $v0 1
	jr $ra
	j label4
label3:
	lw $t2 -0 ($sp)
	blt $t2 2 label5
	lw $t3 -0 ($sp)
	sub $t4 $t3 1
	sw $t4 -108 ($sp)
	sw $ra -212 ($sp)
	addi $sp $sp -108
	jal func_test_recusion
	addi $sp $sp 108
	lw $ra -212 ($sp)
	move $t5 $v0
	lw $t6 -0 ($sp)
	sub $t7 $t6 2
	sw $t7 -108 ($sp)
	sw $t5 -144 ($sp)
	sw $ra -212 ($sp)
	addi $sp $sp -108
	jal func_test_recusion
	addi $sp $sp 108
	lw $ra -212 ($sp)
	lw $t5 -144 ($sp)
	move $s0 $v0
	add $s1 $t5 $s0
	move $v0 $s1
	jr $ra
label5:
label4:
label2:
	jr $ra
func_fuck:
label6:
	lw $t0 -0 ($sp)
	blez $t0 label7
	li $v0 1
	lw $t1 -0 ($sp)
	move $a0 $t1
	syscall
	lw $t2 -0 ($sp)
	sub $t3 $t2 1
	move $t4 $t3
	sw $t4 -0 ($sp)
	j label6
label7:
	jr $ra
main:
	li $t9 10
	sw $t9 -144 ($sp)
	sw $ra -224 ($sp)
	addi $sp $sp -144
	jal func_fuck
	addi $sp $sp 144
	lw $ra -224 ($sp)
	li $v0 4
	la $a0 string_1
	syscall
	li $t0 233
	sw $t0 _a
	li $v0 4
	la $a0 string_2
	syscall
	li $v0 1
	lw $t1 _a
	move $a0 $t1
	syscall
	li $v0 4
	la $a0 string_3
	syscall
	li $t2 98
	sb $t2 _b
	li $v0 4
	la $a0 string_4
	syscall
	li $v0 11
	lbu $t3 _b
	move $a0 $t3
	syscall
	li $v0 4
	la $a0 string_3
	syscall
	li $v0 4
	la $a0 string_5
	syscall
	li $v0 1
	li $a0 1
	syscall
	li $v0 4
	la $a0 string_3
	syscall
	li $v0 4
	la $a0 string_6
	syscall
	li $v0 11
	li $a0 102
	syscall
	li $v0 4
	la $a0 string_3
	syscall
	lw $t4 _a
	mul $t5 $t4 23
	sub $t6 $t5 90
	li $t7 10
	lw $s0 _a
	add $s1 $s0 23
	mul $s2 $t7 $s1
	add $s3 $t6 $s2
	move $s4 $s3
	sw $s4 _a
	li $v0 4
	la $a0 string_7
	syscall
	li $v0 1
	lw $s5 _a
	move $a0 $s5
	syscall
	li $v0 4
	la $a0 string_3
	syscall
	lw $s6 _a
	ble $s6 100 label8
	li $s7 100
	sw $s7 _a
label8:
	add $fp $0 $0
	sw $fp -56 ($sp)
label9:
	lw $t0 -56 ($sp)
	bge $t0 20 label10
	lw $t1 -56 ($sp)
	add $t2 $t1 1
	lw $t3 -56 ($sp)
	sw $t3 -144 ($sp)
	sw $t2 -180 ($sp)
	sw $ra -248 ($sp)
	addi $sp $sp -144
	jal func_test_recusion
	addi $sp $sp 144
	lw $ra -248 ($sp)
	lw $t2 -180 ($sp)
	move $t4 $v0
	lw $t5 -56 ($sp)
	sll $t8 $t5 2
	addi $t8 $t8 60
	sub $t8 $sp $t8
	sw $t4  ($t8)
	li $v0 4
	la $a0 string_8
	syscall
	lw $t6 -56 ($sp)
	sll $t9 $t6 2
	addi $t9 $t9 60
	sub $t9 $sp $t9
	lw $t7 ($t9)
	li $v0 1
	move $a0 $t7
	syscall
	li $v0 4
	la $a0 string_3
	syscall
	lw $s0 -56 ($sp)
	sll $t9 $s0 2
	addi $t9 $t9 60
	sub $t9 $sp $t9
	lw $s1 ($t9)
	ble $s1 10 label11
	j label10
	j label12
label11:
	move $s2 $t2
	sw $s2 -56 ($sp)
	j label9
label12:
	move $s3 $t2
	sw $s3 -56 ($sp)
	j label9
label10:
	li $t9 10
	sw $t9 -144 ($sp)
	sw $ra -248 ($sp)
	addi $sp $sp -144
	jal func_test_recusion
	addi $sp $sp 144
	lw $ra -248 ($sp)
	move $s4 $v0
	move $s5 $s4
	sw $s5 -140 ($sp)
	li $v0 1
	lw $s6 -140 ($sp)
	move $a0 $s6
	syscall
	li $v0 4
	la $a0 string_3
	syscall
	j exit
	jr $ra
exit:
