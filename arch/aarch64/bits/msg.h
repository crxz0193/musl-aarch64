struct msqid_ds
{
	struct ipc_perm msg_perm;
	struct msg *msg_first;
	struct msg *msg_last;
	time_t msg_stime;
	time_t msg_rtime;
	time_t msg_ctime;
	unsigned long msg_lcbytes;
	unsigned long msg_lqbytes;
	unsigned short msg_cbytes;
	msgqnum_t msg_qnum;
	msglen_t msg_qbytes;
	pid_t msg_lspid;
	pid_t msg_lrpid;
};
