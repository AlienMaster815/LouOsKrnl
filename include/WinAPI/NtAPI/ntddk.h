
#include <NtAPI.h>

#ifndef _NTDDK_H
#define _NTDDK_H
/*
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
*/
//typedef enum {
//	IndicatorOn,
//	IndicatorBlink,
//	IndicatorOff
//} PCI_EXPRESS_INDICATOR_STATE;

//typedef enum {
//	L0s_Below64ns,
//	L0s_64ns_128ns,
//	L0s_128ns_256ns,
//	L0s_256ns_512ns,
//	L0s_512ns_1us,
//	L0s_1us_2us,
//	L0s_2us_4us,
//	L0s_Above4us
//} PCI_EXPRESS_L0s_EXIT_LATENCY;

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

//typedef enum {
//	BusWidth32Bits,
//	BusWidth64Bits
//} PCI_BUS_WIDTH;

//typedef enum {
//	PciDeviceD3Cold_State_Disabled_BitIndex,
//	PciDeviceD3Cold_State_Enabled_BitIndex,
//	PciDeviceD3Cold_State_ParentRootPortS0WakeSupported_BitIndex,
//	PciDeviceD3Cold_State_Disabled_Bridge_HackFlags_BitIndex,
//	PciDeviceD3Cold_Reason_Default_State_BitIndex,
//	PciDeviceD3Cold_Reason_INF_BitIndex,
//	PciDeviceD3Cold_Reason_Interface_Api_BitIndex
//} PCI_DEVICE_D3COLD_STATE_REASON;

//typedef enum {
//	L1_Below1us,
//	L1_1us_2us,
//	L1_2us_4us,
//	L1_4us_8us,
//	L1_8us_16us,
//	L1_16us_32us,
//	L1_32us_64us,
//	L1_Above64us
//} PCI_EXPRESS_L1_EXIT_LATENCY;


//typedef union _PCI_EXPRESS_LINK_CAPABILITIES_2_REGISTER {
//	struct {
//		ULONG Rsvd0 : 1;
//		ULONG SupportedLinkSpeedsVector : 7;
//		ULONG Rsvd8_31 : 24;
//	} DUMMYSTRUCTNAME;
//	ULONG  AsULONG;
//} PCI_EXPRESS_LINK_CAPABILITIES_2_REGISTER, * PPCI_EXPRESS_LINK_CAPABILITIES_2_REGISTER;

