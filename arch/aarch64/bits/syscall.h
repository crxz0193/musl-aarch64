/*#include <asm/bitsperlong.h>*/

/*
 * This file contains the system call numbers, based on the
 * layout of the x86-64 architecture, which embeds the
 * pointer to the syscall in the table.
 *
 * As a basic principle, no duplication of functionality
 * should be added, e.g. we don't use lseek when llseek
 * is present. New architectures should use this file
 * and implement the less feature-full calls in user space.
 */
/*
#ifndef __SYSCALL
#define __SYSCALL(x, y)
#endif

#if __BITS_PER_LONG == 32 || defined(__SYSCALL_COMPAT)
#define __SC_3264(_nr, _32, _64) __SYSCALL(_nr, _32)
#else
#define __SC_3264(_nr, _32, _64) __SYSCALL(_nr, _64)
#endif

#ifdef __SYSCALL_COMPAT
#define __SC_COMP(_nr, _sys, _comp) __SYSCALL(_nr, _comp)
#define __SC_COMP_3264(_nr, _32, _64, _comp) __SYSCALL(_nr, _comp)
#else
#define __SC_COMP(_nr, _sys, _comp) __SYSCALL(_nr, _sys)
#define __SC_COMP_3264(_nr, _32, _64, _comp) __SC_3264(_nr, _32, _64)
#endif
*/
#define __NR_io_setup 0
#define SYS_io_setup 0
/*__SC_COMP(__NR_io_setup, sys_io_setup, compat_sys_io_setup)*/
/*__SC_COMP(SYS_io_setup, sys_io_setup, compat_sys_io_setup)*/

#define __NR_io_destroy 1
#define SYS_io_destroy 1
/*__SYSCALL(__NR_io_destroy, sys_io_destroy)*/
/*__SYSCALL(SYS_io_destroy, sys_io_destroy)*/
#define __NR_io_submit 2
#define SYS_io_submit 2
/*__SC_COMP(__NR_io_submit, sys_io_submit, compat_sys_io_submit)*/
/*__SC_COMP(SYS_io_submit, sys_io_submit, compat_sys_io_submit)*/
#define __NR_io_cancel 3
#define SYS_io_cancel 3
/*__SYSCALL(__NR_io_cancel, sys_io_cancel)*/
/*__SYSCALL(SYS_io_cancel, sys_io_cancel)*/
#define __NR_io_getevents 4
#define SYS_io_getevents 4
/*__SC_COMP(__NR_io_getevents, sys_io_getevents, compat_sys_io_getevents)
/*__SC_COMP(SYS_io_getevents, sys_io_getevents, compat_sys_io_getevents)

/* fs/xattr.c */
#define __NR_setxattr 5
#define SYS_setxattr 5
/*__SYSCALL(__NR_setxattr, sys_setxattr)*/
/*__SYSCALL(SYS_setxattr, sys_setxattr)*/
#define __NR_lsetxattr 6
#define SYS_lsetxattr 6
/*__SYSCALL(__NR_lsetxattr, sys_lsetxattr)*/
/*__SYSCALL(SYS_lsetxattr, sys_lsetxattr)*/
#define __NR_fsetxattr 7
#define SYS_fsetxattr 7
/*__SYSCALL(__NR_fsetxattr, sys_fsetxattr)*/
/*__SYSCALL(SYS_fsetxattr, sys_fsetxattr)*/
#define __NR_getxattr 8
#define SYS_getxattr 8
/*__SYSCALL(__NR_getxattr, sys_getxattr)*/
/*__SYSCALL(SYS_getxattr, sys_getxattr)*/
#define __NR_lgetxattr 9
#define SYS_lgetxattr 9
/*__SYSCALL(__NR_lgetxattr, sys_lgetxattr)*/
/*__SYSCALL(SYS_lgetxattr, sys_lgetxattr)*/
#define __NR_fgetxattr 10
#define SYS_fgetxattr 10
/*__SYSCALL(__NR_fgetxattr, sys_fgetxattr)*/
/*__SYSCALL(SYS_fgetxattr, sys_fgetxattr)*/
#define __NR_listxattr 11
#define SYS_listxattr 11
/*__SYSCALL(__NR_listxattr, sys_listxattr)*/
/*__SYSCALL(SYS_listxattr, sys_listxattr)*/
#define __NR_llistxattr 12
#define SYS_llistxattr 12
/*__SYSCALL(__NR_llistxattr, sys_llistxattr)*/
/*__SYSCALL(SYS_llistxattr, sys_llistxattr)*/
#define __NR_flistxattr 13
#define SYS_flistxattr 13
/*__SYSCALL(__NR_flistxattr, sys_flistxattr)*/
/*__SYSCALL(SYS_flistxattr, sys_flistxattr)*/
#define __NR_removexattr 14
#define SYS_removexattr 14
/*__SYSCALL(__NR_removexattr, sys_removexattr)*/
/*__SYSCALL(SYS_removexattr, sys_removexattr)*/
#define __NR_lremovexattr 15
#define SYS_lremovexattr 15
/*__SYSCALL(__NR_lremovexattr, sys_lremovexattr)*/
/*__SYSCALL(SYS_lremovexattr, sys_lremovexattr)*/
#define __NR_fremovexattr 16
#define SYS_fremovexattr 16
/*__SYSCALL(__NR_fremovexattr, sys_fremovexattr)*/
/*__SYSCALL(SYS_fremovexattr, sys_fremovexattr)*/

/* fs/dcache.c */
#define __NR_getcwd 17
#define SYS_getcwd 17
/*__SYSCALL(__NR_getcwd, sys_getcwd)*/
/*__SYSCALL(SYS_getcwd, sys_getcwd)*/

/* fs/cookies.c */
#define __NR_lookup_dcookie 18
#define SYS_lookup_dcookie 18
/*__SC_COMP(__NR_lookup_dcookie, sys_lookup_dcookie, compat_sys_lookup_dcookie)*/
/*__SC_COMP(SYS_lookup_dcookie, sys_lookup_dcookie, compat_sys_lookup_dcookie)*/

/* fs/eventfd.c */
#define __NR_eventfd2 19
#define SYS_eventfd2 19
/*__SYSCALL(__NR_eventfd2, sys_eventfd2)*/
/*__SYSCALL(SYS_eventfd2, sys_eventfd2)*/

/* fs/eventpoll.c */
#define __NR_epoll_create1 20
#define SYS_epoll_create1 20
/*__SYSCALL(__NR_epoll_create1, sys_epoll_create1)*/
/*__SYSCALL(SYS_epoll_create1, sys_epoll_create1)*/
#define __NR_epoll_ctl 21
#define SYS_epoll_ctl 21
/*__SYSCALL(__NR_epoll_ctl, sys_epoll_ctl)*/
/*__SYSCALL(SYS_epoll_ctl, sys_epoll_ctl)*/
#define __NR_epoll_pwait 22
#define SYS_epoll_pwait 22
/*__SC_COMP(__NR_epoll_pwait, sys_epoll_pwait, compat_sys_epoll_pwait)*/
/*__SC_COMP(SYS_epoll_pwait, sys_epoll_pwait, compat_sys_epoll_pwait)*/

/* fs/fcntl.c */
#define __NR_dup 23
#define SYS_dup 23
/*__SYSCALL(__NR_dup, sys_dup)*/
/*__SYSCALL(SYS_dup, sys_dup)*/
#define __NR_dup3 24
#define SYS_dup3 24
/*__SYSCALL(__NR_dup3, sys_dup3)*/
/*__SYSCALL(SYS_dup3, sys_dup3)*/
#define __NR3264_fcntl 25
/*__SC_COMP_3264(__NR3264_fcntl, sys_fcntl64, sys_fcntl, compat_sys_fcntl64)*/

/* fs/inotify_user.c */
#define __NR_inotify_init1 26
#define SYS_inotify_init1 26
/*__SYSCALL(__NR_inotify_init1, sys_inotify_init1)*/
/*__SYSCALL(SYS_inotify_init1, sys_inotify_init1)*/
#define __NR_inotify_add_watch 27
#define SYS_inotify_add_watch 27
/*__SYSCALL(__NR_inotify_add_watch, sys_inotify_add_watch)*/
/*__SYSCALL(SYS_inotify_add_watch, sys_inotify_add_watch)*/
#define __NR_inotify_rm_watch 28
#define SYS_inotify_rm_watch 28
/*__SYSCALL(__NR_inotify_rm_watch, sys_inotify_rm_watch)*/
/*__SYSCALL(SYS_inotify_rm_watch, sys_inotify_rm_watch)*/

