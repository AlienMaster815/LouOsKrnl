#ifndef _STRING_H
#define _STRING_H
#include <stddef.h>
#include <stdint.h>

#define string char*
#define StrCmpCast const char*
#define StrCmpTrue 0

void* memcpy(void* destination, const void* source, size_t num);
int strncmp(const char* str1, const char* str2, size_t n);
int strcmp(const char* str1, const char* str2);
int memcmp(const void* ptr1, const void* ptr2, size_t num);
char* strncpy(char* dest, const char* src, size_t n);
size_t strlen(const char* str);
#endif
