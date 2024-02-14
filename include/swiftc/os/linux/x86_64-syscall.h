#pragma once

#include "../../numbers.h"

typedef enum SyscallType
{
    SYS_read                    = 0,
    SYS_write                   = 1,
    SYS_open                    = 2,
    SYS_close                   = 3,
    SYS_stat                    = 4,
    SYS_fstat                   = 5,
    SYS_lstat                   = 6,
    SYS_poll                    = 7,
    SYS_lseek                   = 8,
    SYS_mmap                    = 9,
    SYS_mprotect                = 10,
    SYS_munmap                  = 11,
    SYS_brk                     = 12,
    SYS_rt_sigaction            = 13,
    SYS_rt_sigprocmask          = 14,
    SYS_rt_sigreturn            = 15,
    SYS_ioctl                   = 16,
    SYS_pread64                 = 17,
    SYS_pwrite64                = 18,
    SYS_readv                   = 19,
    SYS_writev                  = 20,
    SYS_access                  = 21,
    SYS_pipe                    = 22,
    SYS_select                  = 23,
    SYS_sched_yield             = 24,
    SYS_mremap                  = 25,
    SYS_msync                   = 26,
    SYS_mincore                 = 27,
    SYS_madvise                 = 28,
    SYS_shmget                  = 29,
    SYS_shmat                   = 30,
    SYS_shmctl                  = 31,
    SYS_dup                     = 32,
    SYS_dup2                    = 33,
    SYS_pause                   = 34,
    SYS_nanosleep               = 35,
    SYS_getitimer               = 36,
    SYS_alarm                   = 37,
    SYS_setitimer               = 38,
    SYS_getpid                  = 39,
    SYS_sendfile                = 40,
    SYS_socket                  = 41,
    SYS_connect                 = 42,
    SYS_accept                  = 43,
    SYS_sendto                  = 44,
    SYS_recvfrom                = 45,
    SYS_sendmsg                 = 46,
    SYS_recvmsg                 = 47,
    SYS_shutdown                = 48,
    SYS_bind                    = 49,
    SYS_listen                  = 50,
    SYS_getsockname             = 51,
    SYS_getpeername             = 52,
    SYS_socketpair              = 53,
    SYS_setsockopt              = 54,
    SYS_getsockopt              = 55,
    SYS_clone                   = 56,
    SYS_fork                    = 57,
    SYS_vfork                   = 58,
    SYS_execve                  = 59,
    SYS_exit                    = 60,
    SYS_wait4                   = 61,
    SYS_kill                    = 62,
    SYS_uname                   = 63,
    SYS_semget                  = 64,
    SYS_semop                   = 65,
    SYS_semctl                  = 66,
    SYS_shmdt                   = 67,
    SYS_msgget                  = 68,
    SYS_msgsnd                  = 69,
    SYS_msgrcv                  = 70,
    SYS_msgctl                  = 71,
    SYS_fcntl                   = 72,
    SYS_flock                   = 73,
    SYS_fsync                   = 74,
    SYS_fdatasync               = 75,
    SYS_truncate                = 76,
    SYS_ftruncate               = 77,
    SYS_getdents                = 78,
    SYS_getcwd                  = 79,
    SYS_chdir                   = 80,
    SYS_fchdir                  = 81,
    SYS_rename                  = 82,
    SYS_mkdir                   = 83,
    SYS_rmdir                   = 84,
    SYS_creat                   = 85,
    SYS_link                    = 86,
    SYS_unlink                  = 87,
    SYS_symlink                 = 88,
    SYS_readlink                = 89,
    SYS_chmod                   = 90,
    SYS_fchmod                  = 91,
    SYS_chown                   = 92,
    SYS_fchown                  = 93,
    SYS_lchown                  = 94,
    SYS_umask                   = 95,
    SYS_gettimeofday            = 96,
    SYS_getrlimit               = 97,
    SYS_getrusage               = 98,
    SYS_sysinfo                 = 99,
    SYS_times                   = 100,
    SYS_ptrace                  = 101,
    SYS_getuid                  = 102,
    SYS_syslog                  = 103,
    SYS_getgid                  = 104,
    SYS_setuid                  = 105,
    SYS_setgid                  = 106,
    SYS_geteuid                 = 107,
    SYS_getegid                 = 108,
    SYS_setpgid                 = 109,
    SYS_getppid                 = 110,
    SYS_getpgrp                 = 111,
    SYS_setsid                  = 112,
    SYS_setreuid                = 113,
    SYS_setregid                = 114,
    SYS_getgroups               = 115,
    SYS_setgroups               = 116,
    SYS_setresuid               = 117,
    SYS_getresuid               = 118,
    SYS_setresgid               = 119,
    SYS_getresgid               = 120,
    SYS_getpgid                 = 121,
    SYS_setfsuid                = 122,
    SYS_setfsgid                = 123,
    SYS_getsid                  = 124,
    SYS_capget                  = 125,
    SYS_capset                  = 126,
    SYS_rt_sigpending           = 127,
    SYS_rt_sigtimedwait         = 128,
    SYS_rt_sigqueueinfo         = 129,
    SYS_rt_sigsuspend           = 130,
    SYS_sigaltstack             = 131,
    SYS_utime                   = 132,
    SYS_mknod                   = 133,
    SYS_uselib                  = 134,
    SYS_personality             = 135,
    SYS_ustat                   = 136,
    SYS_statfs                  = 137,
    SYS_fstatfs                 = 138,
    SYS_sysfs                   = 139,
    SYS_getpriority             = 140,
    SYS_setpriority             = 141,
    SYS_sched_setparam          = 142,
    SYS_sched_getparam          = 143,
    SYS_sched_setscheduler      = 144,
    SYS_sched_getscheduler      = 145,
    SYS_sched_get_priority_max  = 146,
    SYS_sched_get_priority_min  = 147,
    SYS_sched_rr_get_interval   = 148,
    SYS_mlock                   = 149,
    SYS_munlock                 = 150,
    SYS_mlockall                = 151,
    SYS_munlockall              = 152,
    SYS_vhangup                 = 153,
    SYS_modify_ldt              = 154,
    SYS_pivot_root              = 155,
    SYS__sysctl                 = 156,
    SYS_prctl                   = 157,
    SYS_arch_prctl              = 158,
    SYS_adjtimex                = 159,
    SYS_setrlimit               = 160,
    SYS_chroot                  = 161,
    SYS_sync                    = 162,
    SYS_acct                    = 163,
    SYS_settimeofday            = 164,
    SYS_mount                   = 165,
    SYS_umount2                 = 166,
    SYS_swapon                  = 167,
    SYS_swapoff                 = 168,
    SYS_reboot                  = 169,
    SYS_sethostname             = 170,
    SYS_setdomainname           = 171,
    SYS_iopl                    = 172,
    SYS_ioperm                  = 173,
    SYS_create_module           = 174,
    SYS_init_module             = 175,
    SYS_delete_module           = 176,
    SYS_get_kernel_syms         = 177,
    SYS_query_module            = 178,
    SYS_quotactl                = 179,
    SYS_nfsservctl              = 180,
    SYS_getpmsg                 = 181,
    SYS_putpmsg                 = 182,
    SYS_afs_syscall             = 183,
    SYS_tuxcall                 = 184,
    SYS_security                = 185,
    SYS_gettid                  = 186,
    SYS_readahead               = 187,
    SYS_setxattr                = 188,
    SYS_lsetxattr               = 189,
    SYS_fsetxattr               = 190,
    SYS_getxattr                = 191,
    SYS_lgetxattr               = 192,
    SYS_fgetxattr               = 193,
    SYS_listxattr               = 194,
    SYS_llistxattr              = 195,
    SYS_flistxattr              = 196,
    SYS_removexattr             = 197,
    SYS_lremovexattr            = 198,
    SYS_fremovexattr            = 199,
    SYS_tkill                   = 200,
    SYS_time                    = 201,
    SYS_futex                   = 202,
    SYS_sched_setaffinity       = 203,
    SYS_sched_getaffinity       = 204,
    SYS_set_thread_area         = 205,
    SYS_io_setup                = 206,
    SYS_io_destroy              = 207,
    SYS_io_getevents            = 208,
    SYS_io_submit               = 209,
    SYS_io_cancel               = 210,
    SYS_get_thread_area         = 211,
    SYS_lookup_dcookie          = 212,
    SYS_epoll_create            = 213,
    SYS_epoll_ctl_old           = 214,
    SYS_epoll_wait_old          = 215,
    SYS_remap_file_pages        = 216,
    SYS_getdents64              = 217,
    SYS_set_tid_address         = 218,
    SYS_restart_syscall         = 219,
    SYS_semtimedop              = 220,
    SYS_fadvise64               = 221,
    SYS_timer_create            = 222,
    SYS_timer_settime           = 223,
    SYS_timer_gettime           = 224,
    SYS_timer_getoverrun        = 225,
    SYS_timer_delete            = 226,
    SYS_clock_settime           = 227,
    SYS_clock_gettime           = 228,
    SYS_clock_getres            = 229,
    SYS_clock_nanosleep         = 230,
    SYS_exit_group              = 231,
    SYS_epoll_wait              = 232,
    SYS_epoll_ctl               = 233,
    SYS_tgkill                  = 234,
    SYS_utimes                  = 235,
    SYS_vserver                 = 236,
    SYS_mbind                   = 237,
    SYS_set_mempolicy           = 238,
    SYS_get_mempolicy           = 239,
    SYS_mq_open                 = 240,
    SYS_mq_unlink               = 241,
    SYS_mq_timedsend            = 242,
    SYS_mq_timedreceive         = 243,
    SYS_mq_notify               = 244,
    SYS_mq_getsetattr           = 245,
    SYS_kexec_load              = 246,
    SYS_waitid                  = 247,
    SYS_add_key                 = 248,
    SYS_request_key             = 249,
    SYS_keyctl                  = 250,
    SYS_ioprio_set              = 251,
    SYS_ioprio_get              = 252,
    SYS_inotify_init            = 253,
    SYS_inotify_add_watch       = 254,
    SYS_inotify_rm_watch        = 255,
    SYS_migrate_pages           = 256,
    SYS_openat                  = 257,
    SYS_mkdirat                 = 258,
    SYS_mknodat                 = 259,
    SYS_fchownat                = 260,
    SYS_futimesat               = 261,
    SYS_fstatat64               = 262,
    SYS_unlinkat                = 263,
    SYS_renameat                = 264,
    SYS_linkat                  = 265,
    SYS_symlinkat               = 266,
    SYS_readlinkat              = 267,
    SYS_fchmodat                = 268,
    SYS_faccessat               = 269,
    SYS_pselect6                = 270,
    SYS_ppoll                   = 271,
    SYS_unshare                 = 272,
    SYS_set_robust_list         = 273,
    SYS_get_robust_list         = 274,
    SYS_splice                  = 275,
    SYS_tee                     = 276,
    SYS_sync_file_range         = 277,
    SYS_vmsplice                = 278,
    SYS_move_pages              = 279,
    SYS_utimensat               = 280,
    SYS_epoll_pwait             = 281,
    SYS_signalfd                = 282,
    SYS_timerfd_create          = 283,
    SYS_eventfd                 = 284,
    SYS_fallocate               = 285,
    SYS_timerfd_settime         = 286,
    SYS_timerfd_gettime         = 287,
    SYS_accept4                 = 288,
    SYS_signalfd4               = 289,
    SYS_eventfd2                = 290,
    SYS_epoll_create1           = 291,
    SYS_dup3                    = 292,
    SYS_pipe2                   = 293,
    SYS_inotify_init1           = 294,
    SYS_preadv                  = 295,
    SYS_pwritev                 = 296,
    SYS_rt_tgsigqueueinfo       = 297,
    SYS_perf_event_open         = 298,
    SYS_recvmmsg                = 299,
    SYS_fanotify_init           = 300,
    SYS_fanotify_mark           = 301,
    SYS_prlimit64               = 302,
    SYS_name_to_handle_at       = 303,
    SYS_open_by_handle_at       = 304,
    SYS_clock_adjtime           = 305,
    SYS_syncfs                  = 306,
    SYS_sendmmsg                = 307,
    SYS_setns                   = 308,
    SYS_getcpu                  = 309,
    SYS_process_vm_readv        = 310,
    SYS_process_vm_writev       = 311,
    SYS_kcmp                    = 312,
    SYS_finit_module            = 313,
    SYS_sched_setattr           = 314,
    SYS_sched_getattr           = 315,
    SYS_renameat2               = 316,
    SYS_seccomp                 = 317,
    SYS_getrandom               = 318,
    SYS_memfd_create            = 319,
    SYS_kexec_file_load         = 320,
    SYS_bpf                     = 321,
    SYS_execveat                = 322,
    SYS_userfaultfd             = 323,
    SYS_membarrier              = 324,
    SYS_mlock2                  = 325,
    SYS_copy_file_range         = 326,
    SYS_preadv2                 = 327,
    SYS_pwritev2                = 328,
    SYS_pkey_mprotect           = 329,
    SYS_pkey_alloc              = 330,
    SYS_pkey_free               = 331,
    SYS_statx                   = 332,
    SYS_io_pgetevents           = 333,
    SYS_rseq                    = 334,
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
#define O_DIRECTORY    0200000;
/// O:
#define O_NOFOLLOW     0400000;
/// O:
#define O_CLOEXEC      02000000;
/// O:
#define O_ASYNC        020000;
/// O:
#define O_DIRECT       040000;
/// O:
#define O_LARGEFILE    0;
/// O:
#define O_NOATIME      01000000;
/// O:
#define O_PATH         010000000;
/// O:
#define O_TMPFILE      020200000;
/// O:
#define O_NDELAY       = NONBLOCK;

/// MAP: only give out 32bit addresses
#define MAP_32BIT      0x40;
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
    register usize _rax asm("rax") = type;
    asm volatile("syscall" : "=r"(_rax) : "r"(_rax) : "rcx", "r11", "memory");
    return _rax;
}
usize syscall1(SyscallType type, usize a1) {
    register usize _rax asm("rax") = type;
    register usize _rdi asm("rdi") = a1;
    asm volatile("syscall" : "=r"(_rax) : "r"(_rax), "r"(_rdi) : "rcx", "r11", "memory");
    return _rax;
}
usize syscall2(SyscallType type, usize a1, usize a2) {
    register usize _rax asm("rax") = type;
    register usize _rdi asm("rdi") = a1;
    register usize _rsi asm("rsi") = a2;
    asm volatile("syscall" : "=r"(_rax) : "r"(_rax), "r"(_rdi), "r"(_rsi) : "rcx", "r11", "memory");
    return _rax;
}
usize syscall3(SyscallType type, usize a1, usize a2, usize a3) {
    register usize _rax asm("rax") = type;
    register usize _rdi asm("rdi") = a1;
    register usize _rsi asm("rsi") = a2;
    register usize _rdx asm("rdx") = a3;
    asm volatile("syscall"
                 : "=r"(_rax)
                 : "r"(_rax), "r"(_rdi), "r"(_rsi), "r"(_rdx)
                 : "rcx", "r11", "memory");
    return _rax;
}
usize syscall4(SyscallType type, usize a1, usize a2, usize a3, usize a4) {
    register usize _rax asm("rax") = type;
    register usize _rdi asm("rdi") = a1;
    register usize _rsi asm("rsi") = a2;
    register usize _rdx asm("rdx") = a3;
    register usize _r10 asm("r10") = a4;
    asm volatile("syscall"
                 : "=r"(_rax)
                 : "r"(_rax), "r"(_rdi), "r"(_rsi), "r"(_rdx), "r"(_r10)
                 : "rcx", "r11", "memory");
    return _rax;
}
usize syscall5(SyscallType type, usize a1, usize a2, usize a3, usize a4, usize a5) {
    register usize _rax asm("rax") = type;
    register usize _rdi asm("rdi") = a1;
    register usize _rsi asm("rsi") = a2;
    register usize _rdx asm("rdx") = a3;
    register usize _r10 asm("r10") = a4;
    register usize _r8 asm("r8")   = a5;
    asm volatile("syscall"
                 : "=r"(_rax)
                 : "r"(_rax), "r"(_rdi), "r"(_rsi), "r"(_rdx), "r"(_r10), "r"(_r8)
                 : "rcx", "r11", "memory");
    return _rax;
}
usize syscall6(SyscallType type, usize a1, usize a2, usize a3, usize a4, usize a5, usize a6) {
    register usize _rax asm("rax") = type;
    register usize _rdi asm("rdi") = a1;
    register usize _rsi asm("rsi") = a2;
    register usize _rdx asm("rdx") = a3;
    register usize _r10 asm("r10") = a4;
    register usize _r8 asm("r8")   = a5;
    register usize _r9 asm("r9")   = a6;
    asm volatile("syscall"
                 : "=r"(_rax)
                 : "r"(_rax), "r"(_rdi), "r"(_rsi), "r"(_rdx), "r"(_r10), "r"(_r8), "r"(_r9)
                 : "rcx", "r11", "memory");
    return _rax;
}
