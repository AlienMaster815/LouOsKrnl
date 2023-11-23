#ifndef _FILESYSTEM_H
#define _FILESYSTEM_H





#ifdef __cplusplus
typedef struct _FSStruct{
    char DriveLet;
    uint8_t FSNum;
    uintptr_t Base[23];
    uintptr_t Limit[23];
} FSStruct, *PFSStruct;
#else

void FileSystemScan();

#endif

#endif