/* fs/ioctl.c */
#define __NR_ioctl 29
#define SYS_ioctl 29
/*__SC_COMP(__NR_ioctl, sys_ioctl, compat_sys_ioctl)*/
/*__SC_COMP(SYS_ioctl, sys_ioctl, compat_sys_ioctl)*/

/* fs/ioprio.c */
#define __NR_ioprio_set 30
#define SYS_ioprio_set 30
/*__SYSCALL(__NR_ioprio_set, sys_ioprio_set)*/
/*__SYSCALL(SYS_ioprio_set, sys_ioprio_set)*/
#define __NR_ioprio_get 31
#define SYS_ioprio_get 31
/*__SYSCALL(__NR_ioprio_get, sys_ioprio_get)*/
/*__SYSCALL(SYS_ioprio_get, sys_ioprio_get)*/

/* fs/locks.c */
#define __NR_flock 32
#define SYS_flock 32
/*__SYSCALL(__NR_flock, sys_flock)*/
/*__SYSCALL(SYS_flock, sys_flock)*/

/* fs/namei.c */
#define __NR_mknodat 33
#define SYS_mknodat 33
/*__SYSCALL(__NR_mknodat, sys_mknodat)*/
/*__SYSCALL(SYS_mknodat, sys_mknodat)*/
#define __NR_mkdirat 34
#define SYS_mkdirat 34
/*__SYSCALL(__NR_mkdirat, sys_mkdirat)*/
/*__SYSCALL(SYS_mkdirat, sys_mkdirat)*/
#define __NR_unlinkat 35
#define SYS_unlinkat 35
/*__SYSCALL(__NR_unlinkat, sys_unlinkat)*/
/*__SYSCALL(SYS_unlinkat, sys_unlinkat)*/
#define __NR_symlinkat 36
#define SYS_symlinkat 36
/*__SYSCALL(__NR_symlinkat, sys_symlinkat)*/
/*__SYSCALL(SYS_symlinkat, sys_symlinkat)*/
#define __NR_linkat 37
#define SYS_linkat 37
/*__SYSCALL(__NR_linkat, sys_linkat)*/
/*__SYSCALL(SYS_linkat, sys_linkat)*/
#define __NR_renameat 38
#define SYS_renameat 38
/*__SYSCALL(__NR_renameat, sys_renameat)*/
/*__SYSCALL(SYS_renameat, sys_renameat)*/

/* fs/namespace.c */
#define __NR_umount2 39
#define SYS_umount2 39
/*__SYSCALL(__NR_umount2, sys_umount)*/
/*__SYSCALL(SYS_umount2, sys_umount)*/
#define __NR_mount 40
#define SYS_mount 40
/*__SC_COMP(__NR_mount, sys_mount, compat_sys_mount)*/
/*__SC_COMP(SYS_mount, sys_mount, compat_sys_mount)*/
#define __NR_pivot_root 41
#define SYS_pivot_root 41
/*__SYSCALL(__NR_pivot_root, sys_pivot_root)*/
/*__SYSCALL(SYS_pivot_root, sys_pivot_root)*/

/* fs/nfsctl.c */
#define __NR_nfsservctl 42
#define SYS_nfsservctl 42
/*__SYSCALL(__NR_nfsservctl, sys_ni_syscall)*/
/*__SYSCALL(SYS_nfsservctl, sys_ni_syscall)*/

/* fs/open.c */
#define __NR3264_statfs 43
/*__SC_COMP_3264(__NR3264_statfs, sys_statfs64, sys_statfs, \
	       compat_sys_statfs64)*/
#define __NR3264_fstatfs 44
/*__SC_COMP_3264(__NR3264_fstatfs, sys_fstatfs64, sys_fstatfs, \
	       compat_sys_fstatfs64)*/
#define __NR3264_truncate 45
/*__SC_COMP_3264(__NR3264_truncate, sys_truncate64, sys_truncate, \
	       compat_sys_truncate64)*/
#define __NR3264_ftruncate 46
/*__SC_COMP_3264(__NR3264_ftruncate, sys_ftruncate64, sys_ftruncate, \
	       compat_sys_ftruncate64)*/

#define __NR_fallocate 47
#define SYS_fallocate 47
/*__SC_COMP(__NR_fallocate, sys_fallocate, compat_sys_fallocate)*/
/*__SC_COMP(SYS_fallocate, sys_fallocate, compat_sys_fallocate)*/
#define __NR_faccessat 48
#define SYS_faccessat 48
/*__SYSCALL(__NR_faccessat, sys_faccessat)*/
/*__SYSCALL(SYS_faccessat, sys_faccessat)*/
#define __NR_chdir 49
#define SYS_chdir 49
/*__SYSCALL(__NR_chdir, sys_chdir)*/
/*__SYSCALL(SYS_chdir, sys_chdir)*/
#define __NR_fchdir 50
#define SYS_fchdir 50
/*__SYSCALL(__NR_fchdir, sys_fchdir)*/
/*__SYSCALL(SYS_fchdir, sys_fchdir)*/
#define __NR_chroot 51
#define SYS_chroot 51
/*__SYSCALL(__NR_chroot, sys_chroot)*/
/*__SYSCALL(SYS_chroot, sys_chroot)*/
#define __NR_fchmod 52
#define SYS_fchmod 52
/*__SYSCALL(__NR_fchmod, sys_fchmod)*/
/*__SYSCALL(SYS_fchmod, sys_fchmod)*/
#define __NR_fchmodat 53
#define SYS_fchmodat 53
/*__SYSCALL(__NR_fchmodat, sys_fchmodat)*/
/*__SYSCALL(SYS_fchmodat, sys_fchmodat)*/
#define __NR_fchownat 54
#define SYS_fchownat 54
/*__SYSCALL(__NR_fchownat, sys_fchownat)*/
/*__SYSCALL(SYS_fchownat, sys_fchownat)*/
#define __NR_fchown 55
#define SYS_fchown 55
/*__SYSCALL(__NR_fchown, sys_fchown)*/
/*__SYSCALL(SYS_fchown, sys_fchown)*/
#define __NR_openat 56
#define SYS_openat 56
/*__SC_COMP(__NR_openat, sys_openat, compat_sys_openat)*/
/*__SC_COMP(SYS_openat, sys_openat, compat_sys_openat)*/
#define __NR_close 57
#define SYS_close 57
/*__SYSCALL(__NR_close, sys_close)*/
/*__SYSCALL(SYS_close, sys_close)*/
#define __NR_vhangup 58
#define SYS_vhangup 58
/*__SYSCALL(__NR_vhangup, sys_vhangup)*/
/*__SYSCALL(SYS_vhangup, sys_vhangup)*/

/* fs/pipe.c */
#define __NR_pipe2 59
#define SYS_pipe2 59
/*__SYSCALL(__NR_pipe2, sys_pipe2)*/
/*__SYSCALL(SYS_pipe2, sys_pipe2)*/

/* fs/quota.c */
#define __NR_quotactl 60
#define SYS_quotactl 60
/*__SYSCALL(__NR_quotactl, sys_quotactl)*/
/*__SYSCALL(SYS_quotactl, sys_quotactl)*/

/* fs/readdir.c */
#define __NR_getdents64 61
#define SYS_getdents64 61
/*__SC_COMP(__NR_getdents64, sys_getdents64, compat_sys_getdents64)*/
/*__SC_COMP(SYS_getdents64, sys_getdents64, compat_sys_getdents64)*/

/* fs/read_write.c */
#define __NR3264_lseek 62
/*__SC_3264(__NR3264_lseek, sys_llseek, sys_lseek)*/
#define __NR_read 63
#define SYS_read 63
/*__SYSCALL(__NR_read, sys_read)*/
/*__SYSCALL(SYS_read, sys_read)*/
#define __NR_write 64
#define SYS_write 64
/*__SYSCALL(__NR_write, sys_write)*/
/*__SYSCALL(SYS_write, sys_write)*/
#define __NR_readv 65
#define SYS_readv 65
/*__SC_COMP(__NR_readv, sys_readv, compat_sys_readv)*/
/*__SC_COMP(SYS_readv, sys_readv, compat_sys_readv)*/
#define __NR_writev 66
#define SYS_writev 66
/*__SC_COMP(__NR_writev, sys_writev, compat_sys_writev)*/
/*__SC_COMP(SYS_writev, sys_writev, compat_sys_writev)*/
#define __NR_pread64 67
#define SYS_pread64 67
/*__SC_COMP(__NR_pread64, sys_pread64, compat_sys_pread64)*/
/*__SC_COMP(SYS_pread64, sys_pread64, compat_sys_pread64)*/
#define __NR_pwrite64 68
#define SYS_pwrite64 68
/*__SC_COMP(__NR_pwrite64, sys_pwrite64, compat_sys_pwrite64)*/
/*__SC_COMP(SYS_pwrite64, sys_pwrite64, compat_sys_pwrite64)*/
#define __NR_preadv 69
#define SYS_preadv 69
/*__SC_COMP(__NR_preadv, sys_preadv, compat_sys_preadv)*/
/*__SC_COMP(SYS_preadv, sys_preadv, compat_sys_preadv)*/
#define __NR_pwritev 70
#define SYS_pwritev 70
/*__SC_COMP(__NR_pwritev, sys_pwritev, compat_sys_pwritev)*/
/*__SC_COMP(SYS_pwritev, sys_pwritev, compat_sys_pwritev)*/

