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
        off_t		st_size;	/* long */
        blksize_t	st_blksize;	/* int */
        int             __pad2;
        blkcnt_t	st_blocks;	/* long */
        struct timespec	st_atim;	/* long, unsigned long */
        struct timespec	st_mtim;	/* long, unsigned long */
        struct timespec	st_ctim;	/* long, unsigned long */
        unsigned int    __unused4;
        unsigned int    __unused5;
};
