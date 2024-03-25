
#include <NtAPI.h>

#ifndef _NTDDK_H
#define _NTDDK_H

typedef enum _BDCB_CALLBACK_TYPE {
	BdCbStatusUpdate,
	BdCbInitializeImage
} BDCB_CALLBACK_TYPE, * PBDCB_CALLBACK_TYPE;

typedef enum _BDCB_CLASSIFICATION {
	BdCbClassificationUnknownImage,
	BdCbClassificationKnownGoodImage,
	BdCbClassificationKnownBadImage,
	BdCbClassificationKnownBadImageBootCritical,
	BdCbClassificationEnd
} BDCB_CLASSIFICATION, * PBDCB_CLASSIFICATION;

typedef enum _BDCB_STATUS_UPDATE_TYPE {
	BdCbStatusPrepareForDependencyLoad,
	BdCbStatusPrepareForDriverLoad,
	BdCbStatusPrepareForUnload
} BDCB_STATUS_UPDATE_TYPE, * PBDCB_STATUS_UPDATE_TYPE;

typedef enum _HAL_QUERY_INFORMATION_CLASS {
	HalInstalledBusInformation,
	HalProfileSourceInformation,
	HalInformationClassUnused1,
	HalPowerInformation,
	HalProcessorSpeedInformation,
	HalCallbackInformation,
	HalMapRegisterInformation,
	HalMcaLogInformation,
	HalFrameBufferCachingInformation,
	HalDisplayBiosInformation,
	HalProcessorFeatureInformation,
	HalNumaTopologyInterface,
	HalErrorInformation,
	HalCmcLogInformation,
	HalCpeLogInformation,
	HalQueryMcaInterface,
	HalQueryAMLIIllegalIOPortAddresses,
	HalQueryMaxHotPlugMemoryAddress,
	HalPartitionIpiInterface,
	HalPlatformInformation,
	HalQueryProfileSourceList,
	HalInitLogInformation,
	HalFrequencyInformation,
	HalProcessorBrandString,
	HalHypervisorInformation,
	HalPlatformTimerInformation,
	HalAcpiAuditInformation,
	HalIrtInformation,
	HalSecondaryInterruptInformation,
	HalParkingPageInformation,
	HalNumaRangeTableInformation,
	HalChannelTopologyInformation,
	HalExternalCacheInformation,
	HalQueryDebuggerInformation,
	HalFwBootPerformanceInformation,
	HalFwS3PerformanceInformation,
	HalGetChannelPowerInformation,
	HalQueryStateElementInformation,
	HalPsciInformation,
	HalInterruptControllerInformation,
	HalQueryIommuReservedRegionInformation,
	HalQueryArmErrataInformation,
	HalQueryProcessorEfficiencyInformation,
	HalQueryAcpiWakeAlarmSystemPowerStateInformation,
	HalQueryProfileNumberOfCounters,
	HalQueryHyperlaunchEntrypoint,
	HalHardwareWatchdogInformation,
	HalDmaRemappingInformation,
	HalQueryUnused0001,
	HalHeterogeneousMemoryAttributesInterface,
	HalQueryPerDeviceMsiLimitInformation,
	HalQueryProfileCorruptionStatus,
	HalQueryProfileCounterOwnership
} HAL_QUERY_INFORMATION_CLASS, * PHAL_QUERY_INFORMATION_CLASS;

typedef enum _HAL_SET_INFORMATION_CLASS {
	HalProfileSourceInterval,
	HalProfileSourceInterruptHandler,
	HalMcaRegisterDriver,
	HalKernelErrorHandler,
	HalCmcRegisterDriver,
	HalCpeRegisterDriver,
	HalMcaLog,
	HalCmcLog,
	HalCpeLog,
	HalGenerateCmcInterrupt,
	HalProfileSourceTimerHandler,
	HalEnlightenment,
	HalProfileDpgoSourceInterruptHandler,
	HalRegisterSecondaryInterruptInterface,
	HalSetChannelPowerInformation,
	HalI386ExceptionChainTerminatorInformation,
	HalSetResetParkDisposition,
	HalSetPsciSuspendMode,
	HalSetHvciEnabled,
	HalSetProcessorTraceInterruptHandler,
	HalProfileSourceAdd,
	HalProfileSourceRemove,
	HalSetSwInterruptHandler,
	HalSetClockTimerMinimumInterval
} HAL_SET_INFORMATION_CLASS, * PHAL_SET_INFORMATION_CLASS;


