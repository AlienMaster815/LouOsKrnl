#include <LouDDK.h>
#include <NtAPI.h>
#include <Hal.h>
#include "sata.h"

#define HBA_PxCMD_ST    0x0001
#define HBA_PxCMD_FRE   0x0010
#define HBA_PxCMD_FR    0x4000
#define HBA_PxCMD_CR    0x8000
#define GHC_HR (1U << 0) // HBA reset bit in the GHC register

#define ATA_CMD_IDLE_IMMEDIATE 0xE3

BOOLEAN AhciInit = true;

KERNEL_IMPORT void LouKeRunOnNewStack(void (*func)(void*), void* FunctionParameters, size_t stack_size);
LOUSTATUS InitializeSataController(P_PCI_DEVICE_OBJECT PDEV);
KERNEL_IMPORT bool LouMapAddressEx(uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS ,uint64_t PageSize);

NTSTATUS StorPortInitialize(
    PDRIVER_OBJECT DrvObj,
    PUNICODE_STRING RegistryEntry,
    PSTORPORT_HW_INITIALIZATION_DATA HwInitializationData,
    PVOID HwContext
);

void setAhciInitializationBit(
	BOOLEAN Initialization_Bit
) {
	AhciInit = Initialization_Bit;
}

ULONG 
AhciHwFindAdapter(
	PVOID DeviceExtension,
	PVOID HwContext,
	PVOID BusInformation,
	PCHAR ArgumentString,
	PPORT_CONFIGURATION_INFORMATION ConfigInfo,
	PBOOLEAN Reserved
);

ULONG StorPortGetBusData(
  PVOID HwDeviceExtension,
  ULONG BusDataType,
  ULONG SystemIoBusNumber,
  ULONG SlotNumber,
  PVOID Buffer,
  ULONG Length
);

VOID StorPortStallExecution(
    ULONG Microseconds
);

PVOID StorPortGetUncachedExtension(
  _In_ PVOID HwDeviceExtension,
  _In_ PPORT_CONFIGURATION_INFORMATION ConfigInfo,
  _In_ ULONG NumberOfBytes
);

LOUDDK_API_ENTRY bool IsSataCheck(uint8_t bus, uint8_t slot, uint8_t func) {
	//LouPrint("Checking PCI For Sata Controller\n");

	uint8_t ClassCode = pciConfigReadByte(bus,slot,func, 0x0B);
	uint8_t SubClass = pciConfigReadByte(bus,slot,func, 0x0A);

	PCI_DEVICE_OBJECT PDEV;
	PDEV.bus = bus;
	PDEV.slot = slot;
	PDEV.func = func;

	if(ClassCode == 0x01){
		if(SubClass == 0x06){
			LouPrint("Found AHCI Controller\n");
			Sata_init(&PDEV);
			//LouKeRunOnNewStack((void (*)(PVOID))Sata_init, (PVOID)&PDEV, 1 * MEGABYTE);
			return true;
		}
	}
	return false;
}

LOUSTATUS InitAHCIController(P_PCI_DEVICE_OBJECT PDEV);
KERNEL_IMPORT void ioapic_unmask_irq(uint8_t irq);
LOUDDK_API_ENTRY void AHCI_Interrupt_Handler();

KERNEL_IMPORT void GetAhciMouduleStart(uintptr_t* Start, uintptr_t* End);

void LouMapAddresses(uint64_t Address, uint64_t Size){
	for(uint64_t i = 0; i < Size; i+=KILOBYTE_PAGE){
		LouMapAddress(Address + i,Address + i, KERNEL_PAGE_WRITE_PRESENT, KILOBYTE_PAGE);
	}
}

NTSTATUS
AhciDriverEntry(
	PDRIVER_OBJECT Obj,
	PUNICODE_STRING Str
);


void LouKeMapMmIO(
    void* InterfaceStructure,
    uint8_t Interfacetype,
    uint64_t Flags
);

void LouKeHalRegisterPCiDevice(
    P_PCI_DEVICE_OBJECT PDEV
);

LOUDDK_API_ENTRY void Sata_init(P_PCI_DEVICE_OBJECT SataDev) {

	LouPrint("Initializing AHCI Controller\n");

	uint16_t Command = LouKeReadPciCommandRegister(SataDev);
	Command &= 0B110;
	Command &= ~(0b10000000000);
	LouKeWritePciCommandRegister(SataDev, Command);



}


int find_cmdslot(HBA_PORT *port);

bool WriteSATA(HBA_PORT *port, uint32_t startl, uint32_t starth, uint32_t count, uint16_t *buf) {


	return true;
}


LOUSTATUS SataNQParkHead(
HBA_PORT* Port
){



    return (LOUSTATUS)STATUS_SUCCESS;
}



static inline
LOUSTATUS CreateSataIdentifyCommand(
HBA_PORT* Port
){



	return LOUSTATUS_GOOD;
}


static inline
LOUSTATUS SataReadDMA(){


	return STATUS_SUCCESS;
}

static inline
LOUSTATUS SataReadPIO(){


	return STATUS_SUCCESS;
}



// Constants for ATA commands and FIS types
#define FIS_TYPE_REG_H2D    0x27    // Register FIS - host to device
#define ATA_CMD_IDENTIFY    0xEC    // IDENTIFY DEVICE command
#define HBA_PxIS_TFES       (1 << 30) // Task File Error Status

bool GetSataSectorSize(HBA_PORT *port, uint32_t *sectorSize) {

	return true;
}

KERNEL_IMPORT
LOUSTATUS RequestPhysicalAddress(
    uint64_t VAddress,
    uint64_t* PAddress
);



void* ReadSata(
HBA_PORT* port,
uintptr_t DeviceObject,
uint32_t startl, 
uint32_t starth,
uint32_t count,
LOUSTATUS* StatusOfOperation
){

	return 0x00;
}
