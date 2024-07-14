

#ifndef _NTDDK_H
#define _NTDDK_H

#include <NtAPI.h>
#include "irp.h"
#include "ntoapi.h"
#include "wdm.h"

typedef struct _SIGNAL_REG_VALUE {
	UINT8* RegName;
	UINT32 MsrAddr;
	UINT64 Value;
} SIGNAL_REG_VALUE, * PSIGNAL_REG_VALUE;


typedef struct _WHEA_ACPI_HEADER {
	UINT32 Signature;
	UINT32 Length;
	UINT8  Revision;
	UINT8  Checksum;
	UINT8  OemId[6];
	UINT64 OemTableId;
	UINT32 OemRevision;
	UINT32 CreatorId;
	UINT32 CreatorRevision;
} WHEA_ACPI_HEADER, * PWHEA_ACPI_HEADER;

typedef enum _STATE_LOCATION_TYPE {
	LocationTypeRegistry,
	LocationTypeFileSystem,
	LocationTypeMaximum
} STATE_LOCATION_TYPE;


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

typedef enum {
	KdConfigureDeviceAndContinue,
	KdSkipDeviceAndContinue,
	KdConfigureDeviceAndStop,
	KdSkipDeviceAndStop
} KD_CALLBACK_ACTION, * PKD_CALLBACK_ACTION;

typedef enum {
	KdNameSpacePCI,
	KdNameSpaceACPI,
	KdNameSpaceAny,
	KdNameSpaceNone,
	KdNameSpaceMax
} KD_NAMESPACE_ENUM, * PKD_NAMESPACE_ENUM;

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
	UCHAR*              ExtendedRegisters;
} CONTEXT;



typedef struct _CONTROLLER_OBJECT {
	SHORT        Type;
	SHORT        Size;
	PVOID         ControllerExtension;
	KDEVICE_QUEUE DeviceWaitQueue;
	ULONG         Spare1;
	LARGE_INTEGER Spare2;
} CONTROLLER_OBJECT, * PCONTROLLER_OBJECT;

typedef struct CORRELATION_VECTOR {
	CHAR Version;
	CHAR* Vector;
} CORRELATION_VECTOR;


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
	SIGNAL_REG_VALUE* Entries;
} EFI_ACPI_RAS_SIGNAL_TABLE, * PEFI_ACPI_RAS_SIGNAL_TABLE;


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


void HalExamineMBR(
	_In_  PDEVICE_OBJECT DeviceObject,
	_In_  ULONG          SectorSize,
	_In_  ULONG          MBRTypeIdentifier,
	_Out_ PVOID* Buffer
);


typedef HalQuerySystemInformation* pHalQuerySystemInformation;
typedef HalSetSystemInformation* pHalSetSystemInformation;
typedef HalQueryBusSlots* pHalQueryBusSlots;
typedef void (*pHalExamineMBR)(_In_ PDEVICE_OBJECT,_In_ ULONG, _In_ ULONG, _In_ PVOID*);
typedef HalIoReadPartitionTable* pHalIoReadPartitionTable;
typedef HalIoSetPartitionInformation* pHalIoSetPartitionInformation;
typedef HalIoWritePartitionTable* pHalIoWritePartitionTable;
typedef HalHandlerForBus* pHalHandlerForBus;
typedef HalReferenceBusHandler* pHalReferenceBusHandler;
typedef HalInitPnpDriver* pHalInitPnpDriver;
typedef HalInitPowerManagement* pHalInitPowerManagement;
typedef HalGetDmaAdapter* pHalGetDmaAdapter;
typedef HalGetInterruptTranslator* pHalGetInterruptTranslator;
typedef HalStartMirroring* pHalStartMirroring;
typedef HalEndMirroring* pHalEndMirroring;
typedef HalMirrorPhysicalMemory* pHalMirrorPhysicalMemory;
typedef HalEndOfBoot* pHalEndOfBoot;
typedef HalMirrorVerify* pHalMirrorVerify;
typedef HalGetAcpiTable* pHalGetAcpiTable;
typedef HalSetPciErrorHandlerCallback* pHalSetPciErrorHandlerCallback;
typedef HalGetPrmCache* pHalGetPrmCache;

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

typedef struct _KEY_CACHED_INFORMATION {
	LARGE_INTEGER LastWriteTime;
	ULONG         TitleIndex;
	ULONG         SubKeys;
	ULONG         MaxNameLen;
	ULONG         Values;
	ULONG         MaxValueNameLen;
	ULONG         MaxValueDataLen;
	ULONG         NameLength;
} KEY_CACHED_INFORMATION, * PKEY_CACHED_INFORMATION;

typedef struct _KEY_NAME_INFORMATION {
	ULONG NameLength;
	WCHAR Name[1];
} KEY_NAME_INFORMATION, * PKEY_NAME_INFORMATION;

typedef struct _KEY_VIRTUALIZATION_INFORMATION {
	ULONG VirtualizationCandidate : 1;
	ULONG VirtualizationEnabled : 1;
	ULONG VirtualTarget : 1;
	ULONG VirtualStore : 1;
	ULONG VirtualSource : 1;
	ULONG Reserved : 27;
} KEY_VIRTUALIZATION_INFORMATION, * PKEY_VIRTUALIZATION_INFORMATION;

