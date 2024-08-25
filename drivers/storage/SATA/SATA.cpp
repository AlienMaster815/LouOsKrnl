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

void setAhciInitializationBit(
	BOOLEAN Initialization_Bit
) {
	AhciInit = Initialization_Bit;
}

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
			LouKeRunOnNewStack((void (*)(PVOID))Sata_init, (PVOID)&PDEV, 16 * KILOBYTE_PAGE);
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
			LouKeRunOnNewStack((void (*)(PVOID))Sata_init, (PVOID)&PDEV, 16 * KILOBYTE_PAGE);
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
			LouKeRunOnNewStack((void (*)(PVOID))Sata_init, (PVOID)&PDEV, 16 * KILOBYTE_PAGE);
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

LOUDDK_API_ENTRY void Sata_init(P_PCI_DEVICE_OBJECT SataDev) {

	uint8_t bus = SataDev->bus;
	uint8_t slot = SataDev->slot;
	uint8_t func = SataDev->func;

	LouPrint("Initializing Sata Controller\n");

	SataDev->DeviceID = PciGetDeviceID(bus, slot, func);
	SataDev->VendorID = PciGetVendorID(bus, slot);

	uint8_t IPin = LouKeGetPciInterruptPin(SataDev);

	uint16_t CMD = LouKeReadPciCommandRegister(SataDev);
	CMD |= (PCI_INTERRUPT_ENABLE | MEMORY_SPACE_ENABLE | IO_SPACE_ENABLE);

	PDRIVER_OBJECT DrvObj = (PDRIVER_OBJECT)LouMalloc(sizeof(DRIVER_OBJECT));
	PUNICODE_STRING Registry = (PUNICODE_STRING)LouMalloc(sizeof(DRIVER_OBJECT));

	AhciDriverEntry(
		DrvObj, 
		Registry
	);



	BaseAddressRegister bars(SataDev);

	STOR_PORT_STACK_OBJECT* FOO = GetStorPortObject(DrvObj);
	PORT_CONFIGURATION_INFORMATION* ConfigInfo = FOO->ConfigInfo;

	ConfigInfo->SlotNumber = slot;
	ConfigInfo->SystemIoBusNumber = bus;

	if(FOO->InterruptHandler != 0x00){
		RegisterHardwareInterruptHandler(
			(void (*)())FOO->InterruptHandler, 
			IPin
		);
		LouKeWritePciCommandRegister(SataDev, CMD);
	}

	for(uint8_t i = 0 ; i < ConfigInfo->NumberOfAccessRanges; i++){
		ConfigInfo->AddressRanges[i] = (uint64_t)bars.address[i];
	}

	PHW_FIND_ADAPTER FindAdapter =  (PHW_FIND_ADAPTER)FOO->FindAdapter;

	FindAdapter(
		FOO->DeviceExtention,
		0,0, 0, ConfigInfo, 0  
	);


	//while (1);
}


NTSTATUS StorPortInitialize(
    PDRIVER_OBJECT DevObj,
    PUNICODE_STRING RegistryEntry,
    PSTORPORT_HW_INITIALIZATION_DATA HwInitializationData,
    PVOID HwContext
);

PVOID StorPortGetDeviceBase(
  _In_  PVOID   HwDeviceExtension,
  _In_  INTERFACE_TYPE BusType,
  _In_  ULONG   SystemIoBusNumber,
  _In_  PHYSICAL_ADDRESS IoAddress,
  _In_  ULONG   NumberOfBytes,
  _In_  BOOLEAN InIoSpace
);

bool
AhciHwStartIo (
    PVOID DeviceExtension,
    PSCSI_REQUEST_BLOCK Srb
){



	return true;
}

bool
AhciHwResetBus (
    PVOID AdapterExtension,
    ULONG PathId
){



	return true;
}

bool
AhciHwInterrupt (
    PVOID DeviceExtension
){



	return true;
}

bool
AhciHwInitialize (
    PVOID DeviceExtension
){

	return true;
}

