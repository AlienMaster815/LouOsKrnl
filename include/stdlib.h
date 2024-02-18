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

#endif 
