#pragma once

#include "../../numbers.h"

typedef enum SyscallType
{
    SYS_io_setup                = 0,
    SYS_io_destroy              = 1,
    SYS_io_submit               = 2,
    SYS_io_cancel               = 3,
    SYS_io_getevents            = 4,
    SYS_setxattr                = 5,
    SYS_lsetxattr               = 6,
    SYS_fsetxattr               = 7,
    SYS_getxattr                = 8,
    SYS_lgetxattr               = 9,
    SYS_fgetxattr               = 10,
    SYS_listxattr               = 11,
    SYS_llistxattr              = 12,
    SYS_flistxattr              = 13,
    SYS_removexattr             = 14,
    SYS_lremovexattr            = 15,
    SYS_fremovexattr            = 16,
    SYS_getcwd                  = 17,
    SYS_lookup_dcookie          = 18,
    SYS_eventfd2                = 19,
    SYS_epoll_create1           = 20,
    SYS_epoll_ctl               = 21,
    SYS_epoll_pwait             = 22,
    SYS_dup                     = 23,
    SYS_dup3                    = 24,
    SYS_fcntl                   = 25,
    SYS_inotify_init1           = 26,
    SYS_inotify_add_watch       = 27,
    SYS_inotify_rm_watch        = 28,
    SYS_ioctl                   = 29,
    SYS_ioprio_set              = 30,
    SYS_ioprio_get              = 31,
    SYS_flock                   = 32,
    SYS_mknodat                 = 33,
    SYS_mkdirat                 = 34,
    SYS_unlinkat                = 35,
    SYS_symlinkat               = 36,
    SYS_linkat                  = 37,
    SYS_renameat                = 38,
    SYS_umount2                 = 39,
    SYS_mount                   = 40,
    SYS_pivot_root              = 41,
    SYS_nfsservctl              = 42,
    SYS_statfs                  = 43,
    SYS_fstatfs                 = 44,
    SYS_truncate                = 45,
    SYS_ftruncate               = 46,
    SYS_fallocate               = 47,
    SYS_faccessat               = 48,
    SYS_chdir                   = 49,
    SYS_fchdir                  = 50,
    SYS_chroot                  = 51,
    SYS_fchmod                  = 52,
    SYS_fchmodat                = 53,
    SYS_fchownat                = 54,
    SYS_fchown                  = 55,
    SYS_openat                  = 56,
    SYS_close                   = 57,
    SYS_vhangup                 = 58,
    SYS_pipe2                   = 59,
    SYS_quotactl                = 60,
    SYS_getdents64              = 61,
    SYS_lseek                   = 62,
    SYS_read                    = 63,
    SYS_write                   = 64,
    SYS_readv                   = 65,
    SYS_writev                  = 66,
    SYS_pread64                 = 67,
    SYS_pwrite64                = 68,
    SYS_preadv                  = 69,
    SYS_pwritev                 = 70,
    SYS_sendfile                = 71,
    SYS_pselect6                = 72,
    SYS_ppoll                   = 73,
    SYS_signalfd4               = 74,
    SYS_vmsplice                = 75,
    SYS_splice                  = 76,
    SYS_tee                     = 77,
    SYS_readlinkat              = 78,
    SYS_fstatat                 = 79,
    SYS_fstat                   = 80,
    SYS_sync                    = 81,
    SYS_fsync                   = 82,
    SYS_fdatasync               = 83,
    SYS_sync_file_range         = 84,
    SYS_timerfd_create          = 85,
    SYS_timerfd_settime         = 86,
    SYS_timerfd_gettime         = 87,
    SYS_utimensat               = 88,
    SYS_acct                    = 89,
    SYS_capget                  = 90,
    SYS_capset                  = 91,
    SYS_personality             = 92,
    SYS_exit                    = 93,
    SYS_exit_group              = 94,
    SYS_waitid                  = 95,
    SYS_set_tid_address         = 96,
    SYS_unshare                 = 97,
    SYS_futex                   = 98,
    SYS_set_robust_list         = 99,
    SYS_get_robust_list         = 100,
    SYS_nanosleep               = 101,
    SYS_getitimer               = 102,
    SYS_setitimer               = 103,
    SYS_kexec_load              = 104,
    SYS_init_module             = 105,
    SYS_delete_module           = 106,
    SYS_timer_create            = 107,
    SYS_timer_gettime           = 108,
    SYS_timer_getoverrun        = 109,
    SYS_timer_settime           = 110,
    SYS_timer_delete            = 111,
    SYS_clock_settime           = 112,
    SYS_clock_gettime           = 113,
    SYS_clock_getres            = 114,
    SYS_clock_nanosleep         = 115,
    SYS_syslog                  = 116,
    SYS_ptrace                  = 117,
    SYS_sched_setparam          = 118,
    SYS_sched_setscheduler      = 119,
    SYS_sched_getscheduler      = 120,
    SYS_sched_getparam          = 121,
    SYS_sched_setaffinity       = 122,
    SYS_sched_getaffinity       = 123,
    SYS_sched_yield             = 124,
    SYS_sched_get_priority_max  = 125,
    SYS_sched_get_priority_min  = 126,
    SYS_sched_rr_get_interval   = 127,
    SYS_restart_syscall         = 128,
    SYS_kill                    = 129,
    SYS_tkill                   = 130,
    SYS_tgkill                  = 131,
    SYS_sigaltstack             = 132,
    SYS_rt_sigsuspend           = 133,
    SYS_rt_sigaction            = 134,
    SYS_rt_sigprocmask          = 135,
    SYS_rt_sigpending           = 136,
    SYS_rt_sigtimedwait         = 137,
    SYS_rt_sigqueueinfo         = 138,
    SYS_rt_sigreturn            = 139,
    SYS_setpriority             = 140,
    SYS_getpriority             = 141,
    SYS_reboot                  = 142,
    SYS_setregid                = 143,
    SYS_setgid                  = 144,
    SYS_setreuid                = 145,
    SYS_setuid                  = 146,
    SYS_setresuid               = 147,
    SYS_getresuid               = 148,
    SYS_setresgid               = 149,
    SYS_getresgid               = 150,
    SYS_setfsuid                = 151,
    SYS_setfsgid                = 152,
    SYS_times                   = 153,
    SYS_setpgid                 = 154,
    SYS_getpgid                 = 155,
    SYS_getsid                  = 156,
    SYS_setsid                  = 157,
    SYS_getgroups               = 158,
    SYS_setgroups               = 159,
    SYS_uname                   = 160,
    SYS_sethostname             = 161,
    SYS_setdomainname           = 162,
    SYS_getrlimit               = 163,
    SYS_setrlimit               = 164,
    SYS_getrusage               = 165,
    SYS_umask                   = 166,
    SYS_prctl                   = 167,
    SYS_getcpu                  = 168,
    SYS_gettimeofday            = 169,
    SYS_settimeofday            = 170,
    SYS_adjtimex                = 171,
    SYS_getpid                  = 172,
    SYS_getppid                 = 173,
    SYS_getuid                  = 174,
    SYS_geteuid                 = 175,
    SYS_getgid                  = 176,
    SYS_getegid                 = 177,
    SYS_gettid                  = 178,
    SYS_sysinfo                 = 179,
    SYS_mq_open                 = 180,
    SYS_mq_unlink               = 181,
    SYS_mq_timedsend            = 182,
    SYS_mq_timedreceive         = 183,
    SYS_mq_notify               = 184,
    SYS_mq_getsetattr           = 185,
    SYS_msgget                  = 186,
    SYS_msgctl                  = 187,
    SYS_msgrcv                  = 188,
    SYS_msgsnd                  = 189,
    SYS_semget                  = 190,
    SYS_semctl                  = 191,
    SYS_semtimedop              = 192,
    SYS_semop                   = 193,
    SYS_shmget                  = 194,
    SYS_shmctl                  = 195,
    SYS_shmat                   = 196,
    SYS_shmdt                   = 197,
    SYS_socket                  = 198,
    SYS_socketpair              = 199,
    SYS_bind                    = 200,
    SYS_listen                  = 201,
    SYS_accept                  = 202,
    SYS_connect                 = 203,
    SYS_getsockname             = 204,
    SYS_getpeername             = 205,
    SYS_sendto                  = 206,
    SYS_recvfrom                = 207,
    SYS_setsockopt              = 208,
    SYS_getsockopt              = 209,
    SYS_shutdown                = 210,
    SYS_sendmsg                 = 211,
    SYS_recvmsg                 = 212,
    SYS_readahead               = 213,
    SYS_brk                     = 214,
    SYS_munmap                  = 215,
    SYS_mremap                  = 216,
    SYS_add_key                 = 217,
    SYS_request_key             = 218,
    SYS_keyctl                  = 219,
    SYS_clone                   = 220,
    SYS_execve                  = 221,
    SYS_mmap                    = 222,
    SYS_fadvise64               = 223,
    SYS_swapon                  = 224,
    SYS_swapoff                 = 225,
    SYS_mprotect                = 226,
    SYS_msync                   = 227,
    SYS_mlock                   = 228,
    SYS_munlock                 = 229,
    SYS_mlockall                = 230,
    SYS_munlockall              = 231,
    SYS_mincore                 = 232,
    SYS_madvise                 = 233,
    SYS_remap_file_pages        = 234,
    SYS_mbind                   = 235,
    SYS_get_mempolicy           = 236,
    SYS_set_mempolicy           = 237,
    SYS_migrate_pages           = 238,
    SYS_move_pages              = 239,
    SYS_rt_tgsigqueueinfo       = 240,
    SYS_perf_event_open         = 241,
    SYS_accept4                 = 242,
    SYS_recvmmsg                = 243,
    SYS_wait4                   = 260,
    SYS_prlimit64               = 261,
    SYS_fanotify_init           = 262,
    SYS_fanotify_mark           = 263,
    SYS_name_to_handle_at       = 264,
    SYS_open_by_handle_at       = 265,
    SYS_clock_adjtime           = 266,
    SYS_syncfs                  = 267,
    SYS_setns                   = 268,
    SYS_sendmmsg                = 269,
    SYS_process_vm_readv        = 270,
    SYS_process_vm_writev       = 271,
    SYS_kcmp                    = 272,
    SYS_finit_module            = 273,
    SYS_sched_setattr           = 274,
    SYS_sched_getattr           = 275,
    SYS_renameat2               = 276,
    SYS_seccomp                 = 277,
    SYS_getrandom               = 278,
    SYS_memfd_create            = 279,
    SYS_bpf                     = 280,
    SYS_execveat                = 281,
    SYS_userfaultfd             = 282,
    SYS_membarrier              = 283,
    SYS_mlock2                  = 284,
    SYS_copy_file_range         = 285,
    SYS_preadv2                 = 286,
    SYS_pwritev2                = 287,
    SYS_pkey_mprotect           = 288,
    SYS_pkey_alloc              = 289,
    SYS_pkey_free               = 290,
    SYS_statx                   = 291,
    SYS_io_pgetevents           = 292,
    SYS_rseq                    = 293,
    SYS_kexec_file_load         = 294,
    SYS_pidfd_send_signal       = 424,
    SYS_io_uring_setup          = 425,
    SYS_io_uring_enter          = 426,
    SYS_io_uring_register       = 427,
    SYS_open_tree               = 428,
    SYS_move_mount              = 429,
    SYS_fsopen                  = 430,
    SYS_fsconfig                = 431,
    SYS_fsmount                 = 432,
    SYS_fspick                  = 433,
    SYS_pidfd_open              = 434,
    SYS_clone3                  = 435,
    SYS_close_range             = 436,
    SYS_openat2                 = 437,
    SYS_pidfd_getfd             = 438,
    SYS_faccessat2              = 439,
    SYS_process_madvise         = 440,
    SYS_epoll_pwait2            = 441,
    SYS_mount_setattr           = 442,
    SYS_quotactl_fd             = 443,
    SYS_landlock_create_ruleset = 444,
    SYS_landlock_add_rule       = 445,
    SYS_landlock_restrict_self  = 446,
    SYS_memfd_secret            = 447,
    SYS_process_mrelease        = 448,
    SYS_futex_waitv             = 449,
    SYS_set_mempolicy_home_node = 450,
    SYS_cachestat               = 451,
    SYS_fchmodat2               = 452,
    SYS_map_shadow_stack        = 453,
    SYS_futex_wake              = 454,
    SYS_futex_wait              = 455,
    SYS_futex_requeue           = 456,
} SyscallType;