BOOLEAN
AhciAdapterReset(
	PAHCI_ADAPTER_EXTENSION Extention
){
	LouPrint("AhciAdapterReset()\n");

	ULONG Jiffies = 0x00; 
	AHCI_GHC GHC;
	PAHCI_MEMORY_REGISTERS Abar = 0x00;

	Abar = Extention->ABAR;

	if(Abar == 0x00){
		//Sanity Check
		LouPrint("No Such Device\n");
		LouPrint("AhciAdapterReset() FAILED!!!\n");
		return STATUS_NO_SUCH_DEVICE;
	}

	//flip hard reset;
	GHC.Bits.HardRest = 1;

	//send the data
	Abar->GlobalHost = GHC.Status;

	for(Jiffies = 0x00; Jiffies < 50; Jiffies++){
		if((Abar->GlobalHost & 0x01) == 0){//controller reset
			break;
		}
		sleep(200);
	}

	if(Jiffies == 50){ //1 second
		LouPrint("Device Timeout\n");
		LouPrint("AhciAdapterReset() FAILED!!!\n");
		return false;
	}

	LouPrint("AhciAdapterReset() SUCCESS\n");
	return true;
}

BOOLEAN
AhciAllocateResources(
	PAHCI_ADAPTER_EXTENSION DeviceExtention,
	PPORT_CONFIGURATION_INFORMATION ConfigInfo
){
	LouPrint("AhciAllocateResources()\n");
	uint8_t PortCount;
	UNUSED ULONG NCS = (DeviceExtention->Capabilities >> 8) & 0xF;
	ULONG PortImplemented = DeviceExtention->PortImplemented;
	NCS = DeviceExtention->Capabilities & 0xF; //get port count

	for(PortCount = 32 - 1; PortCount < 32; PortCount--){
		if((PortImplemented & (1 << PortCount)) == 0){
			continue;
		}
		//else

		

	}

	LouPrint("AhciAllocateResources()\n");
	return true;
}

ULONG
AhciHwFindAdapter (
    PVOID DeviceExtension,
    PVOID HwContext,
    PVOID BusInformation,
    PCHAR ArgumentString,
    PPORT_CONFIGURATION_INFORMATION ConfigInfo,
    PBOOLEAN Reserved3
    ){
	LouPrint("AhciHwFindAdapter()\n");

	UNUSED AHCI_GHC GHC;
	uint64_t T = 0x00; 
	UCHAR PciBuf[sizeof(PCI_COMMON_CONFIG)];
	

	UNUSED PAHCI_MEMORY_REGISTERS abar = 0x00;
	PPCI_COMMON_CONFIG ConfigShit = 0x00;
	PAHCI_ADAPTER_EXTENSION adapterExtention = 0x00;
	adapterExtention = (PAHCI_ADAPTER_EXTENSION)DeviceExtension;

	if(adapterExtention == 0x00){
		//Sanity Check
		LouPrint ("AHCI.SYS: Invalid Parameter: AdapterExtention Is NULL\n");
		return STATUS_INVALID_PARAMETER;
	}

	adapterExtention->SlotNumber = ConfigInfo->SlotNumber;
	adapterExtention->SystemIoBusNumber = ConfigInfo->SystemIoBusNumber;

	GetPciConfiguration(
			adapterExtention->SystemIoBusNumber, 
			adapterExtention->SlotNumber,
			0,
			(PPCI_COMMON_CONFIG)PciBuf
		);

	ConfigShit = (PPCI_COMMON_CONFIG)PciBuf;
	
	if(ConfigShit == 0x00){
		//sanity check
		LouPrint ("AHCI.SYS: Invalid Parameter: PciConfigInfo Is NULL\n");
		return STATUS_INVALID_PARAMETER;
	}

	adapterExtention->VendorID = ConfigShit->Header.VendorID;
	adapterExtention->DeviceID = ConfigShit->Header.DeviceID;
	adapterExtention->RevisionID = ConfigShit->Header.RevisionID;

	adapterExtention->AhciBaseAddress = ConfigShit->Header.u.type0.BaseAddresses[5] & (0xFFFFFFF0);

	DbgPrint("VendorID: %04x  DeviceID: %04x  RevisionID: %02x\n",
                   adapterExtention->VendorID,
                   adapterExtention->DeviceID,
                   adapterExtention->RevisionID
	);

	//internal systems are givven the physical addresses by default because they are trusted
	abar = (PAHCI_MEMORY_REGISTERS)((uint64_t)ConfigShit->Header.u.type0.BaseAddresses[5] & (0xFFFFFFF0));

	if(abar == 0x00){
		LouPrint("AHCI.SYS: ABAR Is NULL\n");
		return STATUS_NO_SUCH_DEVICE;
	}

	adapterExtention->ABAR = abar;
	
	LouPrint("Abar Is%h\n", abar);

	LouMapAddress((uint64_t)abar, (uint64_t)abar, KERNEL_PAGE_WRITE_PRESENT, KILOBYTE_PAGE);

	adapterExtention->Capabilities = abar->Capabilities;
	adapterExtention->SecondaryCapabilities = abar->ExtendedCapabilities;
	adapterExtention->Version = abar->PortVersion;
	adapterExtention->LastInterruptPort = (ULONG)-1;

	GHC.Status = abar->GlobalHost;

	if(GHC.Bits.AhciEnable != 0){
		//controller running reset it
		LouPrint("Ahci Device Is Running, Calling RESET()\n");
		if(!AhciAdapterReset(adapterExtention)){
			LouPrint("Ahci Device Failed To Reset!!!\n");
			return STATUS_UNSUCCESSFUL;
		}

	}

	GHC.Status = 0;
	GHC.Bits.AhciEnable = 1;

	abar->GlobalHost = GHC.Status;

	T = (uint64_t)&abar->InterruptStat;
	if(T == 0x00){
		LouPrint("AHCI.SYS: InterruptStat Is NULL\n");
		return STATUS_NO_SUCH_DEVICE;
	}

	adapterExtention->InterruptStatus = (uint32_t*)T;
	adapterExtention->PortImplemented = abar->PortImplementation;

    if (adapterExtention->PortImplemented == 0)
    {
        LouPrint("adapterExtention->PortImplemented Is 0\n");
        return STATUS_NO_SUCH_DEVICE;
    }

	ConfigInfo->Master = true;
	ConfigInfo->AlignmentMask = 0x03;
	ConfigInfo->ScatterMeGather = true;
	ConfigInfo->DmaWidth = DmaWidth32;
	ConfigInfo->WmiDataProvider = false;
	ConfigInfo->Dma32Address = true;
	
	if((abar->Capabilities >> CheckAhci64) & 0x01){
		ConfigInfo->Dma64Address = true;
		LouPrint("Device Supports 64 Bit Addressing\n");
	}

	ConfigInfo->MaximumTargets = 1;
    ConfigInfo->ResetTargetSupport = true;
    ConfigInfo->NumberOfPhysicalBreks = 0x21;
    ConfigInfo->NumberOfLogicalUnits = 1;
    ConfigInfo->NumberOfBusses = 32;
    ConfigInfo->MaximumTransferLength = 255;
    ConfigInfo->SynchronizationModel = StorSynchronizeFullDuplex;

    // Turn IE -- Interrupt Enabled
    GHC.Status = abar->GlobalHost;
    GHC.Bits.InterruptEnable = 1;
	abar->GlobalHost = GHC.Status;

	if(!AhciAllocateResources(adapterExtention, ConfigInfo)){
		LouPrint("Error Allocating Resources\n");
		return STATUS_INSUFFICIENT_RESOURCES;
	}



	LouPrint("AhciHwFindAdapter() SUCCESS\n");
	while(1);
	return 0x00;
}

