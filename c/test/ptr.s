	.file	"ptr.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$16, %esp
	movl	%gs:20, %eax
	movl	%eax, 12(%esp)
	xorl	%eax, %eax
	movl	$1819044972, 6(%esp)
	movw	$108, 10(%esp)
	movl	(%esp), %eax
	addl	$3, %eax
	movb	$97, (%eax)
	movb	$7, 9(%esp)
	movl	$0, %eax
	movl	12(%esp), %edx
	xorl	%gs:20, %edx
	je	.L3
	call	__stack_chk_fail
.L3:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
