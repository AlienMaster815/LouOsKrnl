#include <LouDDK.h>
#include <NtAPI.h>
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

LOUDDK_API_ENTRY bool IsSataCheck(uint8_t bus, uint8_t slot, uint8_t func) {
	//LouPrint("Checking PCI For Sata Controller\n");

	uint16_t vendorID = PciGetVendorID(bus, slot);
	uint16_t deviceID = PciGetDeviceID(bus, slot, func);
	uint8_t ClassCode = pciConfigReadByte(bus,slot,func, 0x0B);
	uint8_t SubClass = pciConfigReadByte(bus,slot,func, 0x0A);

	PCI_DEVICE_OBJECT PDEV;
	PDEV.bus = bus;
	PDEV.slot = slot;
	PDEV.func = func;

	switch (vendorID) {
	case 0x8086:
		switch (deviceID) {
		case INTEL_DEVICE_8086_82801HM_HEM_ICH8M_ICH8M_E_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_COMET_LAKE_SATA_AHCI_CONTROLLER:
		case INTEL_COMET_LAKE_SATA_AHCI_CONTROLLER_2:
		case INTEL_ATOM_PROCESSOR_E3800_SERIES_SATA_AHCI_CONTROLLER_0f22:
		case INTEL_ATOM_PROCESSOR_E3800_SERIES_SATA_AHCI_CONTROLLER_0f23:
		case INTEL_CORP_8086_SAPPHIRE_RAPIDS_SATA_AHCI_CONTROLLER:
		case INTEL_CORP_8086_SAPPHIRE_RAPIDS_SATA_AHCI_CONTROLLER_1:
		case INTEL_CORP_8086_6_SERIES_C200_SERIES_CHIPSET_FAMILY_6_PORT_DESKTOP_SATA_AHCI_CONTROLLER:
		case INTEL_CORP_8086_6_SERIES_C200_SERIES_CHIPSET_FAMILY_6_PORT_MOBILE_SATA_AHCI_CONTROLLER:
		case INTEL_CORP_8086_C600_X79_SERIES_CHIPSET_6_PORT_SATA_AHCI_CONTROLLER:
		case INTEL_CORP_8086_7_SERIES_C210_SERIES_CHIPSET_FAMILY_6_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_CORP_8086_7_SERIES_CHIPSET_FAMILY_6_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_631XESB_632XESB_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_NM10_ICH7_FAMILY_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801GBM_GHM_ICH7_M_FAMILY_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801HR_HO_HH_ICH8R_DO_DH_6_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801HB_ICH8_4_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801IR_IO_IH_ICH9R_DO_DH_6_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801IB_ICH9_4_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801IBM_IEM_ICH9M_ICH9M_E_4_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_ICE_LAKE_LP_SATA_CONTROLLER_AHCI_MODE_34d3:
		case INTEL_DEVICE_8086_82801JD_DO_ICH10_FAMILY_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_82801JI_ICH10_FAMILY_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_6_PORT_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_4_PORT_SATA_AHCI_CONTROLLER_2:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_4_PORT_SATA_AHCI_CONTROLLER_3:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_6_PORT_SATA_AHCI_CONTROLLER_2:
		case INTEL_DEVICE_8086_TIGER_LAKE_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_ELKHART_LAKE_SATA_AHCI:
		case INTEL_DEVICE_8086_JASPER_LAKE_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_EP80579_S_ATA_AHCI:
		case INTEL_DEVICE_8086_ALDER_LAKE_PCH_P_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_CELERON_N3350_PENTIUM_N4200_ATOM_E3900_SERIES_SATA_AHCI_CONTROLLER:
		case INTEL_RAPTOR_LAKE_SATA_AHCI_CONTROLLER:
		case INTEL_ALDER_LAKE_S_PCH_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_PLATFORM_CONTROLLER_HUB_EG20T_SATA_AHCI_CONTROLLER:
		case INTEL_8_SERIES_C220_SERIES_6_PORT_SATA_CONTROLLER_1_AHCI_MODE:
		case INTEL_8_SERIES_C220_SERIES_6_PORT_SATA_CONTROLLER_1_AHCI_MODE_2:
		case INTEL_9_SERIES_CHIPSET_FAMILY_SATA_CONTROLLER_AHCI_MODE_1:
		case INTEL_9_SERIES_CHIPSET_FAMILY_SATA_CONTROLLER_AHCI_MODE_2:
		case INTEL_C610_X99_SERIES_CHIPSET_FAMILY_6_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_C610_X99_SERIES_CHIPSET_FAMILY_SSATA_CONTROLLER_AHCI_MODE_1:
		case INTEL_8_SERIES_SATA_CONTROLLER_1_AHCI_MODE_1:
		case INTEL_8_SERIES_SATA_CONTROLLER_1_AHCI_MODE_2:
		case INTEL_WILDCAT_POINT_LP_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_SUNRISE_POINT_LP_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_CANNON_POINT_LP_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_Q170_Q150_B150_H170_H110_Z170_CM236_CHIPSET_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_HM170_QM170_CHIPSET_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_C620_SERIES_CHIPSET_FAMILY_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_C620_SERIES_CHIPSET_FAMILY_SSATA_CONTROLLER_AHCI_MODE:
		case INTEL_LEWISBURG_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_200_SERIES_PCH_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_CANNON_LAKE_PCH_SATA_AHCI_CONTROLLER:
		case INTEL_CANNON_LAKE_MOBILE_PCH_SATA_AHCI_CONTROLLER:
		case INTEL_400_SERIES_CHIPSET_FAMILY_SATA_AHCI_CONTROLLER:
			LouPrint("Found An Intel Sata Controller\n");
			//Sata_init(&PDEV);
			LouKeRunOnNewStack((void (*)(PVOID))Sata_init, (PVOID)&PDEV, 2 * MEGABYTE);
			return true;
			break;

		default:
			//LouPrint("Non Sata Intel Device\n");
			break;
		}
		break;
	case AdvancedMicroDevices_1:
	case AdvancedMicroDevices_2:
	case AMD_3:
		switch (deviceID) {
		//some may be missing we will go back later


		case SB7x0SB8x0SB9x0SATAControllerAHCImode_1:
		case SB7x0SB8x0SB9x0SATAControllerAHCImode:
		case FCHSATAControllerAHCImode:
		case FCHSATAControllerAHCImode_3:
		case KabiniMullinsSATARaidAHCIModeDotHilldriver:
		case FCHSATAControllerAHCImode_2:
		case SB600NonRaid5SATA:
		case SB7x0SB8x0SB9x0SATAControllerIDEmode:
		case SB7x0SB8x0SB9x0SATAControllerNonRAID5mode:
		case SB8x0SB9x0SATAControllerStoragemode:
		//case S5000PSLSATAServerBoard:
		case X370SeriesChipsetSATAController:
		case X399SeriesChipsetSATAController:
		case A300SeriesChipsetSATAController:
		case A400SeriesChipsetSATAController:
		case A500SeriesChipsetSATAController:
		case A600SeriesChipsetSATAController:
		case FCHSATAControllerIDEmode:
		//case FCHSATAControllerAHCImode:
		//case KabiniMullinsSATARaidAHCIModeDotHilldriver:
		case FCHSATAControllerIDEmode_1:
		//case FCHSATAControllerAHCImode_2:
		case FCHSATAControllerAHCImode_1:
		case SB600SATAControllerRAID5mode:
		case SB7x0SB8x0SB9x0SATAControllerRAID5mode:
		case FCHSATAControllerRAIDmode_5:
		case FCHSATAControllerRAIDmode_4:
		case FCHSATAControllerRAIDmode_2:
		case FCHSATAControllerRAIDmode_1:
			LouPrint("Found An AMD Sata Controller\n");
			//Sata_init(&PDEV);
			LouKeRunOnNewStack((void (*)(PVOID))Sata_init, (PVOID)&PDEV, 2 * MEGABYTE);
			return true;
			break;
		default:
			//not ahci
			break;
		}
	default:

		break;
	}
	if(ClassCode == 0x01){
		if(SubClass == 0x05){
			LouPrint("Found Generic Sata Controller\n");
			//Sata_init(&PDEV);
			LouKeRunOnNewStack((void (*)(PVOID))Sata_init, (PVOID)&PDEV, 2 * MEGABYTE);
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

LOUDDK_API_ENTRY void Sata_init(P_PCI_DEVICE_OBJECT SataDev) {

	uint8_t bus = SataDev->bus;
	uint8_t slot = SataDev->slot;
	uint8_t func = SataDev->func;

	LouPrint("Initializing Sata Controller\n");

	SataDev->DeviceID = PciGetDeviceID(bus, slot, func);
	SataDev->VendorID = PciGetVendorID(bus, slot);


	LouPrint("DeviceID:%h\n", SataDev->DeviceID);
	LouPrint("VendorID:%h\n", SataDev->VendorID);

	BaseAddressRegister BARS(SataDev);

	LouMapAddress((uint64_t)BARS.address[5],(uint64_t)BARS.address[5], KERNEL_PAGE_WRITE_PRESENT, KILOBYTE_PAGE);
	PDRIVER_OBJECT DrvObject = (PDRIVER_OBJECT)LouMalloc(sizeof(DRIVER_OBJECT));
	PUNICODE_STRING RegistryEntry = (PUNICODE_STRING)LouMalloc(sizeof(UNICODE_STRING));
	//uint8_t IPin = LouKeGetPciInterruptPin(SataDev);
	
	uint16_t CMD = LouKeReadPciCommandRegister(SataDev);
	CMD |= (MEMORY_SPACE_ENABLE | IO_SPACE_ENABLE | PCI_INTERRUPT_ENABLE);
	LouKeWritePciCommandRegister(SataDev, CMD);
	
	AhciDriverEntry(
		DrvObject,
		RegistryEntry
	);

	PSTOR_PORT_STACK_OBJECT StorportObj = GetStorPortObject(DrvObject);

	PPORT_CONFIGURATION_INFORMATION ConfigInfo = StorportObj->ConfigInfo;

	PPCI_COMMON_CONFIG PciConfig = (PPCI_COMMON_CONFIG)LouMalloc(sizeof(PCI_COMMON_CONFIG)); 
	GetPciConfiguration(SataDev->bus, SataDev->slot, SataDev->func ,PciConfig);
	for(uint8_t i = 0 ; i < ConfigInfo->NumberOfAccessRanges; i++){
		ConfigInfo->AddressRanges[i] = PciConfig->Header.u.type0.BaseAddresses[i] & 0xFFFFFFF0;
	}
	LouFree((RAMADD)PciConfig);

	ConfigInfo->SystemIoBusNumber = SataDev->bus;
	ConfigInfo->SlotNumber = SataDev->slot;

	AhciHwFindAdapter(
		StorportObj->DeviceExtention,
		0x00,0x00, 0x00,
		ConfigInfo,
		0x00
	);

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

//All Large Systems Must Be Mallocated If Included Into the Kernel

BOOLEAN
AhciHwStartIo(
	PVOID DeviceExtension,
	PSCSI_REQUEST_BLOCK Srb
){


	return true;
}

BOOLEAN
AhciHwResetBus(
	PVOID AdapterExtention,
	ULONG PathID
){


	return true;
}

BOOLEAN 
AhciHwInterrupt(
	PVOID DeviceExtension
){


	return true;
}

BOOLEAN 
AhciHwInitialize(
	PVOID DeviceExtension
){


	return true;
}

BOOLEAN
AhciAdapterReset(
	PAHCI_ADAPTER_EXTENSION DeviceExtension
){ 
	ULONG Ticks;
	AHCI_GHC* ghc;
	PAHCI_MEMORY_REGISTERS Abar = 0x00;

	Abar = (PAHCI_MEMORY_REGISTERS)(uintptr_t)DeviceExtension->AhciBaseAddress;

	//sanity check
	if(Abar == 0x00){
		return false;
	}

	ghc = (AHCI_GHC*)&Abar->GlobalHost;
	
	ghc->Bits.HardRest = 1;

	for(Ticks = 0 ; Ticks <= 50; Ticks++){
		if(ghc->Bits.HardRest == 0){
			break;
		}
		StorPortStallExecution(20000);
	}
	if(Ticks == 50){
		return false;
	}

	return true;
}

BOOLEAN
AhciAllocateResourceForAdapter (
 	PAHCI_ADAPTER_EXTENSION AdapterExtension,
	PPORT_CONFIGURATION_INFORMATION ConfigInfo
){
	LouPrint("AhciAllocateResourceForAdapter()\n");

	UNUSED PCHAR NonCahchedXtention, tmp;
	ULONG Index, NCS, AlignedNCS;
	ULONG PortCount, PortImplemented, NonCahchedXtentionSize;
	UNUSED PAHCI_PORT_EXTENSION PortExtention;

	NCS = AdapterExtension->Capabilities;

	AlignedNCS = ROUND_UP(NCS, 8);

	PortCount = 0;
	PortImplemented = AdapterExtension->PortImplemented;
	//sanity check
	if(PortImplemented == 0x00){
		LouPrint("PortImplemented Is 0\n");
		return false;
	}

	for(Index = 32-1; Index > 0; Index--){
		if((PortImplemented & (1 << Index)) != 0x00){
			break;
		}
	}

	PortCount = Index + 1;
	LouPrint("Port Count Is:%d\n", PortCount);

	AdapterExtension->PortCount = PortCount;

	NonCahchedXtentionSize = sizeof(AHCI_COMMAND_HEADER) * AlignedNCS + 
							 sizeof(AHCI_RECIEVED_FIS) * 
							 sizeof(IDENTIFY_DEVICE_DATA);

	NonCahchedXtentionSize = ROUND_UP(NonCahchedXtentionSize, 1024);

	AdapterExtension->NonCahchedXtention = LouMalloc(NonCahchedXtentionSize * PortCount);

	if(AdapterExtension->NonCahchedXtention == 0x00){
		LouPrint("Could Not Allocatte Memory For NCE\n");
		return false;
	}


	LouPrint("Allocated %d Bytes For NCE\n", NonCahchedXtentionSize * PortCount);

	NonCahchedXtention = (PCHAR)AdapterExtension->NonCahchedXtention;

	for(uint64_t i = 0; i < NonCahchedXtentionSize * PortCount; i += MEGABYTE_PAGE){
		LouMapAddress((uint64_t)NonCahchedXtention + i, (uint64_t)NonCahchedXtention + i, KERNEL_PAGE_WRITE_PRESENT, MEGABYTE_PAGE);
	}

	memset(NonCahchedXtention, 0, NonCahchedXtentionSize * PortCount);

	for(Index = 0 ; Index < PortCount; Index++){
		PortExtention = &AdapterExtension->PortExtention[Index];
		PortExtention->DevParam.IsActive = false;

		if((AdapterExtension->PortImplemented & (1 << Index)) != 0x00){
			PortExtention->PortNumber = Index;
			PortExtention->DevParam .IsActive = true;
			PortExtention->AdapterExtension = AdapterExtension;
			PortExtention->CommandList = (PAHCI_COMMAND_HEADER)NonCahchedXtention;

			tmp = (PCHAR)(NonCahchedXtention + sizeof(AHCI_COMMAND_HEADER) * AlignedNCS);

			PortExtention->RFis = (PAHCI_RECIEVED_FIS)tmp;
			PortExtention->IdData = (PIDENTIFY_DEVICE_DATA)(tmp + sizeof(AHCI_RECIEVED_FIS));
			PortExtention->MaxQueDepth = NCS;
			NonCahchedXtention += NonCahchedXtentionSize;
		}
	}

	LouPrint("AhciAllocateResourceForAdapter() SUCCESS\n");
	return true;	
}

BOOLEAN
AhciPortInitialize (
    PVOID DeviceExtension
){


	return true;
}

ULONG 
AhciHwFindAdapter(
	PVOID DeviceExtension,
	PVOID HwContext,
	PVOID BusInformation,
	PCHAR ArgumentString,
	PPORT_CONFIGURATION_INFORMATION ConfigInfo,
	PBOOLEAN Reserved
){
	LouPrint("AhciHwFindAdapter()\n");

	AHCI_GHC* ghc;
	UNUSED ULONG Index, PCiConfLen;
	UNUSED PACCESS_RANGE AccessRange;
	PPCI_COMMON_CONFIG PciConfig = (PPCI_COMMON_CONFIG)LouMalloc(sizeof(PCI_COMMON_CONFIG));

	PAHCI_MEMORY_REGISTERS Abar;
	PAHCI_ADAPTER_EXTENSION AdapterExtension = (PAHCI_ADAPTER_EXTENSION)DeviceExtension;

	AdapterExtension->SlotNumber = ConfigInfo->SlotNumber;
	AdapterExtension->SystemIoBusNumber = ConfigInfo->SystemIoBusNumber;
    // get PCI configuration header
    PCiConfLen = StorPortGetBusData(
                        AdapterExtension,
                        PCIConfiguration,
                        AdapterExtension->SystemIoBusNumber,
                        AdapterExtension->SlotNumber,
                        PciConfig,
                        sizeof(PCI_COMMON_CONFIG));

	if(PCiConfLen != sizeof(PCI_COMMON_CONFIG)){
		//sanity check
		LouPrint("AhciHwFindAdapter() Pci Congig Length Is Invalid\n");
		LouFree((RAMADD)PciConfig);
		return STATUS_INVALID_PARAMETER;
	}

	AdapterExtension->VendorID = PciConfig->Header.VendorID;
	AdapterExtension->DeviceID = PciConfig->Header.DeviceID;

	//since the device Driver is built into the kernel i can trust the address
	Abar = (PAHCI_MEMORY_REGISTERS)(uintptr_t)(PciConfig->Header.u.type0.BaseAddresses[5] & 0xFFFFFFF0);
	AdapterExtension->AhciBaseAddress = (uint32_t)(uintptr_t)Abar;
	//buit were still gonna sanity check this
	if(AdapterExtension->AhciBaseAddress == 0x00){
		LouPrint("Abar Is Null\n");
		LouFree((RAMADD)PciConfig);
		return STATUS_INVALID_PARAMETER;
	}

	LouPrint("ABAR Is:%h\n");

	AdapterExtension->Capabilities = Abar->Capabilities;
	AdapterExtension->SecondaryCapabilities = Abar->ExtendedCapabilities;// fuck me i foorgot thethe greater than
	AdapterExtension->Version = Abar->PortVersion;
	AdapterExtension->LastInterruptPort = (ULONG)-0x01;

	ghc = (AHCI_GHC*)&Abar->GlobalHost;

	if(ghc->Bits.AhciEnable){
		LouPrint("Ahci Already Enabled, Reset()\n");
		if(!AhciAdapterReset(AdapterExtension)){
			LouPrint("Ahci Adapter Reset Did Not Take Somthing May Be Wrong With The Device\n");
			LouFree((RAMADD)PciConfig);
			return STATUS_UNSUCCESSFUL;
		}
	}

	ghc->Bits.AhciEnable = 1;

	uint64_t Foo = (uint64_t)&Abar->InterruptStat; //unalignment warning
	AdapterExtension->InterruptStatus = (volatile uint32_t*)(uintptr_t)Foo;

	AdapterExtension->PortImplemented = Abar->PortImplementation;
	
	if(AdapterExtension->PortImplemented == 0x00){
		LouPrint("No Ports Implementd\n");
		LouFree((RAMADD)PciConfig);
		return STATUS_UNSUCCESSFUL;
	}

	ConfigInfo->Master = true;
	ConfigInfo->AlignmentMask = 0x03;
	ConfigInfo->ScatterMeGather = true;
	ConfigInfo->DmaWidth = DmaWidth32;
	ConfigInfo->WmiDataProvider = false;
	ConfigInfo->Dma32Address = true;

	if((Abar->Capabilities >> 31) & 0x01){
		ConfigInfo->Dma64Address = true;
	}

	ConfigInfo->MaximumTargets = 1;
	ConfigInfo->ResetTargetSupport = true;
	ConfigInfo->NumberOfPhysicalBreks = 0x21;
	ConfigInfo->NumberOfLogicalUnits = 1;
	ConfigInfo->NumberOfBusses = 32;
	ConfigInfo->MaximumTransferLength = StorSynchronizeFullDuplex;

	ghc->Bits.InterruptEnable = 1;

	if(!AhciAllocateResourceForAdapter(
		AdapterExtension,
		ConfigInfo
	)){
		LouPrint("Could Not Allocate Resources\n");
		LouFree((RAMADD)PciConfig);
		return STATUS_INSUFFICIENT_RESOURCES;
	}

	for(Index = 0; Index < AdapterExtension->PortCount; Index++){
		if((AdapterExtension->PortImplemented & (0x01 << Index)) != 0x00){
			AhciPortInitialize(&AdapterExtension->PortExtention[Index]);
		}
	}

	LouFree((RAMADD)PciConfig);
	LouPrint("AhciHwFindAdapter() SUCCESS\n");
	return STATUS_SUCCESS;
}

NTSTATUS
AhciDriverEntry(
	PDRIVER_OBJECT DriverObj,
	PUNICODE_STRING RegistryEntry
){

	NTSTATUS Status = STATUS_SUCCESS;

	PSTORPORT_HW_INITIALIZATION_DATA HwInitializationData = (PSTORPORT_HW_INITIALIZATION_DATA)LouMalloc(sizeof(STORPORT_HW_INITIALIZATION_DATA));

	memset((void*)HwInitializationData, 0, sizeof(STORPORT_HW_INITIALIZATION_DATA));

	HwInitializationData->HwInitializationDataSize = sizeof(STORPORT_HW_INITIALIZATION_DATA);
	HwInitializationData->HwStartIo = AhciHwStartIo;
	HwInitializationData->HwResetBus = AhciHwResetBus;
	HwInitializationData->HwInterrupt = AhciHwInterrupt;
    HwInitializationData->HwInitialize = AhciHwInitialize;
    HwInitializationData->HwFindAdapter = AhciHwFindAdapter;

	HwInitializationData->TaggedQueuing = true;
	HwInitializationData->AutoRequestSense = true;
	HwInitializationData->MultipleRequestPerLu = true;
	HwInitializationData->NeedPhysicalAddresses = true;

	HwInitializationData->NumberOfAccessRanges = 6;
    HwInitializationData->AdapterInterfaceType = PCIBus;
    HwInitializationData->MapBuffers = STOR_MAP_NON_READ_WRITE_BUFFERS;

    HwInitializationData->SrbExtensionSize = sizeof(AHCI_SRB_EXTENSION);
    HwInitializationData->DeviceExtensionSize = sizeof(AHCI_ADAPTER_EXTENSION);

    // register our hw init data
    Status = StorPortInitialize(
		DriverObj,
        RegistryEntry,
        HwInitializationData,
        0x00
	);

	return Status;
}