/// O:
#define O_CREAT        0100;
/// O:
#define O_EXCL         0200;
/// O:
#define O_NOCTTY       0400;
/// O:
#define O_TRUNC        01000;
/// O:
#define O_APPEND       02000;
/// O:
#define O_NONBLOCK     04000;
/// O:
#define O_DSYNC        010000;
/// O:
#define O_SYNC         04010000;
/// O:
#define O_RSYNC        04010000;
/// O:
#define O_DIRECTORY    040000;
/// O:
#define O_NOFOLLOW     0100000;
/// O:
#define O_CLOEXEC      02000000;
/// O:
#define O_ASYNC        020000;
/// O:
#define O_DIRECT       0200000;
/// O:
#define O_LARGEFILE    0400000;
/// O:
#define O_NOATIME      01000000;
/// O:
#define O_PATH         010000000;
/// O:
#define O_TMPFILE      020040000;
/// O:
#define O_NDELAY       = NONBLOCK;

/// MAP: stack-like segment
#define MAP_GROWSDOWN  0x0100;
/// MAP: ETXTBSY
#define MAP_DENYWRITE  0x0800;
/// MAP: mark it as an executable
#define MAP_EXECUTABLE 0x1000;
/// MAP: pages are locked
#define MAP_LOCKED     0x2000;
/// MAP: don't check for reservations
#define MAP_NORESERVE  0x4000;