/* fs/sendfile.c */
#define __NR3264_sendfile 71
/*__SYSCALL(__NR3264_sendfile, sys_sendfile64)*/

/* fs/select.c */
#define __NR_pselect6 72
#define SYS_pselect6 72
/*__SC_COMP(__NR_pselect6, sys_pselect6, compat_sys_pselect6)*/
/*__SC_COMP(SYS_pselect6, sys_pselect6, compat_sys_pselect6)*/
#define __NR_ppoll 73
#define SYS_ppoll 73
/*__SC_COMP(__NR_ppoll, sys_ppoll, compat_sys_ppoll)*/
/*__SC_COMP(SYS_ppoll, sys_ppoll, compat_sys_ppoll)*/

/* fs/signalfd.c */
#define __NR_signalfd4 74
#define SYS_signalfd4 74
/*__SC_COMP(__NR_signalfd4, sys_signalfd4, compat_sys_signalfd4)*/
/*__SC_COMP(SYS_signalfd4, sys_signalfd4, compat_sys_signalfd4)*/

/* fs/splice.c */
#define __NR_vmsplice 75
#define SYS_vmsplice 75
/*__SC_COMP(__NR_vmsplice, sys_vmsplice, compat_sys_vmsplice)*/
/*__SC_COMP(SYS_vmsplice, sys_vmsplice, compat_sys_vmsplice)*/
#define __NR_splice 76
#define SYS_splice 76
/*__SYSCALL(__NR_splice, sys_splice)*/
/*__SYSCALL(SYS_splice, sys_splice)*/
#define __NR_tee 77
#define SYS_tee 77
/*__SYSCALL(__NR_tee, sys_tee)*/
/*__SYSCALL(SYS_tee, sys_tee)*/

/* fs/stat.c */
#define __NR_readlinkat 78
#define SYS_readlinkat 78
/*__SYSCALL(__NR_readlinkat, sys_readlinkat)*/
/*__SYSCALL(SYS_readlinkat, sys_readlinkat)*/
#define __NR3264_fstatat 79
/*__SC_3264(__NR3264_fstatat, sys_fstatat64, sys_newfstatat)*/
#define __NR3264_fstat 80
/*__SC_3264(__NR3264_fstat, sys_fstat64, sys_newfstat)*/

/* fs/sync.c */
#define __NR_sync 81
#define SYS_sync 81
/*__SYSCALL(__NR_sync, sys_sync)*/
/*__SYSCALL(SYS_sync, sys_sync)*/
#define __NR_fsync 82
#define SYS_fsync 82
/*__SYSCALL(__NR_fsync, sys_fsync)*/
/*__SYSCALL(SYS_fsync, sys_fsync)*/
#define __NR_fdatasync 83
#define SYS_fdatasync 83
/*__SYSCALL(__NR_fdatasync, sys_fdatasync)*/
/*__SYSCALL(SYS_fdatasync, sys_fdatasync)*/
#ifdef __ARCH_WANT_SYNC_FILE_RANGE2
#define __NR_sync_file_range2 84
#define SYS_sync_file_range2 84
/*__SC_COMP(__NR_sync_file_range2, sys_sync_file_range2, \
/*__SC_COMP(SYS_sync_file_range2, sys_sync_file_range2, \
	  compat_sys_sync_file_range2)*/
#else
#define __NR_sync_file_range 84
#define SYS_sync_file_range 84
/*__SC_COMP(__NR_sync_file_range, sys_sync_file_range, \
/*__SC_COMP(SYS_sync_file_range, sys_sync_file_range, \
	  compat_sys_sync_file_range)*/
#endif

/* fs/timerfd.c */
#define __NR_timerfd_create 85
#define SYS_timerfd_create 85
/*__SYSCALL(__NR_timerfd_create, sys_timerfd_create)*/
/*__SYSCALL(SYS_timerfd_create, sys_timerfd_create)*/
#define __NR_timerfd_settime 86
#define SYS_timerfd_settime 86
/*__SC_COMP(__NR_timerfd_settime, sys_timerfd_settime, \
/*__SC_COMP(SYS_timerfd_settime, sys_timerfd_settime, \
	  compat_sys_timerfd_settime)*/
#define __NR_timerfd_gettime 87
#define SYS_timerfd_gettime 87
/*__SC_COMP(__NR_timerfd_gettime, sys_timerfd_gettime, \
/*__SC_COMP(SYS_timerfd_gettime, sys_timerfd_gettime, \
	  compat_sys_timerfd_gettime)*/

/* fs/utimes.c */
#define __NR_utimensat 88
#define SYS_utimensat 88
/*__SC_COMP(__NR_utimensat, sys_utimensat, compat_sys_utimensat)*/
/*__SC_COMP(SYS_utimensat, sys_utimensat, compat_sys_utimensat)*/

/* kernel/acct.c */
#define __NR_acct 89
#define SYS_acct 89
/*__SYSCALL(__NR_acct, sys_acct)*/
/*__SYSCALL(SYS_acct, sys_acct)*/

/* kernel/capability.c */
#define __NR_capget 90
#define SYS_capget 90
/*__SYSCALL(__NR_capget, sys_capget)*/
/*__SYSCALL(SYS_capget, sys_capget)*/
#define __NR_capset 91
#define SYS_capset 91
/*__SYSCALL(__NR_capset, sys_capset)*/
/*__SYSCALL(SYS_capset, sys_capset)*/

/* kernel/exec_domain.c */
#define __NR_personality 92
#define SYS_personality 92
/*__SYSCALL(__NR_personality, sys_personality)*/
/*__SYSCALL(SYS_personality, sys_personality)*/

/* kernel/exit.c */
#define __NR_exit 93
#define SYS_exit 93
/*__SYSCALL(__NR_exit, sys_exit)*/
/*__SYSCALL(SYS_exit, sys_exit)*/
#define __NR_exit_group 94
#define SYS_exit_group 94
/*__SYSCALL(__NR_exit_group, sys_exit_group)*/
/*__SYSCALL(SYS_exit_group, sys_exit_group)*/
#define __NR_waitid 95
#define SYS_waitid 95
/*__SC_COMP(__NR_waitid, sys_waitid, compat_sys_waitid)*/
/*__SC_COMP(SYS_waitid, sys_waitid, compat_sys_waitid)*/

/* kernel/fork.c */
#define __NR_set_tid_address 96
#define SYS_set_tid_address 96
/*__SYSCALL(__NR_set_tid_address, sys_set_tid_address)*/
/*__SYSCALL(SYS_set_tid_address, sys_set_tid_address)*/
#define __NR_unshare 97
#define SYS_unshare 97
/*__SYSCALL(__NR_unshare, sys_unshare)*/
/*__SYSCALL(SYS_unshare, sys_unshare)*/

/* kernel/futex.c */
#define __NR_futex 98
#define SYS_futex 98
/*__SC_COMP(__NR_futex, sys_futex, compat_sys_futex)*/
/*__SC_COMP(SYS_futex, sys_futex, compat_sys_futex)*/
#define __NR_set_robust_list 99
#define SYS_set_robust_list 99
/*__SC_COMP(__NR_set_robust_list, sys_set_robust_list, \
/*__SC_COMP(SYS_set_robust_list, sys_set_robust_list, \
	  compat_sys_set_robust_list)*/
#define __NR_get_robust_list 100
#define SYS_get_robust_list 100
/*__SC_COMP(__NR_get_robust_list, sys_get_robust_list, \
/*__SC_COMP(SYS_get_robust_list, sys_get_robust_list, \
	  compat_sys_get_robust_list)*/

/* kernel/hrtimer.c */
#define __NR_nanosleep 101
#define SYS_nanosleep 101
/*__SC_COMP(__NR_nanosleep, sys_nanosleep, compat_sys_nanosleep)*/
/*__SC_COMP(SYS_nanosleep, sys_nanosleep, compat_sys_nanosleep)*/

