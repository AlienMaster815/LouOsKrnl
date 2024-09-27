#ifndef _FSTREAM_H
#define _FSTREAN_H


#ifdef __cplusplus
#include <NtAPI.h>
KERNEL_IMPORT{
#else 
#include <LouAPI.h>
typedef void* FILE;
#endif

typedef char* FILE_NAME;

#ifndef _KERNEL_MODULE_
string GetNextDirectoryName(string PATH);
uint8_t CurrenDirectoryStringLength(string Dir);


FILE* fopen(string PATH);
void fclose(FILE* FileHandle);
#endif

#ifdef __cplusplus
}
#endif
#endif