usize syscall0(SyscallType type) {
    register long _x0 asm("x0");
    register long _x8 asm("x8") = type;
    asm volatile("svc #0" : "=r"(_x0) : "r"(_x8) : "memory");
    return _x0;
}
usize syscall1(SyscallType type, usize a1) {
    register long _x0 asm("x0") = a1;
    register long _x8 asm("x8") = type;
    asm volatile("svc #0" : "=r"(_x0) : "r"(_x8), "r"(_x0) : "memory");
    return _x0;
}
usize syscall2(SyscallType type, usize a1, usize a2) {
    register long _x0 asm("x0") = a1;
    register long _x1 asm("x1") = a2;
    register long _x8 asm("x8") = type;
    asm volatile("svc #0" : "=r"(_x0) : "r"(_x8), "r"(_x0), "r"(_x1) : "memory");
    return _x0;
}
usize syscall3(SyscallType type, usize a1, usize a2, usize a3) {
    register long _x0 asm("x0") = a1;
    register long _x1 asm("x1") = a2;
    register long _x2 asm("x2") = a3;
    register long _x8 asm("x8") = type;
    asm volatile("svc #0" : "=r"(_x0) : "r"(_x8), "r"(_x0), "r"(_x1), "r"(_x2) : "memory");
    return _x0;
}
usize syscall4(SyscallType type, usize a1, usize a2, usize a3, usize a4) {
    register long _x0 asm("x0") = a1;
    register long _x1 asm("x1") = a2;
    register long _x2 asm("x2") = a3;
    register long _x3 asm("x3") = a4;
    register long _x8 asm("x8") = type;
    asm volatile("svc #0"
                 : "=r"(_x0)
                 : "r"(_x8), "r"(_x0), "r"(_x1), "r"(_x2), "r"(_x3)
                 : "memory");
    return _x0;
}
usize syscall5(SyscallType type, usize a1, usize a2, usize a3, usize a4, usize a5) {
    register long _x0 asm("x0") = a1;
    register long _x1 asm("x1") = a2;
    register long _x2 asm("x2") = a3;
    register long _x3 asm("x3") = a4;
    register long _x4 asm("x4") = a5;
    register long _x8 asm("x8") = type;
    asm volatile("svc #0"
                 : "=r"(_x0)
                 : "r"(_x8), "r"(_x0), "r"(_x1), "r"(_x2), "r"(_x3), "r"(_x4)
                 : "memory");
    return _x0;
}
usize syscall6(SyscallType type, usize a1, usize a2, usize a3, usize a4, usize a5, usize a6) {
    register long _x0 asm("x0") = a1;
    register long _x1 asm("x1") = a2;
    register long _x2 asm("x2") = a3;
    register long _x3 asm("x3") = a4;
    register long _x4 asm("x4") = a5;
    register long _x5 asm("x5") = a6;
    register long _x8 asm("x8") = type;
    asm volatile("svc #0"
                 : "=r"(_x0)
                 : "r"(_x8), "r"(_x0), "r"(_x1), "r"(_x2), "r"(_x3), "r"(_x4), "r"(_x5)
                 : "memory");
    return _x0;
}
