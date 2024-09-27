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

#ifndef _KERNEL_MODULE_
static inline unsigned int ROUND_UP(unsigned int value, unsigned int multiple) {
    return (value + multiple - 1) / multiple * multiple;
}

int abs(int x);
#endif

#endif 

