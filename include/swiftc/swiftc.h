#pragma once

#ifndef SWIFTC_EXTERN
    // Adds the `static` keyword before every function declartion.
    #define FNDECL_PREFIX static
#else
    // Adds the `extern` keyword before every function declartion.
    #define FNDECL_PREFIX extern
#endif

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-function"
#include "branching.h"
#include "mem/mem.h"
#include "numbers.h"
#include "os/os.h"
#pragma clang diagnostic pop