NTSTATUS
AhciDriverEntry(
	PDRIVER_OBJECT DriverObject,
	PUNICODE_STRING RegistryPath
){
	ULONG Status = STATUS_SUCCESS;
	LouPrint("AhciDriverEntry\n");
    STORPORT_HW_INITIALIZATION_DATA AhciInitializtionData = {0};

	AhciInitializtionData.HwInitializationDataSize = sizeof(STORPORT_HW_INITIALIZATION_DATA);
	
	// identity required miniport entry point routines
    AhciInitializtionData.HwStartIo = AhciHwStartIo;
    AhciInitializtionData.HwResetBus = AhciHwResetBus;
    AhciInitializtionData.HwInterrupt = AhciHwInterrupt;
    AhciInitializtionData.HwInitialize = AhciHwInitialize;
    AhciInitializtionData.HwFindAdapter = AhciHwFindAdapter;
    
	// adapter specific information
    AhciInitializtionData.TaggedQueuing = true;
    AhciInitializtionData.AutoRequestSense = true;
    AhciInitializtionData.MultipleRequestPerLu = true;
    AhciInitializtionData.NeedPhysicalAddresses = true;

	AhciInitializtionData.NumberOfAccessRanges = 6;
    AhciInitializtionData.AdapterInterfaceType = PCIBus;
    AhciInitializtionData.MapBuffers = STOR_MAP_NON_READ_WRITE_BUFFERS;

    // set required extension sizes
    AhciInitializtionData.SrbExtensionSize = sizeof(AHCI_SRB_EXTENSION);
    AhciInitializtionData.DeviceExtensionSize = sizeof(AHCI_ADAPTER_EXTENSION);

	    // register our hw init data
    Status = StorPortInitialize(DriverObject,
                                RegistryPath,
                                &AhciInitializtionData,
                                0x00);

	LouPrint("AhciDriverEntry() SUCCESS\n");
	return Status;
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