typedef enum {
	ApicDestinationModePhysical,
	ApicDestinationModeLogicalFlat,
	ApicDestinationModeLogicalClustered,
	ApicDestinationModeUnknown
} HAL_APIC_DESTINATION_MODE, * PHAL_APIC_DESTINATION_MODE;

typedef struct _BDCB_IMAGE_INFORMATION {
	BDCB_CLASSIFICATION Classification;
	ULONG               ImageFlags;
	UNICODE_STRING      ImageName;
	UNICODE_STRING      RegistryPath;
	UNICODE_STRING      CertificatePublisher;
	UNICODE_STRING      CertificateIssuer;
	PVOID               ImageHash;
	PVOID               CertificateThumbprint;
	ULONG               ImageHashAlgorithm;
	ULONG               ThumbprintHashAlgorithm;
	ULONG               ImageHashLength;
	ULONG               CertificateThumbprintLength;
} BDCB_IMAGE_INFORMATION, * PBDCB_IMAGE_INFORMATION;

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

typedef struct _CONFIGURATION_INFORMATION {
	ULONG   DiskCount;
	ULONG   FloppyCount;
	ULONG   CdRomCount;
	ULONG   TapeCount;
	ULONG   ScsiPortCount;
	ULONG   SerialCount;
	ULONG   ParallelCount;
	BOOLEAN AtDiskPrimaryAddressClaimed;
	BOOLEAN AtDiskSecondaryAddressClaimed;
	ULONG   Version;
	ULONG   MediumChangerCount;
} CONFIGURATION_INFORMATION, * PCONFIGURATION_INFORMATION;

/*
typedef struct _BDCB_STATUS_UPDATE_CONTEXT {
	BDCB_STATUS_UPDATE_TYPE StatusType;
} BDCB_STATUS_UPDATE_CONTEXT, * PBDCB_STATUS_UPDATE_CONTEXT;


typedef struct _CONTEXT {
	ULONG              ContextFlags;
	ULONG              Dr0;
	ULONG              Dr1;
	ULONG              Dr2;
	ULONG              Dr3;
	ULONG              Dr6;
	ULONG              Dr7;
	FLOATING_SAVE_AREA FloatSave;
	ULONG              SegGs;
	ULONG              SegFs;
	ULONG              SegEs;
	ULONG              SegDs;
	ULONG              Edi;
	ULONG              Esi;
	ULONG              Ebx;
	ULONG              Edx;
	ULONG              Ecx;
	ULONG              Eax;
	ULONG              Ebp;
	ULONG              Eip;
	ULONG              SegCs;
	ULONG              EFlags;
	ULONG              Esp;
	ULONG              SegSs;
	UCHAR              ExtendedRegisters[MAXIMUM_SUPPORTED_EXTENSION];
} CONTEXT;
*/


typedef struct _CONTROLLER_OBJECT {
	SHORT        Type;
	SHORT        Size;
	PVOID         ControllerExtension;
	KDEVICE_QUEUE DeviceWaitQueue;
	ULONG         Spare1;
	LARGE_INTEGER Spare2;
} CONTROLLER_OBJECT, * PCONTROLLER_OBJECT;
/*
typedef struct CORRELATION_VECTOR {
	CHAR Version;
	CHAR Vector[RTL_CORRELATION_VECTOR_STRING_LENGTH];
} CORRELATION_VECTOR;
*/

typedef struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG {
	ULONG  Size;
	PCWSTR TriggerId;
} CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG, * PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG;

typedef struct {
	UCHAR   Type;
	BOOLEAN Valid;
	union {
		UCHAR Reserved[2];
		struct {
			UCHAR BitWidth;
			UCHAR AccessSize;
		};
	};
	PUCHAR  TranslatedAddress;
	ULONG   Length;
} DEBUG_DEVICE_ADDRESS, * PDEBUG_DEVICE_ADDRESS;
/*
typedef struct {
	PHYSICAL_ADDRESS Start;
	PHYSICAL_ADDRESS MaxEnd;
	PVOID            VirtualAddress;
	ULONG            Length;
	BOOLEAN          Cached;
	BOOLEAN          Aligned;
} DEBUG_MEMORY_REQUIREMENTS, * PDEBUG_MEMORY_REQUIREMENTS;

typedef struct _EFI_ACPI_RAS_SIGNAL_TABLE {
	WHEA_ACPI_HEADER Header;
	UINT32           NumberRecord;
	SIGNAL_REG_VALUE Entries[ANY_SIZE];
} EFI_ACPI_RAS_SIGNAL_TABLE, * PEFI_ACPI_RAS_SIGNAL_TABLE;
*/

