#pragma once

#include "../numbers.h"

#define null (void *)0

void memcpy(void *dest, const void *const src, usize n) {
    const char *const csrc = (const char *const)src;  
    char *cdest = (char *)dest;  

    for (int i=0; i<n; i++) cdest[i] = csrc[i];
}