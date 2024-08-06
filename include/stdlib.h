#ifndef STDLIB_H
#define STDLIB_H


#include <stdint.h>


#ifdef __cplusplus
#define UNUSED [[maybe_unused]]
#else
#define UNUSED __attribute__((unused))
#endif

#define VOID void
#define VOIDP void*

#define LOUSTATUS uint32_t

#define IS_CPP __cplusplus
#define IS_X86 __i386__
#define IS_X86_64 __x86_64__

int abs(int x);

#endif 

