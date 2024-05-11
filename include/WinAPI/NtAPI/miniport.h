#include <LouDDK.h>
#include <NtAPI.h>

#ifndef _MINIPORT_H
#define _MINIPORT_H

#ifndef _BUS_DATA_TYPE
#define _BUS_DATA_TYPE
typedef enum _BUS_DATA_TYPE {
	ConfigurationSpaceUndefined,
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
} BUS_DATA_TYPE, * PBUS_DATA_TYPE;
#endif

typedef enum _INTERFACE_TYPE {
	InterfaceTypeUndefined,
	Internal,
	Isa,
	Eisa,
	MicroChannel,
	TurboChannel,
	PCIBus,
	VMEBus,
	NuBus,
	PCMCIABus,
	CBus,
	MPIBus,
	MPSABus,
	ProcessorInternal,
	InternalPowerBus,
	PNPISABus,
	PNPBus,
	Vmcs,
	ACPIBus,
	MaximumInterfaceType
} INTERFACE_TYPE, * PINTERFACE_TYPE;

typedef enum _IRQ_DEVICE_POLICY {
	IrqPolicyMachineDefault,
	IrqPolicyAllCloseProcessors,
	IrqPolicyOneCloseProcessor,
	IrqPolicyAllProcessorsInMachine,
	IrqPolicySpecifiedProcessors,
	IrqPolicySpreadMessagesAcrossAllProcessors,
	IrqPolicyAllProcessorsInMachineWhenSteered
} IRQ_DEVICE_POLICY, * PIRQ_DEVICE_POLICY;

typedef enum _IRQ_PRIORITY {
	IrqPriorityUndefined,
	IrqPriorityLow,
	IrqPriorityNormal,
	IrqPriorityHigh
} IRQ_PRIORITY, * PIRQ_PRIORITY;

typedef enum _KINTERRUPT_MODE {
	LevelSensitive,
	Latched
} KINTERRUPT_MODE;

typedef enum _KINTERRUPT_POLARITY {
	InterruptPolarityUnknown,
	InterruptActiveHigh,
	InterruptRisingEdge,
	InterruptActiveLow,
	InterruptFallingEdge,
	InterruptActiveBoth,
	InterruptActiveBothTriggerLow,
	InterruptActiveBothTriggerHigh
} KINTERRUPT_POLARITY, * PKINTERRUPT_POLARITY;

typedef enum _MEMORY_CACHING_TYPE {
	MmNonCached,
	MmCached,
	MmWriteCombined,
	MmHardwareCoherentCached,
	MmNonCachedUnordered,
	MmUSWCCached,
	MmMaximumCacheType,
	MmNotMapped
} MEMORY_CACHING_TYPE;

typedef enum {
	BusWidth32Bits,
	BusWidth64Bits
} PCI_BUS_WIDTH;

typedef struct _PCI_COMMON_CONFIG {
	UCHAR DeviceSpecific[192];
} PCI_COMMON_CONFIG, * PPCI_COMMON_CONFIG, PCI_COMMON_HEADER;

typedef struct _GROUP_AFFINITY {
	KAFFINITY Mask;
	USHORT    Group;
	USHORT    Reserved[3];
} GROUP_AFFINITY, * PGROUP_AFFINITY;

typedef enum {
	PciDeviceD3Cold_State_Disabled_BitIndex,
	PciDeviceD3Cold_State_Enabled_BitIndex,
	PciDeviceD3Cold_State_ParentRootPortS0WakeSupported_BitIndex,
	PciDeviceD3Cold_State_Disabled_Bridge_HackFlags_BitIndex,
	PciDeviceD3Cold_Reason_Default_State_BitIndex,
	PciDeviceD3Cold_Reason_INF_BitIndex,
	PciDeviceD3Cold_Reason_Interface_Api_BitIndex
} PCI_DEVICE_D3COLD_STATE_REASON;

typedef enum {
	L0sAndL1EntryDisabled,
	L0sEntryEnabled,
	L1EntryEnabled,
	L0sAndL1EntryEnabled
} PCI_EXPRESS_ASPM_CONTROL;

