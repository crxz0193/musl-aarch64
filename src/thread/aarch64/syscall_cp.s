
.global __syscall_cp_asm
.type __syscall_cp_asm,%function
__syscall_cp_asm:
	stp x29, x30, [sp, #-16]! /* AAPCS frame*/
	mov x29, sp

.global __cp_begin
__cp_begin:
	str x8, [sp,#-16]! /*store x8*/

	mov x8, x0 /* copy sys call number */
	/* parameters */
	mov x0, x1
	mov x1, x2
	mov x2, x3
	mov x3, x4
	mov x4, x5
	mov x5, x6
	svc #0
.global __cp_end
__cp_end:
	/* restore*/
	ldr x8,  [sp],#16
	ldp x29, x30, [sp], #16
	
	/*check return status*/
