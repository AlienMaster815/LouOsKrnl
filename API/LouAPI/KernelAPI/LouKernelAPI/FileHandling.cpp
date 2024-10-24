#include <LouDDK.h>


KERNEL_IMPORT FSStruct* GetDriveFss(uint8_t DriveNumber);
KERNEL_IMPORT FSStruct* GetSystemDiskFss();
KERNEL_IMPORT uint8_t GetDriveNumberByFss(FSStruct* Fs);

static spinlock_t FOpenLock;

LOUDDK_API_ENTRY
FILE* fopen(string FileName){

    LouKIRQL Irql;
    LouKeAcquireSpinLock(&FOpenLock, &Irql);

    UNUSED FSStruct* OpenFsHandle;
    uint8_t DriveNumber = 0;

    if(strncmp(FileName, "C:", strlen("C:")) == 0x00){
        FileName += strlen("C:");
        OpenFsHandle = GetSystemDiskFss();
        if(OpenFsHandle != 0x00){
            if(OpenFsHandle->FSType == ISO){
                ISO9660 Iso;
                DriveNumber = GetDriveNumberByFss(OpenFsHandle);
                LouKeReleaseSpinLock(&FOpenLock, &Irql);
                return Iso.ISOLouKefopen(DriveNumber,FileName);
            }
        }    
    }
    LouKeReleaseSpinLock(&FOpenLock, &Irql);
    return 0x00;
}