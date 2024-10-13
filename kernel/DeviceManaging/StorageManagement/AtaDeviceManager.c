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

bool InitializeAtaDevice(
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

        //size_t DataAmount = ((BufferSize + 4095) / 4096) * 4096;
        LouPrint("Calculating Buffer Size For Transfer\n");
        size_t IdentifyAmmount = ((512 + 4095) / 4096) * 4096;
        LouPrint("Allocating Buffer For Transfer\n");
        void* IdentifyBuffer = LouMallocEx(IdentifyAmmount , 4096);
        LouPrint("Allocated Buffer Address:%h\n", IdentifyBuffer);

        if(Ap->Dma){
            LouPrint("Allocating Scatter Gather List For Transfer\n");
            Qc->Sg = (PSCATTER_GATHER)LouMalloc(sizeof(SCATTER_GATHER));
            LouPrint("Filling Scatter Gather List For Transfer\n");
            Qc->Sg->Offset = 0;
            Qc->Sg->Length = 512;
            RequestPhysicalAddress((uint64_t)IdentifyBuffer ,&Qc->Sg->DmaAddress);
            Qc->Sg->DmaLength = 512;
            Qc->Sg->DmaFlags = ATA_SG_COMMAND_READ;
            Qc->NumSgElements = 1;
            LouPrint("Setting DMA Map Flag\n");
            Qc->Flags |= ATA_QCFLAG_DMAMAP;
        }

        Qc->Cdb[0]    = ATA_IDENTIFY_PACKET_DEVICE;
        Qc->CdbLength = 1;

        Ap->Operations->QcPrep(Qc);
        Ap->Operations->QcIssue(Qc);

        LouPrint("Satapi Initialization Complete\n");
        uint8_t* foo = (uint8_t*)IdentifyBuffer;
        for(uint16_t i = 0 ; i < 512; i++){
            LouPrint("%h", foo[i]);
        }

        while(1);
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

    InitializeAtaDevice(PDEV, (PATA_PORT)KeyData);

    Status = LouRegisterStorageDevice(
        Table
    );
    
    NumberOfAtaDevices++;
    return Status;
}
