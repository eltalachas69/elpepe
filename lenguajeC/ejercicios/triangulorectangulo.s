	.file	"triangulorectangulo.c"
	.text
	.globl	base
	.bss
	.align 8
base:
	.space 8
	.globl	altura
	.align 8
altura:
	.space 8
	.text
	.globl	calcularArea
	.def	calcularArea;	.scl	2;	.type	32;	.endef
	.seh_proc	calcularArea
calcularArea:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movsd	base(%rip), %xmm1
	movsd	altura(%rip), %xmm0
	mulsd	%xmm1, %xmm0
	movsd	.LC0(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -8(%rbp)
	movsd	-8(%rbp), %xmm0
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 8
.LC1:
	.ascii "Ingresa la base del triangulo: \0"
.LC2:
	.ascii "%lf\0"
	.align 8
.LC3:
	.ascii "Ingresa la altura del triangulo: \0"
	.align 8
.LC4:
	.ascii "Un triangulo rectangulo de altura %f y base %f, tiene un area de %f\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	base(%rip), %rax
	movq	%rax, %rdx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	scanf
	leaq	.LC3(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	altura(%rip), %rax
	movq	%rax, %rdx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	scanf
	call	calcularArea
	movsd	base(%rip), %xmm2
	movsd	altura(%rip), %xmm1
	movq	%xmm0, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm3
	movq	%rax, %rcx
	movq	%xmm2, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm2
	movq	%rax, %rdx
	movq	%xmm1, %rax
	movq	%rax, %r8
	movq	%r8, %xmm0
	movq	%rcx, %r9
	movq	%rdx, %r8
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC4(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$0, %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC0:
	.long	0
	.long	1073741824
	.ident	"GCC: (GNU) 13.4.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