typedef enum {
	NoAspmSupport,
	L0sEntrySupport,
	L1EntrySupport,
	L0sAndL1EntrySupport
} PCI_EXPRESS_ASPM_SUPPORT;

typedef enum {
	SlotEmpty,
	CardPresent
} PCI_EXPRESS_CARD_PRESENCE;

typedef enum {
	PciExpressEndpoint,
	PciExpressLegacyEndpoint,
	PciExpressRootPort,
	PciExpressUpstreamSwitchPort,
	PciExpressDownstreamSwitchPort,
	PciExpressToPciXBridge,
	PciXToExpressBridge,
	PciExpressRootComplexIntegratedEndpoint,
	PciExpressRootComplexEventCollector
} PCI_EXPRESS_DEVICE_TYPE;

typedef enum {
	IndicatorOn,
	IndicatorBlink,
	IndicatorOff
} PCI_EXPRESS_INDICATOR_STATE;

typedef enum {
	L0s_Below64ns,
	L0s_64ns_128ns,
	L0s_128ns_256ns,
	L0s_256ns_512ns,
	L0s_512ns_1us,
	L0s_1us_2us,
	L0s_2us_4us,
	L0s_Above4us
} PCI_EXPRESS_L0s_EXIT_LATENCY;

typedef enum {
	L1_Below1us,
	L1_1us_2us,
	L1_2us_4us,
	L1_4us_8us,
	L1_8us_16us,
	L1_16us_32us,
	L1_32us_64us,
	L1_Above64us
} PCI_EXPRESS_L1_EXIT_LATENCY;

typedef enum {
	MRLClosed,
	MRLOpen
} PCI_EXPRESS_MRL_STATE;

typedef enum {
	PowerOn,
	PowerOff
} PCI_EXPRESS_POWER_STATE;

typedef enum {
	RCB64Bytes,
	RCB128Bytes
} PCI_EXPRESS_RCB;

typedef struct _PCI_SLOT_NUMBER {
	union {
		struct {
			ULONG DeviceNumber : 5;
			ULONG FunctionNumber : 3;
			ULONG Reserved : 24;
		} bits;
		ULONG AsULONG;
	} u;
} PCI_SLOT_NUMBER, * PPCI_SLOT_NUMBER;

typedef union _PCI_EXPRESS_LINK_CAPABILITIES_2_REGISTER {
	struct {
		ULONG Rsvd0 : 1;
		ULONG SupportedLinkSpeedsVector : 7;
		ULONG Rsvd8_31 : 24;
	} DUMMYSTRUCTNAME;
	ULONG  AsULONG;
} PCI_EXPRESS_LINK_CAPABILITIES_2_REGISTER, * PPCI_EXPRESS_LINK_CAPABILITIES_2_REGISTER;

typedef union _PCI_EXPRESS_LINK_CONTROL_2_REGISTER {
	struct {
		USHORT TargetLinkSpeed : 4;
		USHORT Rsvd4_15 : 12;
	} DUMMYSTRUCTNAME;
	USHORT AsUSHORT;
} PCI_EXPRESS_LINK_CONTROL_2_REGISTER, * PPCI_EXPRESS_LINK_CONTROL_2_REGISTER;

typedef union _PCI_EXPRESS_LINK_STATUS_2_REGISTER {
	struct {
		USHORT Rsvd0_15 : 16;
	} DUMMYSTRUCTNAME;
	USHORT AsUSHORT;
} PCI_EXPRESS_LINK_STATUS_2_REGISTER, * PPCI_EXPRESS_LINK_STATUS_2_REGISTER;

typedef enum {
	PciExpressPciPmLinkSubState_L11_BitIndex,
	PciExpressPciPmLinkSubState_L12_BitIndex,
	PciExpressASPMLinkSubState_L11_BitIndex,
	PciExpressASPMLinkSubState_L12_BitIndex
} PCI_EXPRESS_LINK_SUBSTATE;

typedef struct _PCI_VENDOR_SPECIFIC_CAPABILITY {
	PCI_CAPABILITIES_HEADER Header;
	UCHAR                   VscLength;
	UCHAR                   VendorSpecific;
} PCI_VENDOR_SPECIFIC_CAPABILITY, * PPCI_VENDOR_SPECIFIC_CAPABILITY;

