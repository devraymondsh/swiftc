#include "clang-ignore.h"
#include "swiftc/swiftc.h"

__attribute__((noreturn)) extern void _start(void) {
    SYSCALL(SYS_exit, 1, 0);

    __builtin_unreachable();
}
