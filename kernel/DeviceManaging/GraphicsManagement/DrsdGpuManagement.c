#include <LouAPI.h>

static POOL DrsdGpuManagmentPool = 0x00;

static uint8_t GpuDevicesCount = 0x00; 

typedef struct _DrsdGpuKeyData{
    PDEVICE_DIRECTORY_TABLE Table;
}DrsdGpuManagementData, * PDrsdGpuManagmentData;

static PDrsdGpuManagmentData gpus[16] ={0};

LOUSTATUS LouRegisterDrsdGraphicsDevice(
    PDEVICE_DIRECTORY_TABLE Table,
    P_PCI_DEVICE_OBJECT PDEV, 
    SYSTEM_DEVICE_IDENTIFIER Sdi,
    string LRE, //optional
    void* KeyData, //optional
    void* DevicePrivateData
){

    if(DrsdGpuManagmentPool == 0x00){
        DrsdGpuManagmentPool = LouKeCreateMemoryPool(
            16, sizeof(DrsdGpuManagementData),
            "DRSD_MANAGEMENT_DATA_POOL",
            0, KERNEL_PAGE_WRITE_PRESENT
        );
    }

    for(uint8_t i = 0 ; i < 16; i++){
        if(gpus[i] == 0x00){
            gpus[i] = (PDrsdGpuManagmentData)LouKeMallocFromPool(DrsdGpuManagmentPool ,sizeof(DrsdGpuManagementData), 0x00);
            gpus[i]->Table = Table;
            break;
        }
    }

    Table->PDEV = PDEV;
    Table->Sdi = Sdi;
    Table->LOUSINE_REGISTRATION_ENTRY = LRE;
    Table->KeyData = KeyData;    
    Table->DevicePrivateData = DevicePrivateData;
    GpuDevicesCount++;
    return STATUS_SUCCESS;
}

uint8_t LouKeDeviceManagerGetGpuCount(){
    return GpuDevicesCount;
}

PDrsdVRamObject LouKeDeviceManagerGetFBDEV(uint8_t Gpu){
    return (PDrsdVRamObject)gpus[Gpu]->Table->KeyData;
}