typedef struct _KUSER_SHARED_DATA {
	ULONG                         TickCountLowDeprecated;
	ULONG                         TickCountMultiplier;
	KSYSTEM_TIME                  InterruptTime;
	KSYSTEM_TIME                  SystemTime;
	KSYSTEM_TIME                  TimeZoneBias;
	USHORT                        ImageNumberLow;
	USHORT                        ImageNumberHigh;
	WCHAR                         NtSystemRoot[260];
	ULONG                         MaxStackTraceDepth;
	ULONG                         CryptoExponent;
	ULONG                         TimeZoneId;
	ULONG                         LargePageMinimum;
	ULONG                         AitSamplingValue;
	ULONG                         AppCompatFlag;
	ULONGLONG                     RNGSeedVersion;
	ULONG                         GlobalValidationRunlevel;
	LONG                          TimeZoneBiasStamp;
	ULONG                         NtBuildNumber;
	NT_PRODUCT_TYPE               NtProductType;
	BOOLEAN                       ProductTypeIsValid;
	BOOLEAN                       Reserved0[1];
	USHORT                        NativeProcessorArchitecture;
	ULONG                         NtMajorVersion;
	ULONG                         NtMinorVersion;
	BOOLEAN*                       ProcessorFeatures;
	ULONG                         Reserved1;
	ULONG                         Reserved3;
	ULONG                         TimeSlip;
	ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;
	ULONG                         BootId;
	LARGE_INTEGER                 SystemExpirationDate;
	ULONG                         SuiteMask;
	BOOLEAN                       KdDebuggerEnabled;
	union {
		UCHAR MitigationPolicies;
		struct {
			UCHAR NXSupportPolicy : 2;
			UCHAR SEHValidationPolicy : 2;
			UCHAR CurDirDevicesSkippedForDlls : 2;
			UCHAR Reserved : 2;
		};
	};
	USHORT                        CyclesPerYield;
	ULONG                         ActiveConsoleId;
	ULONG                         DismountCount;
	ULONG                         ComPlusPackage;
	ULONG                         LastSystemRITEventTickCount;
	ULONG                         NumberOfPhysicalPages;
	BOOLEAN                       SafeBootMode;
	union {
		UCHAR VirtualizationFlags;
		struct {
			UCHAR ArchStartedInEl2 : 1;
			UCHAR QcSlIsSupported : 1;
		};
	};
	UCHAR                         Reserved12[2];
	union {
		ULONG SharedDataFlags;
		struct {
			ULONG DbgErrorPortPresent : 1;
			ULONG DbgElevationEnabled : 1;
			ULONG DbgVirtEnabled : 1;
			ULONG DbgInstallerDetectEnabled : 1;
			ULONG DbgLkgEnabled : 1;
			ULONG DbgDynProcessorEnabled : 1;
			ULONG DbgConsoleBrokerEnabled : 1;
			ULONG DbgSecureBootEnabled : 1;
			ULONG DbgMultiSessionSku : 1;
			ULONG DbgMultiUsersInSessionSku : 1;
			ULONG DbgStateSeparationEnabled : 1;
			ULONG SpareBits : 21;
		} DUMMYSTRUCTNAME2;
	} DUMMYUNIONNAME2;
	ULONG                         DataFlagsPad[1];
	ULONGLONG                     TestRetInstruction;
	LONGLONG                      QpcFrequency;
	ULONG                         SystemCall;
	ULONG                         Reserved2;
	ULONGLONG                     SystemCallPad[2];
	union {
		KSYSTEM_TIME TickCount;
		ULONG64      TickCountQuad;
		struct {
			ULONG ReservedTickCountOverlay[3];
			ULONG TickCountPad[1];
		} DUMMYSTRUCTNAME;
	} DUMMYUNIONNAME3;
	ULONG                         Cookie;
	ULONG                         CookiePad[1];
	LONGLONG                      ConsoleSessionForegroundProcessId;
	ULONGLONG                     TimeUpdateLock;
	ULONGLONG                     BaselineSystemTimeQpc;
	ULONGLONG                     BaselineInterruptTimeQpc;
	ULONGLONG                     QpcSystemTimeIncrement;
	ULONGLONG                     QpcInterruptTimeIncrement;
	UCHAR                         QpcSystemTimeIncrementShift;
	UCHAR                         QpcInterruptTimeIncrementShift;
	USHORT                        UnparkedProcessorCount;
	ULONG                         EnclaveFeatureMask[4];
	ULONG                         TelemetryCoverageRound;
	USHORT                        UserModeGlobalLogger[16];
	ULONG                         ImageFileExecutionOptions;
	ULONG                         LangGenerationCount;
	ULONGLONG                     Reserved4;
	ULONGLONG                     InterruptTimeBias;
	ULONGLONG                     QpcBias;
	ULONG                         ActiveProcessorCount;
	UCHAR                         ActiveGroupCount;
	UCHAR                         Reserved9;
	union {
		USHORT QpcData;
		struct {
			UCHAR QpcBypassEnabled;
			UCHAR QpcShift;
		};
	};
	LARGE_INTEGER                 TimeZoneBiasEffectiveStart;
	LARGE_INTEGER                 TimeZoneBiasEffectiveEnd;
	XSTATE_CONFIGURATION          XState;
	KSYSTEM_TIME                  FeatureConfigurationChangeStamp;
	ULONG                         Spare;
	ULONG64                       UserPointerAuthMask;
} KUSER_SHARED_DATA, * PKUSER_SHARED_DATA;


typedef struct _MM_COPY_ADDRESS {
	union {
		PVOID            VirtualAddress;
		PHYSICAL_ADDRESS PhysicalAddress;
	};
} MM_COPY_ADDRESS, * PMMCOPY_ADDRESS;

typedef enum {
  MaxPayload128Bytes,
  MaxPayload256Bytes,
  MaxPayload512Bytes,
  MaxPayload1024Bytes,
  MaxPayload2048Bytes,
  MaxPayload4096Bytes
} PCI_EXPRESS_MAX_PAYLOAD_SIZE;

typedef enum {
  BtiVbarNone,
  BtiVbarTrapHvc,
  BtiVbarTrapSmc,
  BtiVbarBhbDsbIsb,
  BtiVbarBhbSb,
  BtiVbarBhbClr
} PCR_BTI_VBAR_INDEX;

typedef enum _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR_TYPE {
	ResourceTypeSingle,
	ResourceTypeRange,
	ResourceTypeExtendedCounterConfiguration,
	ResourceTypeOverflow,
	ResourceTypeEventBuffer,
	ResourceTypeIdenitificationTag,
	ResourceTypeMax
} PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR_TYPE;

typedef struct _PHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION {
  PPHYSICAL_COUNTER_EVENT_BUFFER_OVERFLOW_HANDLER OverflowHandler;
  ULONG                                           CustomEventBufferEntrySize;
  ULONG                                           EventThreshold;
} PHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION, *PPHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION;

typedef struct _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR {
  PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR_TYPE Type;
  ULONG                                     Flags;
  union {
	ULONG                                       CounterIndex;
	struct {
	  ULONG Begin;
	  ULONG End;
	} Range;
	PPHYSICAL_COUNTER_OVERFLOW_HANDLER          OverflowHandler;
	PHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION EventBufferConfiguration;
	ULONG                                       IdentificationTag;
  } u;
} PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR, *PPHYSICAL_COUNTER_RESOURCE_DESCRIPTOR;


typedef struct _PHYSICAL_COUNTER_RESOURCE_LIST {
  ULONG                                Count;
  PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR* Descriptors;
} PHYSICAL_COUNTER_RESOURCE_LIST, *PPHYSICAL_COUNTER_RESOURCE_LIST;


NTSTATUS IoAllocateAdapterChannel(
	PADAPTER_OBJECT AdapterObject,
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
	_Out_ UUID* Uuid
);

NTSTATUS HalAllocateHardwareCounters(
	PGROUP_AFFINITY                 GroupAffinty,
	_In_  ULONG                           GroupCount,
	_In_  PPHYSICAL_COUNTER_RESOURCE_LIST ResourceList,
	_Out_ PHANDLE                         CounterSetHandle
);


