#include <unistd.h>
#include <fcntl.h>
#include "syscall.h"

int unlink(const char *path)
{
#ifdef SYS_unlinkat
	return syscall(SYS_unlinkat, AT_FDCWD, path,0);/*flags specifed as 0*/
#else
	return syscall(SYS_unlink, path);
#endif
}