typedef struct _PROCESSOR_NUMBER {
	USHORT Group;
	UCHAR  Number;
	UCHAR  Reserved;
} PROCESSOR_NUMBER, * PPROCESSOR_NUMBER;




typedef struct _IO_RESOURCE_DESCRIPTOR {
	UCHAR  Option;
	UCHAR  Type;
	UCHAR  ShareDisposition;
	UCHAR  Spare1;
	USHORT Flags;
	USHORT Spare2;
	union {
		struct {
			ULONG Length;
			ULONG Alignment;
			PHYSICAL_ADDRESS MinimumAddress;
			PHYSICAL_ADDRESS MaximumAddress;
		} Port;
		struct {
			ULONG Length;
			ULONG Alignment;
			PHYSICAL_ADDRESS MinimumAddress;
			PHYSICAL_ADDRESS MaximumAddress;
		} Memory;
		struct {
			ULONG MinimumVector;
			ULONG MaximumVector;

			IRQ_DEVICE_POLICY AffinityPolicy;
			USHORT Group;

			IRQ_PRIORITY PriorityPolicy;
			KAFFINITY TargetedProcessors;
		} Interrupt;
		struct {
			ULONG MinimumChannel;
			ULONG MaximumChannel;
		} Dma;
		struct {
			ULONG RequestLine;
			ULONG Reserved;
			ULONG Channel;
			ULONG TransferWidth;
		} DmaV3;
		struct {
			ULONG Length;
			ULONG Alignment;
			PHYSICAL_ADDRESS MinimumAddress;
			PHYSICAL_ADDRESS MaximumAddress;
		} Generic;
		struct {
			ULONG Data[3];
		} DevicePrivate;
		struct {
			ULONG Length;
			ULONG MinBusNumber;
			ULONG MaxBusNumber;
			ULONG Reserved;
		} BusNumber;
		struct {
			ULONG Priority;
			ULONG Reserved1;
			ULONG Reserved2;
		} ConfigData;
		struct {
			ULONG Length40;
			ULONG Alignment40;
			PHYSICAL_ADDRESS MinimumAddress;
			PHYSICAL_ADDRESS MaximumAddress;
		} Memory40;
		struct {
			ULONG Length48;
			ULONG Alignment48;
			PHYSICAL_ADDRESS MinimumAddress;
			PHYSICAL_ADDRESS MaximumAddress;
		} Memory48;
		struct {
			ULONG Length64;
			ULONG Alignment64;
			PHYSICAL_ADDRESS MinimumAddress;
			PHYSICAL_ADDRESS MaximumAddress;
		} Memory64;
		struct {
			UCHAR Class;
			UCHAR Type;
			UCHAR Reserved1;
			UCHAR Reserved2;
			ULONG IdLowPart;
			ULONG IdHighPart;
		} Connection;
	} u;
} IO_RESOURCE_DESCRIPTOR, * PIO_RESOURCE_DESCRIPTOR;


