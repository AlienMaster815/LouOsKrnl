#ifndef _FILESYSTEM_H
#define _FILESYSTEM_H


#define ISO 0x01
#define FAT_SYS 0x02

#ifdef __cplusplus
typedef struct _FSStruct{
    bool SystemDisk = false;
    uint8_t FSType = 0x00;
    uint32_t FSNum = 0;
    uintptr_t ExtendedFilesystemParameters;
} FSStruct, *PFSStruct;

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
