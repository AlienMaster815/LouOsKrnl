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

    Status = LouRegisterStorageDevice(
        Table
    );

    NumberOfAtaDevices++;
    return Status;
}

PATA_PORT LouKeGetAtaPortHandle(){

}