#include <LouAPI.h>
#include <atalib.h>


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

    //later we will get port Data and Device Specific Data

    return Status;
}