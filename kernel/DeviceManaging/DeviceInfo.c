#include "LouAPI.h"


static PDeviceInformationTable DeviceTable = 0x00;
static uint16_t NumberOfConnectedDevices = 0;
static uint16_t NumberOfStorageControllers = 0;

PDeviceInformationTable 
GetDeviceInformationTable(){
    return DeviceTable;
}

uint16_t GetNumberOfDevices(){
    return NumberOfConnectedDevices;  
}

uint16_t GetNumberOfStorageDevices(){
    return NumberOfStorageControllers;  
}

void UpdateDeviceInformationTable(){

    DeviceTable = (PDeviceInformationTable)LouMalloc(sizeof(DeviceInformationTable) * 512);


    LouPrint("Initializing Device Info\n");
    ScanConnectedAhciDevices(
    DeviceTable,
    &NumberOfConnectedDevices
    );
    LouFree((RAMADD)DeviceTable + (NumberOfConnectedDevices * sizeof(DeviceInformationTable)), (512 - NumberOfConnectedDevices) *sizeof(DeviceInformationTable));

    /*
    for(uint16_t i = 0; i < NumberOfConnectedDevices; i++){
        LouPrint("Device Type:%h\n",   DeviceTable[i].DeviceType);
        LouPrint("Device Sub Type:%h\n", DeviceTable[i].DeviceSubType);
        LouPrint("Device Arch:%h\n", DeviceTable[i].DeviceArchitecture);
        LouPrint("Device Number:%h\n", DeviceTable[i].DeviceNumber);
        LouPrint("Device Object:%h\n", DeviceTable[i].DeviceObject);
    }
    LouPrint(PRINT_NEW_LINE);
    */

    LouPrint("Initializing Device Info:Complete\n");
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




void 
LouKeInitializeDeviceInformationTable(
PDeviceInformationTable Table,
uint16_t* NumberOfCurrentEntries,
//Table Variables
uint8_t DeviceType,
uint8_t DeviceSubType,
uint8_t DeviceArchitecture,
uint8_t DeviceNumber,
uintptr_t DeviceObject,
uintptr_t DriverObject
){


    uint16_t e = *NumberOfCurrentEntries;


    Table[e].DeviceType = DeviceType;
    Table[e].DeviceSubType = DeviceSubType;
    Table[e].DeviceArchitecture = DeviceArchitecture;
    Table[e].DeviceNumber = DeviceNumber;
    Table[e].DeviceObject = DeviceObject;
    Table[e].DriverObject = DriverObject;
    /*
    for(uint16_t i = 0; i <= e; i++){
        LouPrint("Device Type:%h\n", Table[i].DeviceType);
        LouPrint("Device Sub Type:%h\n", Table[i].DeviceSubType);
        LouPrint("Device Arch:%h\n", Table[i].DeviceArchitecture);
        LouPrint("Device Number:%h\n", Table[i].DeviceNumber);
        LouPrint("Device Object:%h\n", Table[i].DeviceObject);
    }
    LouPrint(PRINT_NEW_LINE);
    */
    *NumberOfCurrentEntries = e + 1;

}



//device specific code
/*
typedef enum{
	SATA,
	SATAPI,
	SEMB,
	PM,
}AHCI_TYPE;

typedef struct _AHCI_DEVICE{
	AHCI_TYPE Type;
	uintptr_t PortAddress;
	uint8_t PortNumber;
}AHCI_DEVICE, * PAHCI_DEVICE;
*/

PDeviceInformationTable
ScanConnectedAhciDevices(
PDeviceInformationTable Table,
uint16_t* NumberOfCurrentEntries
){

    PAHCI_DEVICE AHCI_Devices = (PAHCI_DEVICE)GetSataDeviceObjects();
    uint16_t NumDevs = GetNumberOfAhciDevices();
    LouPrint("Scaning For Ahci Devices\n");    
    for(uint16_t i = 0; i < NumDevs; i++){
        if(AHCI_Devices[i].Type == SATA){
            LouKeInitializeDeviceInformationTable(
                Table, 
                NumberOfCurrentEntries,
                DEV_TYPE_STORAGE,
                DEV_SUB_TYPE_SATA,
                DEV_ARCH_AHCI,
                i,
                (uintptr_t)&AHCI_Devices[i], 0x00 //Null
                );
            NumberOfStorageControllers++;
            continue;
        }
        else if(AHCI_Devices[i].Type == SATAPI){
            LouKeInitializeDeviceInformationTable(
                Table, 
                NumberOfCurrentEntries,
                DEV_TYPE_STORAGE,
                DEV_SUB_TYPE_SATAPI,
                DEV_ARCH_AHCI,
                i,
                (uintptr_t)&AHCI_Devices[i], 0x00 //Null
                );
            NumberOfStorageControllers++;
            continue;
        }
        else if(AHCI_Devices[i].Type == SEMB){
            LouKeInitializeDeviceInformationTable(
                Table, 
                NumberOfCurrentEntries,
                DEV_TYPE_STORAGE,
                DEV_SUB_TYPE_SEMB,
                DEV_ARCH_AHCI,
                i,
                (uintptr_t)&AHCI_Devices[i], 0x00 //Null
                );
            NumberOfStorageControllers++;
            continue;
        }
        else if(AHCI_Devices[i].Type == PM){
            LouKeInitializeDeviceInformationTable(
                Table, 
                NumberOfCurrentEntries,
                DEV_TYPE_STORAGE,
                DEV_SUB_TYPE_PM,
                DEV_ARCH_AHCI,
                i,
                (uintptr_t)&AHCI_Devices[i], 0x00 //Null
                );
            NumberOfStorageControllers++;
            continue;
        }
        else{
            LouPrint("Fuck\n");
        }
    }
    LouPrint("Done\n");
}