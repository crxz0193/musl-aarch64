#if defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE) \
 || defined(_XOPEN_SOURCE) || defined(_GNU_SOURCE) || defined(_BSD_SOURCE)

/* FIXME: typedef greg_t, gregtset_t here */
/* FIXME: typedef fpregset_t here */
/* FIXME: Do we need fpsimd_context? See linux: arch/arm64/include/uapi/asm/sigcontext.h */

typedef struct sigcontext
{
	//unsigned long fault_address;
	uint64_t  regs[31];
	uint64_t  sp, pc;
	uint64_t  pstate;
	uint8_t   __reserved[4096] __attribute((__aligned__(16)));
} mcontext_t;

typedef struct __ucontext {
	unsigned long 		 uc_flags;
	struct __ucontext 	*uc_link;
	stack_t  			 uc_stack;
	sigset_t 			 uc_sigmask;
	uint8_t  			 __unused[1024/8-sizeof(sigset_t)];
	mcontext_t 			 uc_mcontext;
} ucontext_t;

#define SA_NOCLDSTOP  1
#define SA_NOCLDWAIT  2
#define SA_SIGINFO    4
#define SA_ONSTACK    0x08000000
#define SA_RESTART    0x10000000
#define SA_NODEFER    0x40000000
#define SA_RESETHAND  0x80000000
#define SA_RESTORER   0x04000000

#endif

#define SIGHUP    1
#define SIGINT    2
#define SIGQUIT   3
#define SIGILL    4
#define SIGTRAP   5
#define SIGABRT   6
#define SIGIOT    SIGABRT
#define SIGBUS    7
#define SIGFPE    8
#define SIGKILL   9
#define SIGUSR1   10
#define SIGSEGV   11
#define SIGUSR2   12
#define SIGPIPE   13
#define SIGALRM   14
#define SIGTERM   15
#define SIGSTKFLT 16
#define SIGCHLD   17
#define SIGCONT   18
#define SIGSTOP   19
#define SIGTSTP   20
#define SIGTTIN   21
#define SIGTTOU   22
#define SIGURG    23
#define SIGXCPU   24
#define SIGXFSZ   25
#define SIGVTALRM 26
#define SIGPROF   27
#define SIGWINCH  28
#define SIGIO     29
#define SIGPOLL   29
#define SIGPWR    30
#define SIGSYS    31
#define SIGUNUSED SIGSYS

#define _NSIG 64


/*
 * Header to be used at the beginning of structures extending the user
 * context. Such structures must be placed after the rt_sigframe on the stack
 * and be 16-byte aligned. The last structure must be a dummy one with the
 * magic and size set to 0.
 */
struct _aarch64_ctx {
	uint32_t  magic;
	uint32_t  size;
};

#define FPSIMD_MAGIC	0x46508001


struct fpsimd_context {
	struct _aarch64_ctx head;
	uint32_t  fpsr;
	uint32_t  fpcr;
	// TODO: verify if uint128_t needs a defination in alltypes.h.in
	__uint128_t vregs[32];
};