typedef struct _FILE_ALIGNMENT_INFORMATION {
	ULONG AlignmentRequirement;
} FILE_ALIGNMENT_INFORMATION, * PFILE_ALIGNMENT_INFORMATION;

typedef struct _FILE_ATTRIBUTE_TAG_INFORMATION {
	ULONG FileAttributes;
	ULONG ReparseTag;
} FILE_ATTRIBUTE_TAG_INFORMATION, * PFILE_ATTRIBUTE_TAG_INFORMATION;

typedef struct _FILE_DISPOSITION_INFORMATION {
	BOOLEAN DeleteFile;
} FILE_DISPOSITION_INFORMATION, * PFILE_DISPOSITION_INFORMATION;

typedef struct _FILE_END_OF_FILE_INFORMATION {
	LARGE_INTEGER EndOfFile;
} FILE_END_OF_FILE_INFORMATION, * PFILE_END_OF_FILE_INFORMATION;

typedef struct _FILE_NAME_INFORMATION {
	ULONG FileNameLength;
	WCHAR FileName[1];
} FILE_NAME_INFORMATION, * PFILE_NAME_INFORMATION;

typedef struct _FILE_VALID_DATA_LENGTH_INFORMATION {
	LARGE_INTEGER ValidDataLength;
} FILE_VALID_DATA_LENGTH_INFORMATION, * PFILE_VALID_DATA_LENGTH_INFORMATION;
/*
typedef struct {
	ULONG                          Version;
	pHalQuerySystemInformation     HalQuerySystemInformation;
	pHalSetSystemInformation       HalSetSystemInformation;
	pHalQueryBusSlots              HalQueryBusSlots;
	ULONG                          Spare1;
	pHalExamineMBR                 HalExamineMBR;
	pHalIoReadPartitionTable       HalIoReadPartitionTable;
	pHalIoSetPartitionInformation  HalIoSetPartitionInformation;
	pHalIoWritePartitionTable      HalIoWritePartitionTable;
	pHalHandlerForBus              HalReferenceHandlerForBus;
	pHalReferenceBusHandler        HalReferenceBusHandler;
	pHalReferenceBusHandler        HalDereferenceBusHandler;
	pHalInitPnpDriver              HalInitPnpDriver;
	pHalInitPowerManagement        HalInitPowerManagement;
	pHalGetDmaAdapter              HalGetDmaAdapter;
	pHalGetInterruptTranslator     HalGetInterruptTranslator;
	pHalStartMirroring             HalStartMirroring;
	pHalEndMirroring               HalEndMirroring;
	pHalMirrorPhysicalMemory       HalMirrorPhysicalMemory;
	pHalEndOfBoot                  HalEndOfBoot;
	pHalMirrorVerify               HalMirrorVerify;
	pHalGetAcpiTable               HalGetCachedAcpiTable;
	pHalSetPciErrorHandlerCallback HalSetPciErrorHandlerCallback;
	pHalGetPrmCache                HalGetPrmCache;
} HAL_DISPATCH, * PHAL_DISPATCH;
*/

typedef enum _HARDWARE_COUNTER_TYPE {
	PMCCounter,
	MaxHardwareCounterType
} HARDWARE_COUNTER_TYPE, * PHARDWARE_COUNTER_TYPE;

typedef struct _HARDWARE_COUNTER {
	HARDWARE_COUNTER_TYPE Type;
	ULONG                 Reserved;
	ULONG64               Index;
} HARDWARE_COUNTER, * PHARDWARE_COUNTER;

