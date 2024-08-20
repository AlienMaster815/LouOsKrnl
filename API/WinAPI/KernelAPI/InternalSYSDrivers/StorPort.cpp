#include <LouDDK.h>
#include <NtAPI.h>

KERNEL_IMPORT LOUSTATUS RequestPhysicalAddress(
    uint64_t VAddress,
    uint64_t* PAddress
);

KERNEL_IMPORT uint64_t GetAllocationBlockSize(uint64_t Address);
// Apply the static assertion
//STATIC_ASSERT(sizeof(HW_INITIALIZATION_DATA) == 0xD0, HW_INITIALIZATION_DATA_size_is_incorrect);

UNUSED static PSTOR_PORT_STACK_OBJECT StorPortStack[255] = {0};

PSTOR_PORT_STACK_OBJECT GetStorPortObject(PDRIVER_OBJECT DrvObject){
    
    for(uint8_t i = 0; i < 255; i++){
        if(StorPortStack[i]->DrvObj == DrvObject){
            return StorPortStack[i];
        }
    }
    
    return 0x00;
}

STOR_PHYSICAL_ADDRESS StorPortGetPhysicalAddress(
  _In_   PVOID HwDeviceExtension,
  _In_   PSCSI_REQUEST_BLOCK Srb,
  _In_   PVOID VirtualAddress,
  _Out_  ULONG *Length
){
    LouPrint("void StorPortGetPhysicalAddress()\n");

    STOR_PHYSICAL_ADDRESS Result;

    uint64_t PhysicalAdress;
    RequestPhysicalAddress((uint64_t)VirtualAddress, &PhysicalAdress);

    Result.QuadPart = PhysicalAdress;

    uint64_t BlockSize =  GetAllocationBlockSize((uint64_t)VirtualAddress);

    *Length = (ULONG)BlockSize;

    //LouPrint("Length:%d\n", *Length);
    //LouPrint("VirtualAddress:%h\n",VirtualAddress);
    //LouPrint("BlockSize:%h\n", *Length);

    LouPrint("void StorPortGetPhysicalAddress() SUCCESS\n");
    return (STOR_PHYSICAL_ADDRESS)Result;
}

VOID StorPortStallExecution(
    ULONG Microseconds
){
    //LouPrint("void StorPortStallExecution()\n");
    if(Microseconds <= 1999){//sanity check
        sleep(2);
        //LouPrint("void StorPortStallExecution() SUCCESS\n");
        return;
    }

    Microseconds /= 1000;
    sleep(Microseconds);
    //LouPrint("void StorPortStallExecution() SUCCESS\n");

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

PVOID StorPortGetUncachedExtension(
  _In_ PVOID HwDeviceExtension,
  _In_ PPORT_CONFIGURATION_INFORMATION ConfigInfo,
  _In_ ULONG NumberOfBytes
){
    LouPrint("void StorPortGetUncachedExtension()\n");

    LouPrint("Allocating:%d Bytes\n",NumberOfBytes);

    PVOID AllocatedBlock = (PVOID)LouMalloc(NumberOfBytes);

    for(uint64_t i = 0; i <= NumberOfBytes; i+=KILOBYTE_PAGE){
        LouMapAddress(((uint64_t)AllocatedBlock + i), ((uint64_t)AllocatedBlock + i), KERNEL_PAGE_WRITE_PRESENT, KILOBYTE_PAGE);
    }


    LouPrint("void StorPortGetUncachedExtension() SUCCESS\n");
    return AllocatedBlock;
}

NTSTATUS StorPortInitialize(
    PDRIVER_OBJECT DrvObj,
    PUNICODE_STRING RegistryEntry,
    PSTORPORT_HW_INITIALIZATION_DATA HwInitializationData,
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
        if(StorPortStack[i] == 0x00){
            break;
        }
    }

    if(i == 255){
        LouPrint("NTSTATUS StorPortInitialize() STATUS_INSUFFICIENT_RESOURCES\n");
        return STATUS_INSUFFICIENT_RESOURCES;
    }

    StorPortStack[i] = (PSTOR_PORT_STACK_OBJECT)LouMalloc(sizeof(STOR_PORT_STACK_OBJECT));

    if(StorPortStack[i] == 0x00){
        LouPrint("NTSTATUS StorPortInitialize() STATUS_INSUFFICIENT_RESOURCES\n");
        return STATUS_INSUFFICIENT_RESOURCES;
    }

    LouPrint("Found An Available Storport Slot [slot Number]:%d\n", i);

    StorPortStack[i]->DrvObj = DrvObj;

    
    StorPortStack[i]->FindAdapter = (uint64_t)HwInitializationData->HwFindAdapter;
    StorPortStack[i]->InitAdapter = (uint64_t)HwInitializationData->HwInitialize;

    if(HwInitializationData->DeviceExtensionSize > 0x00){
        StorPortStack[i]->DeviceExtention = LouMalloc(HwInitializationData->DeviceExtensionSize);
    }
    if(HwInitializationData->SpecificLuExtensionSize > 0x00){
        StorPortStack[i]->SpecificLuExtention = LouMalloc(HwInitializationData->SpecificLuExtensionSize);
    }
    if(HwInitializationData->SrbExtensionSize > 0x00){
        StorPortStack[i]->SrbExtension = LouMalloc(HwInitializationData->SrbExtensionSize);
    }

    StorPortStack[i]->ConfigInfo = (PPORT_CONFIGURATION_INFORMATION)LouMalloc(sizeof(PORT_CONFIGURATION_INFORMATION));

    StorPortStack[i]->ConfigInfo->NumberOfAccessRanges = HwInitializationData->NumberOfAccessRanges;

    StorPortStack[i]->ConfigInfo->AddressRanges = (uint64_t)LouMalloc(sizeof(ACCESS_RANGE) * StorPortStack[i]->ConfigInfo->NumberOfAccessRanges);


    LouPrint("NTSTATUS StorPortInitialize() STATUS SUCCESS\n");
    return STATUS_SUCCESS;
}   

