.weak _init
.weak _fini
.global _start
.type _start,%function
_start:
	/* x29 = fp */
	/* x30 = lr */
	mov x29,#0
	mov x30,#0
	ldr x2,[sp],#16
	mov x3,sp
	ldr x4,_fini
	str fp,[sp,#-16]!
	str x1,[sp,#-16]!
	str x4,[sp,#-16]!
	ldr x4,=_init
	ldr x1,=main
	bl __libc_start_main
1:  	b 1b
