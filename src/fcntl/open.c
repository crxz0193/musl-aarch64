#include <fcntl.h>
#include <stdarg.h>
#include "syscall.h"
#include "libc.h"

int open(const char *filename, int flags, ...)
{
	mode_t mode;
	va_list ap;
	va_start(ap, flags);
	mode = va_arg(ap, mode_t);
	va_end(ap);
#ifdef SYS_openat
	return syscall_cp(SYS_openat, AT_FDCWD, filename, flags|O_LARGEFILE, mode);
#else
	return syscall_cp(SYS_open, filename, flags|O_LARGEFILE, mode);
#endif
}

LFS64(open);
