#include "LouAPI.h"

#define DEV_TYPE_STORAGE 1

#define DEV_ARCH_IDE 1

typedef struct{
    uint8_t DeviceType;
    uint8_t DeviceArchitecture;
    uint8_t DeviceNumber;
    uintptr_t DeviceObject;
    uintptr_t DriverObject;
}DeviceInformationTable,* PDeviceInformationTable;

PDeviceInformationTable DeviceTable = 0x00;

PDeviceInformationTable 
ScanConnectedIDEDevices(
PDeviceInformationTable Table,
uint16_t* NumberOfCurrentEtries
);

PDeviceInformationTable
ScanConnectedAhciDevices(
PDeviceInformationTable Table,
uint16_t* NumberOfCurrentEtries
);

uintptr_t GetPataDeviceObjectPointer(uint8_t Drive);
uintptr_t GetSataDeviceObjects();


bool 
IsIdeDriveAvailable(
uint8_t Drive
);

PDeviceInformationTable GetDeviceInformationTable(){
    return DeviceTable;
}

void UpdateDeviceInformationTable(){

    uint16_t NumberOfConnectedDevices = 0;

    DeviceTable = ScanConnectedAhciDevices(
    DeviceTable,
    &NumberOfConnectedDevices
    );

    //LouPrint("Number Of Connected Devices:%d\n", NumberOfConnectedDevices);
    //LouPrint("Device Number:%d\n", DeviceTable->DeviceNumber);
    //LouPrint("DeviceObjectPointer:%h\n", DeviceTable->DeviceObject);

}

PDeviceInformationTable
ScanConnectedIDEDevices(
PDeviceInformationTable Table,
uint16_t* NumberOfCurrentEtries
){

    uint8_t j = 0;

    for(uint8_t i = 0; i < 4; i++){
        if(IsIdeDriveAvailable(i))j++;
    }


}


PDeviceInformationTable
ScanConnectedAhciDevices(
PDeviceInformationTable Table,
uint16_t* NumberOfCurrentEtries
){

    UNUSED uintptr_t AHCI_Devices = GetSataDeviceObjects();

    LouPrint("Ahci Device Pointer:%h\n", AHCI_Devices);

    while(1);

}
