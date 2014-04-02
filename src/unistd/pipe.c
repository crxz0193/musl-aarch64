#include <unistd.h>
#include "syscall.h"

int pipe(int fd[2])
{
#ifdef SYS_pipe2
	return syscall(SYS_pipe2, fd,0); /*0 indicates behave as SYS_pipe*/
#else
	return syscall(SYS_pipe, fd);
#endif 
}
