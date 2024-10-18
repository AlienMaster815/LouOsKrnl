#ifndef _FILESYSTEM_H
#define _FILESYSTEM_H

#define ISO 0x01
#define FAT_SYS 0x02

#pragma pack(push, 1)
typedef struct _FSStruct{
    bool SystemDisk;
    uint8_t FSType;
    uint32_t FSNum;
    uintptr_t ExtendedFilesystemParameters;
} FSStruct, *PFSStruct;
#pragma pack(pop)

#ifdef __cplusplus


typedef struct _ISO_STRUCT{
    uint64_t PathTableSize;
}ISO_STRUCT, *PISO_STRUCT;

#include "FileSystems/fat.h"

#else

#ifndef _KERNEL_MODULE_
void FileSystemSetup();
#endif //kernel mod 

#endif

#endif