typedef struct _IMAGE_INFO {
	union {
		ULONG Properties;
		struct {
			ULONG ImageAddressingMode : 8;
			ULONG SystemModeImage : 1;
			ULONG ImageMappedToAllPids : 1;
			ULONG ExtendedInfoPresent : 1;
			ULONG MachineTypeMismatch : 1;
			ULONG ImageSignatureLevel : 4;
			ULONG ImageSignatureType : 3;
			ULONG ImagePartialMap : 1;
			ULONG Reserved : 12;
		};
	};
	PVOID  ImageBase;
	ULONG  ImageSelector;
	SIZE_T ImageSize;
	ULONG  ImageSectionNumber;
} IMAGE_INFO, * PIMAGE_INFO;

typedef struct _IMAGE_INFO_EX {
	SIZE_T              Size;
	IMAGE_INFO          ImageInfo;
	struct _FILE_OBJECT* FileObject;
} IMAGE_INFO_EX, * PIMAGE_INFO_EX;

typedef struct _IO_FOEXT_SHADOW_FILE {
	struct _FILE_OBJECT* BackingFileObject;
	PVOID        BackingFltInstance;
} IO_FOEXT_SHADOW_FILE, * PIO_FOEXT_SHADOW_FILE;

NTSTATUS IoAllocateAdapterChannel(
	//PADAPTER_OBJECT AdapterObject,
	PDEVICE_OBJECT  DeviceObject,
	ULONG           NumberOfMapRegisters,
	PDRIVER_CONTROL ExecutionRoutine,
	PVOID           Context
);

BOOLEAN WheaSignalHandlerOverrideCallback(
	_In_ _Out_opt_ UINT_PTR Context
);

void BootDriverCallbackFunction(
	PVOID CallbackContext,
	BDCB_CALLBACK_TYPE Classification,
	PBDCB_IMAGE_INFORMATION ImageInformation
);


void CUSTOM_SYSTEM_EVENT_TRIGGER_INIT(
	PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG Config,
	PCWSTR                              TriggerId
);


void DriverReinitialize(
	_In_          _DRIVER_OBJECT* DriverObject,
	_In_opt_ PVOID Context,
	_In_           ULONG Count
);

void ExFreePool(
	uintptr_t a
);

void ExpandStackCallout(
	_In_opt_ PVOID Parameter
);

void ExRaiseDatatypeMisalignment();

void ExRaiseAccessViolation();

NTSTATUS ExUuidCreate(
	//_Out_ UUID* Uuid
);

NTSTATUS HalAllocateHardwareCounters(
	PGROUP_AFFINITY                 GroupAffinty,
	_In_  ULONG                           GroupCount//,
	//_In_  PPHYSICAL_COUNTER_RESOURCE_LIST ResourceList,
	//_Out_ PHANDLE                         CounterSetHandle
);

void HalExamineMBR(
	_In_  PDEVICE_OBJECT DeviceObject,
	_In_  ULONG          SectorSize,
	_In_  ULONG          MBRTypeIdentifier,
	_Out_ PVOID* Buffer
);

NTSTATUS HalFreeHardwareCounters(
	//_In_HANDLE CounterSetHandle
);


//WARNING BACKPATIBLE FUNCTIONS STABILITY THREAT
ULONG HalGetBusDataByOffset(
	_In_ BUS_DATA_TYPE BusDataType,
	_In_ ULONG         BusNumber,
	_In_ ULONG         SlotNumber,
	_In_ PVOID         Buffer,
	_In_ ULONG         Offset,
	_In_ ULONG         Length
);

ULONG HalSetBusDataByOffset(
	_In_ BUS_DATA_TYPE BusDataType,
	_In_ ULONG         BusNumber,
	_In_ ULONG         SlotNumber,
	_In_ PVOID         Buffer,
	_In_ ULONG         Offset,
	_In_ ULONG         Length
);

void IoAllocateController(
	_In_           PCONTROLLER_OBJECT ControllerObject,
	_In_           PDEVICE_OBJECT     DeviceObject,
	_In_           PDRIVER_CONTROL    ExecutionRoutine,
	_In_opt_ PVOID              Context
);

void IoAssignArcName(
	_In_  ArcName,
	_In_  DeviceName
);

void IoClearActivityIdThread(
	//_In_ LPCGUID OriginalId
);

//PCONTROLLER_OBJECT IoCreateController(
//	[in] ULONG Size
//);

//void IoDeassignArcName(
//	_In_  ArcName
//);

//void IoDeassignArcName(
//	_In_  ArcName
//);


#endif