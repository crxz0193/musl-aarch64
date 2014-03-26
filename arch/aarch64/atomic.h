#ifndef _INTERNAL_ATOMIC_H
#define _INTERNAL_ATOMIC_H

#include <stdint.h>

static inline int a_ctz_l(unsigned long x)
{
	int result;
	__asm__ volatile( "// a_store\n"
	"1: rbit %0, %1\n"
	"   clz %0, %0\n"
	    : "=r" (result)
		: "r" (x)
	);
	
	return result;

}

static inline int a_ctz_64(uint64_t x)
{
	int result =0;
	__asm__ volatile( "// a_store\n"
	"1: rbit %0, %1\n"
	"   clz %0, %0\n"
	    : "=r" (result)
		: "r" (x)
	);
	
	return result;
}

static inline int a_cas(volatile int *p, int t, int s)
{
	int old;
	unsigned long tmp;

//linux/arch/arm64/include/asm/atomic.h
	__asm__ volatile("// atomic_cmpxchg\n"
	"1:	ldaxr	%w1, %2\n"
	"	cmp	    %w1, %w3\n"
	"	b.ne	2f\n"
	"	stlxr	%w0, %w4, %2\n"
	"	cbnz	%w0, 1b\n"
	"2:"
		: "=&r" (tmp), "=&r" (old), "+Q" (*p)
		: "Ir" (t), "r" (s)
		: "cc", "memory");

	return old;
}

static inline void *a_cas_p(volatile void *p, void *t, void *s)
{
	return (void *)a_cas(p, (int)t, (int)s);
}

static inline long a_cas_l(volatile void *p, long t, long s)
{
	return a_cas(p, t, s);
}

static inline int a_swap(volatile int *x, int v)
{
	int old;
	do old = *x;
	while (a_cas(x,old, v));
	return old;
}

static inline int a_fetch_sub(volatile int *x, int v)
{

	unsigned long tmp;
	int result;
	__asm__ volatile( "// fetch add\n"
	"1: ldxr %w0, %2\n"
    "   sub  %w0, %w0, %w3\n"
	"   stlxr %w1, %w0,  %2\n"
	"   cbnz %w1, 1b"
	    : "=&r" (result), "=&r" (tmp), "+Q"(*x)
		: "Ir" (v)
		: "cc"
	);
	return tmp;
}

static inline int a_fetch_add(volatile int *x, int v)
{
	unsigned long tmp;
	int result;
	__asm__ volatile( "// fetch add\n"
	"1: ldxr %w0, %2\n"
    "   add  %w0, %w0, %w3\n"
	"   stlxr %w1, %w0,  %2\n"
	"   cbnz %w1, 1b"
	    : "=&r" (result), "=&r" (tmp), "+Q"(*x)
		: "Ir" (v)
		: "cc"
	);
	return tmp;
}

static inline void a_inc(volatile int *x)
{
	a_fetch_add(x, 1);
}

static inline void a_dec(volatile int *x)
{
	a_fetch_sub(x, -1);
}

static inline void a_store(volatile int *p, int x)
{
	unsigned long tmp;
	int result;
/*	__asm__ volatile( "// fetch add\n"
	"   ldxr %0, %1\n" 
	"   stxr %w0, %2,%1\n"
        : "=&r"(result),"+Q" (*p) 
        : "Ir" (x) 
        : "cc", "memory" 
	);
*/
   *p = x;
}

static inline void a_spin()
{
}

static inline void a_crash()
{
	*(volatile char *)0=0;
}

static inline void a_and(volatile int *p, int v)
{

	unsigned long tmp;
	int result;
	__asm__ volatile( "// fetch add\n"
	"1: ldxr %w0, %2\n"
    "   and  %0, %0, %3\n"
	"   stxr %w1, %0,%2\n"
	"   cbnz %w1, 1b"
	    : "=&r" (result), "=&r" (tmp), "+Q"(*p)
		: "Ir" (v)
		: "cc"
	);


}

static inline void a_or(volatile int *p, int v)
{
	unsigned long tmp;
	int result;
	__asm__ volatile( "// fetch add\n"
	"1: ldxr %w0, %2\n"
    "   orr  %0, %0, %3\n"
	"   stxr %w1, %0,%2\n"
	"   cbnz %w1, 1b"
	    : "=&r" (result), "=&r" (tmp), "+Q"(*p)
		: "Ir" (v)
		: "cc"
	);
}

static inline void a_or_l(volatile void *p, long v)
{
	a_or(p, v);
}

static inline void a_and_64(volatile uint64_t *p, uint64_t v)
{
	unsigned long tmp;
	int result;
	__asm__ volatile( "// fetch add\n"
	"1: ldxr %w0, %2\n"
    "   and   %0, %0, %3\n"
	"   stxr %w1, %0, %2\n"
	"   cbnz %w1, 1b"
	    : "=&r" (result), "=&r" (tmp), "+Q"(*p)
		: "Ir" (v)
		: "cc"
	);
}

static inline void a_or_64(volatile uint64_t *p, uint64_t v)
{
	unsigned long tmp;
	int result;
	__asm__ volatile( "// fetch add\n"
	"1: ldxr %w0, %2\n"
    "   orr   %0, %0, %3\n"
	"   stxr %w1, %0, %2\n"
	"   cbnz %w1, 1b"
	    : "=&r" (result), "=&r" (tmp), "+Q"(*p)
		: "Ir" (v)
		: "cc"
	);
}

#endif
