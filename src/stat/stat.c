#include <sys/stat.h>
#include "syscall.h"
#include "libc.h"

int stat(const char *restrict path, struct stat *restrict buf)
{
#ifdef SYS_stat64
	return syscall(SYS_stat64, path, buf);
#else
	return syscall(SYS_stat, path, buf);
#endif//
}

LFS64(stat);
