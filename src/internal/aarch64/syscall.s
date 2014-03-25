.global __syscall
.type __syscall,%function

//code.metager.de/source/xref/gnu/glibc/sysdeps/unix/sysv/linux/aarch64/syscall.S
__syscall:
	stp x29,x30, [sp,#-16]!
	mov x29, sp

	str x8, [sp,#-16]!

	uxtw x8,w0
	mov	 x0,x1
	mov  x1,x2
	mov  x2,x3
	mov  x3,x4
	mov  x4,x5
	mov  x5,x6
	mov  x6,x7
	svc  0x0
	
	ldr x8,       [sp], #16
	ldp x29, x30, [sp], #16

	/* check return error*/
	cmn x0, #4095 /*0xfff*/
	/*cneg x0, x0, hi*/
	ret
