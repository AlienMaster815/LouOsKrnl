#ifndef _FSTREAM_H
#define _FSTREAN_H


#ifdef __cplusplus
#include <NtAPI.h>
KERNEL_IMPORT{
#else 
#include <LouAPI.h>
typedef void* FILE;
#endif


string GetNextDirectoryName(string PATH);
uint8_t CurrenDirectoryStringLength(string Dir);


FILE* fopen(string PATH);
void fclose(FILE* FileHandle);


#ifdef __cplusplus
}
#endif
#endif