typedef struct _BDCB_IMAGE_INFORMATION {
	//BDCB_CLASSIFICATION Classification;
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
	BOOLEAN                       ProcessorFeatures[PROCESSOR_FEATURE_MAX];
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


typedef union _PCI_EXPRESS_LINK_CONTROL_2_REGISTER {
  struct {
	USHORT TargetLinkSpeed : 4;
	USHORT Rsvd4_15 : 12;
  } DUMMYSTRUCTNAME;
  USHORT AsUSHORT;
} PCI_EXPRESS_LINK_CONTROL_2_REGISTER, *PPCI_EXPRESS_LINK_CONTROL_2_REGISTER;

typedef union _PCI_EXPRESS_LINK_STATUS_2_REGISTER {
  struct {
	USHORT Rsvd0_15 : 16;
  } DUMMYSTRUCTNAME;
  USHORT AsUSHORT;
} PCI_EXPRESS_LINK_STATUS_2_REGISTER, *PPCI_EXPRESS_LINK_STATUS_2_REGISTER;

typedef enum {
  PciExpressPciPmLinkSubState_L11_BitIndex,
  PciExpressPciPmLinkSubState_L12_BitIndex,
  PciExpressASPMLinkSubState_L11_BitIndex,
  PciExpressASPMLinkSubState_L12_BitIndex
} PCI_EXPRESS_LINK_SUBSTATE;

typedef enum {
  MaxPayload128Bytes,
  MaxPayload256Bytes,
  MaxPayload512Bytes,
  MaxPayload1024Bytes,
  MaxPayload2048Bytes,
  MaxPayload4096Bytes
} PCI_EXPRESS_MAX_PAYLOAD_SIZE;

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

typedef enum PCR_BTI_VBAR_INDEX {
  BtiVbarNone,
  BtiVbarTrapHvc,
  BtiVbarTrapSmc,
  BtiVbarBhbDsbIsb,
  BtiVbarBhbSb,
  BtiVbarBhbClr
} ;


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

typedef enum _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR_TYPE {
  ResourceTypeSingle,
  ResourceTypeRange,
  ResourceTypeExtendedCounterConfiguration,
  ResourceTypeOverflow,
  ResourceTypeEventBuffer,
  ResourceTypeIdenitificationTag,
  ResourceTypeMax
} PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR_TYPE;

typedef struct _PHYSICAL_COUNTER_RESOURCE_LIST {
  ULONG                                Count;
  PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR Descriptors[ANYSIZE_ARRAY];
} PHYSICAL_COUNTER_RESOURCE_LIST, *PPHYSICAL_COUNTER_RESOURCE_LIST;

*/
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
	//BDCB_CALLBACK_TYPE Classification,
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
	//_In_  ArcName,
	//_In_  DeviceName
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

NTSTATUS IoDecrementKeepAliveCount(
	//_In_ _Out_ PFILE_OBJECT FileObject,
	//_In_ _Out_ PEPROCESS    Process
);

//COPY HERE

void IoDeleteController(
	_In_ PCONTROLLER_OBJECT ControllerObject
);

void IoFreeController(
	_In_ PCONTROLLER_OBJECT ControllerObject
);

NTSTATUS IoGetActivityIdIrp(
	//[in]  PIRP   Irp,
	//[out] LPGUID Guid
);

//LPCGUID IoGetActivityIdThread();

PCONFIGURATION_INFORMATION IoGetConfigurationInformation();

//PGENERIC_MAPPING IoGetFileObjectGenericMapping();

//PEPROCESS IoGetInitiatorProcess(
	//[in] PFILE_OBJECT FileObject
//);

//IO_PAGING_PRIORITY IoGetPagingIoPriority(
//	[in] PIRP Irp
//);

//PIO_FOEXT_SHADOW_FILE IoGetShadowFileInformation(
	//[in] PFILE_OBJECT FileObject
//);

NTSTATUS IoIncrementKeepAliveCount(
	//[in, out] PFILE_OBJECT FileObject,
	//[in, out] PEPROCESS    Process
);

//LOGICAL IoIsValidIrpStatus(
	//[in] IN NTSTATUS Status
//);

//PIRP IoMakeAssociatedIrp(
	//[in] PIRP  Irp,
	//[in] CCHAR StackSize
//);

NTSTATUS IoPropagateActivityIdToThread(
	//[in]  PIRP    Irp,
	//[out] LPGUID  PropagatedId,
	//LPCGUID* OriginalId
);

NTSTATUS IoQueryFullDriverPath(
	//[in]  PDRIVER_OBJECT  DriverObject,
	//[out] PUNICODE_STRING FullPath
);

void IoRaiseHardError(
	//[in]           PIRP           Irp,
	//[in, optional] PVPB           Vpb,
	//[in]           PDEVICE_OBJECT RealDeviceObject
);

BOOLEAN IoRaiseInformationalHardError(
	//[in]           NTSTATUS        ErrorStatus,
	//[in, optional] PUNICODE_STRING String,
	//[in, optional] PKTHREAD        Thread
);

PVOID IoRegisterBootDriverCallback(
	//[in]           PBOOT_DRIVER_CALLBACK_FUNCTION CallbackFunction,
	//[in, optional] PVOID                          CallbackContext
);

void IoRegisterBootDriverReinitialization(
	//[in]           PDRIVER_OBJECT       DriverObject,
	//[in]           PDRIVER_REINITIALIZE DriverReinitializationRoutine,
	//[in, optional] PVOID                Context
);

void IoRegisterDriverReinitialization(
	//[in]           PDRIVER_OBJECT       DriverObject,
	//[in]           PDRIVER_REINITIALIZE DriverReinitializationRoutine,
	//[in, optional] PVOID                Context
);

NTSTATUS IoReportDetectedDevice(
	//[in]           PDRIVER_OBJECT                 DriverObject,
	//[in]           INTERFACE_TYPE                 LegacyBusType,
	//[in]           ULONG                          BusNumber,
	//[in]           ULONG                          SlotNumber,
	//[in, optional] PCM_RESOURCE_LIST              ResourceList,
	//[in, optional] PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements,
	//[in]           BOOLEAN                        ResourceAssigned,
	//[in, out]      PDEVICE_OBJECT* DeviceObject
);

NTSTATUS IoReportResourceForDetection(
	//[in]           PDRIVER_OBJECT    DriverObject,
	//[in, optional] PCM_RESOURCE_LIST DriverList,
	//[in, optional] ULONG             DriverListSize,
	//[in, optional] PDEVICE_OBJECT    DeviceObject,
	//[in, optional] PCM_RESOURCE_LIST DeviceList,
	//[in, optional] ULONG             DeviceListSize,
	//[out]          PBOOLEAN          ConflictDetected
);

NTSTATUS IoReportRootDevice(
	//[in] PDRIVER_OBJECT DriverObject
);
NTSTATUS IoSetActivityIdIrp(
	//[in]           PIRP    Irp,
	//[in, optional] LPCGUID Guid
);
/*
LPCGUID IoSetActivityIdThread(
	LPCGUID ActivityId
);
void IoSetHardErrorOrVerifyDevice(
	[in] PIRP           Irp,
	[in] PDEVICE_OBJECT DeviceObject
);
void IoSetMasterIrpStatus(
	[in, out] PIRP     MasterIrp,
	[in]      NTSTATUS Status
);
NTSTATUS IoSetShadowFileInformation(
	[in] PFILE_OBJECT FileObject,
	[in] PFILE_OBJECT BackingFileObject,
	[in] PVOID        BackingFltInstance
);
NTSTATUS IoSetSystemPartition(
	[in] PUNICODE_STRING VolumeNameString
);
BOOLEAN IoSetThreadHardErrorMode(
	[in] BOOLEAN EnableHardErrors
);
void IoTransferActivityId(
	[in] LPCGUID ActivityId,
	[in] LPCGUID RelatedActivityId
);

void IoUnregisterBootDriverCallback(
	[in] PVOID CallbackHandle
);
NTSTATUS IoVerifyPartitionTable(
	[in] PDEVICE_OBJECT DeviceObject,
	[in] BOOLEAN        FixErrors
);
NTSTATUS IoVolumeDeviceToDosName(
	[in]  PVOID           VolumeDeviceObject,
	[out] PUNICODE_STRING DosName
);

BOOLEAN KeAreApcsDisabled();

void KeBugCheck(
	[in] ULONG BugCheckCode
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
	[out, optional] PPROCESSOR_NUMBER ProcNumber
);

NTSTATUS KeInitializeCrashDumpHeader(
	[in]            ULONG  DumpType,
	[in]            ULONG  Flags,
	[out]           PVOID  Buffer,
	[in]            ULONG  BufferSize,
	[out, optional] PULONG BufferNeeded
);

BOOLEAN KeInvalidateAllCaches();

void KeInvalidateRangeAllCaches(
	PVOID BaseAddress,
	ULONG Length
);

void KeLeaveCriticalRegion();

void KeLeaveGuardedRegion();

LONG KePulseEvent(
	[in, out] PRKEVENT  Event,
	[in]      KPRIORITY Increment,
	[in]      BOOLEAN   Wait
);

USHORT KeQueryActiveGroupCount();

ULONG KeQueryActiveProcessorCount(
	[out, optional] PKAFFINITY ActiveProcessors
);

ULONG KeQueryActiveProcessorCountEx(
	[in] USHORT GroupNumber
);
KAFFINITY KeQueryActiveProcessors();

KAFFINITY KeQueryGroupAffinity(
	[in] USHORT GroupNumber
);

KAFFINITY KeQueryGroupAffinity(
	[in] USHORT GroupNumber
);
USHORT KeQueryHighestNodeNumber();

USHORT KeQueryMaximumGroupCount();

ULONG KeQueryMaximumProcessorCount();

ULONG KeQueryMaximumProcessorCountEx(
	[in] USHORT GroupNumber
);

USHORT KeQueryNodeMaximumProcessorCount(
	[in] USHORT NodeNumber
);
VOID
KeQueryTickCount(
	_Out_ PLARGE_INTEGER CurrentCount
);
_DECL_HAL_KE_IMPORT KIRQL KeRaiseIrqlToDpcLevel();

LONG KeSetBasePriorityThread(
	[in, out] PKTHREAD Thread,
	[in]      LONG     Increment
);

NTSTATUS KeSetHardwareCounterConfiguration(
	[in] PHARDWARE_COUNTER CounterArray,
	[in] ULONG             Count
);

void KeSetImportanceDpc(
	[in, out] PRKDPC          Dpc,
	[in]      KDPC_IMPORTANCE Importance
);

void KeSetTargetProcessorDpc(
	[in, out] PRKDPC Dpc,
	[in]      CCHAR  Number
);

NTSTATUS MmAddPhysicalMemory(
	[in] PPHYSICAL_ADDRESS StartAddress,
	[in] PLARGE_INTEGER    NumberOfBytes
);

PVOID MmAllocateContiguousMemory(
	[in] SIZE_T           NumberOfBytes,
	[in] PHYSICAL_ADDRESS HighestAcceptableAddress
);

PVOID MmAllocateContiguousMemorySpecifyCache(
	[in]           SIZE_T              NumberOfBytes,
	[in]           PHYSICAL_ADDRESS    LowestAcceptableAddress,
	[in]           PHYSICAL_ADDRESS    HighestAcceptableAddress,
	[in, optional] PHYSICAL_ADDRESS    BoundaryAddressMultiple,
	[in]           MEMORY_CACHING_TYPE CacheType
);

PVOID MmAllocateContiguousMemorySpecifyCacheNode(
	[in]           SIZE_T              NumberOfBytes,
	[in]           PHYSICAL_ADDRESS    LowestAcceptableAddress,
	[in]           PHYSICAL_ADDRESS    HighestAcceptableAddress,
	[in, optional] PHYSICAL_ADDRESS    BoundaryAddressMultiple,
	[in]           MEMORY_CACHING_TYPE CacheType,
	[in]           NODE_REQUIREMENT    PreferredNode
);

PVOID MmAllocateContiguousNodeMemory(
	[in]           SIZE_T           NumberOfBytes,
	[in]           PHYSICAL_ADDRESS LowestAcceptableAddress,
	[in]           PHYSICAL_ADDRESS HighestAcceptableAddress,
	[in, optional] PHYSICAL_ADDRESS BoundaryAddressMultiple,
	[in]           ULONG            Protect,
	[in]           NODE_REQUIREMENT PreferredNode
);

PVOID MmAllocateNonCachedMemory(
	[in] SIZE_T NumberOfBytes
);

NTSTATUS MmCopyMemory(
	[in]  PVOID           TargetAddress,
	[in]  MM_COPY_ADDRESS SourceAddress,
	[in]  SIZE_T          NumberOfBytes,
	[in]  ULONG           Flags,
	[out] PSIZE_T         NumberOfBytesTransferred
);

void MmFreeContiguousMemory(
	[in] PVOID BaseAddress
);

void MmFreeContiguousMemorySpecifyCache(
	[in] PVOID               BaseAddress,
	[in] SIZE_T              NumberOfBytes,
	[in] MEMORY_CACHING_TYPE CacheType
);

void MmFreeNonCachedMemory(
	[in] PVOID  BaseAddress,
	[in] SIZE_T NumberOfBytes
);

PHYSICAL_ADDRESS MmGetPhysicalAddress(
	[in] PVOID BaseAddress
);

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRangesEx2(
	PVOID PartitionObject,
	ULONG Flags
);

//Not A Recomended Function
BOOLEAN MmIsAddressValid(
	[in] PVOID VirtualAddress
);

BOOLEAN MmIsThisAnNtAsSystem();

void MmLockPagableSectionByHandle(
	[in] PVOID ImageSectionHandle
);

NTSTATUS MmMapViewInSystemSpace(
	PVOID   Section,
	PVOID* MappedBase,
	PSIZE_T ViewSize
);


HANDLE MmSecureVirtualMemory(
	[in] PVOID  Address,
	[in] SIZE_T Size,
	[in] ULONG  ProbeMode
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
  [in] HANDLE SecureHandle
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtOpenProcess(
  [out]          PHANDLE            ProcessHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in]           POBJECT_ATTRIBUTES ObjectAttributes,
  [in, optional] PCLIENT_ID         ClientId
);


void PcreateProcessNotifyRoutine(
  [in] HANDLE ParentId,
  [in] HANDLE ProcessId,
  [in] BOOLEAN Create
);


void PcreateProcessNotifyRoutineEx(
  [_Inout_]           PEPROCESS Process,
  [in]                HANDLE ProcessId,
  [in, out, optional] PPS_CREATE_NOTIFY_INFO CreateInfo
);

void PcreateThreadNotifyRoutine(
  [in] HANDLE ProcessId,
  [in] HANDLE ThreadId,
  [in] BOOLEAN Create
);

NTSTATUS PgetLocationString(
  [in, out] PVOID Context,
  [out]     PZZWSTR *LocationStrings
);

void Phalexaminembr(
  [in]  PDEVICE_OBJECT DeviceObject,
  [in]  ULONG SectorSize,
  [in]  ULONG MBRTypeIdentifier,
  [out] PVOID *Buffer
);


NTSTATUS Phalquerysysteminformation(
  [in]  HAL_QUERY_INFORMATION_CLASS InformationClass,
  [in]  ULONG BufferSize,
  [out] PVOID Buffer,
  [out] PULONG ReturnedLength
);

NTSTATUS Phalsetsysteminformation(
  [in]  HAL_SET_INFORMATION_CLASS InformationClass,
  [in]  ULONG BufferSize,
  [out] PVOID Buffer
)

PLOAD_IMAGE_NOTIFY_ROUTINE PloadImageNotifyRoutine;

void PloadImageNotifyRoutine(
  [in, optional] PUNICODE_STRING FullImageName,
  [in]           HANDLE ProcessId,
  [in]           PIMAGE_INFO ImageInfo
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

NTSTATUS PsAllocSiloContextSlot(
  [in]  ULONG_PTR Reserved,
  [out] ULONG     *ReturnedContextSlot
);

PESILO PsAttachSiloToCurrentThread(
  [in] PESILO Silo
);

typedef enum _PSCREATEPROCESSNOTIFYTYPE {
  PsCreateProcessNotifySubsystems
} PSCREATEPROCESSNOTIFYTYPE;

NTSTATUS PsCreateSiloContext(
  [in]           PESILO                        Silo,
  [in]           ULONG                         Size,
  [in]           POOL_TYPE                     PoolType,
  [in, optional] SILO_CONTEXT_CLEANUP_CALLBACK ContextCleanupCallback,
				 PVOID                         *ReturnedSiloContext
);

typedef enum _PSCREATETHREADNOTIFYTYPE {
  PsCreateThreadNotifyNonSystem,
  PsCreateThreadNotifySubsystems
} PSCREATETHREADNOTIFYTYPE;

void PsDereferenceSiloContext(
  [in] PVOID SiloContext
);

void PsDetachSiloFromCurrentThread(
  [in] PESILO PreviousSilo
);

NTSTATUS PsFreeSiloContextSlot(
  [in] ULONG ContextSlot
);

HANDLE PsGetCurrentProcessId();

PESILO PsGetCurrentServerSilo();

PESILO PsGetCurrentSilo();

PETHREAD PsGetCurrentThread();

HANDLE PsGetCurrentThreadId();

PVOID PsGetCurrentThreadTeb();

PESILO PsGetEffectiveServerSilo(
  [in] PESILO Silo
);

PESILO PsGetHostSilo();

NTSTATUS PsGetJobServerSilo(
  [in, optional] PEJOB  Job,
  [out]          PESILO *ServerSilo
);

NTSTATUS PsGetJobSilo(
  [in]  PEJOB  Job,
  [out] PESILO *Silo
);

PESILO PsGetParentSilo(
  [in, optional] PEJOB Job
);

NTSTATUS PsGetPermanentSiloContext(
  [in] PESILO Silo,
  [in] ULONG  ContextSlot,
	   PVOID  *ReturnedSiloContext
);

LONGLONG PsGetProcessCreateTimeQuadPart(
  [in] PEPROCESS Process
);

NTSTATUS PsGetProcessExitStatus(
  [in] PEPROCESS Process
);

HANDLE PsGetProcessId(
  [in] PEPROCESS Process
);

ULONGLONG PsGetProcessStartKey(
  [in] PEPROCESS Process
);

ULONG PsGetServerSiloActiveConsoleId(
  PESILO Silo
);

GUID * PsGetSiloContainerId(
  [in] PESILO Silo
);

NTSTATUS PsGetSiloContext(
  [in] PESILO Silo,
  [in] ULONG  ContextSlot,
	   PVOID  *ReturnedSiloContext
);

ULONG PsGetSiloMonitorContextSlot(
  [in] PSILO_MONITOR Monitor
);

LONGLONG PsGetThreadCreateTime(
  [in] PETHREAD Thread
);

NTSTATUS PsGetThreadExitStatus(
  [in] PETHREAD Thread
);

HANDLE PsGetThreadId(
  [in] PETHREAD Thread
);

HANDLE PsGetThreadProcessId(
  PETHREAD Thread
);

PESILO PsGetThreadServerSilo(
  [In] PETHREAD Thread
);

NTSTATUS PsInsertPermanentSiloContext(
  [in] PESILO Silo,
  [in] ULONG  ContextSlot,
  [in] PVOID  SiloContext
);

NTSTATUS PsInsertSiloContext(
  [in] PESILO Silo,
  [in] ULONG  ContextSlot,
  [in] PVOID  SiloContext
);

BOOLEAN PsIsHostSilo(
  [in] PESILO Silo
);

NTSTATUS PsMakeSiloContextPermanent(
  [in] PESILO Silo,
  [in] ULONG  ContextSlot
);

void PsReferenceSiloContext(
  [in] PVOID SiloContext
);

NTSTATUS PsRemoveCreateThreadNotifyRoutine(
  [in] PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine
);

NTSTATUS PsRemoveLoadImageNotifyRoutine(
  [in] PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine
);

NTSTATUS PsRemoveSiloContext(
  [in] PESILO Silo,
  [in] ULONG  ContextSlot,
	   PVOID  *RemovedSiloContext
);

NTSTATUS PsReplaceSiloContext(
  [in]       PESILO Silo,
  [in]       ULONG  ContextSlot,
  [in]       PVOID  NewSiloContext,
  [optional] PVOID  *OldSiloContext
);

NTSTATUS PsSetCreateProcessNotifyRoutine(
  [in] PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine,
  [in] BOOLEAN                        Remove
);

NTSTATUS PsSetCreateProcessNotifyRoutineEx(
  [in] PCREATE_PROCESS_NOTIFY_ROUTINE_EX NotifyRoutine,
  [in] BOOLEAN                           Remove
);

NTSTATUS PsSetCreateProcessNotifyRoutineEx2(
  [in] PSCREATEPROCESSNOTIFYTYPE NotifyType,
  [in] PVOID                     NotifyInformation,
  [in] BOOLEAN                   Remove
);

NTSTATUS PsSetCreateThreadNotifyRoutine(
  [in] PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine
);

NTSTATUS PsSetCreateThreadNotifyRoutineEx(
  [in] PSCREATETHREADNOTIFYTYPE NotifyType,
  [in] PVOID                    NotifyInformation
);

NTSTATUS PsSetLoadImageNotifyRoutine(
  [in] PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine
);

NTSTATUS PsSetLoadImageNotifyRoutineEx(
  [in] PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine,
  [in] ULONG_PTR                  Flags
);

NTSTATUS PsStartSiloMonitor(
  [in] PSILO_MONITOR Monitor
);

void PsTerminateServerSilo(
  [in] PESILO   ServerSilo,
	   NTSTATUS ExitStatus
);

void PsUnregisterSiloMonitor(
  [in] PSILO_MONITOR Monitor
);

RTL_RUN_ONCE_INIT_FN (
	_Inout_ PRTL_RUN_ONCE RunOnce,
	_Inout_opt_ PVOID Parameter,
	_Inout_opt_ PVOID *Context
  );

  NTSYSAPI NTSTATUS RtlCharToInteger(
  [in]           PCSZ   String,
  [in, optional] ULONG  Base,
  [out]          PULONG Value
);

LONG RtlCompareString(
  [in] const STRING *String1,
  [in] const STRING *String2,
  [in] BOOLEAN      CaseInSensitive
);

NTAPI_INLINE RtlConvertUlongToLuid(
  [in] ULONG Ulong
);

VOID RtlCopyString(
  [out]          PSTRING      DestinationString,
  [in, optional] const STRING *SourceString
);

BOOLEAN RtlEqualString(
  [in] const STRING *String1,
  [in] const STRING *String2,
  [in] BOOLEAN      CaseInSensitive
);

NTSYSAPI ULONG64 RtlGetEnabledExtendedFeatures(
  [in] ULONG64 FeatureMask
);

NTSYSAPI NTSTATUS RtlGetPersistedStateLocation(
  [_In_]      PCWSTR              SourceID,
  [_In_opt_]  PCWSTR              CustomValue,
  [_In_opt_]  PCWSTR              DefaultPath,
  [_In_]      STATE_LOCATION_TYPE StateLocationType,
  [_In_]      PWCHAR              TargetPath,
  [_In_]      ULONG               BufferLengthIn,
  [_Out_opt_] PULONG              BufferLengthOut
);


NTSYSAPI NTSTATUS RtlIncrementCorrelationVector(
  [in, out] PCORRELATION_VECTOR CorrelationVector
);

NTSYSAPI NTSTATUS RtlInitializeCorrelationVector(
  [in, out] PCORRELATION_VECTOR CorrelationVector,
  [in]      int                 Version,
  [in]      const GUID          *Guid
);

NTSYSAPI BOOLEAN RtlIsStateSeparationEnabled();

NTSYSAPI BOOLEAN RtlIsZeroMemory(
  PVOID  Buffer,
  SIZE_T Length
);

NTSYSAPI VOID RtlMapGenericMask(
  [in, out] PACCESS_MASK          AccessMask,
  [in]      const GENERIC_MAPPING *GenericMapping
);

NTSYSAPI BOOLEAN RtlNormalizeSecurityDescriptor(
  PSECURITY_DESCRIPTOR *SecurityDescriptor,
  ULONG                SecurityDescriptorLength,
  PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
  PULONG               NewSecurityDescriptorLength,
  BOOLEAN              CheckOnly
);

NTSYSAPI BOOLEAN RtlPrefixUnicodeString(
  [in] PCUNICODE_STRING String1,
  [in] PCUNICODE_STRING String2,
  [in] BOOLEAN          CaseInSensitive
);

NTSYSAPI NTSTATUS RtlQueryRegistryValueWithFallback(
  [in]  HANDLE          PrimaryHandle,
  [in]  HANDLE          FallbackHandle,
  [in]  PUNICODE_STRING ValueName,
  [in]  ULONG           ValueLength,
  [Out] PULONG          ValueType,
  [out] PVOID           ValueData,
  [out] PULONG          ResultLength
);

NTSTATUS RtlRaiseCustomSystemEventTrigger(
  [_In_] PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG TriggerConfig
);

NTSYSAPI NTSTATUS RtlRunOnceBeginInitialize(
  [in, out] PRTL_RUN_ONCE RunOnce,
  [in]      ULONG         Flags,
  [out]     PVOID         *Context
);

NTSYSAPI NTSTATUS RtlRunOnceComplete(
  [in, out]      PRTL_RUN_ONCE RunOnce,
  [in]           ULONG         Flags,
  [in, optional] PVOID         Context
);

NTSYSAPI NTSTATUS RtlRunOnceExecuteOnce(
  PRTL_RUN_ONCE         RunOnce,
  PRTL_RUN_ONCE_INIT_FN InitFn,
  PVOID                 Parameter,
  PVOID                 *Context
);

NTSYSAPI VOID RtlRunOnceInitialize(
  [out] PRTL_RUN_ONCE RunOnce
);

NTSYSAPI NTSTATUS RtlUpcaseUnicodeString(
  [in, out] PUNICODE_STRING  DestinationString,
  [in]      PCUNICODE_STRING SourceString,
  [in]      BOOLEAN          AllocateDestinationString
);

NTSYSAPI CHAR RtlUpperChar(
  [in] CHAR Character
);

NTSYSAPI VOID RtlUpperString(
  [in, out] PSTRING      DestinationString,
  [in]      const STRING *SourceString
);

NTSYSAPI NTSTATUS RtlValidateCorrelationVector(
  PCORRELATION_VECTOR Vector
);

NTSYSAPI NTSTATUS RtlVolumeDeviceToDosName(
  [in]  PVOID           VolumeDeviceObject,
  [out] PUNICODE_STRING DosName
);

BOOLEAN SeSinglePrivilegeCheck(
  [in] LUID            PrivilegeValue,
  [in] KPROCESSOR_MODE PreviousMode
);

typedef struct _SIGNAL_REG_VALUE {
  UINT8  RegName[WCS_RAS_REGISTER_NAME_MAX_LENGTH];
  UINT32 MsrAddr;
  UINT64 Value;
} SIGNAL_REG_VALUE, *PSIGNAL_REG_VALUE;

void SiloContextCleanupCallback(
  [in] PVOID SiloContext
);

SILO_MONITOR_CREATE_CALLBACK SiloMonitorCreateCallback;

NTSTATUS SiloMonitorCreateCallback(
  [in] PESILO Silo
)
{...}

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
  [in] PESILO Silo
);

typedef enum _STATE_LOCATION_TYPE {
  LocationTypeRegistry,
  LocationTypeFileSystem,
  LocationTypeMaximum
} STATE_LOCATION_TYPE;

typedef enum _SUBSYSTEM_INFORMATION_TYPE {
  SubsystemInformationTypeWin32,
  SubsystemInformationTypeWSL,
  MaxSubsystemInformationType
} SUBSYSTEM_INFORMATION_TYPE, *PSUBSYSTEM_INFORMATION_TYPE;

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
} WHEA_ACPI_HEADER, *PWHEA_ACPI_HEADER;

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
  UINT8                Data[ANY_SIZE];
} WHEA_SRAS_TABLE_ENTRIES_EVENT, *PWHEA_SRAS_TABLE_ENTRIES_EVENT;

typedef struct _WHEA_SRAS_TABLE_ERROR {
  WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEA_SRAS_TABLE_ERROR, *PWHEA_SRAS_TABLE_ERROR;

typedef struct _WHEA_SRAS_TABLE_NOT_FOUND {
  WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEA_SRAS_TABLE_NOT_FOUND, *PWHEA_SRAS_TABLE_NOT_FOUND;

void WheaAdd2Ptr(
   P,
   I
);

PVOID WheaErrorRecordBuilderAddPacket(
  [in, out] PWHEA_ERROR_RECORD    Record,
  [in, out] PWHEA_ERROR_PACKET_V2 Packet,
  [in]      UINT32                MaxSectionCount
);

PVOID WheaErrorRecordBuilderAddSection(
  [in, out]           PWHEA_ERROR_RECORD                         Record,
  [in]                UINT32                                     MaxSectionCount,
  [in]                UINT32                                     SectionLength,
  [in]                WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS Flags,
  [in]                GUID                                       SectionType,
  [in, out, optional] PVOID                                      DescriptorOut
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

typedef enum _WHEAP_DPC_ERROR_EVENT_TYPE {
  WheapDpcErrNoErr,
  WheapDpcErrBusNotFound,
  WheapDpcErrDpcedSubtree,
  WheapDpcErrDeviceIdBad,
  WheapDpcErrResetFailed,
  WheapDpcErrNoChildren
} WHEAP_DPC_ERROR_EVENT_TYPE, *PWHEAP_DPC_ERROR_EVENT_TYPE;

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
  [in] WHEA_ERROR_SOURCE_OVERRIDE_SETTINGS   OverrideSettings,
  [in] PWHEA_ERROR_SOURCE_CONFIGURATION      OverrideConfig,
  [in] WHEA_SIGNAL_HANDLER_OVERRIDE_CALLBACK OverrideCallback
);

BOOLEAN WheaSignalHandlerOverride(
  [in]                WHEA_ERROR_SOURCE_TYPE SourceType,
  [in, out, optional] UINT_PTR               Context
);

void WheaUnregisterErrorSourceOverride(
  [in] WHEA_ERROR_SOURCE_TYPE Type,
  [in] ULONG32                OverrideErrorSourceId
);

NTSYSAPI NTSTATUS ZwAllocateLocallyUniqueId(
  PLUID Luid
);


NTSYSAPI NTSTATUS ZwDeviceIoControlFile(
  [in]            HANDLE           FileHandle,
  [in, optional]  HANDLE           Event,
  [in, optional]  PIO_APC_ROUTINE  ApcRoutine,
  [in, optional]  PVOID            ApcContext,
  [out]           PIO_STATUS_BLOCK IoStatusBlock,
  [in]            ULONG            IoControlCode,
  [in, optional]  PVOID            InputBuffer,
  [in]            ULONG            InputBufferLength,
  [out, optional] PVOID            OutputBuffer,
  [in]            ULONG            OutputBufferLength
);

NTSYSAPI NTSTATUS ZwOpenProcess(
  [out]          PHANDLE            ProcessHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in]           POBJECT_ATTRIBUTES ObjectAttributes,
  [in, optional] PCLIENT_ID         ClientId
);

NTSYSAPI NTSTATUS ZwPowerInformation(
  [in]            POWER_INFORMATION_LEVEL InformationLevel,
  [in, optional]  PVOID                   InputBuffer,
  [in]            ULONG                   InputBufferLength,
  [out, optional] PVOID                   OutputBuffer,
  [in]            ULONG                   OutputBufferLength
);

NTSYSAPI NTSTATUS ZwQueryVolumeInformationFile(
  [in]  HANDLE               FileHandle,
  [out] PIO_STATUS_BLOCK     IoStatusBlock,
  [out] PVOID                FsInformation,
  [in]  ULONG                Length,
  [in]  FS_INFORMATION_CLASS FsInformationClass
);

NTSYSAPI NTSTATUS ZwSetInformationThread(
  [in] HANDLE          ThreadHandle,
  [in] THREADINFOCLASS ThreadInformationClass,
  [in] PVOID           ThreadInformation,
  [in] ULONG           ThreadInformationLength
);


NTSYSAPI NTSTATUS ZwTerminateProcess(
  [in, optional] HANDLE   ProcessHandle,
  [in]           NTSTATUS ExitStatus
);
*/
#endif