#ifndef _PEPFX_H
#define _PEPFX_H

/*

typedef enum _GPIO_PIN_CONFIG_TYPE {
  PullDefault,
  PullUp,
  PullDown,
  PullNone
} GPIO_PIN_CONFIG_TYPE;

typedef enum _GPIO_PIN_IORESTRICTION_TYPE {
  IoRestrictionNone,
  IoRestrictionInputOnly,
  IoRestrictionOutputOnly,
  IoRestrictionNoneAndPreserve
} GPIO_PIN_IORESTRICTION_TYPE;

typedef struct _PEP_ABANDON_DEVICE {
  [in]  PCUNICODE_STRING DeviceId;
  [out] BOOLEAN          DeviceAccepted;
} PEP_ABANDON_DEVICE, *PPEP_ABANDON_DEVICE;

typedef struct _PEP_ACPI_ABANDON_DEVICE {
  [in]  PCUNICODE_STRING AcpiDeviceName;
  [out] BOOLEAN          DeviceAccepted;
} PEP_ACPI_ABANDON_DEVICE, *PPEP_ACPI_ABANDON_DEVICE;

typedef struct _PEP_ACPI_ENUMERATE_DEVICE_NAMESPACE {
  PEPHANDLE                      DeviceHandle;
  ULONG                          RequestFlags;
  NTSTATUS                       Status;
  ULONG                          ObjectCount;
  SIZE_T                         ObjectBufferSize;
  PEP_ACPI_OBJECT_NAME_WITH_TYPE Objects[ANYSIZE_ARRAY];
} PEP_ACPI_ENUMERATE_DEVICE_NAMESPACE, *PPEP_ACPI_ENUMERATE_DEVICE_NAMESPACE;

typedef struct _PEP_ACPI_EVALUATE_CONTROL_METHOD {
  PEPHANDLE             DeviceHandle;
  ULONG                 RequestFlags;
  union {
    ULONG       MethodName;
    ANSI_STRING MethodNameString;
  };
  NTSTATUS              MethodStatus;
  PVOID                 CompletionContext;
  ULONG                 InputArgumentCount;
  SIZE_T                InputArgumentSize;
  PACPI_METHOD_ARGUMENT InputArguments;
  ULONG                 OutputArgumentCount;
  SIZE_T                OutputArgumentSize;
  PACPI_METHOD_ARGUMENT OutputArguments;
} PEP_ACPI_EVALUATE_CONTROL_METHOD, *PPEP_ACPI_EVALUATE_CONTROL_METHOD;

typedef struct _PEP_ACPI_EXTENDED_ADDRESS {
  PEP_ACPI_RESOURCE_TYPE  Type;
  PEP_ACPI_RESOURCE_FLAGS Flags;
  UCHAR                   ResourceFlags;
  UCHAR                   GeneralFlags;
  UCHAR                   TypeSpecificFlags;
  UCHAR                   RevisionId;
  UCHAR                   Reserved;
  ULONGLONG               Granularity;
  ULONGLONG               MinimumAddress;
  ULONGLONG               MaximumAddress;
  ULONGLONG               TranslationAddress;
  ULONGLONG               AddressLength;
  ULONGLONG               TypeAttribute;
  PUNICODE_STRING         DescriptorName;
} PEP_ACPI_EXTENDED_ADDRESS, *PPEP_ACPI_EXTENDED_ADDRESS;

typedef struct _PEP_ACPI_GPIO_RESOURCE {
  PEP_ACPI_RESOURCE_TYPE      Type;
  PEP_ACPI_RESOURCE_FLAGS     Flags;
  KINTERRUPT_MODE             InterruptType;
  KINTERRUPT_POLARITY         InterruptPolarity;
  GPIO_PIN_CONFIG_TYPE        PinConfig;
  GPIO_PIN_IORESTRICTION_TYPE IoRestrictionType;
  USHORT                      DriveStrength;
  USHORT                      DebounceTimeout;
  PUSHORT                     PinTable;
  USHORT                      PinCount;
  UCHAR                       ResourceSourceIndex;
  PUNICODE_STRING             ResourceSourceName;
  PUCHAR                      VendorData;
  USHORT                      VendorDataLength;
} PEP_ACPI_GPIO_RESOURCE, *PPEP_ACPI_GPIO_RESOURCE;

void PEP_ACPI_INITIALIZE_EXTENDED_IO_RESOURCE(
  [in]  BOOLEAN            ResourceUsage,
  [in]  UCHAR              Decode,
  [in]  BOOLEAN            IsMinFixed,
  [in]  BOOLEAN            IsMaxFixed,
  [in]  UCHAR              ISARanges,
  [in]  ULONGLONG          AddressGranularity,
  [in]  ULONGLONG          AddressMinimum,
  [in]  ULONGLONG          AddressMaximum,
  [in]  ULONGLONG          AddressTranslation,
  [in]  ULONGLONG          RangeLength,
  [in]  ULONGLONG          TypeSpecificAttributes,
  [in]  PUNICODE_STRING    DescriptorName,
  [in]  BOOLEAN            TranslationTypeNonStatic,
  [in]  BOOLEAN            TanslationSparseDensity,
  [out] PPEP_ACPI_RESOURCE Resource
);

void PEP_ACPI_INITIALIZE_EXTENDED_MEMORY_RESOURCE(
  [in]  BOOLEAN            ResourceUsage,
  [in]  UCHAR              Decode,
  [in]  BOOLEAN            IsMinFixed,
  [in]  BOOLEAN            IsMaxFixed,
  [in]  UCHAR              Cacheable,
  [in]  BOOLEAN            ReadWrite,
  [in]  ULONGLONG          AddressGranularity,
  [in]  ULONGLONG          AddressMinimum,
  [in]  ULONGLONG          AddressMaximum,
  [in]  ULONGLONG          AddressTranslation,
  [in]  ULONGLONG          RangeLength,
  [in]  ULONGLONG          TypeSpecificAttributes,
  [in]  PUNICODE_STRING    DescriptorName,
  [in]  UCHAR              MemoryRangeType,
        BOOLEAN            TranslationTypeNonStatic,
  [out] PPEP_ACPI_RESOURCE Resource
);

void PEP_ACPI_INITIALIZE_GPIO_INT_RESOURCE(
  [in]  KINTERRUPT_MODE      InterruptType,
  [in]  KINTERRUPT_POLARITY  LevelType,
  [in]  BOOLEAN              Shareable,
  [in]  BOOLEAN              CanWake,
  [in]  GPIO_PIN_CONFIG_TYPE PinConfig,
  [in]  USHORT               DebounceTimeout,
  [in]  UCHAR                ResourceSourceIndex,
  [in]  PUNICODE_STRING      ResourceSourceName,
  [in]  BOOLEAN              ResourceUsage,
  [in]  PUCHAR               VendorData,
  [in]  USHORT               VendorDataLength,
  [in]  PUSHORT              PinTable,
  [in]  UCHAR                PinCount,
  [out] PPEP_ACPI_RESOURCE   Resource
);

void PEP_ACPI_INITIALIZE_GPIO_IO_RESOURCE(
  [in]  BOOLEAN                     Shareable,
  [in]  BOOLEAN                     CanWake,
  [in]  GPIO_PIN_CONFIG_TYPE        PinConfig,
  [in]  USHORT                      DebounceTimeout,
  [in]  USHORT                      DriveStrength,
  [in]  GPIO_PIN_IORESTRICTION_TYPE IoRestriction,
  [in]  UCHAR                       ResourceSourceIndex,
  [in]  PUNICODE_STRING             ResourceSourceName,
  [in]  BOOLEAN                     ResourceUsage,
  [in]  PUCHAR                      VendorData,
  [in]  USHORT                      VendorDataLength,
  [in]  PUSHORT                     PinTable,
  [in]  USHORT                      PinCount,
  [out] PPEP_ACPI_RESOURCE          Resource
);

void PEP_ACPI_INITIALIZE_INTERRUPT_RESOURCE(
  [in]  BOOLEAN             ResourceUsage,
  [in]  KINTERRUPT_MODE     EdgeLevel,
  [in]  KINTERRUPT_POLARITY InterruptLevel,
  [in]  BOOLEAN             ShareType,
  [in]  BOOLEAN             Wake,
  [in]  PULONG              PinTable,
  [in]  UCHAR               PinCount,
  [out] PPEP_ACPI_RESOURCE  Resource
);

void PEP_ACPI_INITIALIZE_IOPORT_RESOURCE(
  [in]  UCHAR              Decode,
  [in]  USHORT             MinimumAddress,
  [in]  USHORT             MaximumAddress,
  [in]  UCHAR              Alignment,
  [in]  UCHAR              PortLength,
  [out] PPEP_ACPI_RESOURCE Resource
);

void PEP_ACPI_INITIALIZE_MEMORY_RESOURCE(
  [in]  UCHAR              ReadWrite,
  [in]  ULONG              MinimumAddress,
  [in]  ULONG              MaximumAddress,
  [in]  ULONG              Alignment,
  [in]  ULONG              MemorySize,
  [out] PPEP_ACPI_RESOURCE Resource
);

void PEP_ACPI_INITIALIZE_SPB_I2C_RESOURCE(
  [in]  USHORT             SlaveAddress,
  [in]  BOOLEAN            DeviceInitiated,
  [in]  ULONG              ConnectionSpeed,
  [in]  BOOLEAN            AddressingMode,
  [in]  PUNICODE_STRING    ResourceSource,
  [in]  UCHAR              ResourceSourceIndex,
  [in]  BOOLEAN            ResourceUsage,
  [in]  BOOLEAN            SharedMode,
  [in]  PCHAR              VendorData,
  [in]  USHORT             VendorDataLength,
  [out] PPEP_ACPI_RESOURCE Resource
);

void PEP_ACPI_INITIALIZE_SPB_SPI_RESOURCE(
  [in]  USHORT             DeviceSelection,
  [in]  UCHAR              DeviceSelectionPolarity,
  [in]  UCHAR              WireMode,
  [in]  UCHAR              DataBitLength,
  [in]  BOOLEAN            SlaveMode,
  [in]  ULONG              ConnectionSpeed,
  [in]  UCHAR              ClockPolarity,
  [in]  UCHAR              ClockPhase,
  [in]  PUNICODE_STRING    ResourceSource,
  [in]  UCHAR              ResourceSourceIndex,
  [in]  BOOLEAN            ResourceUsage,
  [in]  BOOLEAN            SharedMode,
  [in]  PCHAR              VendorData,
  [in]  USHORT             VendorDataLength,
  [out] PPEP_ACPI_RESOURCE Resource
);

void PEP_ACPI_INITIALIZE_SPB_UART_RESOURCE(
  [in]  ULONG              BaudRate,
  [in]  UCHAR              BitsPerByte,
  [in]  UCHAR              StopBits,
  [in]  UCHAR              LinesInUse,
  [in]  UCHAR              IsBigEndian,
  [in]  UCHAR              Parity,
  [in]  UCHAR              FlowControl,
  [in]  USHORT             RxSize,
  [in]  USHORT             TxSize,
  [in]  PUNICODE_STRING    ResourceSource,
  [in]  UCHAR              ResourceSourceIndex,
  [in]  BOOLEAN            ResourceUsage,
  [in]  BOOLEAN            SharedMode,
  [in]  PCHAR              VendorData,
  [in]  USHORT             VendorDataLength,
  [out] PPEP_ACPI_RESOURCE Resource
);

typedef struct _PEP_ACPI_INTERRUPT_RESOURCE {
  PEP_ACPI_RESOURCE_TYPE  Type;
  KINTERRUPT_MODE         InterruptType;
  KINTERRUPT_POLARITY     InterruptPolarity;
  PEP_ACPI_RESOURCE_FLAGS Flags;
  UCHAR                   Count;
  PULONG                  Pins;
} PEP_ACPI_INTERRUPT_RESOURCE, *PPEP_ACPI_INTERRUPT_RESOURCE;

typedef struct _PEP_ACPI_IO_MEMORY_RESOURCE {
  PEP_ACPI_RESOURCE_TYPE Type;
  UCHAR                  Information;
  PHYSICAL_ADDRESS       MinimumAddress;
  PHYSICAL_ADDRESS       MaximumAddress;
  ULONG                  Alignment;
  ULONG                  Length;
} PEP_ACPI_IO_MEMORY_RESOURCE, *PPEP_ACPI_IO_MEMORY_RESOURCE;

typedef union _PEP_ACPI_OBJECT_NAME {
  UCHAR Name[4];
  ULONG NameAsUlong;
} PEP_ACPI_OBJECT_NAME, *PPEP_ACPI_OBJECT_NAME;

typedef struct _PEP_ACPI_OBJECT_NAME_WITH_TYPE {
  PEP_ACPI_OBJECT_NAME Name;
  PEP_ACPI_OBJECT_TYPE Type;
} PEP_ACPI_OBJECT_NAME_WITH_TYPE, *PPEP_ACPI_OBJECT_NAME_WITH_TYPE;

typedef enum _PEP_ACPI_OBJECT_TYPE {
  PepAcpiObjectTypeMethod,
  PepAcpiObjectTypeDevice,
  PepAcpiObjectTypeMaximum
} PEP_ACPI_OBJECT_TYPE, *PPEP_ACPI_OBJECT_TYPE;

typedef struct _PEP_ACPI_PREPARE_DEVICE {
  [in]  PCUNICODE_STRING AcpiDeviceName;
  [in]  ULONG            InputFlags;
  [out] BOOLEAN          DeviceAccepted;
  [out] ULONG            OutputFlags;
} PEP_ACPI_PREPARE_DEVICE, *PPEP_ACPI_PREPARE_DEVICE;

typedef struct _PEP_ACPI_QUERY_DEVICE_CONTROL_RESOURCES {
  [in]      PEPHANDLE            DeviceHandle;
  [in]      ULONG                RequestFlags;
  [out]     NTSTATUS             Status;
  [in, out] SIZE_T               BiosResourcesSize;
            ACPI_METHOD_ARGUMENT BiosResources[ANYSIZE_ARRAY];
} PEP_ACPI_QUERY_DEVICE_CONTROL_RESOURCES, *PPEP_ACPI_QUERY_DEVICE_CONTROL_RESOURCES;


typedef struct _PEP_ACPI_QUERY_OBJECT_INFORMATION {
  [in]  PEPHANDLE            DeviceHandle;
  [in]  PEP_ACPI_OBJECT_NAME Name;
  [in]  PEP_ACPI_OBJECT_TYPE Type;
  [in]  ULONG                ObjectFlags;
  union {
    struct {
      ULONG InputArgumentCount;
      ULONG OutputArgumentCount;
    } MethodObject;
  } DUMMYUNIONNAME;
} PEP_ACPI_QUERY_OBJECT_INFORMATION, *PPEP_ACPI_QUERY_OBJECT_INFORMATION;


typedef struct _PEP_ACPI_REGISTER_DEVICE {
  [in]  PCUNICODE_STRING AcpiDeviceName;
  [in]  ULONG            InputFlags;
  [in]  POHANDLE         KernelHandle;
  [out] PEPHANDLE        DeviceHandle;
  [out] ULONG            OutputFlags;
} PEP_ACPI_REGISTER_DEVICE, *PPEP_ACPI_REGISTER_DEVICE;

typedef struct _PEP_ACPI_REQUEST_CONVERT_TO_BIOS_RESOURCES {
  NTSTATUS           TranslationStatus;
  PPEP_ACPI_RESOURCE InputBuffer;
  SIZE_T             InputBufferSize;
  PVOID              OutputBuffer;
  SIZE_T             OutputBufferSize;
  ULONG              Flags;
} PEP_ACPI_REQUEST_CONVERT_TO_BIOS_RESOURCES, *PPEP_ACPI_REQUEST_CONVERT_TO_BIOS_RESOURCES;

typedef union _PEP_ACPI_RESOURCE {
  PEP_ACPI_RESOURCE_TYPE      Type;
  PEP_ACPI_IO_MEMORY_RESOURCE IoMemory;
  PEP_ACPI_INTERRUPT_RESOURCE Interrupt;
  PEP_ACPI_GPIO_RESOURCE      Gpio;
  PEP_ACPI_SPB_I2C_RESOURCE   SpbI2c;
  PEP_ACPI_SPB_SPI_RESOURCE   SpbSpi;
  PEP_ACPI_SPB_UART_RESOURCE  SpbUart;
  PEP_ACPI_EXTENDED_ADDRESS   ExtendedAddress;
} PEP_ACPI_RESOURCE, *PPEP_ACPI_RESOURCE;

typedef union _PEP_ACPI_RESOURCE_FLAGS {
  ULONG  AsULong;
  struct {
    ULONG Shared : 1;
    ULONG Wake : 1;
    ULONG ResourceUsage : 1;
    ULONG SlaveMode : 1;
    ULONG AddressingMode : 1;
    ULONG SharedMode : 1;
    ULONG Reserved : 26;
  } DUMMYSTRUCTNAME;
} PEP_ACPI_RESOURCE_FLAGS, *PPEP_ACPI_RESOURCE_FLAGS;

typedef enum _PEP_ACPI_RESOURCE_TYPE {
  PepAcpiMemory,
  PepAcpiIoPort,
  PepAcpiInterrupt,
  PepAcpiGpioIo,
  PepAcpiGpioInt,
  PepAcpiSpbI2c,
  PepAcpiSpbSpi,
  PepAcpiSpbUart,
  PepAcpiExtendedMemory,
  PepAcpiExtendedIo
} PEP_ACPI_RESOURCE_TYPE;

typedef struct _PEP_ACPI_SPB_I2C_RESOURCE {
  PEP_ACPI_SPB_RESOURCE SpbCommon;
  ULONG                 ConnectionSpeed;
  USHORT                SlaveAddress;
} PEP_ACPI_SPB_I2C_RESOURCE, *PPEP_ACPI_SPB_I2C_RESOURCE;

typedef struct _PEP_ACPI_SPB_RESOURCE {
  PEP_ACPI_RESOURCE_TYPE  Type;
  PEP_ACPI_RESOURCE_FLAGS Flags;
  USHORT                  TypeSpecificFlags;
  UCHAR                   ResourceSourceIndex;
  PUNICODE_STRING         ResourceSourceName;
  PCHAR                   VendorData;
  USHORT                  VendorDataLength;
} PEP_ACPI_SPB_RESOURCE, *PPEP_ACPI_SPB_RESOURCE;

typedef struct _PEP_ACPI_SPB_SPI_RESOURCE {
  PEP_ACPI_SPB_RESOURCE SpbCommon;
  ULONG                 ConnectionSpeed;
  UCHAR                 DataBitLength;
  UCHAR                 Phase;
  UCHAR                 Polarity;
  USHORT                DeviceSelection;
} PEP_ACPI_SPB_SPI_RESOURCE, *PPEP_ACPI_SPB_SPI_RESOURCE;

typedef struct _PEP_ACPI_SPB_UART_RESOURCE {
  PEP_ACPI_SPB_RESOURCE SpbCommon;
  ULONG                 BaudRate;
  USHORT                RxBufferSize;
  USHORT                TxBufferSize;
  UCHAR                 Parity;
  UCHAR                 LinesInUse;
} PEP_ACPI_SPB_UART_RESOURCE, *PPEP_ACPI_SPB_UART_RESOURCE;

typedef struct _PEP_ACPI_TRANSLATED_DEVICE_CONTROL_RESOURCES {
  [in]  PEPHANDLE         DeviceHandle;
  [in]  ULONG             RequestFlags;
  [out] NTSTATUS          Status;
        SIZE_T            TranslatedResourcesSize;
  [in]  PCM_RESOURCE_LIST TranslatedResources;
} PEP_ACPI_TRANSLATED_DEVICE_CONTROL_RESOURCES, *PPEP_ACPI_TRANSLATED_DEVICE_CONTROL_RESOURCES;

typedef struct _PEP_ACPI_UNREGISTER_DEVICE {
  [in] PEPHANDLE DeviceHandle;
  [in] ULONG     InputFlags;
} PEP_ACPI_UNREGISTER_DEVICE, *PPEP_ACPI_UNREGISTER_DEVICE;

typedef struct _PEP_COMPONENT_PERF_INFO {
  ULONG                  SetCount;
  PEP_COMPONENT_PERF_SET PerfStateSets[ANYSIZE_ARRAY];
} PEP_COMPONENT_PERF_INFO, *PPEP_COMPONENT_PERF_INFO;

typedef struct _PEP_COMPONENT_PERF_SET {
  UNICODE_STRING      Name;
  ULONGLONG           Flags;
  PEP_PERF_STATE_UNIT Unit;
  PEP_PERF_STATE_TYPE Type;
  union {
    struct {
      ULONG           Count;
      PPEP_PERF_STATE States;
    } Discrete;
    struct {
      ULONGLONG Minimum;
      ULONGLONG Maximum;
    } Range;
  };
} PEP_COMPONENT_PERF_SET, *PPEP_COMPONENT_PERF_SET;

typedef struct _PEP_COMPONENT_PERF_SET {
  UNICODE_STRING      Name;
  ULONGLONG           Flags;
  PEP_PERF_STATE_UNIT Unit;
  PEP_PERF_STATE_TYPE Type;
  union {
    struct {
      ULONG           Count;
      PPEP_PERF_STATE States;
    } Discrete;
    struct {
      ULONGLONG Minimum;
      ULONGLONG Maximum;
    } Range;
  };
} PEP_COMPONENT_PERF_SET, *PPEP_COMPONENT_PERF_SET;

typedef struct _PEP_COMPONENT_PERF_STATE_REQUEST {
  ULONG Set;
  union {
    ULONG     StateIndex;
    ULONGLONG StateValue;
  };
} PEP_COMPONENT_PERF_STATE_REQUEST, *PPEP_COMPONENT_PERF_STATE_REQUEST;

typedef struct _PEP_COMPONENT_PLATFORM_CONSTRAINTS {
  [in] PEPHANDLE DeviceHandle;
  [in] ULONG     Component;
  [in] PULONG    MinimumFStates;
  [in] ULONG     PlatformStateCount;
} PEP_COMPONENT_PLATFORM_CONSTRAINTS, *PPEP_COMPONENT_PLATFORM_CONSTRAINTS;

typedef struct _PEP_COMPONENT_V2 {
  GUID                        Id;
  ULONGLONG                   Flags;
  ULONG                       DeepestWakeableIdleState;
  ULONG                       IdleStateCount;
  PPO_FX_COMPONENT_IDLE_STATE IdleStates;
} PEP_COMPONENT_V2, *PPEP_COMPONENT_V2;

typedef struct _PEP_COORDINATED_DEPENDENCY_OPTION {
  UCHAR   ExpectedStateIndex;
  BOOLEAN LooseDependency;
  BOOLEAN InitiatingState;
  BOOLEAN DependentState;
} PEP_COORDINATED_DEPENDENCY_OPTION, *PPEP_COORDINATED_DEPENDENCY_OPTION;

typedef struct _PEP_COORDINATED_IDLE_STATE {
  ULONG Latency;
  ULONG BreakEvenDuration;
  ULONG DependencyCount;
  ULONG MaximumDependencySize;
} PEP_COORDINATED_IDLE_STATE, *PPEP_COORDINATED_IDLE_STATE;

typedef struct _PEP_CRASHDUMP_INFORMATION {
  [in] PEPHANDLE DeviceHandle;
  [in] PVOID     DeviceContext;
} PEP_CRASHDUMP_INFORMATION, *PPEP_CRASHDUMP_INFORMATION;


typedef struct _PEP_DEBUGGER_TRANSITION_REQUIREMENTS {
  [in] PEPHANDLE DeviceHandle;
  [in] ULONG     PlatformStateCount;
  [in] PBOOLEAN  PowerTransitionRequired;
} PEP_DEBUGGER_TRANSITION_REQUIREMENTS, *PPEP_DEBUGGER_TRANSITION_REQUIREMENTS;

typedef enum _PEP_DEVICE_ACCEPTANCE_TYPE {
  PepDeviceNotAccepted,
  PepDeviceAccepted,
  PepDeviceAceptedMax
} PEP_DEVICE_ACCEPTANCE_TYPE, *PPEP_DEVICE_ACCEPTANCE_TYPE;

typedef struct _PEP_DEVICE_PLATFORM_CONSTRAINTS {
  [in] PEPHANDLE           DeviceHandle;
  [in] PDEVICE_POWER_STATE MinimumDStates;
  [in] ULONG               PlatformStateCount;
} PEP_DEVICE_PLATFORM_CONSTRAINTS, *PPEP_DEVICE_PLATFORM_CONSTRAINTS;

typedef struct _PEP_DEVICE_POWER_STATE {
  [in] PEPHANDLE          DeviceHandle;
  [in] DEVICE_POWER_STATE PowerState;
  [in] BOOLEAN            Complete;
  [in] BOOLEAN            SystemTransition;
} PEP_DEVICE_POWER_STATE, *PPEP_DEVICE_POWER_STATE;


typedef struct _PEP_DEVICE_REGISTER_V2 {
  ULONGLONG         Flags;
  ULONG             ComponentCount;
  PPEP_COMPONENT_V2 Components[ANYSIZE_ARRAY];
} PEP_DEVICE_REGISTER_V2, *PPEP_DEVICE_REGISTER_V2;

typedef struct _PEP_DEVICE_STARTED {
  [in] PEPHANDLE DeviceHandle;
} PEP_DEVICE_STARTED, *PPEP_DEVICE_STARTED;

typedef struct _PEP_INFORMATION {
  USHORT                 Version;
  USHORT                 Size;
  PPEPCALLBACKNOTIFYDPM  AcceptDeviceNotification;
  PPEPCALLBACKNOTIFYPPM  AcceptProcessorNotification;
  PPEPCALLBACKNOTIFYACPI AcceptAcpiNotification;
} PEP_INFORMATION, *PPEP_INFORMATION;

typedef struct _PEP_KERNEL_INFORMATION_STRUCT_V3 {
  USHORT                                   Version;
  USHORT                                   Size;
  POHANDLE                                 Plugin;
  PPOFXCALLBACKREQUESTWORKER               RequestWorker;
  PPOFXCALLBACKENUMERATEUNMASKEDINTERRUPTS EnumerateUnmaskedInterrupts;
  PPOFXCALLBACKPROCESSORHALT               ProcessorHalt;
  PPOFXCALLBACKREQUESTINTERRUPT            RequestInterrupt;
  PPOFXCALLBACKCRITICALRESOURCE            TransitionCriticalResource;
  PPOFXCALLBACKPROCESSORIDLEVETO           ProcessorIdleVeto;
  PPOFXCALLBACKPLATFORMIDLEVETO            PlatformIdleVeto;
  PPOFXCALLBACKUPDATEPROCESSORIDLESTATE    UpdateProcessorIdleState;
  PPOFXCALLBACKUPDATEPLATFORMIDLESTATE     UpdatePlatformIdleState;
  PPOFXCALLBACKREQUESTCOMMON               RequestCommon;
} PEP_KERNEL_INFORMATION_STRUCT_V3, *PPEP_KERNEL_INFORMATION_STRUCT_V3;

typedef struct _PEP_LOW_POWER_EPOCH {
  BOOLEAN LowPowerEpoch;
} PEP_LOW_POWER_EPOCH, *PPEP_LOW_POWER_EPOCH;

typedef struct _PEP_NOTIFY_COMPONENT_IDLE_STATE {
  [in]  PEPHANDLE DeviceHandle;
  [in]  ULONG     Component;
  [in]  ULONG     IdleState;
  [in]  BOOLEAN   DriverNotified;
  [out] BOOLEAN   Completed;
} PEP_NOTIFY_COMPONENT_IDLE_STATE, *PPEP_NOTIFY_COMPONENT_IDLE_STATE;

typedef struct _PEP_PERF_STATE {
  ULONGLONG Value;
  PVOID     Context;
} PEP_PERF_STATE, *PPEP_PERF_STATE;

typedef enum _PEP_PERF_STATE_TYPE {
  PepPerfStateTypeDiscrete,
  PepPerfStateTypeRange,
  PepPerfStateTypeMax
} PEP_PERF_STATE_TYPE, *PPEP_PERF_STATE_TYPE;

typedef enum _PEP_PERF_STATE_UNIT {
  PepPerfStateUnitOther,
  PepPerfStateUnitFrequency,
  PepPerfStateUnitBandwidth,
  PepPerfStateUnitMax
} PEP_PERF_STATE_UNIT, *PPEP_PERF_STATE_UNIT;

typedef struct _PEP_PLATFORM_IDLE_STATE {
  POHANDLE                      InitiatingProcessor;
  UCHAR                         InitiatingState;
  ULONG                         Latency;
  ULONG                         BreakEvenDuration;
  ULONG                         DependencyArrayUsed;
  ULONG                         DependencyArrayCount;
  PEP_PROCESSOR_IDLE_DEPENDENCY DependencyArray[ANYSIZE_ARRAY];
} PEP_PLATFORM_IDLE_STATE, *PPEP_PLATFORM_IDLE_STATE;


typedef struct _PEP_PLATFORM_IDLE_STATE_UPDATE {
  ULONG Version;
  ULONG Latency;
  ULONG BreakEvenDuration;
} PEP_PLATFORM_IDLE_STATE_UPDATE, *PPEP_PLATFORM_IDLE_STATE_UPDATE;

typedef struct _PEP_POWER_CONTROL_COMPLETE {
  [in] PEPHANDLE DeviceHandle;
  [in] LPCGUID   PowerControlCode;
  [in] PVOID     RequestContext;
  [in] SIZE_T    BytesReturned;
  [in] NTSTATUS  Status;
} PEP_POWER_CONTROL_COMPLETE, *PPEP_POWER_CONTROL_COMPLETE;

typedef struct _PEP_POWER_CONTROL_REQUEST {
  [in]  PEPHANDLE DeviceHandle;
  [in]  LPCGUID   PowerControlCode;
  [in]  PVOID     InBuffer;
  [in]  SIZE_T    InBufferSize;
  [in]  PVOID     OutBuffer;
  [in]  SIZE_T    OutBufferSize;
  [out] SIZE_T    BytesReturned;
  [out] NTSTATUS  Status;
} PEP_POWER_CONTROL_REQUEST, *PPEP_POWER_CONTROL_REQUEST;

typedef struct _PEP_PPM_CONTEXT_QUERY_PARKING_PAGE {
  PHYSICAL_ADDRESS PhysicalPageAddress;
  PVOID            VirtualPageAddress;
} PEP_PPM_CONTEXT_QUERY_PARKING_PAGE, *PPEP_PPM_CONTEXT_QUERY_PARKING_PAGE;

typedef struct _PEP_PPM_CST_STATE {
  UCHAR            Type;
  USHORT           Latency;
  ULONG            Power;
  UCHAR            AddressSpaceId;
  UCHAR            BitWidth;
  UCHAR            BitOffset;
  UCHAR            AccessSize;
  PHYSICAL_ADDRESS Address;
} PEP_PPM_CST_STATE, *PPEP_PPM_CST_STATE;

typedef struct _PEP_PPM_CST_STATES {
  ULONG              Count;
  PPEP_PPM_CST_STATE IdleStates;
} PEP_PPM_CST_STATES, *PPEP_PPM_CST_STATES;

typedef struct _PEP_PPM_ENTER_SYSTEM_STATE {
  SYSTEM_POWER_STATE TargetState;
} PEP_PPM_ENTER_SYSTEM_STATE, *PPEP_PPM_ENTER_SYSTEM_STATE;

typedef struct _PEP_PPM_FEEDBACK_READ {
  ULONG CounterIndex;
  union {
    ULONG64 InstantaneousValue;
    struct {
      ULONG64 NominalCount;
      ULONG64 ActualCount;
    };
  };
} PEP_PPM_FEEDBACK_READ, *PPEP_PPM_FEEDBACK_READ;

typedef struct _PEP_PPM_IDLE_COMPLETE {
  [in] ULONG ProcessorState;
  [in] ULONG PlatformState;
} PEP_PPM_IDLE_COMPLETE, *PPEP_PPM_IDLE_COMPLETE;

typedef struct _PEP_PPM_IDLE_COMPLETE_V2 {
  [in] ULONG  ProcessorState;
  [in] ULONG  PlatformState;
       ULONG  CoordinatedStateCount;
       PULONG CoordinatedStates;
} PEP_PPM_IDLE_COMPLETE_V2, *PPEP_PPM_IDLE_COMPLETE_V2;

typedef struct _PEP_PPM_IDLE_EXECUTE {
  [out] NTSTATUS Status;
  [in]  ULONG    ProcessorState;
  [in]  ULONG    PlatformState;
} PEP_PPM_IDLE_EXECUTE, *PPEP_PPM_IDLE_EXECUTE;

typedef struct _PEP_PPM_IDLE_EXECUTE_V2 {
  [out] NTSTATUS Status;
  [in]  ULONG    ProcessorState;
  [in]  ULONG    PlatformState;
        ULONG    CoordinatedStateCount;
        PULONG   CoordinatedStates;
} PEP_PPM_IDLE_EXECUTE_V2, *PPEP_PPM_IDLE_EXECUTE_V2;

typedef struct _PEP_PPM_INITIATE_WAKE {
  [out] BOOLEAN NeedInterruptForCompletion;
} PEP_PPM_INITIATE_WAKE, *PPEP_PPM_INITIATE_WAKE;

typedef struct _PEP_PPM_IS_PROCESSOR_HALTED {
  [out] BOOLEAN Halted;
} PEP_PPM_IS_PROCESSOR_HALTED, *PPEP_PPM_IS_PROCESSOR_HALTED;

typedef struct _PEP_PPM_PARK_MASK {
  [in]     ULONG                     Count;
  [in]     ULONGLONG                 EvaluationTime;
  [in/out] PPEP_PROCESSOR_PARK_STATE Processors;
} PEP_PPM_PARK_MASK, *PPEP_PPM_PARK_MASK;

typedef struct _PEP_PPM_PARK_SELECTION {
  [in]     ULONG                          AdditionalUnparkedProcessors;
  [in]     ULONG                          Count;
  [in/out] PPEP_PROCESSOR_PARK_PREFERENCE Processors;
} PEP_PPM_PARK_SELECTION, *PPEP_PPM_PARK_SELECTION;

typedef struct _PEP_PPM_PARK_SELECTION_V2 {
  [in]     ULONG                          AdditionalUnparkedProcessors;
  [in]     ULONG                          Count;
  [in/out] PPEP_PROCESSOR_PARK_PREFERENCE Processors;
           ULONGLONG                      EvaluationTime;
           UCHAR                          EvaluationType;
} PEP_PPM_PARK_SELECTION_V2, *PPEP_PPM_PARK_SELECTION_V2;

typedef struct _PEP_PPM_PERF_CHECK_COMPLETE {
  [in] ULONGLONG EvaluationTime;
} PEP_PPM_PERF_CHECK_COMPLETE, *PPEP_PPM_PERF_CHECK_COMPLETE;

typedef struct _PEP_PPM_QUERY_PERF_CONSTRAINTS {
  [out] ULONG GuaranteedPerformanceLimit;
  [out] ULONG LimitReasons;
} PEP_PPM_PERF_CONSTRAINTS, *PPEP_PPM_PERF_CONSTRAINTS;

typedef struct _PEP_PPM_PERF_SET {
  [in] ULONG MinimumPerformance;
  [in] ULONG MaximumPerformance;
  [in] ULONG DesiredPerformance;
  [in] ULONG TimeWindow;
  [in] ULONG PerformanceTolerance;
} PEP_PPM_PERF_SET, *PPEP_PPM_PERF_SET;

typedef struct _PEP_PPM_PERF_SET_STATE {
  UCHAR MinimumPerformanceState;
  UCHAR MaximumPerformanceState;
  UCHAR DesiredPerformanceState;
  UCHAR EnergyPerformancePreference;
} PEP_PPM_PERF_SET_STATE, *PPEP_PPM_PERF_SET_STATE;

typedef struct _PEP_PPM_PLATFORM_STATE_RESIDENCIES {
  [in] ULONG                             Count;
  [in] PPEP_PPM_PLATFORM_STATE_RESIDENCY States;
} PEP_PPM_PLATFORM_STATE_RESIDENCIES, *PPEP_PPM_PLATFORM_STATE_RESIDENCIES;

typedef struct _PEP_PPM_PLATFORM_STATE_RESIDENCY {
  ULONG64 Residency;
  ULONG64 TransitionCount;
} PEP_PPM_PLATFORM_STATE_RESIDENCY, *PPEP_PPM_PLATFORM_STATE_RESIDENCY;

typedef struct _PEP_PPM_QUERY_CAPABILITIES {
  ULONG   FeedbackCounterCount;
  ULONG   IdleStateCount;
  BOOLEAN PerformanceStatesSupported;
  BOOLEAN ParkingSupported;
  UCHAR   DiscretePerformanceStateCount;
  UCHAR   Reserved;
} PEP_PPM_QUERY_CAPABILITIES, *PPEP_PPM_QUERY_CAPABILITIES;

typedef struct _PEP_PPM_QUERY_COORDINATED_DEPENDENCY {
  [in]  ULONG                             StateIndex;
  [in]  ULONG                             DependencyIndex;
  [in]  ULONG                             DependencySize;
  [out] ULONG                             DependencySizeUsed;
  [out] POHANDLE                          TargetProcessor;
        PEP_COORDINATED_DEPENDENCY_OPTION Options[ANYSIZE_ARRAY];
} PEP_PPM_QUERY_COORDINATED_DEPENDENCY, *PPEP_PPM_QUERY_COORDINATED_DEPENDENCY;

typedef struct _PEP_PPM_QUERY_COORDINATED_STATES {
  [in]  ULONG                      Count;
        PEP_COORDINATED_IDLE_STATE States[ANYSIZE_ARRAY];
} PEP_PPM_QUERY_COORDINATED_STATES, *PPEP_PPM_QUERY_COORDINATED_STATES;

typedef struct _PEP_PPM_QUERY_DISCRETE_PERF_STATES {
  ULONG                     Count;
  PPEP_PROCESSOR_PERF_STATE States;
} PEP_PPM_QUERY_DISCRETE_PERF_STATES, *PPEP_PPM_QUERY_DISCRETE_PERF_STATES;

typedef struct _PEP_PPM_QUERY_DOMAIN_INFO {
  ULONG   DomainId;
  UCHAR   CoordinationType;
  BOOLEAN IdleProcessorsDiscounted;
  BOOLEAN SchedulerDirectedTransitionsSupported;
  BOOLEAN AffinitizePerfSet;
  ULONG   WorstCaseTransitionLatency;
  ULONG   WorstCaseTransitionOverhead;
} PEP_PPM_QUERY_DOMAIN_INFO, *PPEP_PPM_QUERY_DOMAIN_INFO;

typedef struct _PEP_PPM_QUERY_FEEDBACK_COUNTERS {
  [in]  ULONG                          Count;
        PEP_PROCESSOR_FEEDBACK_COUNTER Counters[ANYSIZE_ARRAY];
} PEP_PPM_QUERY_FEEDBACK_COUNTERS, *PPEP_PPM_QUERY_FEEDBACK_COUNTERS;

typedef struct _PEP_PPM_QUERY_IDLE_STATES_V2 {
  [in]  ULONG                       Count;
        PEP_PROCESSOR_IDLE_STATE_V2 IdleStates[ANYSIZE_ARRAY];
} PEP_PPM_QUERY_IDLE_STATES_V2, *PPEP_PPM_QUERY_IDLE_STATES_V2;

typedef struct _PEP_PPM_QUERY_PERF_CAPABILITIES {
  [out] ULONG HighestPerformance;
  [out] ULONG NominalPerformance;
  [out] ULONG LowestNonlinearPerformance;
  [out] ULONG LowestPerformance;
  [out] ULONG DomainId;
  [out] ULONG DomainMembers;
} PEP_PPM_QUERY_PERF_CAPABILITIES, *PPEP_PPM_QUERY_PERF_CAPABILITIES;

typedef struct _PEP_PPM_QUERY_PLATFORM_STATE {
  [in]  ULONG                   StateIndex;
  [out] PEP_PLATFORM_IDLE_STATE State;
} PEP_PPM_QUERY_PLATFORM_STATE, *PPEP_PPM_QUERY_PLATFORM_STATE;

typedef struct _PEP_PPM_QUERY_PLATFORM_STATES {
  ULONG PlatformStateCount;
} PEP_PPM_QUERY_PLATFORM_STATES, *PPEP_PPM_QUERY_PLATFORM_STATES;

typedef struct _PEP_PPM_QUERY_STATE_NAME {
  [in]     ULONG  StateIndex;
  [in/out] USHORT NameSize;
  [in]     PWSTR  Name;
} PEP_PPM_QUERY_STATE_NAME, *PPEP_PPM_QUERY_STATE_NAME;


typedef struct _PEP_PPM_QUERY_VETO_REASON {
  [in]  ULONG  VetoReason;
  [out] USHORT NameSize;
  [in]  PWSTR  Name;
} PEP_PPM_QUERY_VETO_REASON, *PPEP_PPM_QUERY_VETO_REASON;

typedef struct _PEP_PPM_QUERY_VETO_REASONS {
  [out] ULONG VetoReasonCount;
} PEP_PPM_QUERY_VETO_REASONS, *PPEP_PPM_QUERY_VETO_REASONS;

typedef struct _PEP_PPM_RESUME_FROM_SYSTEM_STATE {
  SYSTEM_POWER_STATE TargetState;
} PEP_PPM_RESUME_FROM_SYSTEM_STATE, *PPEP_PPM_RESUME_FROM_SYSTEM_STATE;

typedef struct _PEP_PPM_TEST_IDLE_STATE {
        ULONG ProcessorState;
  [in]  ULONG PlatformState;
  [out] ULONG VetoReason;
} PEP_PPM_TEST_IDLE_STATE, *PPEP_PPM_TEST_IDLE_STATE;

typedef struct _PEP_PREPARE_DEVICE {
  [in]  PCUNICODE_STRING DeviceId;
  [out] BOOLEAN          DeviceAccepted;
} PEP_PREPARE_DEVICE, *PPEP_PREPARE_DEVICE;

typedef struct _PEP_PROCESSOR_FEEDBACK_COUNTER {
  struct {
    ULONG Affinitized : 1;
    ULONG Type : 2;
    ULONG Counter : 4;
    ULONG DiscountIdle : 1;
    ULONG Reserved : 24;
  };
  ULONG  NominalRate;
} PEP_PROCESSOR_FEEDBACK_COUNTER, *PPEP_PROCESSOR_FEEDBACK_COUNTER;

typedef struct _PEP_PROCESSOR_IDLE_DEPENDENCY {
  POHANDLE TargetProcessor;
  UCHAR    ExpectedState;
  BOOLEAN  AllowDeeperStates;
  BOOLEAN  LooseDependency;
} PEP_PROCESSOR_IDLE_DEPENDENCY, *PPEP_PROCESSOR_IDLE_DEPENDENCY;

typedef struct _PEP_PROCESSOR_IDLE_STATE_UPDATE {
  ULONG Version;
  ULONG Latency;
  ULONG BreakEvenDuration;
} PEP_PROCESSOR_IDLE_STATE_UPDATE, *PPEP_PROCESSOR_IDLE_STATE_UPDATE;

typedef struct _PEP_PROCESSOR_IDLE_STATE_V2 {
  union {
    ULONG Ulong;
    struct {
      ULONG Interruptible : 1;
      ULONG CacheCoherent : 1;
      ULONG ThreadContextRetained : 1;
      ULONG CStateType : 4;
      ULONG WakesSpuriously : 1;
      ULONG PlatformOnly : 1;
      ULONG Autonomous : 1;
      ULONG Reserved : 22;
    };
  };
  ULONG Latency;
  ULONG BreakEvenDuration;
} PEP_PROCESSOR_IDLE_STATE_V2, *PPEP_PROCESSOR_IDLE_STATE_V2;

typedef struct _PEP_PROCESSOR_PARK_PREFERENCE {
  PEPHANDLE Processor;
  UCHAR     PoPreference;
  UCHAR     PepPreference;
} PEP_PROCESSOR_PARK_PREFERENCE, *PPEP_PROCESSOR_PARK_PREFERENCE;

typedef struct _PEP_PROCESSOR_PARK_STATE {
  PEPHANDLE Processor;
  BOOLEAN   Parked;
  UCHAR     Reserved[3];
} PEP_PROCESSOR_PARK_STATE, *PPEP_PROCESSOR_PARK_STATE;

typedef struct _PEP_PROCESSOR_PERF_STATE {
  ULONG Performance;
  ULONG Frequency;
  ULONG Reserved[4];
} PEP_PROCESSOR_PERF_STATE, *PPEP_PROCESSOR_PERF_STATE;

typedef struct _PEP_QUERY_COMPONENT_PERF_CAPABILITIES {
  [in]  PEPHANDLE DeviceHandle;
  [in]  ULONG     Component;
  [out] ULONG     SetCount;
} PEP_QUERY_COMPONENT_PERF_CAPABILITIES, *PPEP_QUERY_COMPONENT_PERF_CAPABILITIES;

typedef struct _PEP_QUERY_COMPONENT_PERF_SET {
  PEPHANDLE           DeviceHandle;
  ULONG               Component;
  ULONG               Set;
  ULONGLONG           Flags;
  PEP_PERF_STATE_UNIT Unit;
  PEP_PERF_STATE_TYPE Type;
  union {
    struct {
      ULONG Count;
    } Discrete;
    struct {
      ULONGLONG Minimum;
      ULONGLONG Maximum;
    } Range;
  };
} PEP_QUERY_COMPONENT_PERF_SET, *PPEP_QUERY_COMPONENT_PERF_SET;

typedef struct _PEP_QUERY_COMPONENT_PERF_SET_NAME {
  [in]      PEPHANDLE DeviceHandle;
  [in]      ULONG     Component;
  [in]      ULONG     Set;
  [in, out] USHORT    NameSize;
  [in]      PWCHAR    Name;
} PEP_QUERY_COMPONENT_PERF_SET_NAME, *PPEP_QUERY_COMPONENT_PERF_SET_NAME;

typedef struct _PEP_QUERY_COMPONENT_PERF_STATES {
  [in] PEPHANDLE       DeviceHandle;
  [in] ULONG           Component;
  [in] ULONG           Set;
  [in] PPEP_PERF_STATE States;
} PEP_QUERY_COMPONENT_PERF_STATES, *PPEP_QUERY_COMPONENT_PERF_STATES;

typedef struct _PEP_QUERY_CURRENT_COMPONENT_PERF_STATE {
  PEPHANDLE DeviceHandle;
  ULONG     Component;
  ULONG     Set;
  union {
    ULONG     StateIndex;
    ULONGLONG StateValue;
  };
} PEP_QUERY_CURRENT_COMPONENT_PERF_STATE, *PPEP_QUERY_CURRENT_COMPONENT_PERF_STATE;

typedef struct _PEP_QUERY_SOC_SUBSYSTEM {
  [in]     ULONG          PlatformIdleStateIndex;
  [in]     ULONG          SubsystemIndex;
  [out]    PVOID          SubsystemHandle;
  [in/out] UNICODE_STRING ParentName;
  [in/out] UNICODE_STRING SubsystemName;
  [out]    ULONG          MetadataCount;
           ULONG          Flags;
} PEP_QUERY_SOC_SUBSYSTEM, *PPEP_QUERY_SOC_SUBSYSTEM;


typedef struct _PEP_QUERY_SOC_SUBSYSTEM_BLOCKING_TIME {
  [in]  ULONG            PlatformIdleStateIndex;
  [in]  PVOID            SubsystemHandle;
  [in]  PCUNICODE_STRING SubsystemName;
  [out] ULONG64          BlockingTime;
        ULONG            Flags;
} PEP_QUERY_SOC_SUBSYSTEM_BLOCKING_TIME, *PPEP_QUERY_SOC_SUBSYSTEM_BLOCKING_TIME;

typedef struct _PEP_QUERY_SOC_SUBSYSTEM_COUNT {
  [in]  ULONG PlatformIdleStateIndex;
  [out] ULONG SubsystemCount;
        ULONG Flags;
} PEP_QUERY_SOC_SUBSYSTEM_COUNT, *PPEP_QUERY_SOC_SUBSYSTEM_COUNT;

typedef struct _PEP_QUERY_SOC_SUBSYSTEM_METADATA {
  [in]     ULONG                       PlatformIdleStateIndex;
  [in]     PVOID                       SubsystemHandle;
  [in]     PCUNICODE_STRING            SubsystemName;
           ULONG                       Flags;
  [in]     ULONG                       MetadataCount;
           PPEP_SOC_SUBSYSTEM_METADATA Metadata[ANYSIZE_ARRAY];
} PEP_QUERY_SOC_SUBSYSTEM_METADATA, *PPEP_QUERY_SOC_SUBSYSTEM_METADATA;

typedef struct _PEP_REGISTER_COMPONENT_PERF_STATES {
  [in] PEPHANDLE                DeviceHandle;
  [in] ULONG                    Component;
  [in] ULONGLONG                Flags;
  [in] PPEP_COMPONENT_PERF_INFO PerfStateInfo;
} PEP_REGISTER_COMPONENT_PERF_STATES, *PPEP_REGISTER_COMPONENT_PERF_STATES;

typedef struct _PEP_REGISTER_CRASHDUMP_DEVICE {
  [out] PPEPCALLBACKPOWERONCRASHDUMPDEVICE PowerOnDumpDeviceCallback;
  [in]  PEPHANDLE                          DeviceHandle;
} PEP_REGISTER_CRASHDUMP_DEVICE, *PPEP_REGISTER_CRASHDUMP_DEVICE;

typedef struct _PEP_REGISTER_DEBUGGER {
  [in] PEPHANDLE DeviceHandle;
} PEP_REGISTER_DEBUGGER, *PPEP_REGISTER_DEBUGGER;

typedef struct _PEP_REGISTER_DEVICE_V2 {
  [in]  PCUNICODE_STRING           DeviceId;
  [in]  POHANDLE                   KernelHandle;
  [in]  PPEP_DEVICE_REGISTER_V2    Register;
  [out] PEPHANDLE                  DeviceHandle;
  [out] PEP_DEVICE_ACCEPTANCE_TYPE DeviceAccepted;
} PEP_REGISTER_DEVICE_V2, *PPEP_REGISTER_DEVICE_V2;

typedef struct _PEP_REQUEST_COMPONENT_PERF_STATE {
  [in]  PEPHANDLE                         DeviceHandle;
  [in]  ULONG                             Component;
  [out] BOOLEAN                           Completed;
  [out] BOOLEAN                           Succeeded;
  [in]  ULONG                             PerfRequestsCount;
  [in]  PPEP_COMPONENT_PERF_STATE_REQUEST PerfRequests;
} PEP_REQUEST_COMPONENT_PERF_STATE, *PPEP_REQUEST_COMPONENT_PERF_STATE;

typedef struct _PEP_RESET_SOC_SUBSYSTEM_ACCOUNTING {
  [in] ULONG PlatformIdleStateIndex;
       ULONG Flags;
} PEP_RESET_SOC_SUBSYSTEM_ACCOUNTING, *PPEP_RESET_SOC_SUBSYSTEM_ACCOUNTING;

typedef struct _PEP_SOC_SUBSYSTEM_METADATA {
  [in/out] UNICODE_STRING Key;
  [in/out] UNICODE_STRING Value;
} PEP_SOC_SUBSYSTEM_METADATA, *PPEP_SOC_SUBSYSTEM_METADATA;

typedef struct _PEP_SYSTEM_LATENCY {
  [in] ULONGLONG Latency;
} PEP_SYSTEM_LATENCY, *PPEP_SYSTEM_LATENCY;

typedef union _PEP_UNMASKED_INTERRUPT_FLAGS {
  struct {
    USHORT SecondaryInterrupt : 1;
    USHORT Reserved : 15;
  };
  USHORT AsUSHORT;
} PEP_UNMASKED_INTERRUPT_FLAGS, *PPEP_UNMASKED_INTERRUPT_FLAGS;

typedef struct _PEP_UNMASKED_INTERRUPT_INFORMATION {
  USHORT                       Version;
  USHORT                       Size;
  PEP_UNMASKED_INTERRUPT_FLAGS Flags;
  KINTERRUPT_MODE              Mode;
  KINTERRUPT_POLARITY          Polarity;
  ULONG                        Gsiv;
  USHORT                       PinNumber;
  PEPHANDLE                    DeviceHandle;
} PEP_UNMASKED_INTERRUPT_INFORMATION, *PPEP_UNMASKED_INTERRUPT_INFORMATION;

typedef struct _PEP_UNREGISTER_DEVICE {
  [in] PEPHANDLE DeviceHandle;
} PEP_UNREGISTER_DEVICE, *PPEP_UNREGISTER_DEVICE;

typedef struct _PEP_WORK {
  [out] PPEP_WORK_INFORMATION WorkInformation;
  [out] BOOLEAN               NeedWork;
} PEP_WORK, *PPEP_WORK;

typedef struct _PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE {
  POHANDLE              DeviceHandle;
  ULONG                 CompletionFlags;
  NTSTATUS              MethodStatus;
  PVOID                 CompletionContext;
  SIZE_T                OutputArgumentSize;
  PACPI_METHOD_ARGUMENT OutputArguments;
} PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE, *PPEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE;

typedef struct _PEP_WORK_ACPI_NOTIFY {
  POHANDLE DeviceHandle;
  ULONG    NotifyCode;
} PEP_WORK_ACPI_NOTIFY, *PPEP_WORK_ACPI_NOTIFY;

typedef struct _PEP_WORK_COMPLETE_IDLE_STATE {
       POHANDLE DeviceHandle;
  [in] ULONG    Component;
} PEP_WORK_COMPLETE_IDLE_STATE, *PPEP_WORK_COMPLETE_IDLE_STATE;

typedef struct _PEP_WORK_COMPLETE_PERF_STATE {
       POHANDLE DeviceHandle;
  [in] ULONG    Component;
       BOOLEAN  Succeeded;
} PEP_WORK_COMPLETE_PERF_STATE, *PPEP_WORK_COMPLETE_PERF_STATE;

typedef struct _PEP_WORK_INFORMATION {
  PEP_WORK_TYPE WorkType;
  union {
    PEP_WORK_POWER_CONTROL                         PowerControl;
    PEP_WORK_COMPLETE_IDLE_STATE                   CompleteIdleState;
    PEP_WORK_COMPLETE_PERF_STATE                   CompletePerfState;
    PEP_WORK_ACPI_NOTIFY                           AcpiNotify;
    PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE ControlMethodComplete;
  };
} PEP_WORK_INFORMATION, *PPEP_WORK_INFORMATION;

typedef struct _PEP_WORK_POWER_CONTROL {
       POHANDLE DeviceHandle;
  [in] LPCGUID  PowerControlCode;
       PVOID    RequestContext;
  [in] PVOID    InBuffer;
  [in] SIZE_T   InBufferSize;
  [in] PVOID    OutBuffer;
  [in] SIZE_T   OutBufferSize;
} PEP_WORK_POWER_CONTROL, *PPEP_WORK_POWER_CONTROL;

typedef enum _PEP_WORK_TYPE {
  PepWorkRequestPowerControl,
  PepWorkCompleteIdleState,
  PepWorkCompletePerfState,
  PepWorkAcpiNotify,
  PepWorkAcpiEvaluateControlMethodComplete,
  PepWorkMax
} PEP_WORK_TYPE, *PPEP_WORK_TYPE;

typedef struct _PO_FX_CORE_DEVICE {
  ULONG                                         Version;
  ULONG                                         ComponentCount;
  PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK    ComponentActiveConditionCallback;
  PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK      ComponentIdleConditionCallback;
  PPO_FX_COMPONENT_CRITICAL_TRANSITION_CALLBACK ComponentCriticalTransitionCallback;
  PPO_FX_COMPONENT_IDLE_STATE_CALLBACK          ComponentIdleStateCallback;
  PVOID                                         DeviceContext;
  PO_FX_COMPONENT                               Components[ANYSIZE_ARRAY];
} PO_FX_CORE_DEVICE, *PPO_FX_CORE_DEVICE;

NTSTATUS PoFxRegisterCoreDevice(
  [in]  PCUNICODE_STRING   Id,
  [in]  PPO_FX_CORE_DEVICE Device,
  [out] POHANDLE           *Handle
);

NTSTATUS PoFxRegisterPlugin(
  [in]      PPEP_INFORMATION        PepInformation,
  [in, out] PPEP_KERNEL_INFORMATION KernelInformation
);

NTSTATUS PoFxRegisterPluginEx(
  [in]      PPEP_INFORMATION        PepInformation,
  [in]      ULONGLONG               Flags,
  [in, out] PPEP_KERNEL_INFORMATION KernelInformation
);



*/

#endif