/* kernel/itimer.c */
#define __NR_getitimer 102
#define SYS_getitimer 102
/*__SC_COMP(__NR_getitimer, sys_getitimer, compat_sys_getitimer)*/
/*__SC_COMP(SYS_getitimer, sys_getitimer, compat_sys_getitimer)*/
#define __NR_setitimer 103
#define SYS_setitimer 103
/*__SC_COMP(__NR_setitimer, sys_setitimer, compat_sys_setitimer)*/
/*__SC_COMP(SYS_setitimer, sys_setitimer, compat_sys_setitimer)*/

/* kernel/kexec.c */
#define __NR_kexec_load 104
#define SYS_kexec_load 104
/*__SC_COMP(__NR_kexec_load, sys_kexec_load, compat_sys_kexec_load)*/
/*__SC_COMP(SYS_kexec_load, sys_kexec_load, compat_sys_kexec_load)*/

/* kernel/module.c */
#define __NR_init_module 105
#define SYS_init_module 105
/*__SYSCALL(__NR_init_module, sys_init_module)*/
/*__SYSCALL(SYS_init_module, sys_init_module)*/
#define __NR_delete_module 106
#define SYS_delete_module 106
/*__SYSCALL(__NR_delete_module, sys_delete_module)*/
/*__SYSCALL(SYS_delete_module, sys_delete_module)*/

/* kernel/posix-timers.c */
#define __NR_timer_create 107
#define SYS_timer_create 107
/*__SC_COMP(__NR_timer_create, sys_timer_create, compat_sys_timer_create)*/
/*__SC_COMP(SYS_timer_create, sys_timer_create, compat_sys_timer_create)*/
#define __NR_timer_gettime 108
#define SYS_timer_gettime 108
/*__SC_COMP(__NR_timer_gettime, sys_timer_gettime, compat_sys_timer_gettime)*/
/*__SC_COMP(SYS_timer_gettime, sys_timer_gettime, compat_sys_timer_gettime)*/
#define __NR_timer_getoverrun 109
#define SYS_timer_getoverrun 109
/*__SYSCALL(__NR_timer_getoverrun, sys_timer_getoverrun)*/
/*__SYSCALL(SYS_timer_getoverrun, sys_timer_getoverrun)*/
#define __NR_timer_settime 110
#define SYS_timer_settime 110
/*__SC_COMP(__NR_timer_settime, sys_timer_settime, compat_sys_timer_settime)*/
/*__SC_COMP(SYS_timer_settime, sys_timer_settime, compat_sys_timer_settime)*/
#define __NR_timer_delete 111
#define SYS_timer_delete 111
/*__SYSCALL(__NR_timer_delete, sys_timer_delete)*/
/*__SYSCALL(SYS_timer_delete, sys_timer_delete)*/
#define __NR_clock_settime 112
#define SYS_clock_settime 112
/*__SC_COMP(__NR_clock_settime, sys_clock_settime, compat_sys_clock_settime)*/
/*__SC_COMP(SYS_clock_settime, sys_clock_settime, compat_sys_clock_settime)*/
#define __NR_clock_gettime 113
#define SYS_clock_gettime 113
/*__SC_COMP(__NR_clock_gettime, sys_clock_gettime, compat_sys_clock_gettime)*/
/*__SC_COMP(SYS_clock_gettime, sys_clock_gettime, compat_sys_clock_gettime)*/
#define __NR_clock_getres 114
#define SYS_clock_getres 114
/*__SC_COMP(__NR_clock_getres, sys_clock_getres, compat_sys_clock_getres)*/
/*__SC_COMP(SYS_clock_getres, sys_clock_getres, compat_sys_clock_getres)*/
#define __NR_clock_nanosleep 115
#define SYS_clock_nanosleep 115
/*__SC_COMP(__NR_clock_nanosleep, sys_clock_nanosleep, \
/*__SC_COMP(SYS_clock_nanosleep, sys_clock_nanosleep, \
	  compat_sys_clock_nanosleep)*/

/* kernel/printk.c */
#define __NR_syslog 116
#define SYS_syslog 116
/*__SYSCALL(__NR_syslog, sys_syslog)*/
/*__SYSCALL(SYS_syslog, sys_syslog)*/

/* kernel/ptrace.c */
#define __NR_ptrace 117
#define SYS_ptrace 117
/*__SYSCALL(__NR_ptrace, sys_ptrace)*/
/*__SYSCALL(SYS_ptrace, sys_ptrace)*/

/* kernel/sched/core.c */
#define __NR_sched_setparam 118
#define SYS_sched_setparam 118
/*__SYSCALL(__NR_sched_setparam, sys_sched_setparam)*/
/*__SYSCALL(SYS_sched_setparam, sys_sched_setparam)*/
#define __NR_sched_setscheduler 119
#define SYS_sched_setscheduler 119
/*__SYSCALL(__NR_sched_setscheduler, sys_sched_setscheduler)*/
/*__SYSCALL(SYS_sched_setscheduler, sys_sched_setscheduler)*/
#define __NR_sched_getscheduler 120
#define SYS_sched_getscheduler 120
/*__SYSCALL(__NR_sched_getscheduler, sys_sched_getscheduler)*/
/*__SYSCALL(SYS_sched_getscheduler, sys_sched_getscheduler)*/
#define __NR_sched_getparam 121
#define SYS_sched_getparam 121
/*__SYSCALL(__NR_sched_getparam, sys_sched_getparam)*/
/*__SYSCALL(SYS_sched_getparam, sys_sched_getparam)*/
#define __NR_sched_setaffinity 122
#define SYS_sched_setaffinity 122
/*__SC_COMP(__NR_sched_setaffinity, sys_sched_setaffinity, \
/*__SC_COMP(SYS_sched_setaffinity, sys_sched_setaffinity, \
	  compat_sys_sched_setaffinity)*/
#define __NR_sched_getaffinity 123
#define SYS_sched_getaffinity 123
/*__SC_COMP(__NR_sched_getaffinity, sys_sched_getaffinity, \
/*__SC_COMP(SYS_sched_getaffinity, sys_sched_getaffinity, \
	  compat_sys_sched_getaffinity)*/
#define __NR_sched_yield 124
#define SYS_sched_yield 124
/*__SYSCALL(__NR_sched_yield, sys_sched_yield)*/
/*__SYSCALL(SYS_sched_yield, sys_sched_yield)*/
#define __NR_sched_get_priority_max 125
#define SYS_sched_get_priority_max 125
/*__SYSCALL(__NR_sched_get_priority_max, sys_sched_get_priority_max)*/
/*__SYSCALL(SYS_sched_get_priority_max, sys_sched_get_priority_max)*/
#define __NR_sched_get_priority_min 126
#define SYS_sched_get_priority_min 126
/*__SYSCALL(__NR_sched_get_priority_min, sys_sched_get_priority_min)*/
/*__SYSCALL(SYS_sched_get_priority_min, sys_sched_get_priority_min)*/
#define __NR_sched_rr_get_interval 127
#define SYS_sched_rr_get_interval 127
/*__SC_COMP(__NR_sched_rr_get_interval, sys_sched_rr_get_interval, \
/*__SC_COMP(SYS_sched_rr_get_interval, sys_sched_rr_get_interval, \
	  compat_sys_sched_rr_get_interval)*/

