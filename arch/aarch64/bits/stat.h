/* copied from kernel definition, but with padding replaced
 * by the corresponding correctly-sized userspace types. 
 * include/uapi/asm-generic/stat.h */

struct stat {
        dev_t		st_dev;		/* unsigned long */
        ino_t		st_ino;		/* unsigned long */
        mode_t		st_mode;	/* unsigned int */
        unsigned int    st_nlink;	/* unsigned int */
        uid_t		st_uid;		/* unsigned int */
        gid_t		st_gid;		/* unsigned int */
        dev_t		st_rdev;	/* unsigned long */
        unsigned long   __pad1;
        size_t		st_size;	/* long */
        blksize_t	st_blksize;	/* int */
        int             __pad2;
        blkcnt_t	st_blocks;	/* long */
        struct timespec	st_atim;	/* long, unsigned long */
        struct timespec	st_mtim;	/* long, unsigned long */
        struct timespec	st_ctim;	/* long, unsigned long */
        unsigned int    __unused4;
        unsigned int    __unused5;
};

/* FIXME: linux kernel include/uapi/asm-generic/stat.h is used on
   AArch64. It defines size_t as long. musl defines size_t as
   unsigned long (include/alltypes.h). Is this OK? Then, the timespec
   struct is defining long, long. The linux kernel defines long,
   unsigned long. What should be done? Redefining timespec as
   STRUCT timespec { time_t tv_sec; unsigned long tv_nsec; };? */
