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

bool InitializeSataDevice(
    P_PCI_DEVICE_OBJECT PDEV,
    PATA_PORT Ap 
) {
    if (Ap->IsAtapi) {
        LouPrint("Initializeing Satapi Device\n");
        PATA_QUEUED_COMMAND Qc = (PATA_QUEUED_COMMAND)LouMalloc(sizeof(ATA_QUEUED_COMMAND));
        Qc->Port = Ap;
        Qc->TaskFile.Command = ATA_IDENTIFY_PACKET_DEVICE;
        Qc->TaskFile.Device = 0x00; // No LBA or DMA for this command, so use default values
        Qc->TaskFile.Feature = 0x00; // No special features needed
        Qc->TaskFile.NSect = 0x00; // Not used in Identify
        Qc->TaskFile.Lbal = 0x00;
        Qc->TaskFile.Lbam = 0x00;
        Qc->TaskFile.Lbah = 0x00;

        Ap->Operations->QcPrep(Qc);

        LouPrint("Satapi Initialization Complete\n");
        LouFree((RAMADD)Qc);
        return true;
    }
    else {
        LouPrint("Initializing Sata Device\n");
        //PATA_QUEUED_COMMAND Qc = (PATA_QUEUED_COMMAND)LouMalloc(sizeof(ATA_QUEUED_COMMAND));



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

    InitializeSataDevice(PDEV, (PATA_PORT)KeyData);

    Status = LouRegisterStorageDevice(
        Table
    );
    
    NumberOfAtaDevices++;
    return Status;
}
