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

PSTORAGE_DEVICE_MANAGER_DATA ManagerDataPointers[36] = {0x00};

LOUSTATUS LouRegisterStorageDevice(
    PDEVICE_DIRECTORY_TABLE Table
){
    LouPrint("Registering Storage Device\n");
    if(StoragePool == 0x00){
        StoragePool = LouKeCreateMemoryPool(
            36,
            sizeof(STORAGE_DEVICE_MANAGER_DATA),
            "SOTRAGE_MANAGER_DATA",
            0,
            KERNEL_PAGE_WRITE_PRESENT
        );
    }

    for(uint8_t i = 0 ; i < NumberOfStorageDevice; i++){
        if((ManagerDataPointers[i]->Table == 0x00) && (ManagerDataPointers[i])){ //reuse unregistered tables
            ManagerDataPointers[i]->Table = Table;
            return STATUS_SUCCESS;
        }
    }

    ManagerDataPointers[NumberOfStorageDevice] = LouKeMallocFromPool(
            StoragePool,
            sizeof(STORAGE_DEVICE_MANAGER_DATA),
            0x00
    );


    if(!ManagerDataPointers[NumberOfStorageDevice]){
        return STATUS_INSUFFICIENT_RESOURCES;
    }

    ManagerDataPointers[NumberOfStorageDevice]->StorageDeviceNumber = NumberOfStorageDevice;
    ManagerDataPointers[NumberOfStorageDevice]->Table = Table;
    NumberOfStorageDevice++;
    return STATUS_SUCCESS;
}