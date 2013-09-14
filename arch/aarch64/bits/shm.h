#define SHMLBA 4096

struct shmid_ds
{
	struct ipc_perm shm_perm;
	size_t shm_segsz;
	time_t shm_atime;
	time_t shm_dtime;
	time_t shm_ctime;
	pid_t shm_cpid;
	pid_t shm_lpid;
	unsigned short shm_nattch;
	unsigned short shm_unused;
	void *shm_unused2;
	void *shm_unused3
};