typedef struct _IO_RESOURCE_DESCRIPTORV2 {
	UCHAR  Option;
	UCHAR  Type;
	UCHAR  ShareDisposition;
	UCHAR  Spare1;
	USHORT Flags;
	USHORT Spare2;
	union {
		struct {
			ULONG Length;
			ULONG Alignment;
			PHYSICAL_ADDRESS MinimumAddress;
			PHYSICAL_ADDRESS MaximumAddress;
		} Port;
		struct {
			ULONG Length;
			ULONG Alignment;
			PHYSICAL_ADDRESS MinimumAddress;
			PHYSICAL_ADDRESS MaximumAddress;
		} Memory;
		struct {
			ULONG MinimumVector;
			ULONG MaximumVector;
			IRQ_DEVICE_POLICY AffinityPolicy;
			IRQ_PRIORITY PriorityPolicy;
			KAFFINITY TargetedProcessors;
		} Interrupt;
		struct {
			ULONG MinimumChannel;
			ULONG MaximumChannel;
		} Dma;
		struct {
			ULONG RequestLine;
			ULONG Reserved;
			ULONG Channel;
			ULONG TransferWidth;
		} DmaV3;
		struct {
			ULONG Length;
			ULONG Alignment;
			PHYSICAL_ADDRESS MinimumAddress;
			PHYSICAL_ADDRESS MaximumAddress;
		} Generic;
		struct {
			ULONG Data[3];
		} DevicePrivate;
		struct {
			ULONG Length;
			ULONG MinBusNumber;
			ULONG MaxBusNumber;
			ULONG Reserved;
		} BusNumber;
		struct {
			ULONG Priority;
			ULONG Reserved1;
			ULONG Reserved2;
		} ConfigData;
		struct {
			ULONG Length40;
			ULONG Alignment40;
			PHYSICAL_ADDRESS MinimumAddress;
			PHYSICAL_ADDRESS MaximumAddress;
		} Memory40;
		struct {
			ULONG Length48;
			ULONG Alignment48;
			PHYSICAL_ADDRESS MinimumAddress;
			PHYSICAL_ADDRESS MaximumAddress;
		} Memory48;
		struct {
			ULONG Length64;
			ULONG Alignment64;
			PHYSICAL_ADDRESS MinimumAddress;
			PHYSICAL_ADDRESS MaximumAddress;
		} Memory64;
		struct {
			UCHAR Class;
			UCHAR Type;
			UCHAR Reserved1;
			UCHAR Reserved2;
			ULONG IdLowPart;
			ULONG IdHighPart;
		} Connection;
	} u;
} IO_RESOURCE_DESCRIPTORV2, * PIO_RESOURCE_DESCRIPTORV2;

typedef struct _IO_RESOURCE_LIST {
  USHORT Version;
  USHORT Revision;
  ULONG Count;
  IO_RESOURCE_DESCRIPTOR Descriptors[1];
} IO_RESOURCE_LIST, *PIO_RESOURCE_LIST;

typedef struct _IO_RESOURCE_REQUIREMENTS_LIST {
  ULONG ListSize;
  INTERFACE_TYPE InterfaceType;
  ULONG BusNumber;
  ULONG SlotNumber;
  ULONG Reserved[3];
  ULONG AlternativeLists;
  IO_RESOURCE_LIST List[1];
} IO_RESOURCE_REQUIREMENTS_LIST, *PIO_RESOURCE_REQUIREMENTS_LIST;

typedef struct _INTERFACE {
	USHORT Size;
	USHORT Version;
	PVOID Context;
	PINTERFACE_REFERENCE InterfaceReference;
	PINTERFACE_DEREFERENCE InterfaceDereference;
} INTERFACE, * PINTERFACE;


#define FIELD_OFFSET(type, field) ((LONG_PTR)(&((type *)0)->field))


typedef struct _EMULATOR_ACCESS_ENTRY {
	ULONG BasePort;
	ULONG NumConsecutivePorts;
	EMULATOR_PORT_ACCESS_TYPE AccessType;
	UCHAR AccessMode;
	UCHAR StringSupport;
	PVOID Routine;
} EMULATOR_ACCESS_ENTRY, * PEMULATOR_ACCESS_ENTRY;

typedef struct _CM_MCA_POS_DATA {
	USHORT AdapterId;
	UCHAR  PosData1;
	UCHAR  PosData2;
	UCHAR  PosData3;
	UCHAR  PosData4;
} CM_MCA_POS_DATA, * PCM_MCA_POS_DATA;

typedef struct _CM_EISA_SLOT_INFORMATION {
	UCHAR  ReturnCode;
	UCHAR  ReturnFlags;
	UCHAR  MajorRevision;
	UCHAR  MinorRevision;
	USHORT Checksum;
	UCHAR  NumberFunctions;
	UCHAR  FunctionInformation;
	ULONG  CompressedId;
} CM_EISA_SLOT_INFORMATION, * PCM_EISA_SLOT_INFORMATION;


typedef struct _EISA_MEMORY_CONFIGURATION {
	EISA_MEMORY_TYPE ConfigurationByte;
	UCHAR DataSize;
	USHORT AddressLowWord;
	UCHAR AddressHighByte;
	USHORT MemorySize;
} EISA_MEMORY_CONFIGURATION, * PEISA_MEMORY_CONFIGURATION;

