#include <LouAPI.h>

typedef struct _FILESYSTEM_MANAGMENT_DATA{
    uint8_t DriveNumber;
    //TODO: Keep track of filesystem Number
    FSStruct* FileSystemStruct;
    PDEVICE_DIRECTORY_TABLE Table;
}FILESYSTEM_MANAGMENT_DATA, * PFILESYSTEM_MANAGMENT_DATA;

FILESYSTEM_MANAGMENT_DATA FsManagementData[36];

void LouRegisterFileSystemDevice(
    PDEVICE_DIRECTORY_TABLE Table,
    P_PCI_DEVICE_OBJECT PDEV, 
    SYSTEM_DEVICE_IDENTIFIER Sdi,
    string LRE,
    void* KeyData,
    void* DevicePrivateData
){

    Table->PDEV = PDEV;
    Table->Sdi = Sdi;
    Table->LOUSINE_REGISTRATION_ENTRY = LRE;
    Table->KeyData = KeyData;
    Table->DevicePrivateData = DevicePrivateData;

    for(uint8_t i = 0 ; i < 36; i++){
        if(FsManagementData[i].Table == 0x00){
            FsManagementData[i].FileSystemStruct = (FSStruct*)KeyData;
            FsManagementData[i].Table = Table;
            FsManagementData[i].DriveNumber = (uint8_t)(uintptr_t)DevicePrivateData;
        }
    }

}

FSStruct* GetDriveFss(uint8_t DriveNumber){

    for(uint8_t i = 0 ; i < 36 ; i++){
        if(FsManagementData[i].Table != 0x00){
            if(FsManagementData[i].DriveNumber == DriveNumber){
                return FsManagementData[i].FileSystemStruct;
            }
        }
    }

    return 0x00;
}

 FSStruct* GetSystemDiskFss(){
    for(uint8_t i = 0 ; i < 36 ; i++){
        if(FsManagementData[i].Table != 0x00){
            if(FsManagementData[i].FileSystemStruct->SystemDisk == true){
                return FsManagementData[i].FileSystemStruct;
            }
        }
    }

    return 0x00;
 }

uint8_t GetDriveNumberByFss(FSStruct* Fs){
    for(uint8_t i = 0 ; i < 36 ; i++){
        if(FsManagementData[i].Table != 0x00){
            if((uintptr_t)FsManagementData[i].FileSystemStruct == (uintptr_t)Fs){
                return FsManagementData[i].DriveNumber;
            }
        }
    }

    return 255;
}