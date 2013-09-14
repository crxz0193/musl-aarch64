.weak _init
.weak _fini
.global _start
_start:
	mov x29,#0
	mov x30,#0

	ldr x2,[sp],#16
	mov x3,sp
	str x29,[sp,#-16]!
	str a1,[sp,#-16]!

	adr x16,2f
	ldr a4,2f+16
	add a4,a4,x16
	str a4,[sp,#-16]!
	ldr a4,2f+8
	add a4,a4,x16

	ldr a1,2f
	add x16,x16,a1
	ldr a1,2f+12
	ldr a1,[x16,a1]

	bl __libc_start_main(PLT)
1:	b 1b
2:	.word _GLOBAL_OFFSET_TABLE_-2b
	.word _fini-2b
	.word _init-2b
	.word main(GOT)
