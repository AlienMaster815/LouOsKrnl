#ifndef _FILESYSTEM_H
#define _FILESYSTEM_H



#define ISO 0x01

#ifdef __cplusplus
typedef struct _FSStruct{
    bool SystemDisk = false;
    uint8_t FSType = 0x00;
    uint32_t FSNum = 0;
} FSStruct, *PFSStruct;

typedef struct _ISO_STRUCT{
    uint64_t PathTableSize;
}ISO_STRUCT, *PISO_STRUCT;

#else

void FileSystemScan();

#endif

#endif