/* kernel/signal.c */
#define __NR_restart_syscall 128
#define SYS_restart_syscall 128
/*__SYSCALL(__NR_restart_syscall, sys_restart_syscall)*/
/*__SYSCALL(SYS_restart_syscall, sys_restart_syscall)*/
#define __NR_kill 129
#define SYS_kill 129
/*__SYSCALL(__NR_kill, sys_kill)*/
/*__SYSCALL(SYS_kill, sys_kill)*/
#define __NR_tkill 130
#define SYS_tkill 130
/*__SYSCALL(__NR_tkill, sys_tkill)*/
/*__SYSCALL(SYS_tkill, sys_tkill)*/
#define __NR_tgkill 131
#define SYS_tgkill 131
/*__SYSCALL(__NR_tgkill, sys_tgkill)*/
/*__SYSCALL(SYS_tgkill, sys_tgkill)*/
#define __NR_sigaltstack 132
#define SYS_sigaltstack 132
/*__SC_COMP(__NR_sigaltstack, sys_sigaltstack, compat_sys_sigaltstack)*/
/*__SC_COMP(SYS_sigaltstack, sys_sigaltstack, compat_sys_sigaltstack)*/
#define __NR_rt_sigsuspend 133
#define SYS_rt_sigsuspend 133
/*__SC_COMP(__NR_rt_sigsuspend, sys_rt_sigsuspend, compat_sys_rt_sigsuspend)*/
/*__SC_COMP(SYS_rt_sigsuspend, sys_rt_sigsuspend, compat_sys_rt_sigsuspend)*/
#define __NR_rt_sigaction 134
#define SYS_rt_sigaction 134
/*__SC_COMP(__NR_rt_sigaction, sys_rt_sigaction, compat_sys_rt_sigaction)*/
/*__SC_COMP(SYS_rt_sigaction, sys_rt_sigaction, compat_sys_rt_sigaction)*/
#define __NR_rt_sigprocmask 135
#define SYS_rt_sigprocmask 135
/*__SC_COMP(__NR_rt_sigprocmask, sys_rt_sigprocmask, compat_sys_rt_sigprocmask)*/
/*__SC_COMP(SYS_rt_sigprocmask, sys_rt_sigprocmask, compat_sys_rt_sigprocmask)*/
#define __NR_rt_sigpending 136
#define SYS_rt_sigpending 136
/*__SC_COMP(__NR_rt_sigpending, sys_rt_sigpending, compat_sys_rt_sigpending)*/
/*__SC_COMP(SYS_rt_sigpending, sys_rt_sigpending, compat_sys_rt_sigpending)*/
#define __NR_rt_sigtimedwait 137
#define SYS_rt_sigtimedwait 137
/*__SC_COMP(__NR_rt_sigtimedwait, sys_rt_sigtimedwait, \
/*__SC_COMP(SYS_rt_sigtimedwait, sys_rt_sigtimedwait, \
	  compat_sys_rt_sigtimedwait)*/
#define __NR_rt_sigqueueinfo 138
#define SYS_rt_sigqueueinfo 138
/*__SC_COMP(__NR_rt_sigqueueinfo, sys_rt_sigqueueinfo, \
/*__SC_COMP(SYS_rt_sigqueueinfo, sys_rt_sigqueueinfo, \
	  compat_sys_rt_sigqueueinfo)*/
#define __NR_rt_sigreturn 139
#define SYS_rt_sigreturn 139
/*__SC_COMP(__NR_rt_sigreturn, sys_rt_sigreturn, compat_sys_rt_sigreturn)*/
/*__SC_COMP(SYS_rt_sigreturn, sys_rt_sigreturn, compat_sys_rt_sigreturn)*/

/* kernel/sys.c */
#define __NR_setpriority 140
#define SYS_setpriority 140
/*__SYSCALL(__NR_setpriority, sys_setpriority)*/
/*__SYSCALL(SYS_setpriority, sys_setpriority)*/
#define __NR_getpriority 141
#define SYS_getpriority 141
/*__SYSCALL(__NR_getpriority, sys_getpriority)*/
/*__SYSCALL(SYS_getpriority, sys_getpriority)*/
#define __NR_reboot 142
#define SYS_reboot 142
/*__SYSCALL(__NR_reboot, sys_reboot)*/
/*__SYSCALL(SYS_reboot, sys_reboot)*/
#define __NR_setregid 143
#define SYS_setregid 143
/*__SYSCALL(__NR_setregid, sys_setregid)*/
/*__SYSCALL(SYS_setregid, sys_setregid)*/
#define __NR_setgid 144
#define SYS_setgid 144
/*__SYSCALL(__NR_setgid, sys_setgid)*/
/*__SYSCALL(SYS_setgid, sys_setgid)*/
#define __NR_setreuid 145
#define SYS_setreuid 145
/*__SYSCALL(__NR_setreuid, sys_setreuid)*/
/*__SYSCALL(SYS_setreuid, sys_setreuid)*/
#define __NR_setuid 146
#define SYS_setuid 146
/*__SYSCALL(__NR_setuid, sys_setuid)*/
/*__SYSCALL(SYS_setuid, sys_setuid)*/
#define __NR_setresuid 147
#define SYS_setresuid 147
/*__SYSCALL(__NR_setresuid, sys_setresuid)*/
/*__SYSCALL(SYS_setresuid, sys_setresuid)*/
#define __NR_getresuid 148
#define SYS_getresuid 148
/*__SYSCALL(__NR_getresuid, sys_getresuid)*/
/*__SYSCALL(SYS_getresuid, sys_getresuid)*/
#define __NR_setresgid 149
#define SYS_setresgid 149
/*__SYSCALL(__NR_setresgid, sys_setresgid)*/
/*__SYSCALL(SYS_setresgid, sys_setresgid)*/
#define __NR_getresgid 150
#define SYS_getresgid 150
/*__SYSCALL(__NR_getresgid, sys_getresgid)*/
/*__SYSCALL(SYS_getresgid, sys_getresgid)*/
#define __NR_setfsuid 151
#define SYS_setfsuid 151
/*__SYSCALL(__NR_setfsuid, sys_setfsuid)*/
/*__SYSCALL(SYS_setfsuid, sys_setfsuid)*/
#define __NR_setfsgid 152
#define SYS_setfsgid 152
/*__SYSCALL(__NR_setfsgid, sys_setfsgid)*/
/*__SYSCALL(SYS_setfsgid, sys_setfsgid)*/
#define __NR_times 153
#define SYS_times 153
/*__SC_COMP(__NR_times, sys_times, compat_sys_times)*/
/*__SC_COMP(SYS_times, sys_times, compat_sys_times)*/
#define __NR_setpgid 154
#define SYS_setpgid 154
/*__SYSCALL(__NR_setpgid, sys_setpgid)*/
/*__SYSCALL(SYS_setpgid, sys_setpgid)*/
#define __NR_getpgid 155
#define SYS_getpgid 155
/*__SYSCALL(__NR_getpgid, sys_getpgid)*/
/*__SYSCALL(SYS_getpgid, sys_getpgid)*/
#define __NR_getsid 156
#define SYS_getsid 156
/*__SYSCALL(__NR_getsid, sys_getsid)*/
/*__SYSCALL(SYS_getsid, sys_getsid)*/
#define __NR_setsid 157
#define SYS_setsid 157
/*__SYSCALL(__NR_setsid, sys_setsid)*/
/*__SYSCALL(SYS_setsid, sys_setsid)*/
#define __NR_getgroups 158
#define SYS_getgroups 158
/*__SYSCALL(__NR_getgroups, sys_getgroups)*/
/*__SYSCALL(SYS_getgroups, sys_getgroups)*/
#define __NR_setgroups 159
#define SYS_setgroups 159
/*__SYSCALL(__NR_setgroups, sys_setgroups)*/
/*__SYSCALL(SYS_setgroups, sys_setgroups)*/
#define __NR_uname 160
#define SYS_uname 160
/*__SYSCALL(__NR_uname, sys_newuname)*/
/*__SYSCALL(SYS_uname, sys_newuname)*/
#define __NR_sethostname 161
#define SYS_sethostname 161
/*__SYSCALL(__NR_sethostname, sys_sethostname)*/
/*__SYSCALL(SYS_sethostname, sys_sethostname)*/
#define __NR_setdomainname 162
#define SYS_setdomainname 162
/*__SYSCALL(__NR_setdomainname, sys_setdomainname)*/
/*__SYSCALL(SYS_setdomainname, sys_setdomainname)*/
#define __NR_getrlimit 163
#define SYS_getrlimit 163
/*__SC_COMP(__NR_getrlimit, sys_getrlimit, compat_sys_getrlimit)*/
/*__SC_COMP(SYS_getrlimit, sys_getrlimit, compat_sys_getrlimit)*/
#define __NR_setrlimit 164
#define SYS_setrlimit 164
/*__SC_COMP(__NR_setrlimit, sys_setrlimit, compat_sys_setrlimit)*/
/*__SC_COMP(SYS_setrlimit, sys_setrlimit, compat_sys_setrlimit)*/
#define __NR_getrusage 165
#define SYS_getrusage 165
/*__SC_COMP(__NR_getrusage, sys_getrusage, compat_sys_getrusage)*/
/*__SC_COMP(SYS_getrusage, sys_getrusage, compat_sys_getrusage)*/
#define __NR_umask 166
#define SYS_umask 166
/*__SYSCALL(__NR_umask, sys_umask)*/
/*__SYSCALL(SYS_umask, sys_umask)*/
#define __NR_prctl 167
#define SYS_prctl 167
/*__SYSCALL(__NR_prctl, sys_prctl)*/
/*__SYSCALL(SYS_prctl, sys_prctl)*/
#define __NR_getcpu 168
#define SYS_getcpu 168
/*__SYSCALL(__NR_getcpu, sys_getcpu)*/
/*__SYSCALL(SYS_getcpu, sys_getcpu)*/

