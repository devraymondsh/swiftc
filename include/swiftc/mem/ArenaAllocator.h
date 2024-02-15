#pragma once

#include "../branching.h"
#include "../numbers.h"
#include "Allocator.h"
#include "utils.h"

typedef struct ArenaAllocator {
    void *mem;
    usize len;
    usize pos;
} ArenaAllocator;

/// Allocates an Arena from the mem.
FNDECL_PREFIX ArenaAllocator arena_init(void *mem, usize len) {
    return (ArenaAllocator){.mem = mem, .len = len, .pos = 0};
}

/// Realloc's implementation that's used in the Allocator interface.
FNDECL_PREFIX void *arena_realloc(void *ctx, void *buf, usize len, usize new_len) {
    ArenaAllocator *self = (ArenaAllocator *)ctx;
    if (buf == nullptr) {
        // Alloc
        usize new_pos = self->pos + len;
        if (unlikely(new_pos > self->len)) {
            return nullptr;
        }

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage"
#pragma clang diagnostic ignored "-Wdeclaration-after-statement"
        void *ret = (char *)self->mem + self->pos;
#pragma clang diagnostic pop
        self->pos = new_pos;
        return ret;
    } else if (new_len != 0) {
// Resize
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage"
        if (((char *)self->mem + self->pos) == ((char *)buf + len)) {
#pragma clang diagnostic pop
            usize new_pos = self->pos + (new_len - len);
            if (likely(new_pos < self->len)) {
                self->pos = new_pos;
                return buf;
            } // Falls to `return nullptr;` if failes.
        }
    }

    // Free
    return nullptr;
}

/// Returns an Allocator interface.
FNDECL_PREFIX Allocator arena_allocator(ArenaAllocator *arena) {
    return allocator_init((void *)arena, arena_realloc);
}

/// Resets the Arena.
FNDECL_PREFIX void arena_rest(ArenaAllocator *arena) {
    (*arena).pos = 0;
}
