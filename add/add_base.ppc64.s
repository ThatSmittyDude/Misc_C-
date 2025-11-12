	.file	"add_base.cpp"
	.machine power7
	.machine altivec
	.section	".text"
#APP
	.globl _ZSt21ios_base_library_initv
#NO_APP
	.globl num1
	.section	".data"
	.align 2
	.type	num1, @object
	.size	num1, 4
num1:
	.long	16383
	.globl num2
	.align 2
	.type	num2, @object
	.size	num2, 4
num2:
	.long	16384
	.globl num3
	.align 2
	.type	num3, @object
	.size	num3, 4
num3:
	.long	511
	.globl num4
	.align 2
	.type	num4, @object
	.size	num4, 4
num4:
	.long	512
	.globl num5
	.align 2
	.type	num5, @object
	.size	num5, 4
num5:
	.long	32766
	.globl result
	.lcomm	result,4,4
	.type	result, @object
	.section	".text"
	.align 2
	.globl main
	.section	".opd","aw"
	.align 3
main:
	.quad	.L.main,.TOC.@tocbase,0
	.previous
	.type	main, @function
.L.main:
.LFB2014:
	.cfi_startproc
	std 31,-8(1)
	stdu 1,-64(1)
	.cfi_def_cfa_offset 64
	.cfi_offset 31, -8
	mr 31,1
	.cfi_def_cfa_register 31
	addis 9,2,num1@toc@ha
	addi 9,9,num1@toc@l
	lwz 10,0(9)
	addis 9,2,num2@toc@ha
	addi 9,9,num2@toc@l
	lwz 9,0(9)
	add 10,10,9
	addis 9,2,num3@toc@ha
	addi 9,9,num3@toc@l
	lwz 9,0(9)
	add 10,10,9
	addis 9,2,num4@toc@ha
	addi 9,9,num4@toc@l
	lwz 9,0(9)
	add 10,10,9
	addis 9,2,num5@toc@ha
	addi 9,9,num5@toc@l
	lwz 9,0(9)
	add 10,10,9
	addis 9,2,result@toc@ha
	addi 9,9,result@toc@l
	stw 10,0(9)
	li 9,0
	extsw 9,9
	mr 3,9
	addi 1,31,64
	.cfi_def_cfa 1, 0
	ld 31,-8(1)
	blr
	.long 0
	.byte 0,9,0,0,128,1,0,1
	.cfi_endproc
.LFE2014:
	.size	main,.-.L.main
	.section	.rodata
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE:
	.byte	1
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedImEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedImEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedImEE:
	.byte	1
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE:
	.byte	1
	.ident	"GCC: (Ubuntu 14.2.0-4ubuntu2~24.04) 14.2.0"
