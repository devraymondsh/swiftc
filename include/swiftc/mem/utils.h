#pragma once

#include "../numbers.h"

#define nullptr (void *)0

/// Copies from `src` to `dest`.
FNDECL_PREFIX void *mem_copy(void *__restrict dest, void *__restrict src, usize n) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage"
    if (src != nullptr && dest != nullptr) {}
    for (usize i = 0; i < n; i++) {
        ((char *)dest) [i] = ((char *)src) [i];
    }
    return (void *)((char *)dest + n);
#pragma clang diagnostic pop
}
