#define __SYSCALL_LL_E(x) \
((union { long long ll; long l[2]; }){ .ll = x }).l[0], \
((union { long long ll; long l[2]; }){ .ll = x }).l[1]
#define __SYSCALL_LL_O(x) 0, __SYSCALL_LL_E((x))

long (__syscall)(long, ...);

#ifndef __clang__

#define __asm_syscall(...) do { \
	__asm__ __volatile__ ( "svc 0" \
	: "=r"(x0) : __VA_ARGS__ : "memory"); \
	return x0; \
	} while (0)

static inline long __syscall0(long n)
{
	register long x8 __asm__("x8") = n;
	register long x0 __asm__("x0");
	__asm_syscall("r"(x8));
}

static inline long __syscall1(long n, long a)
{
	register long x8 __asm__("x8") = n;
	register long x0 __asm__("x0") = a;
	__asm_syscall("r"(x8), "0"(x0));
}

static inline long __syscall2(long n, long a, long b)
{
	register long x8 __asm__("x8") = n;
	register long x0 __asm__("x0") = a;
	register long x1 __asm__("x1") = b;
	__asm_syscall("r"(x8), "0"(x0), "r"(x1));
}

static inline long __syscall3(long n, long a, long b, long c)
{
	register long x8 __asm__("r8") = n;
	register long x0 __asm__("r0") = a;
	register long x1 __asm__("r1") = b;
	register long x2 __asm__("r2") = c;
	__asm_syscall("r"(x8), "0"(x0), "r"(x1), "r"(x2));
}

static inline long __syscall4(long n, long a, long b, long c, long d)
{
	register long x8 __asm__("x8") = n;
	register long x0 __asm__("x0") = a;
	register long x1 __asm__("x1") = b;
	register long x2 __asm__("x2") = c;
	register long x3 __asm__("x3") = d;
	__asm_syscall("r"(x8), "0"(x0), "r"(x1), "r"(x2), "r"(x3));
}

#else

static inline long __syscall0(long n)
{
	return (__syscall)(n);
}

static inline long __syscall1(long n, long a)
{
	return (__syscall)(n, a);
}

static inline long __syscall2(long n, long a, long b)
{
	return (__syscall)(n, a, b);
}

static inline long __syscall3(long n, long a, long b, long c)
{
	return (__syscall)(n, a, b, c);
}

static inline long __syscall4(long n, long a, long b, long c, long d)
{
	return (__syscall)(n, a, b, c, d);
}

#endif

static inline long __syscall5(long n, long a, long b, long c, long d, long e)
{
	return (__syscall)(n, a, b, c, d, e);
}

static inline long __syscall6(long n, long a, long b, long c, long d, long e, long f)
{
	return (__syscall)(n, a, b, c, d, e, f);
}
