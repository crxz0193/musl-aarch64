.section .init
.global _init
.type _init,%function
_init:
	stp r0,lr,[sp],#16

.section .fini
.global _fini
.type _fini,%function
_fini:
	stp r0,lr,[sp],#16