void StorPortGetScatterGatherList(){
    LouPrint("void StorPortGetScatterGatherList()\n");
    while(1);
}

PVOID StorPortGetDeviceBase(
  _In_  PVOID   HwDeviceExtension,
  _In_  INTERFACE_TYPE BusType,
  _In_  ULONG   SystemIoBusNumber,
  _In_  PHYSICAL_ADDRESS IoAddress,
  _In_  ULONG   NumberOfBytes,
  _In_  BOOLEAN InIoSpace
){
    LouPrint("PVOID StorPortGetDeviceBase()\n");

    if(IoAddress.QuadPart == 0x01){
        LouPrint("StorPort Address Not Valid\n");
        LouPrint("PVOID StorPortGetDeviceBase() OK\n");
        return (PVOID)0x00;
    }

    LouPrint("IoAddress:%h\n", IoAddress.QuadPart);
    LouPrint("Size:%h\n", NumberOfBytes);

    uint64_t NewAddress = ((uint64_t)IoAddress.QuadPart & ~(MEGABYTE_PAGE - 1));

    for(uint64_t i = 0; i <= NumberOfBytes + (IoAddress.QuadPart - NewAddress); i+= MEGABYTE_PAGE){
        LouMapAddress(NewAddress + i, NewAddress + i, KERNEL_PAGE_WRITE_PRESENT, MEGABYTE_PAGE);
    }

    LouPrint("PVOID StorPortGetDeviceBase() SUCCESS\n");
    return (PVOID)IoAddress.QuadPart;
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
// Holds Adapter Information

void GetPciConfiguration(ULONG SystemIoBusNumber,ULONG SlotNumber,ULONG Function,PPCI_COMMON_CONFIG ConfigBuffer){
    ConfigBuffer->Header.VendorID = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x00);
    ConfigBuffer->Header.DeviceID = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x02);
    ConfigBuffer->Header.Command = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x04);
    ConfigBuffer->Header.Status = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x06);

    ConfigBuffer->Header.RevisionID = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x08);
    ConfigBuffer->Header.ProgIf = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x09);
    ConfigBuffer->Header.SubClass = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x0A);
    ConfigBuffer->Header.BaseClass = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x0B);
    ConfigBuffer->Header.CacheLineSize = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x0C);
    ConfigBuffer->Header.LatencyTimer = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x0D);
    ConfigBuffer->Header.HeaderType = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x0E);
    ConfigBuffer->Header.BIST = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x0F);

    if(getHeaderType(SystemIoBusNumber, SlotNumber, Function) == 0x00){
        ConfigBuffer->Header.u.type0.BaseAddresses[0] = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x10);
        ConfigBuffer->Header.u.type0.BaseAddresses[1] = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x14);
        ConfigBuffer->Header.u.type0.BaseAddresses[2] = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x18);
        ConfigBuffer->Header.u.type0.BaseAddresses[3] = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x1C);
        ConfigBuffer->Header.u.type0.BaseAddresses[4] = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x20);
        ConfigBuffer->Header.u.type0.BaseAddresses[5] = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x24);

        ConfigBuffer->Header.u.type0.CIS = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x28);
        ConfigBuffer->Header.u.type0.SubVendorID = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x2C);
        ConfigBuffer->Header.u.type0.SubSystemID = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x2E);
        ConfigBuffer->Header.u.type0.ROMBaseAddress = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x30);
            
        ConfigBuffer->Header.u.type0.CapabilitiesPtr = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x34);            ConfigBuffer->Header.u.type0.InterruptLine = pciConfigReadByte(SystemIoBusNumber, SlotNumber, 0, 0x3C);
        ConfigBuffer->Header.u.type0.InterruptPin = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x3D);
        ConfigBuffer->Header.u.type0.MinimumGrant = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x3E);
        ConfigBuffer->Header.u.type0.MaximumLatency = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x3F);
    }
    else if(getHeaderType(SystemIoBusNumber, SlotNumber, 0) == 0x01){
        ConfigBuffer->Header.u.type1.BaseAddresses[0] = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x10);
        ConfigBuffer->Header.u.type1.BaseAddresses[1] = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x14);

        ConfigBuffer->Header.u.type1.PrimaryBus = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x18);
        ConfigBuffer->Header.u.type1.SecondaryBus = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x19);
        ConfigBuffer->Header.u.type1.SubordinateBus = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x1A);
        ConfigBuffer->Header.u.type1.SecondaryLatency = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x1B);

        ConfigBuffer->Header.u.type1.IOBase = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x1C);
        ConfigBuffer->Header.u.type1.IOLimit = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x1D);

        ConfigBuffer->Header.u.type1.SecondaryStatus = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x1E);
        ConfigBuffer->Header.u.type1.MemoryBase = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x20);
        ConfigBuffer->Header.u.type1.MemoryLimit = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x22);
        ConfigBuffer->Header.u.type1.PrefetchBase = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x24);
        ConfigBuffer->Header.u.type1.PrefetchLimit = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x26);
          
        ConfigBuffer->Header.u.type1.PrefetchBaseUpper32 = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x28);
        ConfigBuffer->Header.u.type1.PrefetchLimitUpper32 = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x2C);

        ConfigBuffer->Header.u.type1.IOBaseUpper16 = pciConfigReadWord(SystemIoBusNumber, SlotNumber,Function, 0x30);
        ConfigBuffer->Header.u.type1.IOLimitUpper16 = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x32);

        ConfigBuffer->Header.u.type1.CapabilitiesPtr = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x34);

        ConfigBuffer->Header.u.type1.ROMBaseAddress = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x38);

        ConfigBuffer->Header.u.type1.InterruptLine = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x3C);
        ConfigBuffer->Header.u.type1.InterruptPin = pciConfigReadByte(SystemIoBusNumber, SlotNumber, Function, 0x3D);

        ConfigBuffer->Header.u.type1.BridgeControl = pciConfigReadWord(SystemIoBusNumber, SlotNumber, Function, 0x3E);

    }
    else if(getHeaderType(SystemIoBusNumber, SlotNumber, 0) == 0x02){
        ConfigBuffer->Header.u.type2.SocketRegistersBaseAddress = pci_read(SystemIoBusNumber, SlotNumber, Function, 0x10);

        //TODO: Finish this            

    }
}

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
        PPCI_COMMON_CONFIG ConfigBuffer = (PPCI_COMMON_CONFIG)Buffer;

        GetPciConfiguration(SystemIoBusNumber, SlotNumber, 0,ConfigBuffer);

        LouPrint("void StorPortGetBusData() COMPLETE\n");
        return sizeof(PCI_COMMON_CONFIG);
    }

    LouPrint("void StorPortGetBusData() FAILED\n");
    LouPrint("Unsuported Type\n");
    return 0;
}

