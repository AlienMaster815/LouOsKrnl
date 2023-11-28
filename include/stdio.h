#ifndef _STDIO_H
#define _STDIO_H
#include <stdint.h>

#ifdef __x86_64__
#ifdef __cplusplus

extern "C" void uintToHexString(uint64_t number, char* hexString);

#else

int LouPrint(char *format, ...);
int putchar(int ic);
void uintToHexString(uint64_t number, char* hexString);

#endif
#endif

#ifdef __i386__
#ifdef __cplusplus

extern "C" void uintToHexString(uint32_t number, char* hexString);

#else

int LouPrint(char *format, ...);
int putchar(int ic);
void uintToHexString(uint32_t number, char* hexString);

#endif
#endif

#endif
