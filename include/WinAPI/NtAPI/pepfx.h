#ifndef _PEPFX_H
#define _PEPFX_H

void PEP_ACPI_INITIALIZE_EXTENDED_IO_RESOURCE(
  _In_  BOOLEAN            ResourceUsage,
  _In_  UCHAR              Decode,
  _In_  BOOLEAN            IsMinFixed,
  _In_  BOOLEAN            IsMaxFixed,
  _In_  UCHAR              ISARanges,
  _In_  ULONGLONG          AddressGranularity,
  _In_  ULONGLONG          AddressMinimum,
  _In_  ULONGLONG          AddressMaximum,
  _In_  ULONGLONG          AddressTranslation,
  _In_  ULONGLONG          RangeLength,
  _In_  ULONGLONG          TypeSpecificAttributes,
  _In_  PUNICODE_STRING    DescriptorName,
  _In_  BOOLEAN            TranslationTypeNonStatic,
  _In_  BOOLEAN            TanslationSparseDensity,
  _Out_ PPEP_ACPI_RESOURCE Resource
);

void PEP_ACPI_INITIALIZE_EXTENDED_MEMORY_RESOURCE(
  _In_  BOOLEAN            ResourceUsage,
  _In_  UCHAR              Decode,
  _In_  BOOLEAN            IsMinFixed,
  _In_  BOOLEAN            IsMaxFixed,
  _In_  UCHAR              Cacheable,
  _In_  BOOLEAN            ReadWrite,
  _In_  ULONGLONG          AddressGranularity,
  _In_  ULONGLONG          AddressMinimum,
  _In_  ULONGLONG          AddressMaximum,
  _In_  ULONGLONG          AddressTranslation,
  _In_  ULONGLONG          RangeLength,
  _In_  ULONGLONG          TypeSpecificAttributes,
  _In_  PUNICODE_STRING    DescriptorName,
  _In_  UCHAR              MemoryRangeType,
        BOOLEAN            TranslationTypeNonStatic,
  _Out_ PPEP_ACPI_RESOURCE Resource
);

void PEP_ACPI_INITIALIZE_GPIO_INT_RESOURCE(
  _In_  KINTERRUPT_MODE      InterruptType,
  _In_  KINTERRUPT_POLARITY  LevelType,
  _In_  BOOLEAN              Shareable,
  _In_  BOOLEAN              CanWake,
  _In_  GPIO_PIN_CONFIG_TYPE PinConfig,
  _In_  USHORT               DebounceTimeout,
  _In_  UCHAR                ResourceSourceIndex,
  _In_  PUNICODE_STRING      ResourceSourceName,
  _In_  BOOLEAN              ResourceUsage,
  _In_  PUCHAR               VendorData,
  _In_  USHORT               VendorDataLength,
  _In_  PUSHORT              PinTable,
  _In_  UCHAR                PinCount,
  _Out_ PPEP_ACPI_RESOURCE   Resource
);

void PEP_ACPI_INITIALIZE_GPIO_IO_RESOURCE(
  _In_  BOOLEAN                     Shareable,
  _In_  BOOLEAN                     CanWake,
  _In_  GPIO_PIN_CONFIG_TYPE        PinConfig,
  _In_  USHORT                      DebounceTimeout,
  _In_  USHORT                      DriveStrength,
  _In_  GPIO_PIN_IORESTRICTION_TYPE IoRestriction,
  _In_  UCHAR                       ResourceSourceIndex,
  _In_  PUNICODE_STRING             ResourceSourceName,
  _In_  BOOLEAN                     ResourceUsage,
  _In_  PUCHAR                      VendorData,
  _In_  USHORT                      VendorDataLength,
  _In_  PUSHORT                     PinTable,
  _In_  USHORT                      PinCount,
  _Out_ PPEP_ACPI_RESOURCE          Resource
);

void PEP_ACPI_INITIALIZE_INTERRUPT_RESOURCE(
  _In_  BOOLEAN             ResourceUsage,
  _In_  KINTERRUPT_MODE     EdgeLevel,
  _In_  KINTERRUPT_POLARITY InterruptLevel,
  _In_  BOOLEAN             ShareType,
  _In_  BOOLEAN             Wake,
  _In_  PULONG              PinTable,
  _In_  UCHAR               PinCount,
  _Out_ PPEP_ACPI_RESOURCE  Resource
);

