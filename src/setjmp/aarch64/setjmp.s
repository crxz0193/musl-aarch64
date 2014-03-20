.global __setjmp
.global _setjmp
.global setjmp
.type __setjmp,@function
.type _setjmp,@function
.type setjmp,@function
__setjmp:
_setjmp:
setjmp:
	// IHI0055B_aapcs64 5.1.1 General-purpose Registers
	// r0-r7 are temp registers
	// r16, r17 Intra-procedure-call registers
	// we will save rest all
	// TODO: clarify the code
	stp	 x8, x9 ,	[x0,#0]
	stp	x10, x11,	[x0,#16]
	stp	x12, x13,	[x0,#32]
	stp	x14, x15,	[x0,#48]
	stp	x17, x18,	[x0,#64]
	stp	x19, x20,	[x0,#80]
	stp	x21, x22,	[x0,#96]
	stp	x23, x24,	[x0,#112]
	stp	x25, x26,	[x0,#128]
	stp	x27, x28,	[x0,#144]
	stp	x29, x30,	[x0,#160]

	//floating point registers
	
	stp	d8 , d9,	[x0,#176]
	stp	d10, d11,	[x0,#192]
	stp	d12, d13,	[x0,#208]
	stp	d14, d15,	[x0,#224]
	mov  x0, #0
	ret