/* kernel/time.c */
#define __NR_gettimeofday 169
#define SYS_gettimeofday 169
/*__SC_COMP(__NR_gettimeofday, sys_gettimeofday, compat_sys_gettimeofday)*/
/*__SC_COMP(SYS_gettimeofday, sys_gettimeofday, compat_sys_gettimeofday)*/
#define __NR_settimeofday 170
#define SYS_settimeofday 170
/*__SC_COMP(__NR_settimeofday, sys_settimeofday, compat_sys_settimeofday)*/
/*__SC_COMP(SYS_settimeofday, sys_settimeofday, compat_sys_settimeofday)*/
#define __NR_adjtimex 171
#define SYS_adjtimex 171
/*__SC_COMP(__NR_adjtimex, sys_adjtimex, compat_sys_adjtimex)*/
/*__SC_COMP(SYS_adjtimex, sys_adjtimex, compat_sys_adjtimex)*/

/* kernel/timer.c */
#define __NR_getpid 172
#define SYS_getpid 172
/*__SYSCALL(__NR_getpid, sys_getpid)*/
/*__SYSCALL(SYS_getpid, sys_getpid)*/
#define __NR_getppid 173
#define SYS_getppid 173
/*__SYSCALL(__NR_getppid, sys_getppid)*/
/*__SYSCALL(SYS_getppid, sys_getppid)*/
#define __NR_getuid 174
#define SYS_getuid 174
/*__SYSCALL(__NR_getuid, sys_getuid)*/
/*__SYSCALL(SYS_getuid, sys_getuid)*/
#define __NR_geteuid 175
#define SYS_geteuid 175
/*__SYSCALL(__NR_geteuid, sys_geteuid)*/
/*__SYSCALL(SYS_geteuid, sys_geteuid)*/
#define __NR_getgid 176
#define SYS_getgid 176
/*__SYSCALL(__NR_getgid, sys_getgid)*/
/*__SYSCALL(SYS_getgid, sys_getgid)*/
#define __NR_getegid 177
#define SYS_getegid 177
/*__SYSCALL(__NR_getegid, sys_getegid)*/
/*__SYSCALL(SYS_getegid, sys_getegid)*/
#define __NR_gettid 178
#define SYS_gettid 178
/*__SYSCALL(__NR_gettid, sys_gettid)*/
/*__SYSCALL(SYS_gettid, sys_gettid)*/
#define __NR_sysinfo 179
#define SYS_sysinfo 179
/*__SC_COMP(__NR_sysinfo, sys_sysinfo, compat_sys_sysinfo)*/
/*__SC_COMP(SYS_sysinfo, sys_sysinfo, compat_sys_sysinfo)*/

/* ipc/mqueue.c */
#define __NR_mq_open 180
#define SYS_mq_open 180
/*__SC_COMP(__NR_mq_open, sys_mq_open, compat_sys_mq_open)*/
/*__SC_COMP(SYS_mq_open, sys_mq_open, compat_sys_mq_open)*/
#define __NR_mq_unlink 181
#define SYS_mq_unlink 181
/*__SYSCALL(__NR_mq_unlink, sys_mq_unlink)*/
/*__SYSCALL(SYS_mq_unlink, sys_mq_unlink)*/
#define __NR_mq_timedsend 182
#define SYS_mq_timedsend 182
/*__SC_COMP(__NR_mq_timedsend, sys_mq_timedsend, compat_sys_mq_timedsend)*/
/*__SC_COMP(SYS_mq_timedsend, sys_mq_timedsend, compat_sys_mq_timedsend)*/
#define __NR_mq_timedreceive 183
#define SYS_mq_timedreceive 183
/*__SC_COMP(__NR_mq_timedreceive, sys_mq_timedreceive, \
/*__SC_COMP(SYS_mq_timedreceive, sys_mq_timedreceive, \
	  compat_sys_mq_timedreceive)*/
#define __NR_mq_notify 184
#define SYS_mq_notify 184
/*__SC_COMP(__NR_mq_notify, sys_mq_notify, compat_sys_mq_notify)*/
/*__SC_COMP(SYS_mq_notify, sys_mq_notify, compat_sys_mq_notify)*/
#define __NR_mq_getsetattr 185
#define SYS_mq_getsetattr 185
/*__SC_COMP(__NR_mq_getsetattr, sys_mq_getsetattr, compat_sys_mq_getsetattr)*/
/*__SC_COMP(SYS_mq_getsetattr, sys_mq_getsetattr, compat_sys_mq_getsetattr)*/

/* ipc/msg.c */
#define __NR_msgget 186
#define SYS_msgget 186
/*__SYSCALL(__NR_msgget, sys_msgget)*/
/*__SYSCALL(SYS_msgget, sys_msgget)*/
#define __NR_msgctl 187
#define SYS_msgctl 187
/*__SC_COMP(__NR_msgctl, sys_msgctl, compat_sys_msgctl)*/
/*__SC_COMP(SYS_msgctl, sys_msgctl, compat_sys_msgctl)*/
#define __NR_msgrcv 188
#define SYS_msgrcv 188
/*__SC_COMP(__NR_msgrcv, sys_msgrcv, compat_sys_msgrcv)*/
/*__SC_COMP(SYS_msgrcv, sys_msgrcv, compat_sys_msgrcv)*/
#define __NR_msgsnd 189
#define SYS_msgsnd 189
/*__SC_COMP(__NR_msgsnd, sys_msgsnd, compat_sys_msgsnd)*/
/*__SC_COMP(SYS_msgsnd, sys_msgsnd, compat_sys_msgsnd)*/

/* ipc/sem.c */
#define __NR_semget 190
#define SYS_semget 190
/*__SYSCALL(__NR_semget, sys_semget)*/
/*__SYSCALL(SYS_semget, sys_semget)*/
#define __NR_semctl 191
#define SYS_semctl 191
/*__SC_COMP(__NR_semctl, sys_semctl, compat_sys_semctl)*/
/*__SC_COMP(SYS_semctl, sys_semctl, compat_sys_semctl)*/
#define __NR_semtimedop 192
#define SYS_semtimedop 192
/*__SC_COMP(__NR_semtimedop, sys_semtimedop, compat_sys_semtimedop)*/
/*__SC_COMP(SYS_semtimedop, sys_semtimedop, compat_sys_semtimedop)*/
#define __NR_semop 193
#define SYS_semop 193
/*__SYSCALL(__NR_semop, sys_semop)*/
/*__SYSCALL(SYS_semop, sys_semop)*/

/* ipc/shm.c */
#define __NR_shmget 194
#define SYS_shmget 194
/*__SYSCALL(__NR_shmget, sys_shmget)*/
/*__SYSCALL(SYS_shmget, sys_shmget)*/
#define __NR_shmctl 195
#define SYS_shmctl 195
/*__SC_COMP(__NR_shmctl, sys_shmctl, compat_sys_shmctl)*/
/*__SC_COMP(SYS_shmctl, sys_shmctl, compat_sys_shmctl)*/
#define __NR_shmat 196
#define SYS_shmat 196
/*__SC_COMP(__NR_shmat, sys_shmat, compat_sys_shmat)*/
/*__SC_COMP(SYS_shmat, sys_shmat, compat_sys_shmat)*/
#define __NR_shmdt 197
#define SYS_shmdt 197
/*__SYSCALL(__NR_shmdt, sys_shmdt)*/
/*__SYSCALL(SYS_shmdt, sys_shmdt)*/