typedef struct _EISA_IRQ_CONFIGURATION {
	EISA_IRQ_DESCRIPTOR ConfigurationByte;
	UCHAR Reserved;
} EISA_IRQ_CONFIGURATION, * PEISA_IRQ_CONFIGURATION;

typedef struct _EISA_DMA_CONFIGURATION {
	DMA_CONFIGURATION_BYTE0 ConfigurationByte0;
	DMA_CONFIGURATION_BYTE1 ConfigurationByte1;
} EISA_DMA_CONFIGURATION, * PEISA_DMA_CONFIGURATION;

typedef struct _EISA_PORT_CONFIGURATION {
	EISA_PORT_DESCRIPTOR Configuration;
	USHORT PortAddress;
} EISA_PORT_CONFIGURATION, * PEISA_PORT_CONFIGURATION;


typedef struct _CM_EISA_FUNCTION_INFORMATION {
	ULONG                     CompressedId;
	UCHAR                     IdSlotFlags1;
	UCHAR                     IdSlotFlags2;
	UCHAR                     MinorRevision;
	UCHAR                     MajorRevision;
	UCHAR                     Selections[26];
	UCHAR                     FunctionFlags;
	UCHAR                     TypeString[80];
	EISA_MEMORY_CONFIGURATION EisaMemory[9];
	EISA_IRQ_CONFIGURATION    EisaIrq[7];
	EISA_DMA_CONFIGURATION    EisaDma[4];
	EISA_PORT_CONFIGURATION   EisaPort[20];
	UCHAR                     InitializationData[60];
} CM_EISA_FUNCTION_INFORMATION, * PCM_EISA_FUNCTION_INFORMATION;


unsigned char _BitTest64(
	__int64 const* Base,
	__int64       Index
);

unsigned char _BitTestAndComplement64(
	__int64* Base,
	__int64 Index
);

unsigned char _BitTestAndReset64(
	__int64* Base,
	__int64 Index
);

unsigned char _BitTestAndSet64(
	__int64* Base,
	__int64 Index
);

void _ReadWriteBarrier();

void BarrierAfterRead();

void BarrierAfterReadR1();

void BarrierAfterReadR2();

LONG InterlockedAnd(
	_In_ _Out_ LONG volatile* Destination,
	_In_      LONG          Value
);

LONG InterlockedCompareExchange(
	_In_ _Out_ LONG volatile* Destination,
	LONG          ExChange,
	LONG          Comperand
);

PVOID InterlockedCompareExchangePointer(
	_In_ _Out_ PVOID volatile* Destination,
	_In_      PVOID          Exchange,
	PVOID          Comperand
);

LONG InterlockedDecrement(
	_In_ _Out_ LONG volatile* Addend
);

//Copy From Here

LONG InterlockedExchange(
	_In_ _Out_ LONG volatile* Target,
	_In_      LONG          Value
);

LONG InterlockedExchangeAdd(
	_In_ _Out_ LONG volatile* Addend,
	_In_      LONG          Value
);

PVOID InterlockedExchangePointer(
	_In_ _Out_      PVOID volatile* Target,
	_In_opt_ PVOID          Value
);

LONG InterlockedIncrement(
	_In_ _Out_ LONG volatile* Addend
);

LONG InterlockedOr(
	_In_ _Out_ LONG volatile* Destination,
	_In_      LONG          Value
);

LONG InterlockedXor(
	_In_ _Out_ LONG volatile* Destination,
	_In_      LONG          Value
);

//PINTERFACE_DEREFERENCE PinterfaceDereference;

void PinterfaceDereference(
	_In_ PVOID Context
);

void PinterfaceReference(
	_In_ PVOID Context
);

void READ_PORT_BUFFER_UCHAR(
	_In_  PUCHAR Port,
	_Out_ PUCHAR Buffer,
	_In_  ULONG  Count
);

void READ_PORT_BUFFER_ULONG(
	_In_  PULONG Port,
	_Out_ PULONG Buffer,
	_In_  ULONG  Count
);

void READ_PORT_BUFFER_USHORT(
	_In_  PUSHORT Port,
	_Out_ PUSHORT Buffer,
	_In_  ULONG   Count
);

UCHAR READ_PORT_UCHAR(
	_In_ PUCHAR Port
);

