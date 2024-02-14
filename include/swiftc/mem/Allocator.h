#pragma once

#include "../numbers.h"
#include "./Slice.h"
#include "./mem.h"

/// This is an allocator interface which relies on storing data with 8-bit alignment. That means types
/// that aren't aligned are stored with padding.
struct Allocator {
    void *ptr;
    /// buf: ptr and len: non-zero and new_len: zero => free.
    /// buf: null and len: non-zero and new_len: zero => alloc.
    /// buf: ptr and len: non-zero and new_len: non-zero => realloc.
    void *(*realloc)(void *ctx, void *buf, usize len, usize new_len);
};

/// Allocates memory. Types that aren't aligned on 8 bytes will be stored with padding.
void *alloc(Allocator self, usize len) { 
    return self.realloc(self.ptr, null, len, 0);
}
/// Allocates a slice. Types that aren't aligned on 8 bytes will be stored with padding.
Slice alloc_slice(Allocator self, usize len) { 
    return Slice { .ptr = alloc(self, len), .len = len };
}

/// Resizes in place.
void *resize(Allocator self, void *buf, usize len, usize new_len) {
    return self.realloc(self.ptr, buf, len, new_len);
}
/// Resizes the slice in place.
Slice resize_slice(Allocator self, Slice slice, usize new_len) {
    return Slice { .ptr = resize(self, slice.ptr, slice.len, new_len), .len = new_len };
}

/// Resizes in place or allocates a new one if failed.
void *resize_or_alloc(Allocator self, void *buf, usize len, usize new_len) {
    void *resized = resize(self, buf, len, new_len);
    if (resized != null) return resized;

    void *allocated = alloc(self, new_len);
    if (allocated == null) return null;

    memcpy(allocated, buf, new_len);
    // self.free(buf);
    return allocated;
}
/// Resizes the slice in place or allocates a new one if failed.
Slice resize_or_alloc_slice(Allocator self, Slice slice, usize new_len) {
    return Slice { .ptr = resize_or_alloc(self, slice.ptr, slice.len, new_len), .len = new_len };
}

/// Duplicates the memory.
void *dupe(Allocator self, void *buf, usize len) {
    void *allocated = alloc(self, len);
    memcpy(allocated, buf, len);
    return allocated;
}
/// Duplicates the slcie.
Slice dupe_slice(Allocator self, Slice slice) {
    return Slice { .ptr = dupe(self, slice.ptr, slice.len), .len = slice.len };
}

/// Frees the memory.
void free(Allocator self, void *buf, usize len) {
    self.realloc(self.ptr, buf, len, 0);
}
/// Frees the slice.
void free_slice(Allocator self, Slice slice) {
    free(self, slice.ptr, slice.len);
}