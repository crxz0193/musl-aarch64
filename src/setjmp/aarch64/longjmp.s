.global _longjmp
.global longjmp
.type _longjmp,%function
.type longjmp,%function
_longjmp:
longjmp:
	// IHI0055B_aapcs64 5.1.1 General-purpose Registers
	// r0-r7 are temp registers
	// r16, r17 Intra-procedure-call registers
	// we will save rest all
	// TODO: clarify the code
	ldp	 x8, x9 ,	[x0,#0]
	ldp	x10, x11,	[x0,#16]
	ldp	x12, x13,	[x0,#32]
	ldp	x14, x15,	[x0,#48]
	ldp	x17, x18,	[x0,#64]
	ldp	x19, x20,	[x0,#80]
	ldp	x21, x22,	[x0,#96]
	ldp	x23, x24,	[x0,#112]
	ldp	x25, x26,	[x0,#128]
	ldp	x27, x28,	[x0,#144]
	ldp	x29, x30,	[x0,#160]

	//floating point registers
	
	ldp	d8 , d9,	[x0,#176]
	ldp	d10, d11,	[x0,#192]
	ldp	d12, d13,	[x0,#208]
	ldp	d14, d15,	[x0,#224]
	mov  x0,x1
	cbnz x1, 1f// if x1 is not zero, branch to 1:
	mov x0, #1
1:
	br x30 //use br because ret is guaranteed to mispredict
