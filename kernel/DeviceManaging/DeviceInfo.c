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

    LouPrint("Initializing Device Info\n");
    DeviceTable = ScanConnectedAhciDevices(
    DeviceTable,
    &NumberOfConnectedDevices
    );
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




PDeviceInformationTable 
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

    //time to do the memory tango;

    *NumberOfCurrentEntries = *NumberOfCurrentEntries + 1; //this is due to a weird compiler bug

    if(Table == 0x00){ 
        Table = (PDeviceInformationTable)LouMalloc(sizeof(DeviceInformationTable) * (*NumberOfCurrentEntries));
    }
    else{
        PDeviceInformationTable TEMPTable = (PDeviceInformationTable)LouMalloc(sizeof(DeviceInformationTable) * (*NumberOfCurrentEntries + 1));
                
        for(uint8_t i = 0; i < (*NumberOfCurrentEntries - 1); i++){
            TEMPTable[i].DeviceType = Table[i].DeviceType;
            TEMPTable[i].DeviceSubType = Table[i].DeviceSubType;
            TEMPTable[i].DeviceArchitecture = Table[i].DeviceArchitecture;
            TEMPTable[i].DeviceNumber = Table[i].DeviceNumber;
            TEMPTable[i].DeviceObject = Table[i].DeviceObject;
            TEMPTable[i].DriverObject = Table[i].DriverObject;        
        }
        
        //cleanup
        LouFree((RAMADD) Table, sizeof(DeviceInformationTable) * (*NumberOfCurrentEntries - 1));
        Table = TEMPTable;
    }

    uint16_t TableIndex = (*NumberOfCurrentEntries - 1);

    Table[TableIndex].DeviceType = DeviceType;
    Table[TableIndex].DeviceSubType = DeviceSubType;
    Table[TableIndex].DeviceArchitecture = DeviceArchitecture;
    Table[TableIndex].DeviceNumber = DeviceNumber;
    Table[TableIndex].DeviceObject = DeviceObject;
    Table[TableIndex].DriverObject = DriverObject;
    /*
    for(uint16_t i = 0; i < *NumberOfCurrentEntries; i++){
        LouPrint("Device Type:%h\n", Table[i].DeviceType);
        LouPrint("Device Sub Type:%h\n", Table[i].DeviceSubType);
        LouPrint("Device Arch:%h\n", Table[i].DeviceArchitecture);
        LouPrint("Device Number:%h\n", Table[i].DeviceNumber);
        LouPrint("Device Object:%h\n", Table[i].DeviceObject);
    }
    LouPrint(PRINT_NEW_LINE);
    */
    return Table;

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
    PDeviceInformationTable TEMPTable = Table;
    for(uint16_t i = 0; i < NumDevs; i++){
        if(AHCI_Devices[i].Type == SATA){
            TEMPTable = LouKeInitializeDeviceInformationTable(
                TEMPTable, 
                NumberOfCurrentEntries,
                DEV_TYPE_STORAGE,
                DEV_SUB_TYPE_SATA,
                DEV_ARCH_AHCI,
                i,
                (uintptr_t)&AHCI_Devices[i], 0x00 //Null
                );
            NumberOfStorageControllers++;
        }
        if(AHCI_Devices[i].Type == SATAPI){
            TEMPTable = LouKeInitializeDeviceInformationTable(
                TEMPTable, 
                NumberOfCurrentEntries,
                DEV_TYPE_STORAGE,
                DEV_SUB_TYPE_SATAPI,
                DEV_ARCH_AHCI,
                i,
                (uintptr_t)&AHCI_Devices[i], 0x00 //Null
                );
            NumberOfStorageControllers++;
        }
        if(AHCI_Devices[i].Type == SEMB){
            TEMPTable = LouKeInitializeDeviceInformationTable(
                TEMPTable, 
                NumberOfCurrentEntries,
                DEV_TYPE_STORAGE,
                DEV_SUB_TYPE_SEMB,
                DEV_ARCH_AHCI,
                i,
                (uintptr_t)&AHCI_Devices[i], 0x00 //Null
                );
            NumberOfStorageControllers++;
        }
        if(AHCI_Devices[i].Type == PM){
            TEMPTable = LouKeInitializeDeviceInformationTable(
                TEMPTable, 
                NumberOfCurrentEntries,
                DEV_TYPE_STORAGE,
                DEV_SUB_TYPE_PM,
                DEV_ARCH_AHCI,
                i,
                (uintptr_t)&AHCI_Devices[i], 0x00 //Null
                );
            NumberOfStorageControllers++;
        }
    }
    return TEMPTable;
}