ULONG READ_PORT_ULONG(
	_In_ PULONG Port
);

USHORT READ_PORT_USHORT(
	_In_ PUSHORT Port
);

void READ_REGISTER_BUFFER_UCHAR(
	_In_  volatile UCHAR* Register,
	_Out_ PUCHAR         Buffer,
	_In_  ULONG          Count
);

void READ_REGISTER_BUFFER_ULONG(
	_In_  volatile ULONG* Register,
	_Out_ PULONG         Buffer,
	_In_  ULONG          Count
);

void READ_REGISTER_BUFFER_USHORT(
	_In_  volatile USHORT* Register,
	_Out_ PUSHORT         Buffer,
	_In_  ULONG           Count
);

UCHAR READ_REGISTER_UCHAR(
	_In_ volatile UCHAR* Register
);

ULONG READ_REGISTER_ULONG(
	_In_ volatile ULONG* Register
);

USHORT READ_REGISTER_USHORT(
	_In_ volatile USHORT* Register
);

UCHAR ReadBooleanRaw(
	_In_ BOOLEAN const volatile* Source
);

INT32 ReadInt32Acquire(
	_In_ INT32 const volatile* Source
);

INT32 ReadInt32NoFence(
	_In_ INT32 const volatile* Source
);

INT32 ReadInt32Raw(
	_In_ INT32 const volatile* Source
);

UINT32 ReadUInt32Acquire(
	_In_ UINT32 const volatile* Source
);

UINT32 ReadUInt32NoFence(
	_In_ UINT32 const volatile* Source
);

UINT32 ReadUInt32Raw(
	_In_ UINT32 const volatile* Source
);

void WRITE_PORT_BUFFER_UCHAR(
	_In_ PUCHAR Port,
	_In_ PUCHAR Buffer,
	_In_ ULONG  Count
);

void WRITE_PORT_BUFFER_ULONG(
	_In_ PULONG Port,
	_In_ PULONG Buffer,
	_In_ ULONG  Count
);

void WRITE_PORT_BUFFER_USHORT(
	_In_ PUSHORT Port,
	_In_ PUSHORT Buffer,
	_In_ ULONG   Count
);

void WRITE_PORT_UCHAR(
	_In_ PUCHAR Port,
	_In_ UCHAR  Value
);

void WRITE_PORT_ULONG(
	_In_ PULONG Port,
	_In_ ULONG  Value
);

void WRITE_PORT_USHORT(
	_In_ PUSHORT Port,
	_In_ USHORT  Value
);

void WRITE_REGISTER_BUFFER_UCHAR(
	_In_ volatile UCHAR* Register,
	_In_ PUCHAR         Buffer,
	_In_ ULONG          Count
);

void WRITE_REGISTER_BUFFER_ULONG(
	_In_ volatile ULONG* Register,
	_In_ PULONG         Buffer,
	_In_ ULONG          Count
);

void WRITE_REGISTER_BUFFER_USHORT(
	_In_ volatile USHORT* Register,
	_In_ PUSHORT         Buffer,
	_In_ ULONG           Count
);

void WRITE_REGISTER_UCHAR(
	_In_ volatile UCHAR* Register,
	_In_ UCHAR          Value
);

void WRITE_REGISTER_ULONG(
	_In_ volatile ULONG* Register,
	_In_ ULONG          Value
);

void WRITE_REGISTER_USHORT(
	_In_ volatile USHORT* Register,
	_In_ USHORT          Value
);

void WriteInt32NoFence(
	_Out_ INT32 volatile* Destination,
	_In_  INT32          Value
);

void WriteInt32Raw(
	_Out_ INT32 volatile* Destination,
	_In_  INT32          Value
);

void WriteInt32Release(
	_Out_ INT32 volatile* Destination,
	_In_  INT32          Value
);

void WriteUInt32NoFence(
	_Out_ UINT32 volatile* Destination,
	_In_  UINT32          Value
);

void WriteUInt32Raw(
	_Out_ UINT32 volatile* Destination,
	_In_  UINT32          Value
);

void WriteUInt32Release(
	_Out_ UINT32 volatile* Destination,
	_In_  UINT32          Value
);
#endif