NTSTATUS HalFreeHardwareCounters(
	_In_ HANDLE CounterSetHandle
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

//void IoAssignArcName(
//	_In_  ArcName,
//	_In_  DeviceName
//);

void IoClearActivityIdThread(
	_In_ LPCGUID OriginalId
);

PCONTROLLER_OBJECT IoCreateController(
	_In_ ULONG Size
);

//void IoDeassignArcName(
//	_In_  ArcName
//);

//void IoDeassignArcName(
//	_In_  ArcName
//);

NTSTATUS IoDecrementKeepAliveCount(
	_In_ _Out_ PFILE_OBJECT FileObject,
	_In_ _Out_ PEPROCESS    Process
);


void IoDeleteController(
	_In_ PCONTROLLER_OBJECT ControllerObject
);

void IoFreeController(
	_In_ PCONTROLLER_OBJECT ControllerObject
);

NTSTATUS IoGetActivityIdIrp(
	_In_  PIRP   Irp,
	_Out_ LPGUID Guid
);

LPCGUID IoGetActivityIdThread();

PCONFIGURATION_INFORMATION IoGetConfigurationInformation();

PGENERIC_MAPPING IoGetFileObjectGenericMapping();

PEPROCESS IoGetInitiatorProcess(
	_In_ PFILE_OBJECT FileObject
);

IO_PAGING_PRIORITY IoGetPagingIoPriority(
	_In_ PIRP Irp
);

PIO_FOEXT_SHADOW_FILE IoGetShadowFileInformation(
	_In_ PFILE_OBJECT FileObject
);

NTSTATUS IoIncrementKeepAliveCount(
	_In_ _Out_ PFILE_OBJECT FileObject,
	_In_ _Out_ PEPROCESS    Process
);

LOGICAL IoIsValidIrpStatus(
	_In_ NTSTATUS Status
);

PIRP IoMakeAssociatedIrp(
	_In_ PIRP  Irp,
	_In_ CCHAR StackSize
);

NTSTATUS IoPropagateActivityIdToThread(
	_In_  PIRP    Irp,
	_Out_ LPGUID  PropagatedId,
	LPCGUID* OriginalId
);

NTSTATUS IoQueryFullDriverPath(
	_In_  PDRIVER_OBJECT  DriverObject,
	_Out_ PUNICODE_STRING FullPath
);

void IoRaiseHardError(
	_In_           PIRP           Irp,
	_In_opt_ PVPB           Vpb,
	_In_           PDEVICE_OBJECT RealDeviceObject
);

BOOLEAN IoRaiseInformationalHardError(
	_In_           NTSTATUS        ErrorStatus,
	_In_opt_ PUNICODE_STRING String,
	_In_opt_ PKTHREAD        Thread
);

PVOID IoRegisterBootDriverCallback(
	_In_           PBOOT_DRIVER_CALLBACK_FUNCTION CallbackFunction,
	_In_opt_ PVOID                          CallbackContext
);

void IoRegisterBootDriverReinitialization(
	_In_           PDRIVER_OBJECT       DriverObject,
	_In_           PDRIVER_REINITIALIZE DriverReinitializationRoutine,
	_In_opt_ PVOID                Context
);

void IoRegisterDriverReinitialization(
	_In_           PDRIVER_OBJECT       DriverObject,
	_In_           PDRIVER_REINITIALIZE DriverReinitializationRoutine,
	_In_opt_ PVOID                Context
);

NTSTATUS IoReportDetectedDevice(
	_In_           PDRIVER_OBJECT                 DriverObject,
	_In_           INTERFACE_TYPE                 LegacyBusType,
	_In_           ULONG                          BusNumber,
	_In_           ULONG                          SlotNumber,
	_In_opt_ PCM_RESOURCE_LIST              ResourceList,
	_In_opt_ PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements,
	_In_           BOOLEAN                        ResourceAssigned,
	_In_ _Out_      PDEVICE_OBJECT* DeviceObject
);

NTSTATUS IoReportResourceForDetection(
	_In_           PDRIVER_OBJECT    DriverObject,
	_In_opt_ PCM_RESOURCE_LIST DriverList,
	_In_opt_ ULONG             DriverListSize,
	_In_opt_ PDEVICE_OBJECT    DeviceObject,
	_In_opt_ PCM_RESOURCE_LIST DeviceList,
	_In_opt_ ULONG             DeviceListSize,
	_Out_          PBOOLEAN          ConflictDetected
);

NTSTATUS IoReportRootDevice(
	_In_ PDRIVER_OBJECT DriverObject
);
NTSTATUS IoSetActivityIdIrp(
	_In_           PIRP    Irp,
	_In_opt_ LPCGUID Guid
);

LPCGUID IoSetActivityIdThread(
	LPCGUID ActivityId
);
void IoSetHardErrorOrVerifyDevice(
	_In_ PIRP           Irp,
	_In_ PDEVICE_OBJECT DeviceObject
);
void IoSetMasterIrpStatus(
	_In_ _Out_ PIRP     MasterIrp,
	_In_      NTSTATUS Status
);
NTSTATUS IoSetShadowFileInformation(
	_In_ PFILE_OBJECT FileObject,
	_In_ PFILE_OBJECT BackingFileObject,
	_In_ PVOID        BackingFltInstance
);
NTSTATUS IoSetSystemPartition(
	_In_ PUNICODE_STRING VolumeNameString
);
BOOLEAN IoSetThreadHardErrorMode(
	_In_ BOOLEAN EnableHardErrors
);
void IoTransferActivityId(
	_In_ LPCGUID ActivityId,
	_In_ LPCGUID RelatedActivityId
);

void IoUnregisterBootDriverCallback(
	_In_ PVOID CallbackHandle
);
NTSTATUS IoVerifyPartitionTable(
	_In_ PDEVICE_OBJECT DeviceObject,
	_In_ BOOLEAN        FixErrors
);
NTSTATUS IoVolumeDeviceToDosName(
	_In_  PVOID           VolumeDeviceObject,
	_Out_ PUNICODE_STRING DosName
);

BOOLEAN KeAreApcsDisabled();

void KeBugCheck(
	_In_ ULONG BugCheckCode
);
void KeEnterCriticalRegion();

void KeEnterGuardedRegion();

NTSTATUS
KeExpandKernelStackAndCallout(
	_In_ PEXPAND_STACK_CALLOUT Callout,
	_In_opt_ PVOID Parameter,
	_In_ SIZE_T Size
);

NTSTATUS KeExpandKernelStackAndCalloutEx(
	PEXPAND_STACK_CALLOUT Callout,
	PVOID                 Parameter,
	SIZE_T                Size,
	BOOLEAN               Wait,
	PVOID                 Context
);

USHORT KeGetCurrentNodeNumber();
ULONG KeGetCurrentProcessorNumber();

ULONG KeGetCurrentProcessorNumberEx(
	_Out_ PPROCESSOR_NUMBER ProcNumber
);

NTSTATUS KeInitializeCrashDumpHeader(
	_In_            ULONG  DumpType,
	_In_            ULONG  Flags,
	_Out_           PVOID  Buffer,
	_In_            ULONG  BufferSize,
	_Out_ PULONG BufferNeeded
);

BOOLEAN KeInvalidateAllCaches();

void KeInvalidateRangeAllCaches(
	PVOID BaseAddress,
	ULONG Length
);

void KeLeaveCriticalRegion();

void KeLeaveGuardedRegion();

LONG KePulseEvent(
	_In_ _Out_ PRKEVENT  Event,
	_In_      KPRIORITY Increment,
	_In_      BOOLEAN   Wait
);

USHORT KeQueryActiveGroupCount();

ULONG KeQueryActiveProcessorCount(
	_Out_ PKAFFINITY ActiveProcessors
);

ULONG KeQueryActiveProcessorCountEx(
	_In_ USHORT GroupNumber
);
KAFFINITY KeQueryActiveProcessors();

KAFFINITY KeQueryGroupAffinity(
	_In_ USHORT GroupNumber
);

KAFFINITY KeQueryGroupAffinity(
	_In_ USHORT GroupNumber
);
USHORT KeQueryHighestNodeNumber();

USHORT KeQueryMaximumGroupCount();

ULONG KeQueryMaximumProcessorCount();

ULONG KeQueryMaximumProcessorCountEx(
	_In_ USHORT GroupNumber
);

USHORT KeQueryNodeMaximumProcessorCount(
	_In_ USHORT NodeNumber
);
VOID
KeQueryTickCount(
	_Out_ PLARGE_INTEGER CurrentCount
);

KERNEL_ENTRY KIRQL KeRaiseIrqlToDpcLevel();

LONG KeSetBasePriorityThread(
	_In_ _Out_ PKTHREAD Thread,
	_In_      LONG     Increment
);

NTSTATUS KeSetHardwareCounterConfiguration(
	_In_ PHARDWARE_COUNTER CounterArray,
	_In_ ULONG             Count
);

void KeSetImportanceDpc(
	_In_ _Out_ PRKDPC          Dpc,
	_In_      KDPC_IMPORTANCE Importance
);

void KeSetTargetProcessorDpc(
	_In_ _Out_ PRKDPC Dpc,
	_In_      CCHAR  Number
);

typedef PHYSICAL_ADDRESS* PPHYSICAL_ADDRESS;

NTSTATUS MmAddPhysicalMemory(
	_In_ PPHYSICAL_ADDRESS StartAddress,
	_In_ PLARGE_INTEGER    NumberOfBytes
);

PVOID MmAllocateContiguousMemory(
	_In_ SIZE_T           NumberOfBytes,
	_In_ PHYSICAL_ADDRESS HighestAcceptableAddress
);

PVOID MmAllocateContiguousMemorySpecifyCache(
	_In_           SIZE_T              NumberOfBytes,
	_In_           PHYSICAL_ADDRESS    LowestAcceptableAddress,
	_In_           PHYSICAL_ADDRESS    HighestAcceptableAddress,
	_In_opt_ PHYSICAL_ADDRESS    BoundaryAddressMultiple,
	_In_           MEMORY_CACHING_TYPE CacheType
);

PVOID MmAllocateContiguousMemorySpecifyCacheNode(
	_In_           SIZE_T              NumberOfBytes,
	_In_           PHYSICAL_ADDRESS    LowestAcceptableAddress,
	_In_           PHYSICAL_ADDRESS    HighestAcceptableAddress,
	_In_opt_ PHYSICAL_ADDRESS    BoundaryAddressMultiple,
	_In_           MEMORY_CACHING_TYPE CacheType,
	_In_           NODE_REQUIREMENT    PreferredNode
);

PVOID MmAllocateContiguousNodeMemory(
	_In_           SIZE_T           NumberOfBytes,
	_In_           PHYSICAL_ADDRESS LowestAcceptableAddress,
	_In_           PHYSICAL_ADDRESS HighestAcceptableAddress,
	_In_opt_ PHYSICAL_ADDRESS BoundaryAddressMultiple,
	_In_           ULONG            Protect,
	_In_           NODE_REQUIREMENT PreferredNode
);

PVOID MmAllocateNonCachedMemory(
	_In_ SIZE_T NumberOfBytes
);

NTSTATUS MmCopyMemory(
	_In_  PVOID           TargetAddress,
	_In_  MM_COPY_ADDRESS SourceAddress,
	_In_  SIZE_T          NumberOfBytes,
	_In_  ULONG           Flags,
	_Out_ PSIZE_T         NumberOfBytesTransferred
);

void MmFreeContiguousMemory(
	_In_ PVOID BaseAddress
);

void MmFreeContiguousMemorySpecifyCache(
	_In_ PVOID               BaseAddress,
	_In_ SIZE_T              NumberOfBytes,
	_In_ MEMORY_CACHING_TYPE CacheType
);

void MmFreeNonCachedMemory(
	_In_ PVOID  BaseAddress,
	_In_ SIZE_T NumberOfBytes
);

PHYSICAL_ADDRESS MmGetPhysicalAddress(
	_In_ PVOID BaseAddress
);

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRangesEx2(
	PVOID PartitionObject,
	ULONG Flags
);

//Not A Recomended Function
BOOLEAN MmIsAddressValid(
	_In_ PVOID VirtualAddress
);

BOOLEAN MmIsThisAnNtAsSystem();

void MmLockPagableSectionByHandle(
	_In_ PVOID ImageSectionHandle
);

NTSTATUS MmMapViewInSystemSpace(
	PVOID   Section,
	PVOID* MappedBase,
	PSIZE_T ViewSize
);


HANDLE MmSecureVirtualMemory(
	_In_ PVOID  Address,
	_In_ SIZE_T Size,
	_In_ ULONG  ProbeMode
);

HANDLE MmSecureVirtualMemoryEx(
  PVOID  Address,
  SIZE_T Size,
  ULONG  ProbeMode,
  ULONG  Flags
);


NTSTATUS MmUnmapViewInSystemSpace(
  PVOID MappedBase
);

void MmUnsecureVirtualMemory(
  _In_ HANDLE SecureHandle
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtOpenProcess(
  _Out_          PHANDLE            ProcessHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_           POBJECT_ATTRIBUTES ObjectAttributes,
  _In_opt_ PCLIENT_ID         ClientId
);


void PcreateProcessNotifyRoutine(
  _In_ HANDLE ParentId,
  _In_ HANDLE ProcessId,
  _In_ BOOLEAN Create
);

void PcreateThreadNotifyRoutine(
  _In_ HANDLE ProcessId,
  _In_ HANDLE ThreadId,
  _In_ BOOLEAN Create
);

NTSTATUS PgetLocationString(
  _In_ _Out_ PVOID Context,
  _Out_     PZZWSTR *LocationStrings
);

void Phalexaminembr(
  _In_  PDEVICE_OBJECT DeviceObject,
  _In_  ULONG SectorSize,
  _In_  ULONG MBRTypeIdentifier,
  _Out_ PVOID *Buffer
);


NTSTATUS Phalquerysysteminformation(
  _In_  HAL_QUERY_INFORMATION_CLASS InformationClass,
  _In_  ULONG BufferSize,
  _Out_ PVOID Buffer,
  _Out_ PULONG ReturnedLength
);

NTSTATUS Phalsetsysteminformation(
	_In_  HAL_SET_INFORMATION_CLASS InformationClass,
	_In_  ULONG BufferSize,
	_Out_ PVOID Buffer
);

typedef struct _PNP_LOCATION_INTERFACE {
  USHORT                 Size;
  USHORT                 Version;
  PVOID                  Context;
  PINTERFACE_REFERENCE   InterfaceReference;
  PINTERFACE_DEREFERENCE InterfaceDereference;
  PGET_LOCATION_STRING   GetLocationString;
} PNP_LOCATION_INTERFACE, *PPNP_LOCATION_INTERFACE;

typedef struct _POWER_THROTTLING_PROCESS_STATE {
  ULONG Version;
  ULONG ControlMask;
  ULONG StateMask;
} POWER_THROTTLING_PROCESS_STATE, *PPOWER_THROTTLING_PROCESS_STATE;

typedef struct _POWER_THROTTLING_THREAD_STATE {
  ULONG Version;
  ULONG ControlMask;
  ULONG StateMask;
} POWER_THROTTLING_THREAD_STATE, *PPOWER_THROTTLING_THREAD_STATE;

void PphysicalCounterEventBufferOverflowHandler(
  PVOID EventBuffer,
  SIZE_T EntrySize,
  SIZE_T NumberOfEntries,
  HANDLE OwningHandle
);

void PphysicalCounterOverflowHandler(
  ULONGLONG OverflowBits,
  HANDLE OwningHandle
);

typedef struct _PROCESS_MEMBERSHIP_INFORMATION {
  ULONG ServerSiloId;
} PROCESS_MEMBERSHIP_INFORMATION, *PPROCESS_MEMBERSHIP_INFORMATION;

typedef struct _PROCESS_MITIGATION_ACTIVATION_CONTEXT_TRUST_POLICY {
  union {
	ULONG Flags;
	struct {
	  ULONG AssemblyManifestRedirectionTrust : 1;
	  ULONG ReservedFlags : 31;
	} DUMMYSTRUCTNAME;
  } DUMMYUNIONNAME;
} PROCESS_MITIGATION_ACTIVATION_CONTEXT_TRUST_POLICY, *PPROCESS_MITIGATION_ACTIVATION_CONTEXT_TRUST_POLICY;

typedef struct _PROCESS_MITIGATION_CHILD_PROCESS_POLICY {
  union {
	ULONG Flags;
	struct {
	  ULONG NoChildProcessCreation : 1;
	  ULONG AuditNoChildProcessCreation : 1;
	  ULONG AllowSecureProcessCreation : 1;
	  ULONG ReservedFlags : 29;
	} DUMMYSTRUCTNAME;
  } DUMMYUNIONNAME;
} PROCESS_MITIGATION_CHILD_PROCESS_POLICY, *PPROCESS_MITIGATION_CHILD_PROCESS_POLICY;

typedef struct _PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY {
  union {
	ULONG Flags;
	struct {
	  ULONG EnableExportAddressFilter : 1;
	  ULONG AuditExportAddressFilter : 1;
	  ULONG EnableExportAddressFilterPlus : 1;
	  ULONG AuditExportAddressFilterPlus : 1;
	  ULONG EnableImportAddressFilter : 1;
	  ULONG AuditImportAddressFilter : 1;
	  ULONG EnableRopStackPivot : 1;
	  ULONG AuditRopStackPivot : 1;
	  ULONG EnableRopCallerCheck : 1;
	  ULONG AuditRopCallerCheck : 1;
	  ULONG EnableRopSimExec : 1;
	  ULONG AuditRopSimExec : 1;
	  ULONG ReservedFlags : 20;
	} DUMMYSTRUCTNAME;
  } DUMMYUNIONNAME;
} PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY, *PPROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY;

typedef enum _PROCESS_MITIGATION_POLICY {
  ProcessDEPPolicy,
  ProcessASLRPolicy,
  ProcessDynamicCodePolicy,
  ProcessStrictHandleCheckPolicy,
  ProcessSystemCallDisablePolicy,
  ProcessMitigationOptionsMask,
  ProcessExtensionPointDisablePolicy,
  ProcessControlFlowGuardPolicy,
  ProcessSignaturePolicy,
  ProcessFontDisablePolicy,
  ProcessImageLoadPolicy,
  ProcessSystemCallFilterPolicy,
  ProcessPayloadRestrictionPolicy,
  ProcessChildProcessPolicy,
  ProcessSideChannelIsolationPolicy,
  ProcessUserShadowStackPolicy,
  ProcessRedirectionTrustPolicy,
  ProcessUserPointerAuthPolicy,
  ProcessSEHOPPolicy,
  ProcessActivationContextTrustPolicy,
  MaxProcessMitigationPolicy
} PROCESS_MITIGATION_POLICY, *PPROCESS_MITIGATION_POLICY;

typedef struct _PROCESS_MITIGATION_SEHOP_POLICY {
  union {
	ULONG Flags;
	struct {
	  ULONG EnableSehop : 1;
	  ULONG ReservedFlags : 31;
	} DUMMYSTRUCTNAME;
  } DUMMYUNIONNAME;
} PROCESS_MITIGATION_SEHOP_POLICY, *PPROCESS_MITIGATION_SEHOP_POLICY;

typedef struct _PROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY {
  union {
	ULONG Flags;
	struct {
	  ULONG FilterId : 4;
	  ULONG ReservedFlags : 28;
	} DUMMYSTRUCTNAME;
  } DUMMYUNIONNAME;
} PROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY, *PPROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY;

typedef struct _PROCESS_MITIGATION_USER_POINTER_AUTH_POLICY {
  union {
	ULONG Flags;
	struct {
	  ULONG EnablePointerAuthUserIp : 1;
	  ULONG ReservedFlags : 31;
	} DUMMYSTRUCTNAME;
  } DUMMYUNIONNAME;
} PROCESS_MITIGATION_USER_POINTER_AUTH_POLICY, *PPROCESS_MITIGATION_USER_POINTER_AUTH_POLICY;


typedef struct _PROCESS_SYSCALL_PROVIDER_INFORMATION {
  GUID  ProviderId;
  UCHAR Level;
} PROCESS_SYSCALL_PROVIDER_INFORMATION, *PPROCESS_SYSCALL_PROVIDER_INFORMATION;


typedef struct _PS_CREATE_NOTIFY_INFO {
  SIZE_T              Size;
  union {
	ULONG Flags;
	struct {
	  ULONG FileOpenNameAvailable : 1;
	  ULONG IsSubsystemProcess : 1;
	  ULONG Reserved : 30;
	};
  };
  HANDLE              ParentProcessId;
  CLIENT_ID           CreatingThreadId;
  struct _FILE_OBJECT *FileObject;
  PCUNICODE_STRING    ImageFileName;
  PCUNICODE_STRING    CommandLine;
  NTSTATUS            CreationStatus;
} PS_CREATE_NOTIFY_INFO, *PPS_CREATE_NOTIFY_INFO;

void PcreateProcessNotifyRoutineEx(
	_In_ _Out_          PEPROCESS Process,
	_In_                HANDLE ProcessId,
	_In_ _Out_ PPS_CREATE_NOTIFY_INFO CreateInfo
);


NTSTATUS PsAllocSiloContextSlot(
  _In_  ULONG_PTR Reserved,
  _Out_ ULONG     *ReturnedContextSlot
);

PESILO PsAttachSiloToCurrentThread(
  _In_ PESILO Silo
);

typedef enum _PSCREATEPROCESSNOTIFYTYPE {
  PsCreateProcessNotifySubsystems
} PSCREATEPROCESSNOTIFYTYPE;

NTSTATUS PsCreateSiloContext(
  _In_           PESILO                        Silo,
  _In_           ULONG                         Size,
  _In_           POOL_TYPE                     PoolType,
  _In_opt_ SILO_CONTEXT_CLEANUP_CALLBACK ContextCleanupCallback,
				 PVOID                         *ReturnedSiloContext
);

typedef enum _PSCREATETHREADNOTIFYTYPE {
  PsCreateThreadNotifyNonSystem,
  PsCreateThreadNotifySubsystems
} PSCREATETHREADNOTIFYTYPE;

void PsDereferenceSiloContext(
  _In_ PVOID SiloContext
);

void PsDetachSiloFromCurrentThread(
  _In_ PESILO PreviousSilo
);

NTSTATUS PsFreeSiloContextSlot(
  _In_ ULONG ContextSlot
);

HANDLE PsGetCurrentProcessId();

PESILO PsGetCurrentServerSilo();

PESILO PsGetCurrentSilo();

PETHREAD PsGetCurrentThread();

HANDLE PsGetCurrentThreadId();

PVOID PsGetCurrentThreadTeb();

PESILO PsGetEffectiveServerSilo(
  _In_ PESILO Silo
);

PESILO PsGetHostSilo();

NTSTATUS PsGetJobServerSilo(
  _In_opt_ PEJOB  Job,
  _Out_          PESILO *ServerSilo
);

NTSTATUS PsGetJobSilo(
  _In_  PEJOB  Job,
  _Out_ PESILO *Silo
);

PESILO PsGetParentSilo(
  _In_opt_ PEJOB Job
);

NTSTATUS PsGetPermanentSiloContext(
  _In_ PESILO Silo,
  _In_ ULONG  ContextSlot,
	   PVOID  *ReturnedSiloContext
);

LONGLONG PsGetProcessCreateTimeQuadPart(
  _In_ PEPROCESS Process
);

NTSTATUS PsGetProcessExitStatus(
  _In_ PEPROCESS Process
);

HANDLE PsGetProcessId(
  _In_ PEPROCESS Process
);

ULONGLONG PsGetProcessStartKey(
  _In_ PEPROCESS Process
);

ULONG PsGetServerSiloActiveConsoleId(
  PESILO Silo
);

GUID * PsGetSiloContainerId(
  _In_ PESILO Silo
);

NTSTATUS PsGetSiloContext(
  _In_ PESILO Silo,
  _In_ ULONG  ContextSlot,
	   PVOID  *ReturnedSiloContext
);

ULONG PsGetSiloMonitorContextSlot(
  _In_ PSILO_MONITOR Monitor
);

LONGLONG PsGetThreadCreateTime(
  _In_ PETHREAD Thread
);

NTSTATUS PsGetThreadExitStatus(
  _In_ PETHREAD Thread
);

HANDLE PsGetThreadId(
  _In_ PETHREAD Thread
);

HANDLE PsGetThreadProcessId(
  PETHREAD Thread
);

PESILO PsGetThreadServerSilo(
  _In_ PETHREAD Thread
);

NTSTATUS PsInsertPermanentSiloContext(
  _In_ PESILO Silo,
  _In_ ULONG  ContextSlot,
  _In_ PVOID  SiloContext
);

NTSTATUS PsInsertSiloContext(
  _In_ PESILO Silo,
  _In_ ULONG  ContextSlot,
  _In_ PVOID  SiloContext
);

BOOLEAN PsIsHostSilo(
  _In_ PESILO Silo
);

NTSTATUS PsMakeSiloContextPermanent(
  _In_ PESILO Silo,
  _In_ ULONG  ContextSlot
);

void PsReferenceSiloContext(
  _In_ PVOID SiloContext
);

NTSTATUS PsRemoveCreateThreadNotifyRoutine(
  _In_ PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine
);

NTSTATUS PsRemoveLoadImageNotifyRoutine(
  _In_ PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine
);

NTSTATUS PsRemoveSiloContext(
  _In_ PESILO Silo,
  _In_ ULONG  ContextSlot,
	   PVOID  *RemovedSiloContext
);

NTSTATUS PsReplaceSiloContext(
  _In_       PESILO Silo,
  _In_       ULONG  ContextSlot,
  _In_       PVOID  NewSiloContext,
  PVOID  *OldSiloContext
);

NTSTATUS PsSetCreateProcessNotifyRoutine(
  _In_ PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine,
  _In_ BOOLEAN                        Remove
);

NTSTATUS PsSetCreateProcessNotifyRoutineEx(
  _In_ PCREATE_PROCESS_NOTIFY_ROUTINE_EX NotifyRoutine,
  _In_ BOOLEAN                           Remove
);

NTSTATUS PsSetCreateProcessNotifyRoutineEx2(
  _In_ PSCREATEPROCESSNOTIFYTYPE NotifyType,
  _In_ PVOID                     NotifyInformation,
  _In_ BOOLEAN                   Remove
);

NTSTATUS PsSetCreateThreadNotifyRoutine(
  _In_ PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine
);

NTSTATUS PsSetCreateThreadNotifyRoutineEx(
  _In_ PSCREATETHREADNOTIFYTYPE NotifyType,
  _In_ PVOID                    NotifyInformation
);

NTSTATUS PsSetLoadImageNotifyRoutine(
  _In_ PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine
);

NTSTATUS PsSetLoadImageNotifyRoutineEx(
  _In_ PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine,
  _In_ ULONG_PTR                  Flags
);

NTSTATUS PsStartSiloMonitor(
  _In_ PSILO_MONITOR Monitor
);

void PsTerminateServerSilo(
  _In_ PESILO   ServerSilo,
	   NTSTATUS ExitStatus
);

void PsUnregisterSiloMonitor(
  _In_ PSILO_MONITOR Monitor
);

//RTL_RUN_ONCE_INIT_FN (
//	_Inout_ PRTL_RUN_ONCE RunOnce,
//	_Inout_opt_ PVOID Parameter,
//	_Inout_opt_ PVOID *Context
//);

NTSYSAPI NTSTATUS RtlCharToInteger(
  _In_           PCSZ   String,
  _In_opt_ ULONG  Base,
  _Out_          PULONG Value
);

LONG RtlCompareString(
  _In_ const STRING *String1,
  _In_ const STRING *String2,
  _In_ BOOLEAN      CaseInSensitive
);

NTAPI_INLINE RtlConvertUlongToLuid(
  _In_ ULONG Ulong
);

VOID RtlCopyString(
  _Out_          PSTRING      DestinationString,
  _In_opt_ const STRING *SourceString
);

BOOLEAN RtlEqualString(
  _In_ const STRING *String1,
  _In_ const STRING *String2,
  _In_ BOOLEAN      CaseInSensitive
);

NTSYSAPI ULONG64 RtlGetEnabledExtendedFeatures(
  _In_ ULONG64 FeatureMask
);

NTSYSAPI NTSTATUS RtlGetPersistedStateLocation(
  _In_      PCWSTR              SourceID,
  _In_opt_  PCWSTR              CustomValue,
  _In_opt_  PCWSTR              DefaultPath,
  _In_      STATE_LOCATION_TYPE StateLocationType,
  _In_      PWCHAR              TargetPath,
  _In_      ULONG               BufferLengthIn,
  _Out_opt_ PULONG              BufferLengthOut
);


NTSYSAPI NTSTATUS RtlIncrementCorrelationVector(
  _In_ _Out_ PCORRELATION_VECTOR CorrelationVector
);

NTSYSAPI NTSTATUS RtlInitializeCorrelationVector(
  _In_ _Out_ PCORRELATION_VECTOR CorrelationVector,
  _In_      int                 Version,
  _In_      const GUID          *Guid
);

NTSYSAPI BOOLEAN RtlIsStateSeparationEnabled();

NTSYSAPI BOOLEAN RtlIsZeroMemory(
  PVOID  Buffer,
  SIZE_T Length
);

NTSYSAPI VOID RtlMapGenericMask(
  _In_ _Out_ PACCESS_MASK          AccessMask,
  _In_      const GENERIC_MAPPING *GenericMapping
);

NTSYSAPI BOOLEAN RtlNormalizeSecurityDescriptor(
  PSECURITY_DESCRIPTOR *SecurityDescriptor,
  ULONG                SecurityDescriptorLength,
  PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
  PULONG               NewSecurityDescriptorLength,
  BOOLEAN              CheckOnly
);

NTSYSAPI BOOLEAN RtlPrefixUnicodeString(
  _In_ PCUNICODE_STRING String1,
  _In_ PCUNICODE_STRING String2,
  _In_ BOOLEAN          CaseInSensitive
);

NTSYSAPI NTSTATUS RtlQueryRegistryValueWithFallback(
  _In_  HANDLE          PrimaryHandle,
  _In_  HANDLE          FallbackHandle,
  _In_  PUNICODE_STRING ValueName,
  _In_  ULONG           ValueLength,
  _Out_ PULONG          ValueType,
  _Out_ PVOID           ValueData,
  _Out_ PULONG          ResultLength
);

NTSTATUS RtlRaiseCustomSystemEventTrigger(
  _In_ PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG TriggerConfig
);

NTSYSAPI NTSTATUS RtlRunOnceBeginInitialize(
  _In_ _Out_ PRTL_RUN_ONCE RunOnce,
  _In_      ULONG         Flags,
  _Out_     PVOID         *Context
);

NTSYSAPI NTSTATUS RtlRunOnceComplete(
  _In_ _Out_      PRTL_RUN_ONCE RunOnce,
  _In_           ULONG         Flags,
  _In_opt_ PVOID         Context
);

NTSYSAPI NTSTATUS RtlRunOnceExecuteOnce(
  PRTL_RUN_ONCE         RunOnce,
  PRTL_RUN_ONCE_INIT_FN InitFn,
  PVOID                 Parameter,
  PVOID                 *Context
);

NTSYSAPI VOID RtlRunOnceInitialize(
  _Out_ PRTL_RUN_ONCE RunOnce
);

NTSYSAPI NTSTATUS RtlUpcaseUnicodeString(
  _In_ _Out_ PUNICODE_STRING  DestinationString,
  _In_      PCUNICODE_STRING SourceString,
  _In_      BOOLEAN          AllocateDestinationString
);

NTSYSAPI CHAR RtlUpperChar(
  _In_ CHAR Character
);

NTSYSAPI VOID RtlUpperString(
  _In_ _Out_ PSTRING      DestinationString,
  _In_      const STRING *SourceString
);

NTSYSAPI NTSTATUS RtlValidateCorrelationVector(
  PCORRELATION_VECTOR Vector
);

NTSYSAPI NTSTATUS RtlVolumeDeviceToDosName(
  _In_  PVOID           VolumeDeviceObject,
  _Out_ PUNICODE_STRING DosName
);

BOOLEAN SeSinglePrivilegeCheck(
  _In_ LUID            PrivilegeValue,
  _In_ KPROCESSOR_MODE PreviousMode
);

void SiloContextCleanupCallback(
  _In_ PVOID SiloContext
);


typedef struct _SILO_MONITOR_REGISTRATION {
  UCHAR                           Version;
  BOOLEAN                         MonitorHost;
  BOOLEAN                         MonitorExistingSilos;
  UCHAR                           Reserved[5];
  union {
	PUNICODE_STRING DriverObjectName;
	PUNICODE_STRING ComponentName;
  };
  SILO_MONITOR_CREATE_CALLBACK    CreateCallback;
  SILO_MONITOR_TERMINATE_CALLBACK TerminateCallback;
} SILO_MONITOR_REGISTRATION, *PSILO_MONITOR_REGISTRATION;

void SiloMonitorTerminateCallback(
  _In_ PESILO Silo
);


typedef enum _SUBSYSTEM_INFORMATION_TYPE {
  SubsystemInformationTypeWin32,
  SubsystemInformationTypeWSL,
  MaxSubsystemInformationType
} SUBSYSTEM_INFORMATION_TYPE, *PSUBSYSTEM_INFORMATION_TYPE;



typedef struct _WHEA_ERROR_SOURCE_OVERRIDE_SETTINGS {
  WHEA_ERROR_SOURCE_TYPE Type;
  ULONG                  MaxRawDataLength;
  ULONG                  NumRecordsToPreallocate;
  ULONG                  MaxSectionsPerRecord;
} WHEA_ERROR_SOURCE_OVERRIDE_SETTINGS, *PWHEA_ERROR_SOURCE_OVERRIDE_SETTINGS;

typedef struct _WHEA_FAILED_ADD_DEFECT_LIST_EVENT {
  WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEA_FAILED_ADD_DEFECT_LIST_EVENT, *PWHEA_FAILED_ADD_DEFECT_LIST_EVENT;

typedef struct _WHEA_PCI_RECOVERY_SECTION {
  UINT8   SignalType;
  BOOLEAN RecoveryAttempted;
  UINT8   RecoveryStatus;
} WHEA_PCI_RECOVERY_SECTION, *PWHEA_PCI_RECOVERY_SECTION;

typedef enum _WHEA_PCI_RECOVERY_SIGNAL {
  WheaPciRecoverySignalUnknown,
  WheaPciRecoverySignalAer,
  WheaPciRecoverySignalDpc
} WHEA_PCI_RECOVERY_SIGNAL, *PWHEA_PCI_RECOVERY_SIGNAL;

typedef enum _WHEA_PCI_RECOVERY_STATUS {
  WheaPciREcoveryStatusUnknown,
  WheaPciRecoveryStatusNoError,
  WheaPciRecoveryStatusLinkDisableTimeout,
  WheaPciRecoveryStatusLinkEnableTimeout,
  WheaPciRecoveryStatusRpBusyTimeout,
  WheaPciRecoveryStatusComplexTree,
  WheaPciRecoveryStatusBusNotFound
} WHEA_PCI_RECOVERY_STATUS, *PWHEA_PCI_RECOVERY_STATUS;

typedef struct _WHEA_PSHED_PI_CPU_BUSES_INIT_FAILED_EVENT {
  WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
  NTSTATUS             Status;
} WHEA_PSHED_PI_CPU_BUSES_INIT_FAILED_EVENT, *PWHEA_PSHED_PI_CPU_BUSES_INIT_FAILED_EVENT;

typedef struct _WHEA_PSHED_PLUGIN_INIT_FAILED_EVENT {
  WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
  NTSTATUS             Status;
} WHEA_PSHED_PLUGIN_INIT_FAILED_EVENT, *PWHEA_PSHED_PLUGIN_INIT_FAILED_EVENT;

typedef struct _WHEA_SEA_SECTION {
  ULONG   Esr;
  ULONG64 Far;
  ULONG64 Par;
  BOOLEAN WasKernel;
} WHEA_SEA_SECTION, *PWHEA_SEA_SECTION;

typedef struct _WHEA_SEI_SECTION {
  ULONG   Esr;
  ULONG64 Far;
} WHEA_SEI_SECTION, *PWHEA_SEI_SECTION;

typedef struct _WHEA_SRAS_TABLE_ENTRIES_EVENT {
  WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
  UINT32               LogNumber;
  UINT32               NumberSignals;
  UINT8*               Data;
} WHEA_SRAS_TABLE_ENTRIES_EVENT, *PWHEA_SRAS_TABLE_ENTRIES_EVENT;

typedef struct _WHEA_SRAS_TABLE_ERROR {
  WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEA_SRAS_TABLE_ERROR, *PWHEA_SRAS_TABLE_ERROR;

typedef struct _WHEA_SRAS_TABLE_NOT_FOUND {
  WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEA_SRAS_TABLE_NOT_FOUND, *PWHEA_SRAS_TABLE_NOT_FOUND;

//void WheaAdd2Ptr(
//   P,
//   I
//);

PVOID WheaErrorRecordBuilderAddPacket(
  _In_ _Out_ PWHEA_ERROR_RECORD    Record,
  _In_ _Out_ PWHEA_ERROR_PACKET_V2 Packet,
  _In_      UINT32                MaxSectionCount
);

PVOID WheaErrorRecordBuilderAddSection(
  _In_ _Out_           PWHEA_ERROR_RECORD                         Record,
  _In_                UINT32                                     MaxSectionCount,
  _In_                UINT32                                     SectionLength,
  _In_                WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS Flags,
  _In_                GUID                                       SectionType,
  _In_ _Out_ PVOID                                      DescriptorOut
);

void WheaErrorRecordBuilderInit(
  PWHEA_ERROR_RECORD  Record,
  UINT32              RecordLength,
  WHEA_ERROR_SEVERITY Severity,
  GUID                Notify
);

typedef struct _WHEAP_BAD_HEST_NOTIFY_DATA_EVENT {
  WHEA_EVENT_LOG_ENTRY         WheaEventLogEntry;
  USHORT                       SourceId;
  USHORT                       Reserved;
  WHEA_NOTIFICATION_DESCRIPTOR NotifyDesc;
} WHEAP_BAD_HEST_NOTIFY_DATA_EVENT, *PWHEAP_BAD_HEST_NOTIFY_DATA_EVENT;

typedef struct _WHEAP_DPC_ERROR_EVENT {
  WHEA_EVENT_LOG_ENTRY       WheaEventLogEntry;
  WHEAP_DPC_ERROR_EVENT_TYPE ErrType;
  ULONG                      Bus;
  ULONG                      Device;
  ULONG                      Function;
  USHORT                     DeviceId;
  USHORT                     VendorId;
} WHEAP_DPC_ERROR_EVENT, *PWHEAP_DPC_ERROR_EVENT;

typedef struct _WHEAP_PLUGIN_DEFECT_LIST_CORRUPT {
  WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEAP_PLUGIN_DEFECT_LIST_CORRUPT, *PWHEAP_PLUGIN_DEFECT_LIST_CORRUPT;

typedef struct _WHEAP_PLUGIN_DEFECT_LIST_FULL_EVENT {
  WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEAP_PLUGIN_DEFECT_LIST_FULL_EVENT, *PWHEAP_PLUGIN_DEFECT_LIST_FULL_EVENT;

typedef struct _WHEAP_PLUGIN_DEFECT_LIST_UEFI_VAR_FAILED {
  WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEAP_PLUGIN_DEFECT_LIST_UEFI_VAR_FAILED, *PWHEAP_PLUGIN_DEFECT_LIST_UEFI_VAR_FAILED;

typedef struct _WHEAP_ROW_FAILURE_EVENT {
  WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
  PFN_NUMBER           LowOrderPage;
  PFN_NUMBER           HighOrderPage;
} WHEAP_ROW_FAILURE_EVENT, *PWHEAP_ROW_FAILURE_EVENT;

NTSTATUS WheaRegisterErrorSourceOverride(
  _In_ WHEA_ERROR_SOURCE_OVERRIDE_SETTINGS   OverrideSettings,
  _In_ PWHEA_ERROR_SOURCE_CONFIGURATION      OverrideConfig,
  _In_ WHEA_SIGNAL_HANDLER_OVERRIDE_CALLBACK OverrideCallback
);

BOOLEAN WheaSignalHandlerOverride(
  _In_                WHEA_ERROR_SOURCE_TYPE SourceType,
  _In_ _Out_ UINT_PTR               Context
);

void WheaUnregisterErrorSourceOverride(
  _In_ WHEA_ERROR_SOURCE_TYPE Type,
  _In_ ULONG32                OverrideErrorSourceId
);

NTSYSAPI NTSTATUS ZwAllocateLocallyUniqueId(
  PLUID Luid
);


NTSYSAPI NTSTATUS ZwDeviceIoControlFile(
  _In_            HANDLE           FileHandle,
  _In_opt_  HANDLE           Event,
  _In_opt_  PIO_APC_ROUTINE  ApcRoutine,
  _In_opt_  PVOID            ApcContext,
  _Out_           PIO_STATUS_BLOCK IoStatusBlock,
  _In_            ULONG            IoControlCode,
  _In_opt_  PVOID            InputBuffer,
  _In_            ULONG            InputBufferLength,
  _Out_ PVOID            OutputBuffer,
  _In_            ULONG            OutputBufferLength
);

NTSYSAPI NTSTATUS ZwOpenProcess(
  _Out_          PHANDLE            ProcessHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_           POBJECT_ATTRIBUTES ObjectAttributes,
  _In_opt_ PCLIENT_ID         ClientId
);

NTSYSAPI NTSTATUS ZwPowerInformation(
  _In_            POWER_INFORMATION_LEVEL InformationLevel,
  _In_opt_  PVOID                   InputBuffer,
  _In_            ULONG                   InputBufferLength,
  _Out_ PVOID                   OutputBuffer,
  _In_            ULONG                   OutputBufferLength
);

NTSYSAPI NTSTATUS ZwQueryVolumeInformationFile(
  _In_  HANDLE               FileHandle,
  _Out_ PIO_STATUS_BLOCK     IoStatusBlock,
  _Out_ PVOID                FsInformation,
  _In_  ULONG                Length,
  _In_  FS_INFORMATION_CLASS FsInformationClass
);

NTSYSAPI NTSTATUS ZwSetInformationThread(
  _In_ HANDLE          ThreadHandle,
  _In_ THREADINFOCLASS ThreadInformationClass,
  _In_ PVOID           ThreadInformation,
  _In_ ULONG           ThreadInformationLength
);


NTSYSAPI NTSTATUS ZwTerminateProcess(
  _In_opt_ HANDLE   ProcessHandle,
  _In_           NTSTATUS ExitStatus
);

bool NT_SUCCESS(NTSTATUS Status);

#endif