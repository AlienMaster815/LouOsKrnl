#include <LouDDK.h>
#include <NtAPI.h>


// Apply the static assertion
//STATIC_ASSERT(sizeof(HW_INITIALIZATION_DATA) == 0xD0, HW_INITIALIZATION_DATA_size_is_incorrect);

static STOR_PORT_STACK_OBJECT StorPortStack[255];

PSTOR_PORT_STACK_OBJECT GetStorPortObject(PDRIVER_OBJECT DrvObject){
    
    for(uint8_t i = 0; i < 255; i++){
        if(StorPortStack[i].DrvObj == DrvObject){
            return &StorPortStack[i];
        }
    }
    return 0x00;
}

void StorPortGetPhysicalAddress(){
    LouPrint("void StorPortGetPhysicalAddress()\n");
    while(1);
}

void StorPortStallExecution(){
    LouPrint("void StorPortStallExecution()\n");
    while(1);
}

void StorPortNotification(
  SCSI_NOTIFICATION_TYPE NotificationType,
  PVOID HwDeviceExtension,
  ...
){
    LouPrint("void StorPortNotification()\n");


    LouPrint("void StorPortNotification() LOUSINE IS NOTIFIED\n");
    while(1);
}

void StorPortSetDeviceQueueDepth(){
    LouPrint("void StorPortSetDeviceQueueDepth()\n");
    while(1);
}

void StorPortGetUncachedExtension(){
    LouPrint("void StorPortGetUncachedExtension()\n");
    while(1);
}

NTSTATUS StorPortInitialize(
    PDRIVER_OBJECT DrvObj,
    PUNICODE_STRING RegistryEntry,
    PHW_INITIALIZATION_DATA HwInitializationData,
    PVOID HwContext
){
    LouPrint("NTSTATUS StorPortInitialize()\n");

    if((DrvObj == 0x00) || (RegistryEntry == 0x00) || 
       (HwInitializationData == 0x00)){
        LouPrint("One Or More Parameters are Null\n");
        LouPrint("NTSTATUS StorPortInitialize() STATUS_INVALID_PARAMETER\n");
        return STATUS_INVALID_PARAMETER;
    }

    uint8_t i = 0;
    for(;i < 255; i++){
        if(!StorPortStack[i].DrvObj){
            break;
        }
    }
  
    StorPortStack[i].DrvObj = DrvObj;
    
    StorPortStack[i].FindAdapter = (uint64_t)HwInitializationData->HwFindAdapter;
    StorPortStack[i].InitAdapter = (uint64_t)HwInitializationData->HwInitialize;

    if(HwInitializationData->DeviceExtensionSize > 0x00){
        StorPortStack[i].DeviceExtention = LouMalloc(HwInitializationData->DeviceExtensionSize);
    }
    if(HwInitializationData->SpecificLuExtensionSize > 0x00){
        StorPortStack[i].SpecificLuExtention = LouMalloc(HwInitializationData->SpecificLuExtensionSize);
    }
    if(HwInitializationData->SrbExtensionSize > 0x00){
        StorPortStack[i].SrbExtension = LouMalloc(HwInitializationData->SrbExtensionSize);
    }

    StorPortStack[i].ConfigInfo = (PPORT_CONFIGURATION_INFORMATION)LouMalloc(sizeof(PORT_CONFIGURATION_INFORMATION));

    LouPrint("void StorPortInitialize() STATUS SUCCESS\n");
    return STATUS_SUCCESS;
}   

void StorPortGetScatterGatherList(){
    LouPrint("void StorPortGetScatterGatherList()\n");
    while(1);
}

void StorPortGetDeviceBase(){
    LouPrint("void StorPortGetDeviceBase()\n");
    while(1);
}
/**
typedef enum _BUS_DATA_TYPE {
    Cmos,
    EisaConfiguration,
    Pos,
    CbusConfiguration,
    PCIConfiguration,
    VMEConfiguration,
    NuBusConfiguration,
    PCMCIAConfiguration,
    MPIConfiguration,
    MPSAConfiguration,
    PNPISAConfiguration,
    SgiInternalConfiguration,
    MaximumBusDataType
} BUS_DATA_TYPE;
*/

ULONG StorPortGetBusData(
  PVOID HwDeviceExtension,
  ULONG BusDataType,
  ULONG SystemIoBusNumber,
  ULONG SlotNumber,
  PVOID Buffer,
  ULONG Length
){
    LouPrint("void StorPortGetBusData()\n");

    if(BusDataType == PCIConfiguration){
        LouPrint("StorPort: Retrieving PCI CONFIGURATION INFORMATION\n");
        // Ensure the buffer is not NULL and the length is valid
        if (Buffer == 0x00 || Length == 0) {
            LouPrint("Invalid buffer or length\n");
            return 0;
        }

        // Calculate the number of bytes to read
        ULONG bytesToRead = (Length < sizeof(PCI_COMMON_CONFIG)) ? Length : sizeof(PCI_COMMON_CONFIG);

        // Read the PCI configuration space byte by byte and copy to the buffer
        for (ULONG offset = 0; offset < bytesToRead; ++offset) {
            uint8_t value = pciConfigAddress(
                (uint8_t)SystemIoBusNumber,
                (uint8_t)SlotNumber,
                0, // Assuming function 0 for simplicity
                (uint8_t)offset
            );
            ((uint8_t*)Buffer)[offset] = value;
        }
	    //LouPrint("Bus:%h:Slot:%h:Function:%h\n",SystemIoBusNumber,SlotNumber,0); 
        LouPrint("void StorPortGetBusData() COMPLETE\n");
        //while(1);
        return bytesToRead;
    }

    LouPrint("void StorPortGetBusData() FAILED\n");
    LouPrint("Unsupoerted Type\n");
    return 0;
}