/* net/socket.c */
#define __NR_socket 198
#define SYS_socket 198
/*__SYSCALL(__NR_socket, sys_socket)*/
/*__SYSCALL(SYS_socket, sys_socket)*/
#define __NR_socketpair 199
#define SYS_socketpair 199
/*__SYSCALL(__NR_socketpair, sys_socketpair)*/
/*__SYSCALL(SYS_socketpair, sys_socketpair)*/
#define __NR_bind 200
#define SYS_bind 200
/*__SYSCALL(__NR_bind, sys_bind)*/
/*__SYSCALL(SYS_bind, sys_bind)*/
#define __NR_listen 201
#define SYS_listen 201
/*__SYSCALL(__NR_listen, sys_listen)*/
/*__SYSCALL(SYS_listen, sys_listen)*/
#define __NR_accept 202
#define SYS_accept 202
/*__SYSCALL(__NR_accept, sys_accept)*/
/*__SYSCALL(SYS_accept, sys_accept)*/
#define __NR_connect 203
#define SYS_connect 203
/*__SYSCALL(__NR_connect, sys_connect)*/
/*__SYSCALL(SYS_connect, sys_connect)*/
#define __NR_getsockname 204
#define SYS_getsockname 204
/*__SYSCALL(__NR_getsockname, sys_getsockname)*/
/*__SYSCALL(SYS_getsockname, sys_getsockname)*/
#define __NR_getpeername 205
#define SYS_getpeername 205
/*__SYSCALL(__NR_getpeername, sys_getpeername)*/
/*__SYSCALL(SYS_getpeername, sys_getpeername)*/
#define __NR_sendto 206
#define SYS_sendto 206
/*__SYSCALL(__NR_sendto, sys_sendto)*/
/*__SYSCALL(SYS_sendto, sys_sendto)*/
#define __NR_recvfrom 207
#define SYS_recvfrom 207
/*__SC_COMP(__NR_recvfrom, sys_recvfrom, compat_sys_recvfrom)*/
/*__SC_COMP(SYS_recvfrom, sys_recvfrom, compat_sys_recvfrom)*/
#define __NR_setsockopt 208
#define SYS_setsockopt 208
/*__SC_COMP(__NR_setsockopt, sys_setsockopt, compat_sys_setsockopt)*/
/*__SC_COMP(SYS_setsockopt, sys_setsockopt, compat_sys_setsockopt)*/
#define __NR_getsockopt 209
#define SYS_getsockopt 209
/*__SC_COMP(__NR_getsockopt, sys_getsockopt, compat_sys_getsockopt)*/
/*__SC_COMP(SYS_getsockopt, sys_getsockopt, compat_sys_getsockopt)*/
#define __NR_shutdown 210
#define SYS_shutdown 210
/*__SYSCALL(__NR_shutdown, sys_shutdown)*/
/*__SYSCALL(SYS_shutdown, sys_shutdown)*/
#define __NR_sendmsg 211
#define SYS_sendmsg 211
/*__SC_COMP(__NR_sendmsg, sys_sendmsg, compat_sys_sendmsg)*/
/*__SC_COMP(SYS_sendmsg, sys_sendmsg, compat_sys_sendmsg)*/
#define __NR_recvmsg 212
#define SYS_recvmsg 212
/*__SC_COMP(__NR_recvmsg, sys_recvmsg, compat_sys_recvmsg)*/
/*__SC_COMP(SYS_recvmsg, sys_recvmsg, compat_sys_recvmsg)*/

/* mm/filemap.c */
#define __NR_readahead 213
#define SYS_readahead 213
/*__SC_COMP(__NR_readahead, sys_readahead, compat_sys_readahead)*/
/*__SC_COMP(SYS_readahead, sys_readahead, compat_sys_readahead)*/

/* mm/nommu.c, also with MMU */
#define __NR_brk 214
#define SYS_brk 214
/*__SYSCALL(__NR_brk, sys_brk)*/
/*__SYSCALL(SYS_brk, sys_brk)*/
#define __NR_munmap 215
#define SYS_munmap 215
/*__SYSCALL(__NR_munmap, sys_munmap)*/
/*__SYSCALL(SYS_munmap, sys_munmap)*/
#define __NR_mremap 216
#define SYS_mremap 216
/*__SYSCALL(__NR_mremap, sys_mremap)*/
/*__SYSCALL(SYS_mremap, sys_mremap)*/

/* security/keys/keyctl.c */
#define __NR_add_key 217
#define SYS_add_key 217
/*__SYSCALL(__NR_add_key, sys_add_key)*/
/*__SYSCALL(SYS_add_key, sys_add_key)*/
#define __NR_request_key 218
#define SYS_request_key 218
/*__SYSCALL(__NR_request_key, sys_request_key)*/
/*__SYSCALL(SYS_request_key, sys_request_key)*/
#define __NR_keyctl 219
#define SYS_keyctl 219
/*__SC_COMP(__NR_keyctl, sys_keyctl, compat_sys_keyctl)*/
/*__SC_COMP(SYS_keyctl, sys_keyctl, compat_sys_keyctl)*/

/* arch/example/kernel/sys_example.c */
#define __NR_clone 220
#define SYS_clone 220
/*__SYSCALL(__NR_clone, sys_clone)*/
/*__SYSCALL(SYS_clone, sys_clone)*/
#define __NR_execve 221
#define SYS_execve 221
/*__SC_COMP(__NR_execve, sys_execve, compat_sys_execve)*/
/*__SC_COMP(SYS_execve, sys_execve, compat_sys_execve)*/

#define __NR3264_mmap 222
/*__SC_3264(__NR3264_mmap, sys_mmap2, sys_mmap)*/
/* mm/fadvise.c */
#define __NR3264_fadvise64 223
/*__SC_COMP(__NR3264_fadvise64, sys_fadvise64_64, compat_sys_fadvise64_64)*/

/* mm/, CONFIG_MMU only */
#ifndef __ARCH_NOMMU
#define __NR_swapon 224
#define SYS_swapon 224
/*__SYSCALL(__NR_swapon, sys_swapon)*/
/*__SYSCALL(SYS_swapon, sys_swapon)*/
#define __NR_swapoff 225
#define SYS_swapoff 225
/*__SYSCALL(__NR_swapoff, sys_swapoff)*/
/*__SYSCALL(SYS_swapoff, sys_swapoff)*/
#define __NR_mprotect 226
#define SYS_mprotect 226
/*__SYSCALL(__NR_mprotect, sys_mprotect)*/
/*__SYSCALL(SYS_mprotect, sys_mprotect)*/
#define __NR_msync 227
#define SYS_msync 227
/*__SYSCALL(__NR_msync, sys_msync)*/
/*__SYSCALL(SYS_msync, sys_msync)*/
#define __NR_mlock 228
#define SYS_mlock 228
/*__SYSCALL(__NR_mlock, sys_mlock)*/
/*__SYSCALL(SYS_mlock, sys_mlock)*/
#define __NR_munlock 229
#define SYS_munlock 229
/*__SYSCALL(__NR_munlock, sys_munlock)*/
/*__SYSCALL(SYS_munlock, sys_munlock)*/
#define __NR_mlockall 230
#define SYS_mlockall 230
/*__SYSCALL(__NR_mlockall, sys_mlockall)*/
/*__SYSCALL(SYS_mlockall, sys_mlockall)*/
#define __NR_munlockall 231
#define SYS_munlockall 231
/*__SYSCALL(__NR_munlockall, sys_munlockall)*/
/*__SYSCALL(SYS_munlockall, sys_munlockall)*/
#define __NR_mincore 232
#define SYS_mincore 232
/*__SYSCALL(__NR_mincore, sys_mincore)*/
/*__SYSCALL(SYS_mincore, sys_mincore)*/
#define __NR_madvise 233
#define SYS_madvise 233
/*__SYSCALL(__NR_madvise, sys_madvise)*/
/*__SYSCALL(SYS_madvise, sys_madvise)*/
#define __NR_remap_file_pages 234
#define SYS_remap_file_pages 234
/*__SYSCALL(__NR_remap_file_pages, sys_remap_file_pages)*/
/*__SYSCALL(SYS_remap_file_pages, sys_remap_file_pages)*/
#define __NR_mbind 235
#define SYS_mbind 235
/*__SC_COMP(__NR_mbind, sys_mbind, compat_sys_mbind)*/
/*__SC_COMP(SYS_mbind, sys_mbind, compat_sys_mbind)*/
#define __NR_get_mempolicy 236
#define SYS_get_mempolicy 236
/*__SC_COMP(__NR_get_mempolicy, sys_get_mempolicy, compat_sys_get_mempolicy)*/
/*__SC_COMP(SYS_get_mempolicy, sys_get_mempolicy, compat_sys_get_mempolicy)*/
#define __NR_set_mempolicy 237
#define SYS_set_mempolicy 237
/*__SC_COMP(__NR_set_mempolicy, sys_set_mempolicy, compat_sys_set_mempolicy)*/
/*__SC_COMP(SYS_set_mempolicy, sys_set_mempolicy, compat_sys_set_mempolicy)*/
#define __NR_migrate_pages 238
#define SYS_migrate_pages 238
/*__SC_COMP(__NR_migrate_pages, sys_migrate_pages, compat_sys_migrate_pages)*/
/*__SC_COMP(SYS_migrate_pages, sys_migrate_pages, compat_sys_migrate_pages)*/
#define __NR_move_pages 239
#define SYS_move_pages 239
/*__SC_COMP(__NR_move_pages, sys_move_pages, compat_sys_move_pages)*/
/*__SC_COMP(SYS_move_pages, sys_move_pages, compat_sys_move_pages)*/
#endif

