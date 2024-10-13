#include <LouAPI.h>
#include <atalib.h>

static uint8_t NumberOfStorageDevice = 0x00;
static PLMPOOL_DIRECTORY StoragePool = 0x00;

#pragma pack(push, 1)
typedef struct _STORAGE_DEVICE_MANAGER_DATA{
    uint8_t StorageDeviceNumber;
    PDEVICE_DIRECTORY_TABLE Table;
}STORAGE_DEVICE_MANAGER_DATA, * PSTORAGE_DEVICE_MANAGER_DATA;
#pragma pack(pop)

PSTORAGE_DEVICE_MANAGER_DATA StorageManagerDataPointers[36] = {0x00};

LOUSTATUS LouRegisterStorageDevice(
    PDEVICE_DIRECTORY_TABLE Table
){
    LouPrint("Registering Storage Device\n");
    if(StoragePool == 0x00){
        StoragePool = LouKeCreateMemoryPool(
            36,
            sizeof(STORAGE_DEVICE_MANAGER_DATA),
            "HostKeyData:Annya/System64/SOTRAGE_MANAGER_DATA",
            0,
            KERNEL_PAGE_WRITE_PRESENT
        );
    }

    for(uint8_t i = 0 ; i < NumberOfStorageDevice; i++){
        if((StorageManagerDataPointers[i]->Table == 0x00) && (StorageManagerDataPointers[i])){ //reuse unregistered tables
            StorageManagerDataPointers[i]->Table = Table;
            return STATUS_SUCCESS;
        }
    }

    StorageManagerDataPointers[NumberOfStorageDevice] = LouKeMallocFromPool(
            StoragePool,
            sizeof(STORAGE_DEVICE_MANAGER_DATA),
            0x00
    );


    if(!StorageManagerDataPointers[NumberOfStorageDevice]){
        return STATUS_INSUFFICIENT_RESOURCES;
    }

    StorageManagerDataPointers[NumberOfStorageDevice]->StorageDeviceNumber = NumberOfStorageDevice;
    StorageManagerDataPointers[NumberOfStorageDevice]->Table = Table;
    NumberOfStorageDevice++;
    return STATUS_SUCCESS;
}

SYSTEM_DEVICE_IDENTIFIER LouKeGetStorageDeviceSystemIdentifier(uint8_t DriveNumber){
    return StorageManagerDataPointers[DriveNumber]->Table->Sdi;
}

PATA_PORT LouKeGetAtaStoragePortObject(uint8_t DriveNumber){
    return (PATA_PORT)StorageManagerDataPointers[DriveNumber]->Table->DevicePrivateData;
}


uint8_t LouKeGetLegacyAtaPort(uint8_t DriveNumber){
    return (uint8_t)(uintptr_t)StorageManagerDataPointers[DriveNumber]->Table->KeyData;
}

uint8_t LouKeGetNumberOfStorageDevices(){
    return NumberOfStorageDevice;
}