void PEP_ACPI_INITIALIZE_IOPORT_RESOURCE(
  _In_  UCHAR              Decode,
  _In_  USHORT             MinimumAddress,
  _In_  USHORT             MaximumAddress,
  _In_  UCHAR              Alignment,
  _In_  UCHAR              PortLength,
  _Out_ PPEP_ACPI_RESOURCE Resource
);

void PEP_ACPI_INITIALIZE_MEMORY_RESOURCE(
  _In_  UCHAR              ReadWrite,
  _In_  ULONG              MinimumAddress,
  _In_  ULONG              MaximumAddress,
  _In_  ULONG              Alignment,
  _In_  ULONG              MemorySize,
  _Out_ PPEP_ACPI_RESOURCE Resource
);

void PEP_ACPI_INITIALIZE_SPB_I2C_RESOURCE(
  _In_  USHORT             SlaveAddress,
  _In_  BOOLEAN            DeviceInitiated,
  _In_  ULONG              ConnectionSpeed,
  _In_  BOOLEAN            AddressingMode,
  _In_  PUNICODE_STRING    ResourceSource,
  _In_  UCHAR              ResourceSourceIndex,
  _In_  BOOLEAN            ResourceUsage,
  _In_  BOOLEAN            SharedMode,
  _In_  PCHAR              VendorData,
  _In_  USHORT             VendorDataLength,
  _Out_ PPEP_ACPI_RESOURCE Resource
);

void PEP_ACPI_INITIALIZE_SPB_SPI_RESOURCE(
  _In_  USHORT             DeviceSelection,
  _In_  UCHAR              DeviceSelectionPolarity,
  _In_  UCHAR              WireMode,
  _In_  UCHAR              DataBitLength,
  _In_  BOOLEAN            SlaveMode,
  _In_  ULONG              ConnectionSpeed,
  _In_  UCHAR              ClockPolarity,
  _In_  UCHAR              ClockPhase,
  _In_  PUNICODE_STRING    ResourceSource,
  _In_  UCHAR              ResourceSourceIndex,
  _In_  BOOLEAN            ResourceUsage,
  _In_  BOOLEAN            SharedMode,
  _In_  PCHAR              VendorData,
  _In_  USHORT             VendorDataLength,
  _Out_ PPEP_ACPI_RESOURCE Resource
);

void PEP_ACPI_INITIALIZE_SPB_UART_RESOURCE(
  _In_  ULONG              BaudRate,
  _In_  UCHAR              BitsPerByte,
  _In_  UCHAR              StopBits,
  _In_  UCHAR              LinesInUse,
  _In_  UCHAR              IsBigEndian,
  _In_  UCHAR              Parity,
  _In_  UCHAR              FlowControl,
  _In_  USHORT             RxSize,
  _In_  USHORT             TxSize,
  _In_  PUNICODE_STRING    ResourceSource,
  _In_  UCHAR              ResourceSourceIndex,
  _In_  BOOLEAN            ResourceUsage,
  _In_  BOOLEAN            SharedMode,
  _In_  PCHAR              VendorData,
  _In_  USHORT             VendorDataLength,
  _Out_ PPEP_ACPI_RESOURCE Resource
);

typedef struct _PEP_DEBUGGER_TRANSITION_REQUIREMENTS {
  _In_ PEPHANDLE DeviceHandle;
  _In_ ULONG     PlatformStateCount;
  _In_ PBOOLEAN  PowerTransitionRequired;
} PEP_DEBUGGER_TRANSITION_REQUIREMENTS, *PPEP_DEBUGGER_TRANSITION_REQUIREMENTS;

NTSTATUS PoFxRegisterCoreDevice(
  _In_  PCUNICODE_STRING   Id,
  _In_  PPO_FX_CORE_DEVICE Device,
  _Out_ POHANDLE           *Handle
);

NTSTATUS PoFxRegisterPlugin(
  _In_      PPEP_INFORMATION        PepInformation,
  _In_ _Out_ PPEP_KERNEL_INFORMATION KernelInformation
);

NTSTATUS PoFxRegisterPluginEx(
  _In_      PPEP_INFORMATION        PepInformation,
  _In_      ULONGLONG               Flags,
  _In_ _Out_ PPEP_KERNEL_INFORMATION KernelInformation
);



#endif