#define __NR_rt_tgsigqueueinfo 240
#define SYS_rt_tgsigqueueinfo 240
/*__SC_COMP(__NR_rt_tgsigqueueinfo, sys_rt_tgsigqueueinfo, \
/*__SC_COMP(SYS_rt_tgsigqueueinfo, sys_rt_tgsigqueueinfo, \
	  compat_sys_rt_tgsigqueueinfo)*/
#define __NR_perf_event_open 241
#define SYS_perf_event_open 241
/*__SYSCALL(__NR_perf_event_open, sys_perf_event_open)*/
/*__SYSCALL(SYS_perf_event_open, sys_perf_event_open)*/
#define __NR_accept4 242
#define SYS_accept4 242
/*__SYSCALL(__NR_accept4, sys_accept4)*/
/*__SYSCALL(SYS_accept4, sys_accept4)*/
#define __NR_recvmmsg 243
#define SYS_recvmmsg 243
/*__SC_COMP(__NR_recvmmsg, sys_recvmmsg, compat_sys_recvmmsg)*/
/*__SC_COMP(SYS_recvmmsg, sys_recvmmsg, compat_sys_recvmmsg)*/

/*
 * Architectures may provide up to 16 syscalls of their own
 * starting with this value.
 */
#define __NR_arch_specific_syscall 244
#define SYS_arch_specific_syscall 244

#define __NR_wait4 260
#define SYS_wait4 260
/*__SC_COMP(__NR_wait4, sys_wait4, compat_sys_wait4)*/
/*__SC_COMP(SYS_wait4, sys_wait4, compat_sys_wait4)*/
#define __NR_prlimit64 261
#define SYS_prlimit64 261
/*__SYSCALL(__NR_prlimit64, sys_prlimit64)*/
/*__SYSCALL(SYS_prlimit64, sys_prlimit64)*/
#define __NR_fanotify_init 262
#define SYS_fanotify_init 262
/*__SYSCALL(__NR_fanotify_init, sys_fanotify_init)*/
/*__SYSCALL(SYS_fanotify_init, sys_fanotify_init)*/
#define __NR_fanotify_mark 263
#define SYS_fanotify_mark 263
/*__SYSCALL(__NR_fanotify_mark, sys_fanotify_mark)*/
/*__SYSCALL(SYS_fanotify_mark, sys_fanotify_mark)*/
#define __NR_name_to_handle_at         264
#define SYS_name_to_handle_at         264
/*__SYSCALL(__NR_name_to_handle_at, sys_name_to_handle_at)*/
/*__SYSCALL(SYS_name_to_handle_at, sys_name_to_handle_at)*/
#define __NR_open_by_handle_at         265
#define SYS_open_by_handle_at         265
/*__SC_COMP(__NR_open_by_handle_at, sys_open_by_handle_at, \
/*__SC_COMP(SYS_open_by_handle_at, sys_open_by_handle_at, \
	  compat_sys_open_by_handle_at)*/
#define __NR_clock_adjtime 266
#define SYS_clock_adjtime 266
/*__SC_COMP(__NR_clock_adjtime, sys_clock_adjtime, compat_sys_clock_adjtime)*/
/*__SC_COMP(SYS_clock_adjtime, sys_clock_adjtime, compat_sys_clock_adjtime)*/
#define __NR_syncfs 267
#define SYS_syncfs 267
/*__SYSCALL(__NR_syncfs, sys_syncfs)*/
/*__SYSCALL(SYS_syncfs, sys_syncfs)*/
#define __NR_setns 268
#define SYS_setns 268
/*__SYSCALL(__NR_setns, sys_setns)*/
/*__SYSCALL(SYS_setns, sys_setns)*/
#define __NR_sendmmsg 269
#define SYS_sendmmsg 269
/*__SC_COMP(__NR_sendmmsg, sys_sendmmsg, compat_sys_sendmmsg)*/
/*__SC_COMP(SYS_sendmmsg, sys_sendmmsg, compat_sys_sendmmsg)*/
#define __NR_process_vm_readv 270
#define SYS_process_vm_readv 270
/*__SC_COMP(__NR_process_vm_readv, sys_process_vm_readv, \
/*__SC_COMP(SYS_process_vm_readv, sys_process_vm_readv, \
          compat_sys_process_vm_readv)*/
#define __NR_process_vm_writev 271
#define SYS_process_vm_writev 271
/*__SC_COMP(__NR_process_vm_writev, sys_process_vm_writev, \
/*__SC_COMP(SYS_process_vm_writev, sys_process_vm_writev, \
          compat_sys_process_vm_writev)*/
#define __NR_kcmp 272
#define SYS_kcmp 272
/*__SYSCALL(__NR_kcmp, sys_kcmp)*/
/*__SYSCALL(SYS_kcmp, sys_kcmp)*/
#define __NR_finit_module 273
#define SYS_finit_module 273
/*__SYSCALL(__NR_finit_module, sys_finit_module)*/
/*__SYSCALL(SYS_finit_module, sys_finit_module)*/

#undef __NR_syscalls
#undef SYS_syscalls
#define __NR_syscalls 274
#define SYS_syscalls 274




/*
 * 32 bit systems traditionally used different
 * syscalls for off_t and loff_t arguments, while
 * 64 bit systems only need the off_t version.
 * For new 32 bit platforms, there is no need to
 * implement the old 32 bit off_t syscalls, so
 * they take different names.
 * Here we map the numbers so that both versions
 * use the same syscall table layout.
 */
#if __BITS_PER_LONG == 64 && !defined(__SYSCALL_COMPAT)
#define __NR_fcntl __NR3264_fcntl
#define SYS_fcntl __NR3264_fcntl
#define __NR_statfs __NR3264_statfs
#define SYS_statfs __NR3264_statfs
#define __NR_fstatfs __NR3264_fstatfs
#define SYS_fstatfs __NR3264_fstatfs
#define __NR_truncate __NR3264_truncate
#define SYS_truncate __NR3264_truncate
#define __NR_ftruncate __NR3264_ftruncate
#define SYS_ftruncate __NR3264_ftruncate
#define __NR_lseek __NR3264_lseek
#define SYS_lseek __NR3264_lseek
#define __NR_sendfile __NR3264_sendfile
#define SYS_sendfile __NR3264_sendfile
#define __NR_newfstatat __NR3264_fstatat
#define SYS_newfstatat __NR3264_fstatat
#define __NR_fstat __NR3264_fstat
#define SYS_fstat __NR3264_fstat
#define __NR_mmap __NR3264_mmap
#define SYS_mmap __NR3264_mmap
#define __NR_fadvise64 __NR3264_fadvise64
#define SYS_fadvise64 __NR3264_fadvise64
#ifdef __NR3264_stat
#define __NR_stat __NR3264_stat
#define SYS_stat __NR3264_stat
#define __NR_lstat __NR3264_lstat
#define SYS_lstat __NR3264_lstat
#endif
#else
#define __NR_fcntl64 __NR3264_fcntl
#define SYS_fcntl64 __NR3264_fcntl
#define __NR_statfs64 __NR3264_statfs
#define SYS_statfs64 __NR3264_statfs
#define __NR_fstatfs64 __NR3264_fstatfs
#define SYS_fstatfs64 __NR3264_fstatfs
#define __NR_truncate64 __NR3264_truncate
#define SYS_truncate64 __NR3264_truncate
#define __NR_ftruncate64 __NR3264_ftruncate
#define SYS_ftruncate64 __NR3264_ftruncate
#define __NR_llseek __NR3264_lseek
#define SYS_llseek __NR3264_lseek
#define __NR_sendfile64 __NR3264_sendfile
#define SYS_sendfile64 __NR3264_sendfile
#define __NR_fstatat64 __NR3264_fstatat
#define SYS_fstatat64 __NR3264_fstatat
#define __NR_fstat64 __NR3264_fstat
#define SYS_fstat64 __NR3264_fstat
#define __NR_mmap2 __NR3264_mmap
#define SYS_mmap2 __NR3264_mmap
#define __NR_fadvise64_64 __NR3264_fadvise64
#define SYS_fadvise64_64 __NR3264_fadvise64
#ifdef __NR3264_stat
#define __NR_stat64 __NR3264_stat
#define SYS_stat64 __NR3264_stat
#define __NR_lstat64 __NR3264_lstat
#define SYS_lstat64 __NR3264_lstat
#endif
#endif
