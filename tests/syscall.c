#include "swiftc/swiftc.h"

int main() {
    SYSCALL(SYS_write, 3, 0, (usize) "hello\n", 7);
    SYSCALL(SYS_exit, 1, 0);
}
