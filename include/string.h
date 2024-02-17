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

int32_t stringToInt32(const char* str);
uint32_t stringToUnsignedInt32(const char* str);
int16_t stringToInt16(const char* str);
uint16_t stringToUnsignedInt16(const char* str);
int64_t stringToInt64(const char* str);
uint64_t stringToUnsignedInt64(const char* str);
int8_t stringToInt8(const char* str);
uint8_t stringToUnsignedInt8(const char* str);

#endif
