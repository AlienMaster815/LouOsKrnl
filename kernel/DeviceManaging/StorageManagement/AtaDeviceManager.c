#include <LouAPI.h>
#include <atalib.h>

static uint32_t NumberOfAtaDevices = 0x00;

typedef struct _ATA_DEVICE_MANAGER_DATA{
    uint32_t RegisteredDeviceNumber;
    bool IsUsingDma;
}ATA_DEVICE_MANAGER_DATA, * PATA_DEVICE_MANAGER_DATA;

LOUSTATUS LouRegisterStorageDevice(
    PDEVICE_DIRECTORY_TABLE Table
);

LOUSTATUS IdentifyAtaDevice(
    PATA_PORT Ap,  
    uint8_t* Buffer, 
    uint32_t BufferLength
);

bool read(void *Vport, uint32_t startl, uint32_t starth, uint32_t count, uint16_t *buf, uint8_t Command);

bool InitializeAtaDevice(
    P_PCI_DEVICE_OBJECT PDEV,
    PATA_PORT Ap 
) {
    if (Ap->IsAtapi) {
        LouPrint("Initializeing Satapi Device\n");

        
        LouPrint("Satapi Initialization Complete\n");
        return true;
    }
    else {
        LouPrint("Initializing Sata Device\n");


        return true;
    }
}

LOUSTATUS LouRegisterAtaDeviceToInformationTable(
    PDEVICE_DIRECTORY_TABLE Table,
    P_PCI_DEVICE_OBJECT PDEV, 
    SYSTEM_DEVICE_IDENTIFIER Sdi,
    string LRE, //optional
    void* KeyData, //optional
    void* DevicePrivateData
){
    LOUSTATUS Status = STATUS_SUCCESS;
    LouPrint("Registering ATA Device\n");


    Table->PDEV = PDEV;
    Table->Sdi = Sdi;
    Table->LOUSINE_REGISTRATION_ENTRY = LRE;
    Table->KeyData = KeyData;
    Table->DevicePrivateData = DevicePrivateData;

    PATA_DEVICE_MANAGER_DATA TmpDeviceData = LouMalloc(sizeof(ATA_DEVICE_MANAGER_DATA));
    TmpDeviceData->RegisteredDeviceNumber = NumberOfAtaDevices;

    Table->DeviceSpecificData = (void*)TmpDeviceData;

    InitializeAtaDevice(PDEV, (PATA_PORT)KeyData);

    Status = LouRegisterStorageDevice(
        Table
    );
    
    NumberOfAtaDevices++;
    return Status;
}

