#ifndef WDM_H
#define WDM_H

/*

typedef struct _DMA_ADAPTER {
  USHORT          Version;
  USHORT          Size;
  PDMA_OPERATIONS DmaOperations;
} *PADAPTER_OBJECT, DMA_ADAPTER, *PDMA_ADAPTER;

typedef struct _DMA_OPERATIONS {
  ULONG                                   Size;
  PPUT_DMA_ADAPTER                        PutDmaAdapter;
  PALLOCATE_COMMON_BUFFER                 AllocateCommonBuffer;
  PFREE_COMMON_BUFFER                     FreeCommonBuffer;
  PALLOCATE_ADAPTER_CHANNEL               AllocateAdapterChannel;
  PFLUSH_ADAPTER_BUFFERS                  FlushAdapterBuffers;
  PFREE_ADAPTER_CHANNEL                   FreeAdapterChannel;
  PFREE_MAP_REGISTERS                     FreeMapRegisters;
  PMAP_TRANSFER                           MapTransfer;
  PGET_DMA_ALIGNMENT                      GetDmaAlignment;
  PREAD_DMA_COUNTER                       ReadDmaCounter;
  PGET_SCATTER_GATHER_LIST                GetScatterGatherList;
  PPUT_SCATTER_GATHER_LIST                PutScatterGatherList;
  PCALCULATE_SCATTER_GATHER_LIST_SIZE     CalculateScatterGatherList;
  PBUILD_SCATTER_GATHER_LIST              BuildScatterGatherList;
  PBUILD_MDL_FROM_SCATTER_GATHER_LIST     BuildMdlFromScatterGatherList;
  PGET_DMA_ADAPTER_INFO                   GetDmaAdapterInfo;
  PGET_DMA_TRANSFER_INFO                  GetDmaTransferInfo;
  PINITIALIZE_DMA_TRANSFER_CONTEXT        InitializeDmaTransferContext;
  PALLOCATE_COMMON_BUFFER_EX              AllocateCommonBufferEx;
  PALLOCATE_ADAPTER_CHANNEL_EX            AllocateAdapterChannelEx;
  PCONFIGURE_ADAPTER_CHANNEL              ConfigureAdapterChannel;
  PCANCEL_ADAPTER_CHANNEL                 CancelAdapterChannel;
  PMAP_TRANSFER_EX                        MapTransferEx;
  PGET_SCATTER_GATHER_LIST_EX             GetScatterGatherListEx;
  PBUILD_SCATTER_GATHER_LIST_EX           BuildScatterGatherListEx;
  PFLUSH_ADAPTER_BUFFERS_EX               FlushAdapterBuffersEx;
  PFREE_ADAPTER_OBJECT                    FreeAdapterObject;
  PCANCEL_MAPPED_TRANSFER                 CancelMappedTransfer;
  PALLOCATE_DOMAIN_COMMON_BUFFER          AllocateDomainCommonBuffer;
  PFLUSH_DMA_BUFFER                       FlushDmaBuffer;
  PJOIN_DMA_DOMAIN                        JoinDmaDomain;
  PLEAVE_DMA_DOMAIN                       LeaveDmaDomain;
  PGET_DMA_DOMAIN                         GetDmaDomain;
  PALLOCATE_COMMON_BUFFER_WITH_BOUNDS     AllocateCommonBufferWithBounds;
  PALLOCATE_COMMON_BUFFER_VECTOR          AllocateCommonBufferVector;
  PGET_COMMON_BUFFER_FROM_VECTOR_BY_INDEX GetCommonBufferFromVectorByIndex;
  PFREE_COMMON_BUFFER_FROM_VECTOR         FreeCommonBufferFromVector;
  PFREE_COMMON_BUFFER_VECTOR              FreeCommonBufferVector;
  PCREATE_COMMON_BUFFER_FROM_MDL          CreateCommonBufferFromMdl;
} *PDMA_OPERATIONS, DMA_OPERATIONS;

unsigned char _BitTest64(
  __int64 const *Base,
  __int64       Index
);

unsigned char _BitTestAndComplement64(
  __int64 *Base,
  __int64 Index
);

unsigned char _BitTestAndReset64(
  __int64 *Base,
  __int64 Index
);

unsigned char _BitTestAndSet64(
  __int64 *Base,
  __int64 Index
);

void _ReadWriteBarrier();

typedef struct {
  USHORT                                Size;
  USHORT                                Version;
  PVOID                                 Context;
  PINTERFACE_REFERENCE                  InterfaceReference;
  PINTERFACE_DEREFERENCE                InterfaceDereference;
  PGPE_CONNECT_VECTOR2                  GpeConnectVector;
  PGPE_DISCONNECT_VECTOR2               GpeDisconnectVector;
  PGPE_ENABLE_EVENT2                    GpeEnableEvent;
  PGPE_DISABLE_EVENT2                   GpeDisableEvent;
  PGPE_CLEAR_STATUS2                    GpeClearStatus;
  PREGISTER_FOR_DEVICE_NOTIFICATIONS2   RegisterForDeviceNotifications;
  PUNREGISTER_FOR_DEVICE_NOTIFICATIONS2 UnregisterForDeviceNotifications;
} ACPI_INTERFACE_STANDARD2, *PACPI_INTERFACE_STANDARD2;

void AppendTailList(
  [in, out] PLIST_ENTRY ListHead,
  [in, out] PLIST_ENTRY ListToAppend
);

void ARM64_SYSREG_CRM(
   _Reg_
);

void ARM64_SYSREG_CRN(
   _Reg_
);

void ARM64_SYSREG_OP1(
   _Reg_
);

void ARM64_SYSREG_OP2(
   _Reg_
);

void BarrierAfterRead();

void BarrierAfterRead();

void BarrierAfterRead();

typedef struct _BOOTDISK_INFORMATION {
  LONGLONG BootPartitionOffset;
  LONGLONG SystemPartitionOffset;
  ULONG    BootDeviceSignature;
  ULONG    SystemDeviceSignature;
} BOOTDISK_INFORMATION, *PBOOTDISK_INFORMATION;

typedef struct _BOOTDISK_INFORMATION_EX {
  LONGLONG BootPartitionOffset;
  LONGLONG SystemPartitionOffset;
  ULONG    BootDeviceSignature;
  ULONG    SystemDeviceSignature;
  GUID     BootDeviceGuid;
  GUID     SystemDeviceGuid;
  BOOLEAN  BootDeviceIsGpt;
  BOOLEAN  SystemDeviceIsGpt;
} BOOTDISK_INFORMATION_EX, *PBOOTDISK_INFORMATION_EX;

typedef enum _BOUND_CALLBACK_STATUS {
  BoundExceptionContinueSearch,
  BoundExceptionHandled,
  BoundExceptionError,
  BoundExceptionMaximum
} BOUND_CALLBACK_STATUS, *PBOUND_CALLBACK_STATUS;

typedef struct _BUS_INTERFACE_STANDARD {
  USHORT                 Size;
  USHORT                 Version;
  PVOID                  Context;
  PINTERFACE_REFERENCE   InterfaceReference;
  PINTERFACE_DEREFERENCE InterfaceDereference;
  PTRANSLATE_BUS_ADDRESS TranslateBusAddress;
  PGET_DMA_ADAPTER       GetDmaAdapter;
  PGET_SET_DEVICE_DATA   SetBusData;
  PGET_SET_DEVICE_DATA   GetBusData;
} BUS_INTERFACE_STANDARD, *PBUS_INTERFACE_STANDARD;

typedef enum {
  BusQueryDeviceID,
  BusQueryHardwareIDs,
  BusQueryCompatibleIDs,
  BusQueryInstanceID,
  BusQueryDeviceSerialNumber,
  BusQueryContainerID
} BUS_QUERY_ID_TYPE, *PBUS_QUERY_ID_TYPE;

typedef struct _BUS_RESOURCE_UPDATE_INTERFACE {
  USHORT                    Size;
  USHORT                    Version;
  PVOID                     Context;
  PINTERFACE_REFERENCE      InterfaceReference;
  PINTERFACE_DEREFERENCE    InterfaceDereference;
  PGET_UPDATED_BUS_RESOURCE GetUpdatedBusResource;
} BUS_RESOURCE_UPDATE_INTERFACE, *PBUS_RESOURCE_UPDATE_INTERFACE;

typedef union _BUS_SPECIFIC_RESET_FLAGS {
  struct {
    ULONGLONG KeepStackReset : 1;
    ULONGLONG Reserved : 63;
  } u;
  ULONGLONG AsUlonglong;
} BUS_SPECIFIC_RESET_FLAGS, *PBUS_SPECIFIC_RESET_FLAGS;

typedef enum _CLFS_CONTEXT_MODE {
  ClfsContextNone,
  ClfsContextUndoNext,
  ClfsContextPrevious,
  ClfsContextForward
} CLFS_CONTEXT_MODE, *PCLFS_CONTEXT_MODE, PPCLFS_CONTEXT_MODE;

typedef struct _CLFS_LOG_NAME_INFORMATION {
  USHORT NameLengthInBytes;
  WCHAR  Name[1];
} CLFS_LOG_NAME_INFORMATION, *PCLFS_LOG_NAME_INFORMATION, PPCLFS_LOG_NAME_INFORMATION;

typedef struct _CLFS_MGMT_CLIENT_REGISTRATION {
  ULONG                                      Version;
  PCLFS_CLIENT_ADVANCE_TAIL_CALLBACK         AdvanceTailCallback;
  PVOID                                      AdvanceTailCallbackData;
  PCLFS_CLIENT_LFF_HANDLER_COMPLETE_CALLBACK LogGrowthCompleteCallback;
  PVOID                                      LogGrowthCompleteCallbackData;
  PCLFS_CLIENT_LOG_UNPINNED_CALLBACK         LogUnpinnedCallback;
  PVOID                                      LogUnpinnedCallbackData;
} CLFS_MGMT_CLIENT_REGISTRATION, *PCLFS_MGMT_CLIENT_REGISTRATION;

typedef struct _CLFS_MGMT_POLICY {
  ULONG                 Version;
  ULONG                 LengthInBytes;
  ULONG                 PolicyFlags;
  CLFS_MGMT_POLICY_TYPE PolicyType;
  union {
    struct {
      ULONG Containers;
    } MaximumSize;
    struct {
      ULONG Containers;
    } MinimumSize;
    struct {
      ULONG SizeInBytes;
    } NewContainerSize;
    struct {
      ULONG AbsoluteGrowthInContainers;
      ULONG RelativeGrowthPercentage;
    } GrowthRate;
    struct {
      ULONG MinimumAvailablePercentage;
      ULONG MinimumAvailableContainers;
    } LogTail;
    struct {
      ULONG Percentage;
    } AutoShrink;
    struct {
      ULONG Enabled;
    } AutoGrow;
    struct {
      USHORT PrefixLengthInBytes;
      WCHAR  PrefixString[1];
    } NewContainerPrefix;
    struct {
      ULONGLONG NextContainerSuffix;
    } NewContainerSuffix;
    struct {
      USHORT ExtensionLengthInBytes;
      WCHAR  ExtensionString[1];
    } NewContainerExtension;
  } PolicyParameters;
} CLFS_MGMT_POLICY, *PCLFS_MGMT_POLICY;

typedef enum _CLFS_MGMT_POLICY_TYPE {
  ClfsMgmtPolicyMaximumSize,
  ClfsMgmtPolicyMinimumSize,
  ClfsMgmtPolicyNewContainerSize,
  ClfsMgmtPolicyGrowthRate,
  ClfsMgmtPolicyLogTail,
  ClfsMgmtPolicyAutoShrink,
  ClfsMgmtPolicyAutoGrow,
  ClfsMgmtPolicyNewContainerPrefix,
  ClfsMgmtPolicyNewContainerSuffix,
  ClfsMgmtPolicyNewContainerExtension,
  ClfsMgmtPolicyInvalid
} CLFS_MGMT_POLICY_TYPE, *PCLFS_MGMT_POLICY_TYPE;

typedef struct _CLFS_STREAM_ID_INFORMATION {
  UCHAR StreamIdentifier;
} CLFS_STREAM_ID_INFORMATION, *PCLFS_STREAM_ID_INFORMATION, PPCLFS_STREAM_ID_INFORMATION;

CLFSUSER_API NTSTATUS ClfsAddLogContainer(
  [in] PLOG_FILE_OBJECT plfoLog,
  [in] PULONGLONG       pcbContainer,
  [in] PUNICODE_STRING  puszContainerPath
);

CLFSUSER_API NTSTATUS ClfsAddLogContainerSet(
  [in]           PLOG_FILE_OBJECT plfoLog,
  [in]           USHORT           cContainers,
  [in, optional] PULONGLONG       pcbContainer,
  [in]           PUNICODE_STRING  rguszContainerPath
);


CLFSUSER_API NTSTATUS ClfsAdvanceLogBase(
  [in, out] PVOID     pvMarshalContext,
  [in]      PCLFS_LSN plsnBase,
  [in]      ULONG     fFlags
);

CLFSUSER_API NTSTATUS ClfsAlignReservedLog(
  [in]  PVOID       pvMarshalContext,
  [in]  ULONG       cRecords,
  [in]  LONGLONG [] rgcbReservation,
  [out] PLONGLONG   pcbAlignReservation
);

CLFSUSER_API NTSTATUS ClfsAllocReservedLog(
  [in] PVOID     pvMarshalContext,
  [in] ULONG     cRecords,
  [in] PLONGLONG pcbAdjustment
);

CLFSUSER_API NTSTATUS ClfsCloseAndResetLogFile(
  [in] PLOG_FILE_OBJECT plfoLog
);

CLFSUSER_API NTSTATUS ClfsCloseLogFileObject(
  [in] PLOG_FILE_OBJECT plfoLog
);

CLFSUSER_API NTSTATUS ClfsCreateLogFile(
  [out]          PPLOG_FILE_OBJECT    pplfoLog,
  [in]           PUNICODE_STRING      puszLogFileName,
  [in]           ACCESS_MASK          fDesiredAccess,
  [in]           ULONG                dwShareMode,
  [in, optional] PSECURITY_DESCRIPTOR psdLogFile,
  [in]           ULONG                fCreateDisposition,
  [in]           ULONG                fCreateOptions,
  [in]           ULONG                fFlagsAndAttributes,
  [in]           ULONG                fLogOptionFlag,
  [in, optional] PVOID                pvContext,
  [in]           ULONG                cbContext
);

CLFSUSER_API NTSTATUS ClfsCreateMarshallingArea(
  [in]           PLOG_FILE_OBJECT   plfoLog,
  [in]           POOL_TYPE          ePoolType,
  [in, optional] PALLOCATE_FUNCTION pfnAllocBuffer,
  [in, optional] PFREE_FUNCTION     pfnFreeBuffer,
  [in]           ULONG              cbMarshallingBuffer,
  [in]           ULONG              cMaxWriteBuffers,
  [in]           ULONG              cMaxReadBuffers,
  [out]          PVOID              *ppvMarshalContext
);

CLFSUSER_API NTSTATUS ClfsCreateScanContext(
  [in]      PLOG_FILE_OBJECT   plfoLog,
  [in]      ULONG              cFromContainer,
  [in]      ULONG              cContainers,
  [in]      CLFS_SCAN_MODE     eScanMode,
  [in, out] PCLFS_SCAN_CONTEXT pcxScan
);

CLFSUSER_API NTSTATUS ClfsDeleteLogByPointer(
  [in] PLOG_FILE_OBJECT plfoLog
);

CLFSUSER_API NTSTATUS ClfsDeleteLogFile(
  [in]           PUNICODE_STRING puszLogFileName,
                 PVOID           pvReserved,
  [in]           ULONG           fLogOptionFlag,
  [in, optional] PVOID           pvContext,
  [in]           ULONG           cbContext
);

CLFSUSER_API NTSTATUS ClfsDeleteMarshallingArea(
  [in] PVOID pvMarshalContext
);

CLFSUSER_API NTSTATUS ClfsFlushBuffers(
  [in] PVOID pvMarshalContext
);

CLFSUSER_API NTSTATUS ClfsFlushToLsn(
  [in]            PVOID     pvMarshalContext,
  [in]            PCLFS_LSN plsnFlush,
  [out, optional] PCLFS_LSN plsnLastFlushed
);

CLFSUSER_API NTSTATUS ClfsGetContainerName(
  [in]            PLOG_FILE_OBJECT  plfoLog,
  [in]            CLFS_CONTAINER_ID cidLogicalContainer,
  [out]           PUNICODE_STRING   puszContainerName,
  [out, optional] PULONG            pcActualLenContainerName
);

CLFSUSER_API NTSTATUS ClfsGetIoStatistics(
  [in]            PLOG_FILE_OBJECT   plfoLog,
  [in, out]       PVOID              pvStatsBuffer,
  [in]            ULONG              cbStatsBuffer,
  [in]            CLFS_IOSTATS_CLASS eStatsClass,
  [out, optional] PULONG             pcbStatsWritten
);

CLFSUSER_API ULONG ClfsLsnBlockOffset(
  [in] const CLFS_LSN *plsn
);

CLFSUSER_API CLFS_CONTAINER_ID ClfsLsnContainer(
  [in] const CLFS_LSN *plsn
);

CLFSUSER_API CLFS_LSN ClfsLsnCreate(
  [in] CLFS_CONTAINER_ID cidContainer,
  [in] ULONG             offBlock,
  [in] ULONG             cRecord
);

CLFSUSER_API BOOLEAN ClfsLsnEqual(
  [in] const CLFS_LSN *plsn1,
  [in] const CLFS_LSN *plsn2
);

CLFSUSER_API BOOLEAN ClfsLsnGreater(
  [in] const CLFS_LSN *plsn1,
  [in] const CLFS_LSN *plsn2
);

CLFSUSER_API BOOLEAN ClfsLsnLess(
  [in] const CLFS_LSN *plsn1,
  [in] const CLFS_LSN *plsn2
);

CLFSUSER_API BOOLEAN ClfsLsnNull(
  [in] const CLFS_LSN *plsn
);

CLFSUSER_API ULONG ClfsLsnRecordSequence(
  [in] const CLFS_LSN *plsn
);

CLFSUSER_API NTSTATUS ClfsMgmtDeregisterManagedClient(
  CLFS_MGMT_CLIENT ClientCookie
);

CLFSUSER_API NTSTATUS ClfsMgmtHandleLogFileFull(
  [in] CLFS_MGMT_CLIENT Client
);

CLFSUSER_API NTSTATUS ClfsMgmtInstallPolicy(
  [in] PLOG_FILE_OBJECT  LogFile,
  [in] PCLFS_MGMT_POLICY Policy,
  [in] ULONG             PolicyLength
);

CLFSUSER_API NTSTATUS ClfsMgmtQueryPolicy(
  [in]  PLOG_FILE_OBJECT      LogFile,
  [in]  CLFS_MGMT_POLICY_TYPE PolicyType,
  [out] PCLFS_MGMT_POLICY     Policy,
  [out] PULONG                PolicyLength
);

CLFSUSER_API NTSTATUS ClfsMgmtRegisterManagedClient(
  [in] PLOG_FILE_OBJECT               LogFile,
  [in] PCLFS_MGMT_CLIENT_REGISTRATION RegistrationData,
       PCLFS_MGMT_CLIENT              ClientCookie
);

CLFSUSER_API NTSTATUS ClfsMgmtRemovePolicy(
  [in] PLOG_FILE_OBJECT      LogFile,
  [in] CLFS_MGMT_POLICY_TYPE PolicyType
);

CLFSUSER_API NTSTATUS ClfsMgmtSetLogFileSize(
  [in]           PLOG_FILE_OBJECT                     LogFile,
  [in]           PULONGLONG                           NewSizeInContainers,
  [out]          PULONGLONG                           ResultingSizeInContainers,
  [in, optional] PCLFS_SET_LOG_SIZE_COMPLETE_CALLBACK CompletionRoutine,
  [in, optional] PVOID                                CompletionRoutineData
);

CLFSUSER_API NTSTATUS ClfsMgmtSetLogFileSizeAsClient(
  [in]            PLOG_FILE_OBJECT                     LogFile,
  [in, optional]  PCLFS_MGMT_CLIENT                    ClientCookie,
  [in]            PULONGLONG                           NewSizeInContainers,
  [out, optional] PULONGLONG                           ResultingSizeInContainers,
  [in, optional]  PCLFS_SET_LOG_SIZE_COMPLETE_CALLBACK CompletionRoutine,
  [in, optional]  PVOID                                CompletionRoutineData
);

CLFSUSER_API NTSTATUS ClfsMgmtTailAdvanceFailure(
  [in] CLFS_MGMT_CLIENT Client,
  [in] NTSTATUS         Reason
);

CLFSUSER_API NTSTATUS ClfsQueryLogFileInformation(
  [in]  PLOG_FILE_OBJECT           plfoLog,
  [in]  CLFS_LOG_INFORMATION_CLASS eInformationClass,
        PVOID                      pinfoInputBuffer,
        ULONG                      cbinfoInputBuffer,
  [out] PVOID                      pinfoBuffer,
        PULONG                     pcbInfoBuffer
);

CLFSUSER_API NTSTATUS ClfsReadLogRecord(
  [in]      PVOID             pvMarshalContext,
  [in, out] PCLFS_LSN         plsnFirst,
  [in]      CLFS_CONTEXT_MODE peContextMode,
  [out]     PVOID             *ppvReadBuffer,
  [out]     PULONG            pcbReadBuffer,
  [out]     PCLFS_RECORD_TYPE peRecordType,
  [out]     PCLFS_LSN         plsnUndoNext,
  [out]     PCLFS_LSN         plsnPrevious,
  [out]     PVOID             *ppvReadContext
);

CLFSUSER_API NTSTATUS ClfsReadNextLogRecord(
  [in, out]      PVOID             pvReadContext,
  [out]          PVOID             *ppvBuffer,
  [out]          PULONG            pcbBuffer,
  [in, out]      PCLFS_RECORD_TYPE peRecordType,
  [in, optional] PCLFS_LSN         plsnUser,
  [out]          PCLFS_LSN         plsnUndoNext,
  [out]          PCLFS_LSN         plsnPrevious,
  [out]          PCLFS_LSN         plsnRecord
);

CLFSUSER_API NTSTATUS ClfsReadPreviousRestartArea(
  [in]  PVOID     pvReadContext,
  [out] PVOID     *ppvRestartBuffer,
  [out] PULONG    pcbRestartBuffer,
  [out] PCLFS_LSN plsnRestart
);

CLFSUSER_API NTSTATUS ClfsReadRestartArea(
  [in, out] PVOID     pvMarshalContext,
  [out]     PVOID     *ppvRestartBuffer,
  [out]     PULONG    pcbRestartBuffer,
  [out]     PCLFS_LSN plsn,
  [out]     PVOID     *ppvReadContext
);


CLFSUSER_API NTSTATUS ClfsRemoveLogContainer(
  [in] PLOG_FILE_OBJECT plfoLog,
  [in] PUNICODE_STRING  puszContainerPath,
  [in] BOOLEAN          fForce
);

CLFSUSER_API NTSTATUS ClfsRemoveLogContainerSet(
  [in] PLOG_FILE_OBJECT plfoLog,
  [in] USHORT           cContainers,
  [in] PUNICODE_STRING  rgwszContainerPath,
  [in] BOOLEAN          fForce
);

CLFSUSER_API NTSTATUS ClfsReserveAndAppendLog(
  [in]            PVOID             pvMarshalContext,
  [in, optional]  PCLFS_WRITE_ENTRY rgWriteEntries,
  [in]            ULONG             cWriteEntries,
  [in, optional]  PCLFS_LSN         plsnUndoNext,
  [in, optional]  PCLFS_LSN         plsnPrevious,
  [in]            ULONG             cReserveRecords,
  [in, out]       PLONGLONG         rgcbReservation,
  [in]            ULONG             fFlags,
  [out, optional] PCLFS_LSN         plsn
);

CLFSUSER_API NTSTATUS ClfsReserveAndAppendLogAligned(
  [in]            PVOID             pvMarshalContext,
  [in, optional]  PCLFS_WRITE_ENTRY rgWriteEntries,
  [in]            ULONG             cWriteEntries,
  [in]            ULONG             cbEntryAlignment,
  [in, optional]  PCLFS_LSN         plsnUndoNext,
  [in, optional]  PCLFS_LSN         plsnPrevious,
  [in]            ULONG             cReserveRecords,
  [in, out]       PLONGLONG         rgcbReservation,
  [in]            ULONG             fFlags,
  [out, optional] PCLFS_LSN         plsn
);

CLFSUSER_API NTSTATUS ClfsScanLogContainers(
  [in, out] PCLFS_SCAN_CONTEXT pcxScan,
  [in]      CLFS_SCAN_MODE     eScanMode
);

CLFSUSER_API NTSTATUS ClfsSetArchiveTail(
  [in] PLOG_FILE_OBJECT plfoLog,
  [in] PCLFS_LSN        plsnArchiveTail
);

CLFSUSER_API NTSTATUS ClfsSetEndOfLog(
  [in] PLOG_FILE_OBJECT plfoLog,
  [in] PCLFS_LSN        plsnEnd
);

CLFSUSER_API NTSTATUS ClfsSetLogFileInformation(
  [in] PLOG_FILE_OBJECT           plfoLog,
  [in] CLFS_LOG_INFORMATION_CLASS eInformationClass,
  [in] PVOID                      pinfoBuffer,
  [in] ULONG                      cbBuffer
);

CLFSUSER_API NTSTATUS ClfsTerminateReadLog(
  [in] PVOID pvCursorContext
);

CLFSUSER_API NTSTATUS ClfsWriteRestartArea(
  [in, out]       PVOID     pvMarshalContext,
  [in]            PVOID     pvRestartBuffer,
  [in]            ULONG     cbRestartBuffer,
  [in, optional]  PCLFS_LSN plsnBase,
  [in]            ULONG     fFlags,
  [out, optional] PULONG    pcbWritten,
  [out, optional] PCLFS_LSN plsnNext
);

typedef struct _CLS_CONTAINER_INFORMATION {
  ULONG                FileAttributes;
  ULONGLONG            CreationTime;
  ULONGLONG            LastAccessTime;
  ULONGLONG            LastWriteTime;
  LONGLONG             ContainerSize;
  ULONG                FileNameActualLength;
  ULONG                FileNameLength;
  WCHAR                FileName[CLFS_MAX_CONTAINER_INFO];
  CLFS_CONTAINER_STATE State;
  CLFS_CONTAINER_ID    PhysicalContainerId;
  CLFS_CONTAINER_ID    LogicalContainerId;
} CLS_CONTAINER_INFORMATION, *PCLS_CONTAINER_INFORMATION, PPCLS_CONTAINER_INFORMATION;

typedef struct _CLS_INFORMATION {
  LONGLONG  TotalAvailable;
  LONGLONG  CurrentAvailable;
  LONGLONG  TotalReservation;
  ULONGLONG BaseFileSize;
  ULONGLONG ContainerSize;
  ULONG     TotalContainers;
  ULONG     FreeContainers;
  ULONG     TotalClients;
  ULONG     Attributes;
  ULONG     FlushThreshold;
  ULONG     SectorSize;
  CLS_LSN   MinArchiveTailLsn;
  CLS_LSN   BaseLsn;
  CLS_LSN   LastFlushedLsn;
  CLS_LSN   LastLsn;
  CLS_LSN   RestartLsn;
  GUID      Identity;
} CLS_INFORMATION, *PCLS_INFORMATION, *PPCLS_INFORMATION;

typedef struct _CLS_IO_STATISTICS {
  CLS_IO_STATISTICS_HEADER hdrIoStats;
  ULONGLONG                cFlush;
  ULONGLONG                cbFlush;
  ULONGLONG                cMetaFlush;
  ULONGLONG                cbMetaFlush;
} CLS_IO_STATISTICS, *PCLS_IO_STATISTICS, PPCLS_IO_STATISTICS;

typedef struct _CLS_IO_STATISTICS_HEADER {
  UCHAR              ubMajorVersion;
  UCHAR              ubMinorVersion;
  CLFS_IOSTATS_CLASS eStatsClass;
  USHORT             cbLength;
  ULONG              coffData;
} CLS_IO_STATISTICS_HEADER, *PCLS_IO_STATISTICS_HEADER, PPCLS_IO_STATISTICS_HEADER;

typedef enum _CLS_LOG_INFORMATION_CLASS {
  ClfsLogBasicInformation,
  ClfsLogBasicInformationPhysical,
  ClfsLogPhysicalNameInformation,
  ClfsLogStreamIdentifierInformation,
  ClfsLogSystemMarkingInformation,
  ClfsLogPhysicalLsnInformation
} CLS_LOG_INFORMATION_CLASS, *PCLS_LOG_INFORMATION_CLASS, PPCLS_LOG_INFORMATION_CLASS;

typedef struct _CLS_LSN {
  ULONGLONG Internal;
} CLS_LSN, *PCLS_LSN, PPCLS_LSN;

typedef struct _CLS_SCAN_CONTEXT {
  CLFS_NODE_ID               cidNode;
  PLOG_FILE_OBJECT           plfoLog;
  ULONG                      cIndex;
  ULONG                      cContainers;
  ULONG                      cContainersReturned;
  CLFS_SCAN_MODE             eScanMode;
  PCLS_CONTAINER_INFORMATION pinfoContainer;
} CLS_SCAN_CONTEXT, *PCLS_SCAN_CONTEXT, PPCLS_SCAN_CONTEXT;

typedef struct _CLS_WRITE_ENTRY {
  PVOID Buffer;
  ULONG ByteLength;
} CLS_WRITE_ENTRY, *PCLS_WRITE_ENTRY, PPCLS_WRITE_ENTRY;

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
} CM_EISA_FUNCTION_INFORMATION, *PCM_EISA_FUNCTION_INFORMATION;

typedef struct _CM_EISA_SLOT_INFORMATION {
  UCHAR  ReturnCode;
  UCHAR  ReturnFlags;
  UCHAR  MajorRevision;
  UCHAR  MinorRevision;
  USHORT Checksum;
  UCHAR  NumberFunctions;
  UCHAR  FunctionInformation;
  ULONG  CompressedId;
} CM_EISA_SLOT_INFORMATION, *PCM_EISA_SLOT_INFORMATION;

typedef struct _CM_FLOPPY_DEVICE_DATA {
  USHORT Version;
  USHORT Revision;
  CHAR   Size[8];
  ULONG  MaxDensity;
  ULONG  MountDensity;
  UCHAR  StepRateHeadUnloadTime;
  UCHAR  HeadLoadTime;
  UCHAR  MotorOffTime;
  UCHAR  SectorLengthCode;
  UCHAR  SectorPerTrack;
  UCHAR  ReadWriteGapLength;
  UCHAR  DataTransferLength;
  UCHAR  FormatGapLength;
  UCHAR  FormatFillCharacter;
  UCHAR  HeadSettleTime;
  UCHAR  MotorSettleTime;
  UCHAR  MaximumTrackValue;
  UCHAR  DataTransferRate;
} CM_FLOPPY_DEVICE_DATA, *PCM_FLOPPY_DEVICE_DATA;

typedef struct _CM_FULL_RESOURCE_DESCRIPTOR {
  INTERFACE_TYPE           InterfaceType;
  ULONG                    BusNumber;
  CM_PARTIAL_RESOURCE_LIST PartialResourceList;
} CM_FULL_RESOURCE_DESCRIPTOR, *PCM_FULL_RESOURCE_DESCRIPTOR;

typedef struct _CM_INT13_DRIVE_PARAMETER {
  USHORT DriveSelect;
  ULONG  MaxCylinders;
  USHORT SectorsPerTrack;
  USHORT MaxHeads;
  USHORT NumberDrives;
} CM_INT13_DRIVE_PARAMETER, *PCM_INT13_DRIVE_PARAMETER;

typedef struct _CM_KEYBOARD_DEVICE_DATA {
  USHORT Version;
  USHORT Revision;
  UCHAR  Type;
  UCHAR  Subtype;
  USHORT KeyboardFlags;
} CM_KEYBOARD_DEVICE_DATA, *PCM_KEYBOARD_DEVICE_DATA;

typedef struct _CM_MCA_POS_DATA {
  USHORT AdapterId;
  UCHAR  PosData1;
  UCHAR  PosData2;
  UCHAR  PosData3;
  UCHAR  PosData4;
} CM_MCA_POS_DATA, *PCM_MCA_POS_DATA;

typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
  UCHAR  Type;
  UCHAR  ShareDisposition;
  USHORT Flags;
  union {
    struct {
      PHYSICAL_ADDRESS Start;
      ULONG            Length;
    } Generic;
    struct {
      PHYSICAL_ADDRESS Start;
      ULONG            Length;
    } Port;
    struct {
#if ...
      USHORT    Level;
      USHORT    Group;
#else
      ULONG     Level;
#endif
      ULONG     Vector;
      KAFFINITY Affinity;
    } Interrupt;
    struct {
      union {
        struct {
          USHORT    Group;
          USHORT    Reserved;
          USHORT    MessageCount;
          ULONG     Vector;
          KAFFINITY Affinity;
        } Raw;
        struct {
#if ...
          USHORT    Level;
          USHORT    Group;
#else
          ULONG     Level;
#endif
          ULONG     Vector;
          KAFFINITY Affinity;
        } Translated;
      } DUMMYUNIONNAME;
    } MessageInterrupt;
    struct {
      PHYSICAL_ADDRESS Start;
      ULONG            Length;
    } Memory;
    struct {
      ULONG Channel;
      ULONG Port;
      ULONG Reserved1;
    } Dma;
    struct {
      ULONG Channel;
      ULONG RequestLine;
      UCHAR TransferWidth;
      UCHAR Reserved1;
      UCHAR Reserved2;
      UCHAR Reserved3;
    } DmaV3;
    struct {
      ULONG Data[3];
    } DevicePrivate;
    struct {
      ULONG Start;
      ULONG Length;
      ULONG Reserved;
    } BusNumber;
    struct {
      ULONG DataSize;
      ULONG Reserved1;
      ULONG Reserved2;
    } DeviceSpecificData;
    struct {
      PHYSICAL_ADDRESS Start;
      ULONG            Length40;
    } Memory40;
    struct {
      PHYSICAL_ADDRESS Start;
      ULONG            Length48;
    } Memory48;
    struct {
      PHYSICAL_ADDRESS Start;
      ULONG            Length64;
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
} CM_PARTIAL_RESOURCE_DESCRIPTOR, *PCM_PARTIAL_RESOURCE_DESCRIPTOR;

typedef struct _CM_PARTIAL_RESOURCE_LIST {
  USHORT                         Version;
  USHORT                         Revision;
  ULONG                          Count;
  CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];
} CM_PARTIAL_RESOURCE_LIST, *PCM_PARTIAL_RESOURCE_LIST;

typedef struct CM_Power_Data_s {
  ULONG              PD_Size;
  DEVICE_POWER_STATE PD_MostRecentPowerState;
  ULONG              PD_Capabilities;
  ULONG              PD_D1Latency;
  ULONG              PD_D2Latency;
  ULONG              PD_D3Latency;
  DEVICE_POWER_STATE PD_PowerStateMapping[POWER_SYSTEM_MAXIMUM];
  SYSTEM_POWER_STATE PD_DeepestSystemWake;
} CM_POWER_DATA, *PCM_POWER_DATA;

typedef struct _CM_RESOURCE_LIST {
  ULONG                       Count;
  CM_FULL_RESOURCE_DESCRIPTOR List[1];
} CM_RESOURCE_LIST, *PCM_RESOURCE_LIST;


typedef struct _CM_SCSI_DEVICE_DATA {
  USHORT Version;
  USHORT Revision;
  UCHAR  HostIdentifier;
} CM_SCSI_DEVICE_DATA, *PCM_SCSI_DEVICE_DATA;

typedef struct _CM_SERIAL_DEVICE_DATA {
  USHORT Version;
  USHORT Revision;
  ULONG  BaudClock;
} CM_SERIAL_DEVICE_DATA, *PCM_SERIAL_DEVICE_DATA;

NTSTATUS CmCallbackGetKeyObjectID(
  [in]            PLARGE_INTEGER   Cookie,
  [in]            PVOID            Object,
  [out, optional] PULONG_PTR       ObjectID,
  [out, optional] PCUNICODE_STRING *ObjectName
);

NTSTATUS CmCallbackGetKeyObjectIDEx(
  [in]            PLARGE_INTEGER   Cookie,
  [in]            PVOID            Object,
  [out, optional] PULONG_PTR       ObjectID,
  [out, optional] PCUNICODE_STRING *ObjectName,
  [in]            ULONG            Flags
);

void CmCallbackReleaseKeyObjectIDEx(
  PCUNICODE_STRING ObjectName
);

PVOID CmGetBoundTransaction(
  [in] PLARGE_INTEGER Cookie,
  [in] PVOID          Object
);

void CmGetCallbackVersion(
  [out, optional] PULONG Major,
  [out, optional] PULONG Minor
);

NTSTATUS CmRegisterCallback(
  [in]           PEX_CALLBACK_FUNCTION Function,
  [in, optional] PVOID                 Context,
  [out]          PLARGE_INTEGER        Cookie
);

NTSTATUS CmRegisterCallbackEx(
  [in]           PEX_CALLBACK_FUNCTION Function,
  [in]           PCUNICODE_STRING      Altitude,
  [in]           PVOID                 Driver,
  [in, optional] PVOID                 Context,
  [out]          PLARGE_INTEGER        Cookie,
                 PVOID                 Reserved
);

NTSTATUS CmSetCallbackObjectContext(
  [in, out]       PVOID          Object,
  [in]            PLARGE_INTEGER Cookie,
  [in]            PVOID          NewContext,
  [out, optional] PVOID          *OldContext
);

NTSTATUS CmUnRegisterCallback(
  [in] LARGE_INTEGER Cookie
);

typedef struct _COUNTED_REASON_CONTEXT {
  ULONG Version;
  ULONG Flags;
  union {
    struct {
      UNICODE_STRING  ResourceFileName;
      USHORT          ResourceReasonId;
      ULONG           StringCount;
      PUNICODE_STRING ReasonStrings;
    } DUMMYSTRUCTNAME;
    UNICODE_STRING SimpleString;
  } DUMMYUNIONNAME;
} COUNTED_REASON_CONTEXT, *PCOUNTED_REASON_CONTEXT;

typedef struct _D3COLD_AUX_POWER_AND_TIMING_INTERFACE {
  USHORT                          Size;
  USHORT                          Version;
  PVOID                           Context;
  PINTERFACE_REFERENCE            InterfaceReference;
  PINTERFACE_DEREFERENCE          InterfaceDereference;
  PD3COLD_REQUEST_CORE_POWER_RAIL RequestCorePowerRail;
  PD3COLD_REQUEST_AUX_POWER       RequestAuxPower;
  PD3COLD_REQUEST_PERST_DELAY     RequestPerstDelay;
} D3COLD_AUX_POWER_AND_TIMING_INTERFACE, *PD3COLD_AUX_POWER_AND_TIMING_INTERFACE;

typedef enum _D3COLD_LAST_TRANSITION_STATUS {
  LastDStateTransitionStatusUnknown,
  LastDStateTransitionD3hot,
  LastDStateTransitionD3cold
} D3COLD_LAST_TRANSITION_STATUS, *PD3COLD_LAST_TRANSITION_STATUS;

typedef struct _D3COLD_SUPPORT_INTERFACE {
  USHORT                             Size;
  USHORT                             Version;
  PVOID                              Context;
  PINTERFACE_REFERENCE               InterfaceReference;
  PINTERFACE_DEREFERENCE             InterfaceDereference;
  PSET_D3COLD_SUPPORT                SetD3ColdSupport;
  PGET_IDLE_WAKE_INFO                GetIdleWakeInfo;
  PGET_D3COLD_CAPABILITY             GetD3ColdCapability;
  PGET_D3COLD_CAPABILITY             GetBusDriverD3ColdSupport;
  PGET_D3COLD_LAST_TRANSITION_STATUS GetLastTransitionStatus;
} D3COLD_SUPPORT_INTERFACE, *PD3COLD_SUPPORT_INTERFACE;

typedef struct _DEVICE_BUS_SPECIFIC_RESET_INFO {
  GUID                           BusTypeGuid;
  DEVICE_BUS_SPECIFIC_RESET_TYPE ResetTypeSupported;
} DEVICE_BUS_SPECIFIC_RESET_INFO, *PDEVICE_BUS_SPECIFIC_RESET_INFO;

typedef union _DEVICE_BUS_SPECIFIC_RESET_TYPE {
  struct {
    ULONGLONG FunctionLevelDeviceReset : 1;
    ULONGLONG PlatformLevelDeviceReset : 1;
    ULONGLONG SecondaryBusReset : 1;
    ULONGLONG Reserved : 61;
  } Pci;
  struct {
    ULONGLONG FunctionLevelDeviceReset : 1;
    ULONGLONG PlatformLevelDeviceReset : 1;
    ULONGLONG Reserved : 62;
  } Acpi;
  ULONGLONG AsULONGLONG;
} DEVICE_BUS_SPECIFIC_RESET_TYPE, *PDEVICE_BUS_SPECIFIC_RESET_TYPE;

typedef struct _DEVICE_CAPABILITIES {
  USHORT             Size;
  USHORT             Version;
  ULONG              DeviceD1 : 1;
  ULONG              DeviceD2 : 1;
  ULONG              LockSupported : 1;
  ULONG              EjectSupported : 1;
  ULONG              Removable : 1;
  ULONG              DockDevice : 1;
  ULONG              UniqueID : 1;
  ULONG              SilentInstall : 1;
  ULONG              RawDeviceOK : 1;
  ULONG              SurpriseRemovalOK : 1;
  ULONG              WakeFromD0 : 1;
  ULONG              WakeFromD1 : 1;
  ULONG              WakeFromD2 : 1;
  ULONG              WakeFromD3 : 1;
  ULONG              HardwareDisabled : 1;
  ULONG              NonDynamic : 1;
  ULONG              WarmEjectSupported : 1;
  ULONG              NoDisplayInUI : 1;
  ULONG              Reserved1 : 1;
  ULONG              WakeFromInterrupt : 1;
  ULONG              SecureDevice : 1;
  ULONG              ChildOfVgaEnabledBridge : 1;
  ULONG              DecodeIoOnBoot : 1;
  ULONG              Reserved : 9;
  ULONG              Address;
  ULONG              UINumber;
  DEVICE_POWER_STATE DeviceState[POWER_SYSTEM_MAXIMUM];
  SYSTEM_POWER_STATE SystemWake;
  DEVICE_POWER_STATE DeviceWake;
  ULONG              D1Latency;
  ULONG              D2Latency;
  ULONG              D3Latency;
} DEVICE_CAPABILITIES, *PDEVICE_CAPABILITIES;

typedef struct _DEVICE_DESCRIPTION {
  ULONG            Version;
  BOOLEAN          Master;
  BOOLEAN          ScatterGather;
  BOOLEAN          DemandMode;
  BOOLEAN          AutoInitialize;
  BOOLEAN          Dma32BitAddresses;
  BOOLEAN          IgnoreCount;
  BOOLEAN          Reserved1;
  BOOLEAN          Dma64BitAddresses;
  ULONG            BusNumber;
  ULONG            DmaChannel;
  INTERFACE_TYPE   InterfaceType;
  DMA_WIDTH        DmaWidth;
  DMA_SPEED        DmaSpeed;
  ULONG            MaximumLength;
  ULONG            DmaPort;
  ULONG            DmaAddressWidth;
  ULONG            DmaControllerInstance;
  ULONG            DmaRequestLine;
  PHYSICAL_ADDRESS DeviceAddress;
} DEVICE_DESCRIPTION, *PDEVICE_DESCRIPTION;

typedef enum _DEVICE_DIRECTORY_TYPE {
  DeviceDirectoryData
} DEVICE_DIRECTORY_TYPE, *PDEVICE_DIRECTORY_TYPE;

typedef struct _DEVICE_FAULT_CONFIGURATION {
  PIOMMU_DEVICE_FAULT_HANDLER FaultHandler;
  PVOID                       FaultContext;
} DEVICE_FAULT_CONFIGURATION, *PDEVICE_FAULT_CONFIGURATION;

typedef enum _DEVICE_INSTALL_STATE {
  InstallStateInstalled,
  InstallStateNeedsReinstall,
  InstallStateFailedInstall,
  InstallStateFinishInstall
} DEVICE_INSTALL_STATE, *PDEVICE_INSTALL_STATE;

typedef struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION {
  USHORT          Version;
  USHORT          Size;
  GUID            Event;
  GUID            InterfaceClassGuid;
  PUNICODE_STRING SymbolicLinkName;
} DEVICE_INTERFACE_CHANGE_NOTIFICATION, *PDEVICE_INTERFACE_CHANGE_NOTIFICATION;

typedef struct _DEVICE_OBJECT {
  CSHORT                   Type;
  USHORT                   Size;
  LONG                     ReferenceCount;
  struct _DRIVER_OBJECT    *DriverObject;
  struct _DEVICE_OBJECT    *NextDevice;
  struct _DEVICE_OBJECT    *AttachedDevice;
  struct _IRP              *CurrentIrp;
  PIO_TIMER                Timer;
  ULONG                    Flags;
  ULONG                    Characteristics;
  __volatile PVPB          Vpb;
  PVOID                    DeviceExtension;
  DEVICE_TYPE              DeviceType;
  CCHAR                    StackSize;
  union {
    LIST_ENTRY         ListEntry;
    WAIT_CONTEXT_BLOCK Wcb;
  } Queue;
  ULONG                    AlignmentRequirement;
  KDEVICE_QUEUE            DeviceQueue;
  KDPC                     Dpc;
  ULONG                    ActiveThreadCount;
  PSECURITY_DESCRIPTOR     SecurityDescriptor;
  KEVENT                   DeviceLock;
  USHORT                   SectorSize;
  USHORT                   Spare1;
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension;
  PVOID                    Reserved;
} DEVICE_OBJECT, *PDEVICE_OBJECT;

typedef enum _DEVICE_POWER_STATE {
  PowerDeviceUnspecified,
  PowerDeviceD0,
  PowerDeviceD1,
  PowerDeviceD2,
  PowerDeviceD3,
  PowerDeviceMaximum
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

typedef enum {
  DevicePropertyDeviceDescription,
  DevicePropertyHardwareID,
  DevicePropertyCompatibleIDs,
  DevicePropertyBootConfiguration,
  DevicePropertyBootConfigurationTranslated,
  DevicePropertyClassName,
  DevicePropertyClassGuid,
  DevicePropertyDriverKeyName,
  DevicePropertyManufacturer,
  DevicePropertyFriendlyName,
  DevicePropertyLocationInformation,
  DevicePropertyPhysicalDeviceObjectName,
  DevicePropertyBusTypeGuid,
  DevicePropertyLegacyBusType,
  DevicePropertyBusNumber,
  DevicePropertyEnumeratorName,
  DevicePropertyAddress,
  DevicePropertyUINumber,
  DevicePropertyInstallState,
  DevicePropertyRemovalPolicy,
  DevicePropertyResourceRequirements,
  DevicePropertyAllocatedResources,
  DevicePropertyContainerID
} DEVICE_REGISTRY_PROPERTY;


typedef enum _DEVICE_REMOVAL_POLICY {
  RemovalPolicyExpectNoRemoval,
  RemovalPolicyExpectOrderlyRemoval,
  RemovalPolicyExpectSurpriseRemoval
} DEVICE_REMOVAL_POLICY, *PDEVICE_REMOVAL_POLICY;

typedef struct _DEVICE_RESET_INTERFACE_STANDARD {
  USHORT                                   Size;
  USHORT                                   Version;
  PVOID                                    Context;
  PINTERFACE_REFERENCE                     InterfaceReference;
  PINTERFACE_DEREFERENCE                   InterfaceDereference;
  PDEVICE_RESET_HANDLER                    DeviceReset;
  ULONG                                    SupportedResetTypes;
  PVOID                                    Reserved;
  PDEVICE_QUERY_BUS_SPECIFIC_RESET_HANDLER QueryBusSpecificResetInfo;
  PDEVICE_BUS_SPECIFIC_RESET_HANDLER       DeviceBusSpecificReset;
  PGET_DEVICE_RESET_STATUS                 GetDeviceResetStatus;
} DEVICE_RESET_INTERFACE_STANDARD, *PDEVICE_RESET_INTERFACE_STANDARD;

typedef union _DEVICE_RESET_STATUS_FLAGS {
  struct {
    ULONGLONG KeepStackReset : 1;
    ULONGLONG RecoveringFromBusError : 1;
    ULONGLONG Reserved : 62;
  } u;
  ULONGLONG AsUlonglong;
} DEVICE_RESET_STATUS_FLAGS, *PDEVICE_RESET_STATUS_FLAGS;

typedef enum _DEVICE_RESET_TYPE {
  FunctionLevelDeviceReset,
  PlatformLevelDeviceReset
} DEVICE_RESET_TYPE;

typedef enum {
  DeviceTextDescription,
  DeviceTextLocationInformation
} DEVICE_TEXT_TYPE, *PDEVICE_TEXT_TYPE;

typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE {
  DeviceUsageTypeUndefined,
  DeviceUsageTypePaging,
  DeviceUsageTypeHibernation,
  DeviceUsageTypeDumpFile,
  DeviceUsageTypeBoot,
  DeviceUsageTypePostDisplay,
  DeviceUsageTypeGuestAssigned
} DEVICE_USAGE_NOTIFICATION_TYPE;

typedef enum _DEVICE_WAKE_DEPTH {
  DeviceWakeDepthNotWakeable,
  DeviceWakeDepthD0,
  DeviceWakeDepthD1,
  DeviceWakeDepthD2,
  DeviceWakeDepthD3hot,
  DeviceWakeDepthD3cold,
  DeviceWakeDepthMaximum
} DEVICE_WAKE_DEPTH, *PDEVICE_WAKE_DEPTH;

typedef struct _DMA_ADAPTER_INFO {
  ULONG Version;
  union {
    DMA_ADAPTER_INFO_V1        V1;
    DMA_ADAPTER_INFO_CRASHDUMP Crashdump;
  };
} DMA_ADAPTER_INFO, *PDMA_ADAPTER_INFO;

typedef struct _DMA_ADAPTER_INFO_CRASHDUMP {
  DEVICE_DESCRIPTION DeviceDescription;
  SIZE_T             DeviceIdSize;
  PVOID              DeviceId;
} DMA_ADAPTER_INFO_CRASHDUMP, *PDMA_ADAPTER_INFO_CRASHDUMP;

typedef struct _DMA_ADAPTER_INFO_V1 {
  ULONG ReadDmaCounterAvailable;
  ULONG ScatterGatherLimit;
  ULONG DmaAddressWidth;
  ULONG Flags;
  ULONG MinimumTransferUnit;
} DMA_ADAPTER_INFO_V1, *PDMA_ADAPTER_INFO_V1;

typedef enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE {
  CommonBufferConfigTypeLogicalAddressLimits,
  CommonBufferConfigTypeSubSection,
  CommonBufferConfigTypeHardwareAccessPermissions,
  CommonBufferConfigTypeMax
} DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE, *PDMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE;

typedef enum {
  DmaComplete,
  DmaAborted,
  DmaError,
  DmaCancelled
} DMA_COMPLETION_STATUS;

typedef struct _DMA_IOMMU_INTERFACE {
  ULONG                             Version;
  PIOMMU_DOMAIN_CREATE              CreateDomain;
  PIOMMU_DOMAIN_DELETE              DeleteDomain;
  PIOMMU_DOMAIN_ATTACH_DEVICE       AttachDevice;
  PIOMMU_DOMAIN_DETACH_DEVICE       DetachDevice;
  PIOMMU_FLUSH_DOMAIN               FlushDomain;
  PIOMMU_FLUSH_DOMAIN_VA_LIST       FlushDomainByVaList;
  PIOMMU_QUERY_INPUT_MAPPINGS       QueryInputMappings;
  PIOMMU_MAP_LOGICAL_RANGE          MapLogicalRange;
  PIOMMU_UNMAP_LOGICAL_RANGE        UnmapLogicalRange;
  PIOMMU_MAP_IDENTITY_RANGE         MapIdentityRange;
  PIOMMU_UNMAP_IDENTITY_RANGE       UnmapIdentityRange;
  PIOMMU_SET_DEVICE_FAULT_REPORTING SetDeviceFaultReporting;
  PIOMMU_DOMAIN_CONFIGURE           ConfigureDomain;
} DMA_IOMMU_INTERFACE, *PDMA_IOMMU_INTERFACE;

typedef struct _DMA_IOMMU_INTERFACE_EX {
  SIZE_T Size;
  ULONG  Version;
  union {
    DMA_IOMMU_INTERFACE_V1 V1;
    DMA_IOMMU_INTERFACE_V2 V2;
    DMA_IOMMU_INTERFACE_V3 V3;
  };
} DMA_IOMMU_INTERFACE_EX, *PDMA_IOMMU_INTERFACE_EX;

typedef struct _DMA_IOMMU_INTERFACE_V1 {
  PIOMMU_DOMAIN_CREATE              CreateDomain;
  PIOMMU_DOMAIN_DELETE              DeleteDomain;
  PIOMMU_DOMAIN_ATTACH_DEVICE       AttachDevice;
  PIOMMU_DOMAIN_DETACH_DEVICE       DetachDevice;
  PIOMMU_FLUSH_DOMAIN               FlushDomain;
  PIOMMU_FLUSH_DOMAIN_VA_LIST       FlushDomainByVaList;
  PIOMMU_QUERY_INPUT_MAPPINGS       QueryInputMappings;
  PIOMMU_MAP_LOGICAL_RANGE          MapLogicalRange;
  PIOMMU_UNMAP_LOGICAL_RANGE        UnmapLogicalRange;
  PIOMMU_MAP_IDENTITY_RANGE         MapIdentityRange;
  PIOMMU_UNMAP_IDENTITY_RANGE       UnmapIdentityRange;
  PIOMMU_SET_DEVICE_FAULT_REPORTING SetDeviceFaultReporting;
  PIOMMU_DOMAIN_CONFIGURE           ConfigureDomain;
} DMA_IOMMU_INTERFACE_V1, *PDMA_IOMMU_INTERFACE_V1;

typedef struct _DMA_IOMMU_INTERFACE_V2 {
  PIOMMU_DOMAIN_CREATE_EX                           CreateDomainEx;
  PIOMMU_DOMAIN_DELETE                              DeleteDomain;
  PIOMMU_DOMAIN_ATTACH_DEVICE_EX                    AttachDeviceEx;
  PIOMMU_DOMAIN_DETACH_DEVICE_EX                    DetachDeviceEx;
  PIOMMU_FLUSH_DOMAIN                               FlushDomain;
  PIOMMU_FLUSH_DOMAIN_VA_LIST                       FlushDomainByVaList;
  PIOMMU_QUERY_INPUT_MAPPINGS                       QueryInputMappings;
  PIOMMU_MAP_LOGICAL_RANGE_EX                       MapLogicalRangeEx;
  PIOMMU_UNMAP_LOGICAL_RANGE                        UnmapLogicalRange;
  PIOMMU_MAP_IDENTITY_RANGE_EX                      MapIdentityRangeEx;
  PIOMMU_UNMAP_IDENTITY_RANGE_EX                    UnmapIdentityRangeEx;
  PIOMMU_SET_DEVICE_FAULT_REPORTING_EX              SetDeviceFaultReportingEx;
  PIOMMU_DOMAIN_CONFIGURE                           ConfigureDomain;
  PIOMMU_DEVICE_QUERY_DOMAIN_TYPES                  QueryAvailableDomainTypes;
  PIOMMU_REGISTER_INTERFACE_STATE_CHANGE_CALLBACK   RegisterInterfaceStateChangeCallback;
  PIOMMU_UNREGISTER_INTERFACE_STATE_CHANGE_CALLBACK UnregisterInterfaceStateChangeCallback;
  PIOMMU_RESERVE_LOGICAL_ADDRESS_RANGE              ReserveLogicalAddressRange;
  PIOMMU_FREE_RESERVED_LOGICAL_ADDRESS_RANGE        FreeReservedLogicalAddressRange;
  PIOMMU_MAP_RESERVED_LOGICAL_RANGE                 MapReservedLogicalRange;
  PIOMMU_UNMAP_RESERVED_LOGICAL_RANGE               UnmapReservedLogicalRange;
  PIOMMU_DEVICE_CREATE                              CreateDevice;
  PIOMMU_DEVICE_DELETE                              DeleteDevice;
} DMA_IOMMU_INTERFACE_V2, *PDMA_IOMMU_INTERFACE_V2;

typedef struct _DMA_TRANSFER_INFO {
  ULONG Version;
  union {
    DMA_TRANSFER_INFO_V1 V1;
    DMA_TRANSFER_INFO_V2 V2;
  };
} DMA_TRANSFER_INFO, *PDMA_TRANSFER_INFO;

typedef struct _DMA_TRANSFER_INFO_V1 {
  ULONG MapRegisterCount;
  ULONG ScatterGatherElementCount;
  ULONG ScatterGatherListSize;
} DMA_TRANSFER_INFO_V1, *PDMA_TRANSFER_INFO_V1;

typedef struct _DMA_TRANSFER_INFO_V2 {
  ULONG MapRegisterCount;
  ULONG ScatterGatherElementCount;
  ULONG ScatterGatherListSize;
  ULONG LogicalPageCount;
} DMA_TRANSFER_INFO_V2, *PDMA_TRANSFER_INFO_V2;

typedef struct _DOMAIN_CONFIGURATION {
  DOMAIN_CONFIGURATION_ARCH Type;
  union {
    DOMAIN_CONFIGURATION_ARM64 Arm64;
    DOMAIN_CONFIGURATION_X64   X64;
  };
} DOMAIN_CONFIGURATION, *PDOMAIN_CONFIGURATION;

typedef enum _DOMAIN_CONFIGURATION_ARCH {
  DomainConfigurationArm64,
  DomainConfigurationX64,
  DomainConfigurationInvalid
} DOMAIN_CONFIGURATION_ARCH, *PDOMAIN_CONFIGURATION_ARCH;

typedef struct _DOMAIN_CONFIGURATION_ARM64 {
  PHYSICAL_ADDRESS Ttbr0;
  PHYSICAL_ADDRESS Ttbr1;
  ULONG            Mair0;
  ULONG            Mair1;
  UCHAR            InputSize0;
  UCHAR            InputSize1;
  BOOLEAN          CoherentTableWalks;
  BOOLEAN          TranslationEnabled;
} DOMAIN_CONFIGURATION_ARM64, *PDOMAIN_CONFIGURATION_ARM64;

typedef struct _DOMAIN_CONFIGURATION_X64 {
  PHYSICAL_ADDRESS FirstLevelPageTableRoot;
  BOOLEAN          TranslationEnabled;
} DOMAIN_CONFIGURATION_X64, *PDOMAIN_CONFIGURATION_X64;

typedef enum _DRIVER_REGKEY_TYPE {
  DriverRegKeyParameters,
  DriverRegKeyPersistentState,
  DriverRegKeySharedPersistentState
} DRIVER_REGKEY_TYPE, *PDRIVER_REGKEY_TYPE;

typedef struct _ENLISTMENT_BASIC_INFORMATION {
  GUID EnlistmentId;
  GUID TransactionId;
  GUID ResourceManagerId;
} ENLISTMENT_BASIC_INFORMATION, *PENLISTMENT_BASIC_INFORMATION;


typedef enum _ENLISTMENT_INFORMATION_CLASS {
  EnlistmentBasicInformation,
  EnlistmentRecoveryInformation,
  EnlistmentCrmInformation
} ENLISTMENT_INFORMATION_CLASS;

NTSTATUS EtwSetInformation(
  [in]           REGHANDLE        RegHandle,
  [in]           EVENT_INFO_CLASS InformationClass,
  [in, optional] PVOID            EventInformation,
  [in]           ULONG            InformationLength
);

typedef _Enum_is_bitflag_ enum _EX_POOL_PRIORITY {
    LowPoolPriority,
    LowPoolPrioritySpecialPoolOverrun = 8,
    LowPoolPrioritySpecialPoolUnderrun = 9,
    NormalPoolPriority = 16,
    NormalPoolPrioritySpecialPoolOverrun = 24,
    NormalPoolPrioritySpecialPoolUnderrun = 25,
    HighPoolPriority = 32,
    HighPoolPrioritySpecialPoolOverrun = 40,
    HighPoolPrioritySpecialPoolUnderrun = 41
} EX_POOL_PRIORITY;

void ExAcquireFastMutex(
  PFAST_MUTEX FastMutex
);

void ExAcquireFastMutexUnsafe(
  PFAST_MUTEX FastMutex
);

void ExAcquirePushLockExclusive(
   Lock
);

void ExAcquirePushLockShared(
   Lock
);

BOOLEAN ExAcquireResourceExclusiveLite(
  [in, out] PERESOURCE Resource,
  [in]      BOOLEAN    Wait
);

BOOLEAN ExAcquireResourceSharedLite(
  [in, out] PERESOURCE Resource,
  [in]      BOOLEAN    Wait
);

BOOLEAN ExAcquireRundownProtection(
  [in, out] PEX_RUNDOWN_REF RunRef
);

BOOLEAN ExAcquireRundownProtection(
  [in, out] PEX_RUNDOWN_REF RunRef
);

BOOLEAN ExAcquireRundownProtection(
  [in, out] PEX_RUNDOWN_REF RunRef
);

BOOLEAN ExAcquireRundownProtectionEx(
  [in, out] PEX_RUNDOWN_REF RunRef,
  [in]      ULONG           Count
);

BOOLEAN ExAcquireSharedStarveExclusive(
  [in, out] PERESOURCE Resource,
  [in]      BOOLEAN    Wait
);

BOOLEAN ExAcquireSharedWaitForExclusive(
  [in, out] PERESOURCE Resource,
  [in]      BOOLEAN    Wait
);

KIRQL ExAcquireSpinLockExclusive(
  PEX_SPIN_LOCK SpinLock
);

void ExAcquireSpinLockExclusiveAtDpcLevel(
  [in, out] PEX_SPIN_LOCK SpinLock
);

KIRQL ExAcquireSpinLockShared(
  [in, out] PEX_SPIN_LOCK SpinLock
);

void ExAcquireSpinLockSharedAtDpcLevel(
  PEX_SPIN_LOCK SpinLock
);

PEX_RUNDOWN_REF_CACHE_AWARE ExAllocateCacheAwareRundownProtection(
  [in] __drv_strictTypeMatch(__drv_typeExpr)POOL_TYPE PoolType,
  [in] ULONG                                          PoolTag
);

PVOID ExAllocateFromLookasideListEx(
  [in, out] PLOOKASIDE_LIST_EX Lookaside
);

PVOID ExAllocateFromNPagedLookasideList(
  [in, out] PNPAGED_LOOKASIDE_LIST Lookaside
);

PVOID ExAllocateFromPagedLookasideList(
  [in, out] PPAGED_LOOKASIDE_LIST Lookaside
);

PVOID ExAllocateFromPagedLookasideList(
  [in, out] PPAGED_LOOKASIDE_LIST Lookaside
);

DECLSPEC_RESTRICT PVOID ExAllocatePool2(
  POOL_FLAGS Flags,
  SIZE_T     NumberOfBytes,
  ULONG      Tag
);

DECLSPEC_RESTRICT PVOID ExAllocatePool3(
  POOL_FLAGS                Flags,
  SIZE_T                    NumberOfBytes,
  ULONG                     Tag,
  PCPOOL_EXTENDED_PARAMETER ExtendedParameters,
  ULONG                     ExtendedParametersCount
);

PVOID ExAllocatePoolPriorityUninitialized(
  __drv_strictTypeMatch(__drv_typeExpr)POOL_TYPE PoolType,
  SIZE_T                                         NumberOfBytes,
  ULONG                                          Tag,
  EX_POOL_PRIORITY                               Priority
);

PVOID ExAllocatePoolPriorityZero(
  __drv_strictTypeMatch(__drv_typeExpr)POOL_TYPE PoolType,
  SIZE_T                                         NumberOfBytes,
  ULONG                                          Tag,
  EX_POOL_PRIORITY                               Priority
);

PVOID ExAllocatePoolQuotaUninitialized(
  __drv_strictTypeMatch(__drv_typeExpr)POOL_TYPE PoolType,
  SIZE_T                                         NumberOfBytes,
  ULONG                                          Tag
);

PVOID ExAllocatePoolQuotaZero(
  __drv_strictTypeMatch(__drv_typeExpr)POOL_TYPE PoolType,
  SIZE_T                                         NumberOfBytes,
  ULONG                                          Tag
);

PVOID ExAllocatePoolUninitialized(
  __drv_strictTypeMatch(__drv_typeExpr)POOL_TYPE PoolType,
  SIZE_T                                         NumberOfBytes,
  ULONG                                          Tag
);

PVOID ExAllocatePoolWithQuota(
  [in] __drv_strictTypeMatch(__drv_typeExpr)POOL_TYPE PoolType,
  [in] SIZE_T                                         NumberOfBytes
);

PVOID ExAllocatePoolWithQuotaTag(
  [in] __drv_strictTypeMatch(__drv_typeExpr)POOL_TYPE PoolType,
  [in] SIZE_T                                         NumberOfBytes,
  [in] ULONG                                          Tag
);

PVOID ExAllocatePoolWithTag(
  [in] __drv_strictTypeMatch(__drv_typeExpr)POOL_TYPE PoolType,
  [in] SIZE_T                                         NumberOfBytes,
  [in] ULONG                                          Tag
);

PVOID ExAllocatePoolWithTagPriority(
  [in] __drv_strictTypeMatch(__drv_typeCond)POOL_TYPE        PoolType,
  [in] SIZE_T                                                NumberOfBytes,
  [in] ULONG                                                 Tag,
  [in] __drv_strictTypeMatch(__drv_typeExpr)EX_POOL_PRIORITY Priority
);

PVOID ExAllocatePoolZero(
  __drv_strictTypeMatch(__drv_typeExpr)POOL_TYPE PoolType,
  SIZE_T                                         NumberOfBytes,
  ULONG                                          Tag
);

PEX_TIMER ExAllocateTimer(
  [in, optional] PEXT_CALLBACK Callback,
  [in, optional] PVOID         CallbackContext,
  [in]           ULONG         Attributes
);

BOOLEAN ExCancelTimer(
  [in, out]      PEX_TIMER              Timer,
  [in, optional] PEXT_CANCEL_PARAMETERS Parameters
);

void ExConvertExclusiveToSharedLite(
  [in, out] PERESOURCE Resource
);

NTSTATUS ExCreateCallback(
  [out] PCALLBACK_OBJECT   *CallbackObject,
  [in]  POBJECT_ATTRIBUTES ObjectAttributes,
  [in]  BOOLEAN            Create,
  [in]  BOOLEAN            AllowMultipleCallbacks
);

NTSTATUS ExCreatePool(
  ULONG                       Flags,
  ULONG_PTR                   Tag,
  POOL_CREATE_EXTENDED_PARAMS *Params,
  HANDLE                      *PoolHandle
);

void ExDeleteLookasideListEx(
  [in, out] PLOOKASIDE_LIST_EX Lookaside
);

void ExDeleteNPagedLookasideList(
  [in, out] PNPAGED_LOOKASIDE_LIST Lookaside
);

void ExDeletePagedLookasideList(
  [in, out] PPAGED_LOOKASIDE_LIST Lookaside
);

NTSTATUS ExDeleteResourceLite(
  [in, out] PERESOURCE Resource
);

BOOLEAN ExDeleteTimer(
  [in] PEX_TIMER              Timer,
  [in] BOOLEAN                Cancel,
  [in] BOOLEAN                Wait,
  [in] PEXT_DELETE_PARAMETERS Parameters
);

void ExDestroyPool(
  HANDLE PoolHandle
);

PVOID ExEnterCriticalRegionAndAcquireResourceExclusive(
  PERESOURCE Resource
);

void ExFlushLookasideListEx(
  [in, out] PLOOKASIDE_LIST_EX Lookaside
);

void ExFreeCacheAwareRundownProtection(
  [in, out] PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
);

void ExFreePool(
  [in] PVOID P
);


void ExFreePool2(
  PVOID                     P,
  ULONG                     Tag,
  PCPOOL_EXTENDED_PARAMETER ExtendedParameters,
  ULONG                     ExtendedParametersCount
);

void ExFreePoolWithTag(
  [in] PVOID P,
  [in] ULONG Tag
);

void ExFreeToLookasideListEx(
  [in, out] PLOOKASIDE_LIST_EX Lookaside,
  [in]      PVOID              Entry
);

void ExFreeToNPagedLookasideList(
  [in, out] PNPAGED_LOOKASIDE_LIST Lookaside,
  [in]      PVOID                  Entry
);

void ExFreeToPagedLookasideList(
  [in, out] PPAGED_LOOKASIDE_LIST Lookaside,
  [in]      PVOID                 Entry
);

ULONG ExGetExclusiveWaiterCount(
  [in] PERESOURCE Resource
);

NTSTATUS ExGetFirmwareEnvironmentVariable(
  [in]            PUNICODE_STRING VariableName,
  [in]            LPGUID          VendorGuid,
  [out, optional] PVOID           Value,
  [in, out]       PULONG          ValueLength,
  [out, optional] PULONG          Attributes
);

FIRMWARE_TYPE ExGetFirmwareType();

KPROCESSOR_MODE ExGetPreviousMode();

ULONG ExGetSharedWaiterCount(
  [in] PERESOURCE Resource
);

void ExInitializeDeleteTimerParameters(
  PEXT_DELETE_PARAMETERS Parameters
);

NTSTATUS ExInitializeDeviceAts(
  _DEVICE_OBJECT *PhysicalDeviceObject,
  ULONG          Flags
);

void ExInitializeDriverRuntime(
  ULONG RuntimeFlags
);

void ExInitializeFastMutex(
  [out] PFAST_MUTEX FastMutex
);

NTSTATUS ExInitializeLookasideListEx(
  [out]          PLOOKASIDE_LIST_EX    Lookaside,
  [in, optional] PALLOCATE_FUNCTION_EX Allocate,
  [in, optional] PFREE_FUNCTION_EX     Free,
  [in]           POOL_TYPE             PoolType,
  [in]           ULONG                 Flags,
  [in]           SIZE_T                Size,
  [in]           ULONG                 Tag,
  [in]           USHORT                Depth
);

void ExInitializeNPagedLookasideList(
  [out]          PNPAGED_LOOKASIDE_LIST Lookaside,
  [in, optional] PALLOCATE_FUNCTION     Allocate,
  [in, optional] PFREE_FUNCTION         Free,
  [in]           ULONG                  Flags,
  [in]           SIZE_T                 Size,
  [in]           ULONG                  Tag,
  [in]           USHORT                 Depth
);

void ExInitializePagedLookasideList(
  [out]          PPAGED_LOOKASIDE_LIST Lookaside,
  [in, optional] PALLOCATE_FUNCTION    Allocate,
  [in, optional] PFREE_FUNCTION        Free,
  [in]           ULONG                 Flags,
  [in]           SIZE_T                Size,
  [in]           ULONG                 Tag,
  [in]           USHORT                Depth
);

void ExInitializePushLock(
  [Out] PEX_PUSH_LOCK PushLock
);

NTSTATUS ExInitializeResourceLite(
  [out] PERESOURCE Resource
);

void ExInitializeRundownProtection(
  [out] PEX_RUNDOWN_REF RunRef
);

void ExInitializeRundownProtectionCacheAware(
  [out] PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware,
  [in]  SIZE_T                      RunRefSize
);

void ExInitializeSetTimerParameters(
  [out] PEXT_SET_PARAMETERS Parameters
);

LARGE_INTEGER ExInterlockedAddLargeInteger(
  [in, out] PLARGE_INTEGER Addend,
  [in]      LARGE_INTEGER  Increment,
  [in, out] PKSPIN_LOCK    Lock
);

void ExInterlockedAddLargeStatistic(
  [in]  Addend,
  [in]  Increment
);

ULONG ExInterlockedAddUlong(
  [in, out] PULONG      Addend,
  [in]      ULONG       Increment,
  [in, out] PKSPIN_LOCK Lock
);

void ExInterlockedCompareExchange64(
  [in, out]  Destination,
  [in]       Exchange,
             Comperand,
  [in]       Lock
);

NTKERNELAPI
PSLIST_ENTRY
FASTCALL
ExInterlockedFlushSList (
    _Inout_ PSLIST_HEADER ListHead
    );

PLIST_ENTRY ExInterlockedInsertHeadList(
  [in, out] PLIST_ENTRY                  ListHead,
  [in, out] __drv_aliasesMem PLIST_ENTRY ListEntry,
  [in, out] PKSPIN_LOCK                  Lock
);

PLIST_ENTRY ExInterlockedInsertTailList(
  [in, out] PLIST_ENTRY                  ListHead,
  [in, out] __drv_aliasesMem PLIST_ENTRY ListEntry,
  [in, out] PKSPIN_LOCK                  Lock
);

PSINGLE_LIST_ENTRY ExInterlockedPopEntryList(
  [in, out] PSINGLE_LIST_ENTRY ListHead,
  [in, out] PKSPIN_LOCK        Lock
);

NTKERNELAPI
PSLIST_ENTRY
FASTCALL
ExInterlockedPopEntrySList (
    _Inout_ PSLIST_HEADER ListHead,
    _Inout_opt_ _Requires_lock_not_held_(*_Curr_) PKSPIN_LOCK Lock
    );

PSINGLE_LIST_ENTRY ExInterlockedPushEntryList(
  [in, out] PSINGLE_LIST_ENTRY                  ListHead,
  [in, out] __drv_aliasesMem PSINGLE_LIST_ENTRY ListEntry,
  [in, out] PKSPIN_LOCK                         Lock
);

NTKERNELAPI
PSLIST_ENTRY
FASTCALL
ExInterlockedPushEntrySList (
    _Inout_ PSLIST_HEADER ListHead,
    _Inout_ __drv_aliasesMem PSLIST_ENTRY ListEntry,
    _Inout_opt_ _Requires_lock_not_held_(*_Curr_) PKSPIN_LOCK Lock
    );

PLIST_ENTRY ExInterlockedRemoveHeadList(
  [in, out] PLIST_ENTRY ListHead,
  [in, out] PKSPIN_LOCK Lock
);

BOOLEAN ExIsProcessorFeaturePresent(
  [in] ULONG ProcessorFeature
);

BOOLEAN ExIsResourceAcquiredExclusiveLite(
  [in] PERESOURCE Resource
);

ULONG ExIsResourceAcquiredSharedLite(
  [in] PERESOURCE Resource
);

BOOLEAN ExIsSoftBoot();

void ExLocalTimeToSystemTime(
  [in]  PLARGE_INTEGER LocalTime,
  [out] PLARGE_INTEGER SystemTime
);

void ExNotifyCallback(
  [in]           PVOID CallbackObject,
  [in, optional] PVOID Argument1,
  [in, optional] PVOID Argument2
);

PSLIST_ENTRY ExpInterlockedPopEntrySList(
  PSLIST_HEADER ListHead
);

PSLIST_ENTRY ExpInterlockedPushEntrySList(
  PSLIST_HEADER                 ListHead,
  __drv_aliasesMem PSLIST_ENTRY ListEntry
);

USHORT ExQueryDepthSList(
  [in] PSLIST_HEADER SListHead
);

void ExQueryTimerResolution(
  [out] PULONG MaximumTime,
  [out] PULONG MinimumTime,
  [out] PULONG CurrentTime
);

void ExRaiseStatus(
  [in] NTSTATUS Status
);

PVOID ExRegisterCallback(
  [in, out]      PCALLBACK_OBJECT   CallbackObject,
  [in]           PCALLBACK_FUNCTION CallbackFunction,
  [in, optional] PVOID              CallbackContext
);

NTSTATUS ExReinitializeResourceLite(
  [in, out] PERESOURCE Resource
);

void ExReInitializeRundownProtection(
  [in, out] PEX_RUNDOWN_REF RunRef
);

void ExReInitializeRundownProtectionCacheAware(
  [in, out] PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
);

void ExReleaseFastMutex(
  PFAST_MUTEX FastMutex
);

void ExReleaseFastMutexUnsafe(
  PFAST_MUTEX FastMutex
);

void ExReleasePushLockExclusive(
   Lock
);

void ExReleasePushLockShared(
   Lock
);

void ExReleaseResourceAndLeaveCriticalRegion(
  PERESOURCE Resource
);

void ExReleaseResourceForThreadLite(
  [in, out] PERESOURCE       Resource,
  [in]      ERESOURCE_THREAD ResourceThreadId
);

void ExReleaseResourceLite(
  [in, out] PERESOURCE Resource
);

void ExReleaseRundownProtection(
  [in, out] PEX_RUNDOWN_REF RunRef
);

void ExReleaseRundownProtectionCacheAware(
  [in, out] PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
);

void ExReleaseRundownProtectionCacheAwareEx(
  [in, out] PEX_RUNDOWN_REF_CACHE_AWARE RunRef,
  [in]      ULONG                       Count
);

void ExReleaseRundownProtectionEx(
  [in, out] PEX_RUNDOWN_REF RunRef,
  [in]      ULONG           Count
);

void ExReleaseSpinLockExclusive(
  [in, out] PEX_SPIN_LOCK SpinLock,
  [in]      KIRQL         OldIrql
);

void ExReleaseSpinLockExclusiveFromDpcLevel(
  PEX_SPIN_LOCK SpinLock
);

void ExReleaseSpinLockShared(
  [in, out] PEX_SPIN_LOCK SpinLock,
  [in]      KIRQL         OldIrql
);

void ExReleaseSpinLockSharedFromDpcLevel(
  PEX_SPIN_LOCK SpinLock
);

void ExRundownCompleted(
  [out] PEX_RUNDOWN_REF RunRef
);

void ExRundownCompletedCacheAware(
  [in, out] PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
);

NTSTATUS ExSecurePoolUpdate(
  [in] HANDLE    SecurePoolHandle,
  [in] ULONG     Tag,
  [in] PVOID     Allocation,
  [in] ULONG_PTR Cookie,
  [in] SIZE_T    Offset,
  [in] SIZE_T    Size,
  [in] PVOID     Buffer
);

LOGICAL ExSecurePoolValidate(
  [in] HANDLE    SecurePoolHandle,
  [in] ULONG     Tag,
  [in] PVOID     Allocation,
  [in] ULONG_PTR Cookie
);

NTSTATUS ExSetFirmwareEnvironmentVariable(
  [in] PUNICODE_STRING VariableName,
  [in] LPGUID          VendorGuid,
  [in] PVOID           Value,
  [in] ULONG           ValueLength,
  [in] ULONG           Attributes
);

void ExSetResourceOwnerPointer(
  [in, out] PERESOURCE Resource,
  [in]      PVOID      OwnerPointer
);

void ExSetResourceOwnerPointerEx(
  [in, out] PERESOURCE Resource,
  [in]      PVOID      OwnerPointer,
  [in]      ULONG      Flags
);

BOOLEAN ExSetTimer(
  [in]           PEX_TIMER           Timer,
  [in]           LONGLONG            DueTime,
  [in]           LONGLONG            Period,
  [in, optional] PEXT_SET_PARAMETERS Parameters
);


ULONG ExSetTimerResolution(
  [in] ULONG   DesiredTime,
  [in] BOOLEAN SetResolution
);

SIZE_T ExSizeOfRundownProtectionCacheAware();

void ExSystemTimeToLocalTime(
  [in]  PLARGE_INTEGER SystemTime,
  [out] PLARGE_INTEGER LocalTime
);

typedef struct _EXT_DELETE_PARAMETERS {
  ULONG                Version;
  ULONG                Reserved;
  PEXT_DELETE_CALLBACK DeleteCallback;
  PVOID                DeleteContext;
} EXT_DELETE_PARAMETERS, *PEXT_DELETE_PARAMETERS;

typedef struct _EXT_SET_PARAMETERS_V0 {
  ULONG    Version;
  ULONG    Reserved;
  LONGLONG NoWakeTolerance;
} EXT_SET_PARAMETERS, *PEXT_SET_PARAMETERS;

typedef struct _EXTENDED_CREATE_INFORMATION {
  LONGLONG ExtendedCreateFlags;
  PVOID    EaBuffer;
  ULONG    EaLength;
} EXTENDED_CREATE_INFORMATION, *PEXTENDED_CREATE_INFORMATION;

typedef struct _EXTENDED_CREATE_INFORMATION_32 {
  LONGLONG ExtendedCreateFlags;
  void POINTER_32     *EaBuffer;
  ULONG    EaLength;
} EXTENDED_CREATE_INFORMATION_32, *PEXTENDED_CREATE_INFORMATION_32;

LOGICAL ExTryConvertSharedSpinLockExclusive(
  [in, out] PEX_SPIN_LOCK SpinLock
);

BOOLEAN ExTryToAcquireFastMutex(
  PFAST_MUTEX FastMutex
);

void ExUnregisterCallback(
  [in, out] PVOID CallbackRegistration
);

void ExWaitForRundownProtectionRelease(
  [in, out] PEX_RUNDOWN_REF RunRef
);

void ExWaitForRundownProtectionReleaseCacheAware(
  [in, out] PEX_RUNDOWN_REF_CACHE_AWARE RunRef
);

void FIELD_OFFSET(
  [in]  type,
  [in]  field
);

typedef struct _FILE_BASIC_INFORMATION {
  LARGE_INTEGER CreationTime;
  LARGE_INTEGER LastAccessTime;
  LARGE_INTEGER LastWriteTime;
  LARGE_INTEGER ChangeTime;
  ULONG         FileAttributes;
} FILE_BASIC_INFORMATION, *PFILE_BASIC_INFORMATION;

typedef struct _FILE_FS_DEVICE_INFORMATION {
  DEVICE_TYPE DeviceType;
  ULONG       Characteristics;
} FILE_FS_DEVICE_INFORMATION, *PFILE_FS_DEVICE_INFORMATION;

typedef struct _FILE_FULL_EA_INFORMATION {
  ULONG  NextEntryOffset;
  UCHAR  Flags;
  UCHAR  EaNameLength;
  USHORT EaValueLength;
  CHAR   EaName[1];
} FILE_FULL_EA_INFORMATION, *PFILE_FULL_EA_INFORMATION;

typedef struct _FILE_IO_PRIORITY_HINT_INFORMATION {
  IO_PRIORITY_HINT PriorityHint;
} FILE_IO_PRIORITY_HINT_INFORMATION, *PFILE_IO_PRIORITY_HINT_INFORMATION;

typedef struct _FILE_IS_REMOTE_DEVICE_INFORMATION {
  BOOLEAN IsRemote;
} FILE_IS_REMOTE_DEVICE_INFORMATION, *PFILE_IS_REMOTE_DEVICE_INFORMATION;

typedef struct _FILE_NETWORK_OPEN_INFORMATION {
  LARGE_INTEGER CreationTime;
  LARGE_INTEGER LastAccessTime;
  LARGE_INTEGER LastWriteTime;
  LARGE_INTEGER ChangeTime;
  LARGE_INTEGER AllocationSize;
  LARGE_INTEGER EndOfFile;
  ULONG         FileAttributes;
} FILE_NETWORK_OPEN_INFORMATION, *PFILE_NETWORK_OPEN_INFORMATION;

typedef struct _FILE_OBJECT {
  CSHORT                            Type;
  CSHORT                            Size;
  PDEVICE_OBJECT                    DeviceObject;
  PVPB                              Vpb;
  PVOID                             FsContext;
  PVOID                             FsContext2;
  PSECTION_OBJECT_POINTERS          SectionObjectPointer;
  PVOID                             PrivateCacheMap;
  NTSTATUS                          FinalStatus;
  struct _FILE_OBJECT               *RelatedFileObject;
  BOOLEAN                           LockOperation;
  BOOLEAN                           DeletePending;
  BOOLEAN                           ReadAccess;
  BOOLEAN                           WriteAccess;
  BOOLEAN                           DeleteAccess;
  BOOLEAN                           SharedRead;
  BOOLEAN                           SharedWrite;
  BOOLEAN                           SharedDelete;
  ULONG                             Flags;
  UNICODE_STRING                    FileName;
  LARGE_INTEGER                     CurrentByteOffset;
  __volatile ULONG                  Waiters;
  __volatile ULONG                  Busy;
  PVOID                             LastLock;
  KEVENT                            Lock;
  KEVENT                            Event;
  __volatile PIO_COMPLETION_CONTEXT CompletionContext;
  KSPIN_LOCK                        IrpListLock;
  LIST_ENTRY                        IrpList;
  __volatile PVOID                  FileObjectExtension;
} FILE_OBJECT, *PFILE_OBJECT;

typedef struct _FILE_POSITION_INFORMATION {
  LARGE_INTEGER CurrentByteOffset;
} FILE_POSITION_INFORMATION, *PFILE_POSITION_INFORMATION;

typedef struct _FILE_STANDARD_INFORMATION {
  LARGE_INTEGER AllocationSize;
  LARGE_INTEGER EndOfFile;
  ULONG         NumberOfLinks;
  BOOLEAN       DeletePending;
  BOOLEAN       Directory;
} FILE_STANDARD_INFORMATION, *PFILE_STANDARD_INFORMATION;

typedef struct _FILE_STANDARD_INFORMATION_EX {
  LARGE_INTEGER AllocationSize;
  LARGE_INTEGER EndOfFile;
  ULONG         NumberOfLinks;
  BOOLEAN       DeletePending;
  BOOLEAN       Directory;
  BOOLEAN       AlternateStream;
  BOOLEAN       MetadataAttribute;
} FILE_STANDARD_INFORMATION_EX, *PFILE_STANDARD_INFORMATION_EX;


PSLIST_ENTRY FirstEntrySList(
  [in] PSLIST_HEADER SListHead
);

typedef struct _FPGA_CONTROL_INTERFACE {
  USHORT                        Size;
  USHORT                        Version;
  PVOID                         Context;
  PINTERFACE_REFERENCE          InterfaceReference;
  PINTERFACE_DEREFERENCE        InterfaceDereference;
  PFPGA_BUS_SCAN                BusScan;
  PFPGA_CONTROL_LINK            ControlLink;
  PFPGA_CONTROL_CONFIG_SPACE    ControlConfigSpace;
  PFPGA_CONTROL_ERROR_REPORTING ControlErrorReporting;
} FPGA_CONTROL_INTERFACE, *PFPGA_CONTROL_INTERFACE;


typedef
VOID
(*PDEVICE_RESET_COMPLETION)(
    _In_ NTSTATUS Status,
    _Inout_opt_ PVOID Context
    );




typedef struct _FUNCTION_LEVEL_DEVICE_RESET_PARAMETERS {
  ULONG                    Size;
  PDEVICE_RESET_COMPLETION DeviceResetCompletion;
  PVOID                    CompletionContext;
} FUNCTION_LEVEL_DEVICE_RESET_PARAMETERS, *PFUNCTION_LEVEL_DEVICE_RESET_PARAMETERS;


typedef struct _GENERIC_MAPPING {
  ACCESS_MASK GenericRead;
  ACCESS_MASK GenericWrite;
  ACCESS_MASK GenericExecute;
  ACCESS_MASK GenericAll;
} GENERIC_MAPPING;

typedef struct _HWPROFILE_CHANGE_NOTIFICATION {
  USHORT Version;
  USHORT Size;
  GUID   Event;
} HWPROFILE_CHANGE_NOTIFICATION, *PHWPROFILE_CHANGE_NOTIFICATION;

typedef struct _IMAGE_POLICY_ENTRY {
  IMAGE_POLICY_ENTRY_TYPE Type;
  IMAGE_POLICY_ID         PolicyId;
  union {
    const VOID *None;
    BOOLEAN    BoolValue;
    INT8       Int8Value;
    UINT8      UInt8Value;
    INT16      Int16Value;
    UINT16     UInt16Value;
    INT32      Int32Value;
    UINT32     UInt32Value;
    INT64      Int64Value;
    UINT64     UInt64Value;
    PCSTR      AnsiStringValue;
    PCWSTR     UnicodeStringValue;
  } u;
} IMAGE_POLICY_ENTRY;

typedef enum _IMAGE_POLICY_ENTRY_TYPE {
  ImagePolicyEntryTypeNone,
  ImagePolicyEntryTypeBool,
  ImagePolicyEntryTypeInt8,
  ImagePolicyEntryTypeUInt8,
  ImagePolicyEntryTypeInt16,
  ImagePolicyEntryTypeUInt16,
  ImagePolicyEntryTypeInt32,
  ImagePolicyEntryTypeUInt32,
  ImagePolicyEntryTypeInt64,
  ImagePolicyEntryTypeUInt64,
  ImagePolicyEntryTypeAnsiString,
  ImagePolicyEntryTypeUnicodeString,
  ImagePolicyEntryTypeOverride,
  ImagePolicyEntryTypeMaximum
} IMAGE_POLICY_ENTRY_TYPE;

typedef enum _IMAGE_POLICY_ID {
  ImagePolicyIdNone,
  ImagePolicyIdEtw,
  ImagePolicyIdDebug,
  ImagePolicyIdCrashDump,
  ImagePolicyIdCrashDumpKey,
  ImagePolicyIdCrashDumpKeyGuid,
  ImagePolicyIdParentSd,
  ImagePolicyIdParentSdRev,
  ImagePolicyIdSvn,
  ImagePolicyIdDeviceId,
  ImagePolicyIdCapability,
  ImagePolicyIdScenarioId,
  ImagePolicyIdMaximum
} IMAGE_POLICY_ID;

typedef struct _IMAGE_POLICY_METADATA {
  UCHAR              Version;
  UCHAR              Reserved0[7];
  ULONGLONG          ApplicationId;
  IMAGE_POLICY_ENTRY Policies[];
} IMAGE_POLICY_METADATA;

void IMAGE_POLICY_OVERRIDE(
   _PolicyId_
);

void InitializeListHead(
  [out] PLIST_ENTRY ListHead
);


void InitializeSListHead(
  [in] PSLIST_HEADER SListHead
);

typedef struct _INPUT_MAPPING_ELEMENT {
  ULONG InputMappingId;
} INPUT_MAPPING_ELEMENT, *PINPUT_MAPPING_ELEMENT;

void InsertHeadList(
  [in, out] PLIST_ENTRY                  ListHead,
  [in, out] __drv_aliasesMem PLIST_ENTRY Entry
);

void InsertTailList(
  [in, out] PLIST_ENTRY                  ListHead,
  [in, out] __drv_aliasesMem PLIST_ENTRY Entry
);

typedef struct _INTERFACE {
  USHORT                 Size;
  USHORT                 Version;
  PVOID                  Context;
  PINTERFACE_REFERENCE   InterfaceReference;
  PINTERFACE_DEREFERENCE InterfaceDereference;
} INTERFACE, *PINTERFACE;

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
} INTERFACE_TYPE, *PINTERFACE_TYPE;

LONG InterlockedAnd(
  [in, out] LONG volatile *Destination,
  [in]      LONG          Value
);

LONG CDECL_NON_WVMPURE InterlockedCompareExchange(
  [in, out] LONG volatile *Destination,
  [in]      LONG          ExChange,
  [in]      LONG          Comperand
);

PVOID InterlockedCompareExchangePointer(
  [in, out] PVOID volatile *Destination,
  [in]      PVOID          Exchange,
  [in]      PVOID          Comperand
);

LONG CDECL_NON_WVMPURE InterlockedDecrement(
  [in, out] LONG volatile *Addend
);

LONG InterlockedExchange(
  [in, out] LONG volatile *Target,
  [in]      LONG          Value
);

LONG InterlockedExchangeAdd(
  [in, out] LONG volatile *Addend,
  [in]      LONG          Value
);

PVOID InterlockedExchangePointer(
  [in, out]      PVOID volatile *Target,
  [in, optional] PVOID          Value
);

LONG CDECL_NON_WVMPURE InterlockedIncrement(
  [in, out] LONG volatile *Addend
);

LONG InterlockedOr(
  [in, out] LONG volatile *Destination,
  [in]      LONG          Value
);

LONG InterlockedXor(
  [in, out] LONG volatile *Destination,
  [in]      LONG          Value
);

typedef enum _IO_ACCESS_MODE {
  SequentialAccess,
  RandomAccess
} IO_ACCESS_MODE;

typedef enum _IO_ACCESS_TYPE {
  ReadAccess,
  WriteAccess,
  ModifyAccess
} IO_ACCESS_TYPE;

typedef enum _IO_ALLOCATION_ACTION {
  KeepObject,
  DeallocateObject,
  DeallocateObjectKeepRegisters
} IO_ALLOCATION_ACTION, *PIO_ALLOCATION_ACTION;

typedef struct _IO_CONNECT_INTERRUPT_PARAMETERS {
  ULONG Version;
  union {
    IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS FullySpecified;
    IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS      LineBased;
    IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS   MessageBased;
  };
} IO_CONNECT_INTERRUPT_PARAMETERS, *PIO_CONNECT_INTERRUPT_PARAMETERS;

typedef enum _IO_CONTAINER_INFORMATION_CLASS {
  IoSessionStateInformation,
  IoMaxContainerInformationClass
} IO_CONTAINER_INFORMATION_CLASS;

typedef enum _IO_CONTAINER_NOTIFICATION_CLASS {
  IoSessionStateNotification,
  IoMaxContainerNotificationClass
} IO_CONTAINER_NOTIFICATION_CLASS;

typedef struct _IO_DISCONNECT_INTERRUPT_PARAMETERS {
  ULONG Version;
  union {
    PVOID                      Generic;
    PKINTERRUPT                InterruptObject;
    PIO_INTERRUPT_MESSAGE_INFO InterruptMessageTable;
  } ConnectionContext;
} IO_DISCONNECT_INTERRUPT_PARAMETERS, *PIO_DISCONNECT_INTERRUPT_PARAMETERS;

typedef struct _IO_ERROR_LOG_PACKET {
  UCHAR         MajorFunctionCode;
  UCHAR         RetryCount;
  USHORT        DumpDataSize;
  USHORT        NumberOfStrings;
  USHORT        StringOffset;
  USHORT        EventCategory;
  NTSTATUS      ErrorCode;
  ULONG         UniqueErrorValue;
  NTSTATUS      FinalStatus;
  ULONG         SequenceNumber;
  ULONG         IoControlCode;
  LARGE_INTEGER DeviceOffset;
  ULONG         DumpData[1];
} IO_ERROR_LOG_PACKET, *PIO_ERROR_LOG_PACKET;

typedef struct _IO_INTERRUPT_MESSAGE_INFO {
  KIRQL                           UnifiedIrql;
  ULONG                           MessageCount;
  IO_INTERRUPT_MESSAGE_INFO_ENTRY MessageInfo[1];
} IO_INTERRUPT_MESSAGE_INFO, *PIO_INTERRUPT_MESSAGE_INFO;

typedef struct _IO_INTERRUPT_MESSAGE_INFO_ENTRY {
  PHYSICAL_ADDRESS    MessageAddress;
  KAFFINITY           TargetProcessorSet;
  PKINTERRUPT         InterruptObject;
  ULONG               MessageData;
  ULONG               Vector;
  KIRQL               Irql;
  KINTERRUPT_MODE     Mode;
  KINTERRUPT_POLARITY Polarity;
} IO_INTERRUPT_MESSAGE_INFO_ENTRY, *PIO_INTERRUPT_MESSAGE_INFO_ENTRY;

typedef enum _IO_NOTIFICATION_EVENT_CATEGORY {
  EventCategoryReserved,
  EventCategoryHardwareProfileChange,
  EventCategoryDeviceInterfaceChange,
  EventCategoryTargetDeviceChange,
  EventCategoryKernelSoftRestart
} IO_NOTIFICATION_EVENT_CATEGORY;

typedef enum _IO_PAGING_PRIORITY {
  IoPagingPriorityInvalid,
  IoPagingPriorityNormal,
  IoPagingPriorityHigh,
  IoPagingPriorityReserved1,
  IoPagingPriorityReserved2
} IO_PAGING_PRIORITY;

typedef enum _IO_PRIORITY_HINT {
  IoPriorityVeryLow,
  IoPriorityLow,
  IoPriorityNormal,
  IoPriorityHigh,
  IoPriorityCritical,
  MaxIoPriorityTypes
} IO_PRIORITY_HINT;

typedef struct _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS {
  ULONG Version;
  union {
    PVOID                      Generic;
    PKINTERRUPT                InterruptObject;
    PIO_INTERRUPT_MESSAGE_INFO InterruptMessageTable;
  } ConnectionContext;
} IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS, *PIO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS;

typedef struct _IO_RESOURCE_DESCRIPTOR {
  UCHAR  Option;
  UCHAR  Type;
  UCHAR  ShareDisposition;
  UCHAR  Spare1;
  USHORT Flags;
  USHORT Spare2;
  union {
    struct {
      ULONG            Length;
      ULONG            Alignment;
      PHYSICAL_ADDRESS MinimumAddress;
      PHYSICAL_ADDRESS MaximumAddress;
    } Port;
    struct {
      ULONG            Length;
      ULONG            Alignment;
      PHYSICAL_ADDRESS MinimumAddress;
      PHYSICAL_ADDRESS MaximumAddress;
    } Memory;
    struct {
      ULONG             MinimumVector;
      ULONG             MaximumVector;
#if ...
      IRQ_DEVICE_POLICY AffinityPolicy;
      USHORT            Group;
#else
      IRQ_DEVICE_POLICY AffinityPolicy;
#endif
      IRQ_PRIORITY      PriorityPolicy;
      KAFFINITY         TargetedProcessors;
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
      ULONG            Length;
      ULONG            Alignment;
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
      ULONG            Length40;
      ULONG            Alignment40;
      PHYSICAL_ADDRESS MinimumAddress;
      PHYSICAL_ADDRESS MaximumAddress;
    } Memory40;
    struct {
      ULONG            Length48;
      ULONG            Alignment48;
      PHYSICAL_ADDRESS MinimumAddress;
      PHYSICAL_ADDRESS MaximumAddress;
    } Memory48;
    struct {
      ULONG            Length64;
      ULONG            Alignment64;
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
} IO_RESOURCE_DESCRIPTOR, *PIO_RESOURCE_DESCRIPTOR;

typedef struct _IO_RESOURCE_LIST {
  USHORT                 Version;
  USHORT                 Revision;
  ULONG                  Count;
  IO_RESOURCE_DESCRIPTOR Descriptors[1];
} IO_RESOURCE_LIST, *PIO_RESOURCE_LIST;

typedef struct _IO_RESOURCE_REQUIREMENTS_LIST {
  ULONG            ListSize;
  INTERFACE_TYPE   InterfaceType;
  ULONG            BusNumber;
  ULONG            SlotNumber;
  ULONG            Reserved[3];
  ULONG            AlternativeLists;
  IO_RESOURCE_LIST List[1];
} IO_RESOURCE_REQUIREMENTS_LIST, *PIO_RESOURCE_REQUIREMENTS_LIST;

typedef struct _IO_SECURITY_CONTEXT {
  PSECURITY_QUALITY_OF_SERVICE SecurityQos;
  PACCESS_STATE                AccessState;
  ACCESS_MASK                  DesiredAccess;
  ULONG                        FullCreateOptions;
} IO_SECURITY_CONTEXT, *PIO_SECURITY_CONTEXT;

typedef struct _IO_SESSION_CONNECT_INFO {
  ULONG   SessionId;
  BOOLEAN LocalSession;
} IO_SESSION_CONNECT_INFO, *PIO_SESSION_CONNECT_INFO;

typedef enum _IO_SESSION_EVENT {
  IoSessionEventIgnore,
  IoSessionEventCreated,
  IoSessionEventTerminated,
  IoSessionEventConnected,
  IoSessionEventDisconnected,
  IoSessionEventLogon,
  IoSessionEventLogoff,
  IoSessionEventMax
} IO_SESSION_EVENT, *PIO_SESSION_EVENT;


typedef enum _IO_SESSION_STATE {
  IoSessionStateCreated,
  IoSessionStateInitialized,
  IoSessionStateConnected,
  IoSessionStateDisconnected,
  IoSessionStateDisconnectedLoggedOn,
  IoSessionStateLoggedOn,
  IoSessionStateLoggedOff,
  IoSessionStateTerminated,
  IoSessionStateMax
} IO_SESSION_STATE, *PIO_SESSION_STATE;

typedef struct _IO_SESSION_STATE_INFORMATION {
  ULONG            SessionId;
  IO_SESSION_STATE SessionState;
  BOOLEAN          LocalSession;
} IO_SESSION_STATE_INFORMATION, *PIO_SESSION_STATE_INFORMATION;

typedef struct _IO_SESSION_STATE_NOTIFICATION {
  ULONG Size;
  ULONG Flags;
  PVOID IoObject;
  ULONG EventMask;
  PVOID Context;
} IO_SESSION_STATE_NOTIFICATION, *PIO_SESSION_STATE_NOTIFICATION;

typedef struct _IO_STACK_LOCATION {
  UCHAR                  MajorFunction;
  UCHAR                  MinorFunction;
  UCHAR                  Flags;
  UCHAR                  Control;
  union {
    struct {
      PIO_SECURITY_CONTEXT     SecurityContext;
      ULONG                    Options;
      USHORT POINTER_ALIGNMENT FileAttributes;
      USHORT                   ShareAccess;
      ULONG POINTER_ALIGNMENT  EaLength;
    } Create;
    struct {
      PIO_SECURITY_CONTEXT          SecurityContext;
      ULONG                         Options;
      USHORT POINTER_ALIGNMENT      Reserved;
      USHORT                        ShareAccess;
      PNAMED_PIPE_CREATE_PARAMETERS Parameters;
    } CreatePipe;
    struct {
      PIO_SECURITY_CONTEXT        SecurityContext;
      ULONG                       Options;
      USHORT POINTER_ALIGNMENT    Reserved;
      USHORT                      ShareAccess;
      PMAILSLOT_CREATE_PARAMETERS Parameters;
    } CreateMailslot;
    struct {
      ULONG                   Length;
      ULONG POINTER_ALIGNMENT Key;
      ULONG                   Flags;
      LARGE_INTEGER           ByteOffset;
    } Read;
    struct {
      ULONG                   Length;
      ULONG POINTER_ALIGNMENT Key;
      ULONG                   Flags;
      LARGE_INTEGER           ByteOffset;
    } Write;
    struct {
      ULONG                   Length;
      PUNICODE_STRING         FileName;
      FILE_INFORMATION_CLASS  FileInformationClass;
      ULONG POINTER_ALIGNMENT FileIndex;
    } QueryDirectory;
    struct {
      ULONG                   Length;
      ULONG POINTER_ALIGNMENT CompletionFilter;
    } NotifyDirectory;
    struct {
      ULONG                                                Length;
      ULONG POINTER_ALIGNMENT                              CompletionFilter;
      DIRECTORY_NOTIFY_INFORMATION_CLASS POINTER_ALIGNMENT DirectoryNotifyInformationClass;
    } NotifyDirectoryEx;
    struct {
      ULONG                                    Length;
      FILE_INFORMATION_CLASS POINTER_ALIGNMENT FileInformationClass;
    } QueryFile;
    struct {
      ULONG                                    Length;
      FILE_INFORMATION_CLASS POINTER_ALIGNMENT FileInformationClass;
      PFILE_OBJECT                             FileObject;
      union {
        struct {
          BOOLEAN ReplaceIfExists;
          BOOLEAN AdvanceOnly;
        };
        ULONG  ClusterCount;
        HANDLE DeleteHandle;
      };
    } SetFile;
    struct {
      ULONG                   Length;
      PVOID                   EaList;
      ULONG                   EaListLength;
      ULONG POINTER_ALIGNMENT EaIndex;
    } QueryEa;
    struct {
      ULONG Length;
    } SetEa;
    struct {
      ULONG                                  Length;
      FS_INFORMATION_CLASS POINTER_ALIGNMENT FsInformationClass;
    } QueryVolume;
    struct {
      ULONG                                  Length;
      FS_INFORMATION_CLASS POINTER_ALIGNMENT FsInformationClass;
    } SetVolume;
    struct {
      ULONG                   OutputBufferLength;
      ULONG POINTER_ALIGNMENT InputBufferLength;
      ULONG POINTER_ALIGNMENT FsControlCode;
      PVOID                   Type3InputBuffer;
    } FileSystemControl;
    struct {
      PLARGE_INTEGER          Length;
      ULONG POINTER_ALIGNMENT Key;
      LARGE_INTEGER           ByteOffset;
    } LockControl;
    struct {
      ULONG                   OutputBufferLength;
      ULONG POINTER_ALIGNMENT InputBufferLength;
      ULONG POINTER_ALIGNMENT IoControlCode;
      PVOID                   Type3InputBuffer;
    } DeviceIoControl;
    struct {
      SECURITY_INFORMATION    SecurityInformation;
      ULONG POINTER_ALIGNMENT Length;
    } QuerySecurity;
    struct {
      SECURITY_INFORMATION SecurityInformation;
      PSECURITY_DESCRIPTOR SecurityDescriptor;
    } SetSecurity;
    struct {
      PVPB           Vpb;
      PDEVICE_OBJECT DeviceObject;
      ULONG          OutputBufferLength;
    } MountVolume;
    struct {
      PVPB           Vpb;
      PDEVICE_OBJECT DeviceObject;
    } VerifyVolume;
    struct {
      struct _SCSI_REQUEST_BLOCK *Srb;
    } Scsi;
    struct {
      ULONG                       Length;
      PSID                        StartSid;
      PFILE_GET_QUOTA_INFORMATION SidList;
      ULONG                       SidListLength;
    } QueryQuota;
    struct {
      ULONG Length;
    } SetQuota;
    struct {
      DEVICE_RELATION_TYPE Type;
    } QueryDeviceRelations;
    struct {
      const GUID *InterfaceType;
      USHORT     Size;
      USHORT     Version;
      PINTERFACE Interface;
      PVOID      InterfaceSpecificData;
    } QueryInterface;
    struct {
      PDEVICE_CAPABILITIES Capabilities;
    } DeviceCapabilities;
    struct {
      PIO_RESOURCE_REQUIREMENTS_LIST IoResourceRequirementList;
    } FilterResourceRequirements;
    struct {
      ULONG                   WhichSpace;
      PVOID                   Buffer;
      ULONG                   Offset;
      ULONG POINTER_ALIGNMENT Length;
    } ReadWriteConfig;
    struct {
      BOOLEAN Lock;
    } SetLock;
    struct {
      BUS_QUERY_ID_TYPE IdType;
    } QueryId;
    struct {
      DEVICE_TEXT_TYPE       DeviceTextType;
      LCID POINTER_ALIGNMENT LocaleId;
    } QueryDeviceText;
    struct {
      BOOLEAN                                          InPath;
      BOOLEAN                                          Reserved[3];
      DEVICE_USAGE_NOTIFICATION_TYPE POINTER_ALIGNMENT Type;
    } UsageNotification;
    struct {
      SYSTEM_POWER_STATE PowerState;
    } WaitWake;
    struct {
      PPOWER_SEQUENCE PowerSequence;
    } PowerSequence;
#if ...
    struct {
      union {
        ULONG                      SystemContext;
        SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;
      };
      POWER_STATE_TYPE POINTER_ALIGNMENT Type;
      POWER_STATE POINTER_ALIGNMENT      State;
      POWER_ACTION POINTER_ALIGNMENT     ShutdownType;
    } Power;
#else
    struct {
      ULONG                              SystemContext;
      POWER_STATE_TYPE POINTER_ALIGNMENT Type;
      POWER_STATE POINTER_ALIGNMENT      State;
      POWER_ACTION POINTER_ALIGNMENT     ShutdownType;
    } Power;
#endif
    struct {
      PCM_RESOURCE_LIST AllocatedResources;
      PCM_RESOURCE_LIST AllocatedResourcesTranslated;
    } StartDevice;
    struct {
      ULONG_PTR ProviderId;
      PVOID     DataPath;
      ULONG     BufferSize;
      PVOID     Buffer;
    } WMI;
    struct {
      PVOID Argument1;
      PVOID Argument2;
      PVOID Argument3;
      PVOID Argument4;
    } Others;
  } Parameters;
  PDEVICE_OBJECT         DeviceObject;
  PFILE_OBJECT           FileObject;
  PIO_COMPLETION_ROUTINE CompletionRoutine;
  PVOID                  Context;
} IO_STACK_LOCATION, *PIO_STACK_LOCATION;

typedef struct _IO_STATUS_BLOCK {
  union {
    NTSTATUS Status;
    PVOID    Pointer;
  };
  ULONG_PTR Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK;

typedef struct _IO_STATUS_BLOCK64 {
  union {
    NTSTATUS Status;
    PVOID64  Pointer;
  } DUMMYUNIONNAME;
  ULONG64 Information;
} IO_STATUS_BLOCK64;

void IoAcquireCancelSpinLock(
  PKIRQL Irql
);

NTSTATUS IoAcquireKsrPersistentMemory(
  PDRIVER_OBJECT DriverObject,
  PDEVICE_OBJECT PhysicalDeviceObject,
  PVOID          Buffer,
  PSIZE_T        Size
);

NTSTATUS IoAcquireKsrPersistentMemoryEx(
  PDRIVER_OBJECT  DriverObject,
  PDEVICE_OBJECT  PhysicalDeviceObject,
  PUNICODE_STRING PhysicalDeviceId,
  PUSHORT         DataTag,
  PULONG          DataVersion,
  PVOID           Buffer,
  PSIZE_T         Size
);

NTSTATUS
IoAcquireRemoveLock (
    _Inout_ PIO_REMOVE_LOCK RemoveLock,
    _In_opt_ PVOID          Tag
    );

void IoAdjustPagingPathCount(
  [in]  _count_,
  [in]  _paging_
);

NTSTATUS IoAllocateDriverObjectExtension(
  [in]  PDRIVER_OBJECT DriverObject,
  [in]  PVOID          ClientIdentificationAddress,
  [in]  ULONG          DriverObjectExtensionSize,
  [out] PVOID          *DriverObjectExtension
);

PVOID IoAllocateErrorLogEntry(
  [in] PVOID IoObject,
  [in] UCHAR EntrySize
);

PIRP IoAllocateIrp(
  [in] CCHAR   StackSize,
  [in] BOOLEAN ChargeQuota
);

PIRP IoAllocateIrpEx(
  PDEVICE_OBJECT DeviceObject,
  CCHAR          StackSize,
  BOOLEAN        ChargeQuota
);

PMDL IoAllocateMdl(
  [in, optional]      __drv_aliasesMem PVOID VirtualAddress,
  [in]                ULONG                  Length,
  [in]                BOOLEAN                SecondaryBuffer,
  [in]                BOOLEAN                ChargeQuota,
  [in, out, optional] PIRP                   Irp
);

PIO_WORKITEM IoAllocateWorkItem(
  [in] PDEVICE_OBJECT DeviceObject
);

NTSTATUS IoAttachDevice(
  [in]  PDEVICE_OBJECT  SourceDevice,
  [in]  PUNICODE_STRING TargetDevice,
  [out] PDEVICE_OBJECT  *AttachedDevice
);

PDEVICE_OBJECT IoAttachDeviceToDeviceStack(
  [in] PDEVICE_OBJECT SourceDevice,
  [in] PDEVICE_OBJECT TargetDevice
);


__drv_aliasesMem PIRP IoBuildAsynchronousFsdRequest(
  [in]           ULONG            MajorFunction,
  [in]           PDEVICE_OBJECT   DeviceObject,
  [in, out]      PVOID            Buffer,
  [in, optional] ULONG            Length,
  [in, optional] PLARGE_INTEGER   StartingOffset,
  [in, optional] PIO_STATUS_BLOCK IoStatusBlock
);

__drv_aliasesMem PIRP IoBuildDeviceIoControlRequest(
  [in]            ULONG            IoControlCode,
  [in]            PDEVICE_OBJECT   DeviceObject,
  [in, optional]  PVOID            InputBuffer,
  [in]            ULONG            InputBufferLength,
  [out, optional] PVOID            OutputBuffer,
  [in]            ULONG            OutputBufferLength,
  [in]            BOOLEAN          InternalDeviceIoControl,
  [in, optional]  PKEVENT          Event,
  [out]           PIO_STATUS_BLOCK IoStatusBlock
);

void IoBuildPartialMdl(
  [in]      PMDL  SourceMdl,
  [in, out] PMDL  TargetMdl,
  [in]      PVOID VirtualAddress,
  [in]      ULONG Length
);

__drv_aliasesMem PIRP IoBuildSynchronousFsdRequest(
  [in]           ULONG            MajorFunction,
  [in]           PDEVICE_OBJECT   DeviceObject,
  [in, out]      PVOID            Buffer,
  [in, optional] ULONG            Length,
  [in, optional] PLARGE_INTEGER   StartingOffset,
  [in]           PKEVENT          Event,
  [out]          PIO_STATUS_BLOCK IoStatusBlock
);

#define IoCallDriver(a,b)   \
        IofCallDriver(a,b)
);

BOOLEAN IoCancelIrp(
  [in] PIRP Irp
);

NTSTATUS IoCheckLinkShareAccess(
  [in]                ACCESS_MASK        DesiredAccess,
  [in]                ULONG              DesiredShareAccess,
  [in, out, optional] PFILE_OBJECT       FileObject,
  [in, out, optional] PSHARE_ACCESS      ShareAccess,
  [in, out, optional] PLINK_SHARE_ACCESS LinkShareAccess,
  [in]                ULONG              IoShareAccessFlags
);

NTSTATUS IoCheckShareAccess(
  [in]      ACCESS_MASK   DesiredAccess,
  [in]      ULONG         DesiredShareAccess,
  [in, out] PFILE_OBJECT  FileObject,
  [in, out] PSHARE_ACCESS ShareAccess,
  [in]      BOOLEAN       Update
);

NTSTATUS IoCheckShareAccessEx(
  [in]      ACCESS_MASK   DesiredAccess,
  [in]      ULONG         DesiredShareAccess,
  [in, out] PFILE_OBJECT  FileObject,
  [in, out] PSHARE_ACCESS ShareAccess,
  [in]      BOOLEAN       Update,
  [in]      PBOOLEAN      WritePermission
);

NTSTATUS IoConnectInterrupt(
  [out]          PKINTERRUPT       *InterruptObject,
  [in]           PKSERVICE_ROUTINE ServiceRoutine,
  [in, optional] PVOID             ServiceContext,
  [in, optional] PKSPIN_LOCK       SpinLock,
  [in]           ULONG             Vector,
  [in]           KIRQL             Irql,
  [in]           KIRQL             SynchronizeIrql,
  [in]           KINTERRUPT_MODE   InterruptMode,
  [in]           BOOLEAN           ShareVector,
  [in]           KAFFINITY         ProcessorEnableMask,
  [in]           BOOLEAN           FloatingSave
);

NTSTATUS IoConnectInterruptEx(
  [in, out] PIO_CONNECT_INTERRUPT_PARAMETERS Parameters
);

void IoCopyCurrentIrpStackLocationToNext(
  [in, out] PIRP Irp
);

NTSTATUS IoCreateDevice(
  [in]           PDRIVER_OBJECT  DriverObject,
  [in]           ULONG           DeviceExtensionSize,
  [in, optional] PUNICODE_STRING DeviceName,
  [in]           DEVICE_TYPE     DeviceType,
  [in]           ULONG           DeviceCharacteristics,
  [in]           BOOLEAN         Exclusive,
  [out]          PDEVICE_OBJECT  *DeviceObject
);

NTSTATUS IoCreateFile(
  [out]          PHANDLE            FileHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in]           POBJECT_ATTRIBUTES ObjectAttributes,
  [out]          PIO_STATUS_BLOCK   IoStatusBlock,
  [in, optional] PLARGE_INTEGER     AllocationSize,
  [in]           ULONG              FileAttributes,
  [in]           ULONG              ShareAccess,
  [in]           ULONG              Disposition,
  [in]           ULONG              CreateOptions,
  [in, optional] PVOID              EaBuffer,
  [in]           ULONG              EaLength,
  [in]           CREATE_FILE_TYPE   CreateFileType,
  [in, optional] PVOID              InternalParameters,
  [in]           ULONG              Options
);

PKEVENT IoCreateNotificationEvent(
  [in]  PUNICODE_STRING EventName,
  [out] PHANDLE         EventHandle
);

NTSTATUS IoCreateSymbolicLink(
  [in] PUNICODE_STRING SymbolicLinkName,
  [in] PUNICODE_STRING DeviceName
);

PKEVENT IoCreateSynchronizationEvent(
  [in]  PUNICODE_STRING EventName,
  [out] PHANDLE         EventHandle
);

NTSTATUS IoCreateSystemThread(
  [in, out]       PVOID              IoObject,
  [out]           PHANDLE            ThreadHandle,
  [in]            ULONG              DesiredAccess,
  [in, optional]  POBJECT_ATTRIBUTES ObjectAttributes,
  [in, optional]  HANDLE             ProcessHandle,
  [out, optional] PCLIENT_ID         ClientId,
  [in]            PKSTART_ROUTINE    StartRoutine,
  [in, optional]  PVOID              StartContext
);

NTSTATUS IoCreateUnprotectedSymbolicLink(
  [in] PUNICODE_STRING SymbolicLinkName,
  [in] PUNICODE_STRING DeviceName
);

NTSTATUS IoCsqInitialize(
  [out] PIO_CSQ                       Csq,
  [in]  PIO_CSQ_INSERT_IRP            CsqInsertIrp,
  [in]  PIO_CSQ_REMOVE_IRP            CsqRemoveIrp,
  [in]  PIO_CSQ_PEEK_NEXT_IRP         CsqPeekNextIrp,
  [in]  PIO_CSQ_ACQUIRE_LOCK          CsqAcquireLock,
  [in]  PIO_CSQ_RELEASE_LOCK          CsqReleaseLock,
  [in]  PIO_CSQ_COMPLETE_CANCELED_IRP CsqCompleteCanceledIrp
);

NTSTATUS IoCsqInitializeEx(
  [out] PIO_CSQ                       Csq,
  [in]  PIO_CSQ_INSERT_IRP_EX         CsqInsertIrp,
  [in]  PIO_CSQ_REMOVE_IRP            CsqRemoveIrp,
  [in]  PIO_CSQ_PEEK_NEXT_IRP         CsqPeekNextIrp,
  [in]  PIO_CSQ_ACQUIRE_LOCK          CsqAcquireLock,
  [in]  PIO_CSQ_RELEASE_LOCK          CsqReleaseLock,
  [in]  PIO_CSQ_COMPLETE_CANCELED_IRP CsqCompleteCanceledIrp
);

void IoCsqInsertIrp(
  [in, out]       PIO_CSQ             Csq,
  [in, out]       PIRP                Irp,
  [out, optional] PIO_CSQ_IRP_CONTEXT Context
);

NTSTATUS IoCsqInsertIrpEx(
  [in, out]       PIO_CSQ             Csq,
  [in, out]       PIRP                Irp,
  [out, optional] PIO_CSQ_IRP_CONTEXT Context,
  [in, optional]  PVOID               InsertContext
);

PIRP IoCsqRemoveIrp(
  [in, out] PIO_CSQ             Csq,
  [in, out] PIO_CSQ_IRP_CONTEXT Context
);

PIRP IoCsqRemoveNextIrp(
  [in, out]      PIO_CSQ Csq,
  [in, optional] PVOID   PeekContext
);

void IoDeleteDevice(
  [in] PDEVICE_OBJECT DeviceObject
);

NTSTATUS IoDeleteSymbolicLink(
  [in] PUNICODE_STRING SymbolicLinkName
);

void IoDetachDevice(
  [in, out] PDEVICE_OBJECT TargetDevice
);

void IoDisconnectInterrupt(
  [in] PKINTERRUPT InterruptObject
);

void IoDisconnectInterruptEx(
  [in, out] PIO_DISCONNECT_INTERRUPT_PARAMETERS Parameters
);

NTSTATUS IoEnumerateKsrPersistentMemoryEx(
  PDRIVER_OBJECT                            DriverObject,
  PDEVICE_OBJECT                            PhysicalDeviceObject,
  PUNICODE_STRING                           PhysicalDeviceId,
  PIO_PERSISTED_MEMORY_ENUMERATION_CALLBACK Callback,
  PVOID                                     CallbackContext
);

NTSTATUS IofCallDriver(
  PDEVICE_OBJECT        DeviceObject,
  __drv_aliasesMem PIRP Irp
);

void IofCompleteRequest(
  PIRP  Irp,
  CCHAR PriorityBoost
);

BOOLEAN IoForwardIrpSynchronously(
  [in] PDEVICE_OBJECT DeviceObject,
  [in] PIRP           Irp
);

void IoFreeErrorLogEntry(
  [in] PVOID ElEntry
);

void IoFreeIrp(
  [in] PIRP Irp
);

NTSTATUS IoFreeKsrPersistentMemory(
  PVOID DataHandle
);

void IoFreeMdl(
  [in] PMDL Mdl
);

void IoFreeWorkItem(
  [in] PIO_WORKITEM IoWorkItem
);

NTSTATUS IoGetAffinityInterrupt(
  [in]  PKINTERRUPT     InterruptObject,
  [out] PGROUP_AFFINITY GroupAffinity
);

PDEVICE_OBJECT IoGetAttachedDeviceReference(
  [in] PDEVICE_OBJECT DeviceObject
);

NTSTATUS IoGetBootDiskInformation(
  [in, out] PBOOTDISK_INFORMATION BootDiskInformation,
  [in]      ULONG                 Size
);

NTSTATUS IoGetContainerInformation(
  [in]           IO_CONTAINER_INFORMATION_CLASS InformationClass,
  [in, optional] PVOID                          ContainerObject,
  [in, out]      PVOID                          Buffer,
  [in]           ULONG                          BufferLength
);

__drv_aliasesMem PIO_STACK_LOCATION IoGetCurrentIrpStackLocation(
  [in] PIRP Irp
);

PEPROCESS IoGetCurrentProcess();

NTSTATUS IoGetDeviceInterfaceAlias(
  [in]  PUNICODE_STRING SymbolicLinkName,
  [in]  const GUID      *AliasInterfaceClassGuid,
  [out] PUNICODE_STRING AliasSymbolicLinkName
);

NTSTATUS IoGetDeviceInterfacePropertyData(
  [in]  PUNICODE_STRING  SymbolicLinkName,
  [in]  const DEVPROPKEY *PropertyKey,
  [in]  LCID             Lcid,
        ULONG            Flags,
  [in]  ULONG            Size,
  [out] PVOID            Data,
  [out] PULONG           RequiredSize,
  [out] PDEVPROPTYPE     Type
);

NTSTATUS IoGetDeviceInterfaces(
  [in]           const GUID     *InterfaceClassGuid,
  [in, optional] PDEVICE_OBJECT PhysicalDeviceObject,
  [in]           ULONG          Flags,
  [out]          PZZWSTR        *SymbolicLinkList
);

NTSTATUS IoGetDeviceNumaNode(
  [in]  PDEVICE_OBJECT Pdo,
  [out] PUSHORT        NodeNumber
);

NTSTATUS IoGetDeviceObjectPointer(
  [in]  PUNICODE_STRING ObjectName,
  [in]  ACCESS_MASK     DesiredAccess,
  [out] PFILE_OBJECT    *FileObject,
  [out] PDEVICE_OBJECT  *DeviceObject
);

NTSTATUS IoGetDeviceProperty(
  [in]            PDEVICE_OBJECT           DeviceObject,
  [in]            DEVICE_REGISTRY_PROPERTY DeviceProperty,
  [in]            ULONG                    BufferLength,
  [out, optional] PVOID                    PropertyBuffer,
  [out]           PULONG                   ResultLength
);

NTSTATUS IoGetDevicePropertyData(
  [in]  PDEVICE_OBJECT   Pdo,
  [in]  const DEVPROPKEY *PropertyKey,
  [in]  LCID             Lcid,
        ULONG            Flags,
  [in]  ULONG            Size,
  [out] PVOID            Data,
  [out] PULONG           RequiredSize,
  [out] PDEVPROPTYPE     Type
);

_DMA_ADAPTER * IoGetDmaAdapter(
  [in, optional] PDEVICE_OBJECT      PhysicalDeviceObject,
  [in]           _DEVICE_DESCRIPTION *DeviceDescription,
  [out]          PULONG              NumberOfMapRegisters
);

NTSTATUS IoGetDriverDirectory(
  [_In_]  PDRIVER_OBJECT        DriverObject,
  [_In_]  DRIVER_DIRECTORY_TYPE DirectoryType,
  [_In_]  ULONG                 Flags,
  [_Out_] PHANDLE               DriverDirectoryHandle
);

__drv_aliasesMem PVOID IoGetDriverObjectExtension(
  [in] PDRIVER_OBJECT DriverObject,
  [in] PVOID          ClientIdentificationAddress
);

void IoGetFunctionCodeFromCtlCode(
  [in]  ControlCode
);

PVOID IoGetInitialStack();

NTSTATUS IoGetIommuInterface(
  ULONG                Version,
  PDMA_IOMMU_INTERFACE InterfaceOut
);

NTSTATUS IoGetIommuInterfaceEx(
  ULONG                   Version,
  ULONGLONG               Flags,
  PDMA_IOMMU_INTERFACE_EX InterfaceOut
);

IO_PRIORITY_HINT IoGetIoPriorityHint(
  [in] PIRP Irp
);

__drv_aliasesMem PIO_STACK_LOCATION IoGetNextIrpStackLocation(
  [in] PIRP Irp
);


PDEVICE_OBJECT IoGetRelatedDeviceObject(
  [in] PFILE_OBJECT FileObject
);

ULONG_PTR IoGetRemainingStackSize();

void IoGetStackLimits(
  [out] PULONG_PTR LowLimit,
  [out] PULONG_PTR HighLimit
);


void IoInitializeDpcRequest(
  [in] PDEVICE_OBJECT  DeviceObject,
  [in] PIO_DPC_ROUTINE DpcRoutine
);

void IoInitializeIrp(
  [in, out] PIRP   Irp,
  [in]      USHORT PacketSize,
  [in]      CCHAR  StackSize
);

void IoInitializeRemoveLock(
  [in]  Lock,
  [in]  Tag,
  [in]  Maxmin,
  [in]  HighWater
);

NTSTATUS IoInitializeTimer(
  [in]           PDEVICE_OBJECT         DeviceObject,
  [in]           PIO_TIMER_ROUTINE      TimerRoutine,
  [in, optional] __drv_aliasesMem PVOID Context
);

void IoInitializeWorkItem(
  [in] PVOID        IoObject,
  [in] PIO_WORKITEM IoWorkItem
);

void IoInvalidateDeviceRelations(
  [in] PDEVICE_OBJECT       DeviceObject,
  [in] DEVICE_RELATION_TYPE Type
);

void IoInvalidateDeviceState(
  [in] PDEVICE_OBJECT PhysicalDeviceObject
);

BOOLEAN IoIs32bitProcess(
  [in, optional] PIRP Irp
);

BOOLEAN IoIsErrorUserInduced(
   Status
);

BOOLEAN IoIsWdmVersionAvailable(
  [in] UCHAR MajorVersion,
  [in] UCHAR MinorVersion
);

void IoMarkIrpPending(
  [in, out] PIRP Irp
);

typedef struct _IOMMU_DEVICE_CREATION_CONFIGURATION {
  LIST_ENTRY                               NextConfiguration;
  IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE ConfigType;
  union {
    IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI  Acpi;
    PVOID                                     DeviceId;
    IOMMU_DEVICE_CREATION_CONFIGURATION_PASID Pasid;
  };
} IOMMU_DEVICE_CREATION_CONFIGURATION, *PIOMMU_DEVICE_CREATION_CONFIGURATION;

typedef struct _IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI {
  UINT32 InputMappingBase;
  UINT32 MappingsCount;
} IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI, *PIOMMU_DEVICE_CREATION_CONFIGURATION_ACPI;

typedef enum _IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE {
  IommuDeviceCreationConfigTypeNone,
  IommuDeviceCreationConfigTypeAcpi,
  IommuDeviceCreationConfigTypeDeviceId,
  IommuDeviceCreationConfigTypePasid,
  IommuDeviceCreationConfigTypeMax
} IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE, *PIOMMU_DEVICE_CREATION_CONFIGURATION_TYPE;

typedef union _IOMMU_DMA_DOMAIN_CREATION_FLAGS {
  struct {
    ULONGLONG Reserved : 64;
  };
  ULONGLONG AsUlonglong;
} IOMMU_DMA_DOMAIN_CREATION_FLAGS, *PIOMMU_DMA_DOMAIN_CREATION_FLAGS;

typedef enum _IOMMU_DMA_DOMAIN_TYPE {
  DomainTypeTranslate,
  DomainTypePassThrough,
  DomainTypeUnmanaged,
  DomainTypeTranslateS1,
  DomainTypeMax
} IOMMU_DMA_DOMAIN_TYPE, *PIOMMU_DMA_DOMAIN_TYPE;

typedef struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN {
  IOMMU_DMA_LOGICAL_ADDRESS LogicalAddressBase;
  SIZE_T                    Size;
} IOMMU_DMA_LOGICAL_ADDRESS_TOKEN, *PIOMMU_DMA_LOGICAL_ADDRESS_TOKEN;

typedef struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT {
  PIOMMU_DMA_LOGICAL_ADDRESS_TOKEN OwningToken;
  SIZE_T                           Offset;
  SIZE_T                           Size;
} IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT, *PIOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT;

typedef struct _IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG {
  IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE LogicalAllocatorType;
  union {
    struct {
      ULONG AddressWidth;
    } BuddyAllocatorConfig;
  };
} IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG, *PIOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG;

typedef enum _IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE {
  IommuDmaLogicalAllocatorNone,
  IommuDmaLogicalAllocatorBuddy,
  IommuDmaLogicalAllocatorMax
} IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE, *PIOMMU_DMA_LOGICAL_ALLOCATOR_TYPE;

typedef struct _IOMMU_DMA_RESERVED_REGION {
  struct _IOMMU_DMA_RESERVED_REGION *RegionNext;
  IOMMU_DMA_LOGICAL_ADDRESS         Base;
  SIZE_T                            NumberOfPages;
  BOOLEAN                           ShouldMap;
} IOMMU_DMA_RESERVED_REGION, *PIOMMU_DMA_RESERVED_REGION;

typedef struct _IOMMU_INTERFACE_STATE_CHANGE {
  IOMMU_INTERFACE_STATE_CHANGE_FIELDS PresentFields;
  ULONG                               AvailableDomainTypes;
} IOMMU_INTERFACE_STATE_CHANGE, *PIOMMU_INTERFACE_STATE_CHANGE;

typedef union _IOMMU_INTERFACE_STATE_CHANGE_FIELDS {
  struct {
    ULONG AvailableDomainTypes : 1;
    ULONG Reserved : 31;
  } DUMMYSTRUCTNAME;
  ULONG  AsULONG;
} IOMMU_INTERFACE_STATE_CHANGE_FIELDS, *PIOMMU_INTERFACE_STATE_CHANGE_FIELDS;

typedef struct _IOMMU_MAP_PHYSICAL_ADDRESS {
  IOMMU_MAP_PHYSICAL_ADDRESS_TYPE MapType;
  union {
    struct {
      PMDL Mdl;
    } Mdl;
    struct {
      PHYSICAL_ADDRESS Base;
      SIZE_T           Size;
    } ContiguousRange;
    struct {
      PPFN_NUMBER PageFrame;
      SIZE_T      NumberOfPages;
    } PfnArray;
  };
} IOMMU_MAP_PHYSICAL_ADDRESS, *PIOMMU_MAP_PHYSICAL_ADDRESS;

typedef enum _IOMMU_MAP_PHYSICAL_ADDRESS_TYPE {
  MapPhysicalAddressTypeMdl,
  MapPhysicalAddressTypeContiguousRange,
  MapPhysicalAddressTypePfn,
  MapPhysicalAddressTypeMax
} IOMMU_MAP_PHYSICAL_ADDRESS_TYPE, *PIOMMU_MAP_PHYSICAL_ADDRESS_TYPE;

NTSTATUS IoOpenDeviceInterfaceRegistryKey(
  [in]  PUNICODE_STRING SymbolicLinkName,
  [in]  ACCESS_MASK     DesiredAccess,
  [out] PHANDLE         DeviceInterfaceRegKey
);

NTSTATUS IoOpenDeviceRegistryKey(
  [in]  PDEVICE_OBJECT DeviceObject,
  [in]  ULONG          DevInstKeyType,
  [in]  ACCESS_MASK    DesiredAccess,
  [out] PHANDLE        DeviceRegKey
);

NTSTATUS IoOpenDriverRegistryKey(
  [in]  PDRIVER_OBJECT     DriverObject,
  [in]  DRIVER_REGKEY_TYPE RegKeyType,
  [in]  ACCESS_MASK        DesiredAccess,
  [in]  ULONG              Flags,
  [out] PHANDLE            DriverRegKey
);

NTSTATUS IoQueryKsrPersistentMemorySize(
  PDRIVER_OBJECT DriverObject,
  PDEVICE_OBJECT PhysicalDeviceObject,
  PSIZE_T        BufferSize
);

NTSTATUS IoQueryKsrPersistentMemorySizeEx(
  PDRIVER_OBJECT  DriverObject,
  PDEVICE_OBJECT  PhysicalDeviceObject,
  PUNICODE_STRING PhysicalDeviceId,
  PUSHORT         DataTag,
  PULONG          DataVersion,
  PSIZE_T         BufferSize
);

void IoQueueWorkItem(
  [in]           __drv_aliasesMem PIO_WORKITEM IoWorkItem,
  [in]           PIO_WORKITEM_ROUTINE          WorkerRoutine,
  [in]           WORK_QUEUE_TYPE               QueueType,
  [in, optional] __drv_aliasesMem PVOID        Context
);

void IoQueueWorkItemEx(
  [in]           __drv_aliasesMem PIO_WORKITEM IoWorkItem,
  [in]           PIO_WORKITEM_ROUTINE_EX       WorkerRoutine,
  [in]           WORK_QUEUE_TYPE               QueueType,
  [in, optional] __drv_aliasesMem PVOID        Context
);

NTSTATUS
IoRegisterContainerNotification(
    _In_ IO_CONTAINER_NOTIFICATION_CLASS NotificationClass,
    _In_ PIO_CONTAINER_NOTIFICATION_FUNCTION CallbackFunction,
    _In_reads_bytes_opt_(NotificationInformationLength) PVOID NotificationInformation,
    _In_ ULONG NotificationInformationLength,
    _Out_ PVOID * CallbackRegistration
    );

    NTSTATUS IoRegisterDeviceInterface(
  [in]           PDEVICE_OBJECT  PhysicalDeviceObject,
  [in]           const GUID      *InterfaceClassGuid,
  [in, optional] PUNICODE_STRING ReferenceString,
  [out]          PUNICODE_STRING SymbolicLinkName
);

NTSTATUS IoRegisterLastChanceShutdownNotification(
  [in] PDEVICE_OBJECT DeviceObject
);

NTSTATUS IoRegisterPlugPlayNotification(
  [in]           IO_NOTIFICATION_EVENT_CATEGORY        EventCategory,
  [in]           ULONG                                 EventCategoryFlags,
  [in, optional] PVOID                                 EventCategoryData,
  [in]           PDRIVER_OBJECT                        DriverObject,
  [in]           PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine,
  [in, optional] __drv_aliasesMem PVOID                Context,
  [out]          PVOID                                 *NotificationEntry
);

NTSTATUS IoRegisterShutdownNotification(
  [in] PDEVICE_OBJECT DeviceObject
);

void IoReleaseCancelSpinLock(
  KIRQL Irql
);

void IoReleaseRemoveLock(
  [in]  RemoveLock,
  [in]  Tag
);

void IoReleaseRemoveLockAndWait(
  [in]  RemoveLock,
  [in]  Tag
);

void IoRemoveLinkShareAccess(
  [in]                PFILE_OBJECT       FileObject,
  [in, out]           PSHARE_ACCESS      ShareAccess,
  [in, out, optional] PLINK_SHARE_ACCESS LinkShareAccess
);

void IoRemoveShareAccess(
  [in]      PFILE_OBJECT  FileObject,
  [in, out] PSHARE_ACCESS ShareAccess
);

void IoReportInterruptActive(
  [in] PIO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS Parameters
);

void IoReportInterruptInactive(
  [in] PIO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS Parameters
);

NTSTATUS IoReportTargetDeviceChange(
  [in] PDEVICE_OBJECT PhysicalDeviceObject,
  [in] PVOID          NotificationStructure
);

NTSTATUS IoReportTargetDeviceChangeAsynchronous(
  [in]           PDEVICE_OBJECT                   PhysicalDeviceObject,
  [in]           PVOID                            NotificationStructure,
  [in, optional] PDEVICE_CHANGE_COMPLETE_CALLBACK Callback,
  [in, out]      PVOID                            Context
);

void IoRequestDeviceEject(
  [in] PDEVICE_OBJECT PhysicalDeviceObject
);

void IoRequestDpc(
  [in] PDEVICE_OBJECT         DeviceObject,
  [in] PIRP                   Irp,
  [in] __drv_aliasesMem PVOID Context
);

NTSTATUS IoReserveKsrPersistentMemory(
  PDRIVER_OBJECT DriverObject,
  PDEVICE_OBJECT PhysicalDeviceObject,
  SIZE_T         Size,
  ULONG          Flags,
  PVOID          *DataHandle
);

NTSTATUS IoReserveKsrPersistentMemoryEx(
  PDRIVER_OBJECT  DriverObject,
  PDEVICE_OBJECT  PhysicalDeviceObject,
  PUNICODE_STRING PhysicalDeviceId,
  PUSHORT         DataTag,
  ULONG           DataVersion,
  SIZE_T          Size,
  ULONG           Flags,
  PVOID           *DataHandle
);

void IoReuseIrp(
  [in, out] PIRP     Irp,
  [in]      NTSTATUS Iostatus
);

void Iosb64ToIosb(
   _iosb,
   _iosb64
);

void IosbToIosb64(
   _iosb64,
   _iosb
);

PDRIVER_CANCEL IoSetCancelRoutine(
  [in] PIRP           Irp,
  [in] PDRIVER_CANCEL CancelRoutine
);

void IoSetCompletionRoutine(
  [in]           PIRP                   Irp,
  [in, optional] PIO_COMPLETION_ROUTINE CompletionRoutine,
  [in, optional] __drv_aliasesMem PVOID Context,
  [in]           BOOLEAN                InvokeOnSuccess,
  [in]           BOOLEAN                InvokeOnError,
  [in]           BOOLEAN                InvokeOnCancel
);

NTSTATUS IoSetCompletionRoutineEx(
  [in]           PDEVICE_OBJECT         DeviceObject,
  [in]           PIRP                   Irp,
  [in]           PIO_COMPLETION_ROUTINE CompletionRoutine,
  [in, optional] PVOID                  Context,
  [in]           BOOLEAN                InvokeOnSuccess,
  [in]           BOOLEAN                InvokeOnError,
  [in]           BOOLEAN                InvokeOnCancel
);

NTSTATUS IoSetDeviceInterfacePropertyData(
  [in]           PUNICODE_STRING  SymbolicLinkName,
  [in]           const DEVPROPKEY *PropertyKey,
  [in]           LCID             Lcid,
  [in]           ULONG            Flags,
  [in]           DEVPROPTYPE      Type,
  [in]           ULONG            Size,
  [in, optional] PVOID            Data
);

NTSTATUS IoSetDeviceInterfaceState(
  [in] PUNICODE_STRING SymbolicLinkName,
  [in] BOOLEAN         Enable
);

NTSTATUS IoSetDevicePropertyData(
  [in]           PDEVICE_OBJECT   Pdo,
  [in]           const DEVPROPKEY *PropertyKey,
  [in]           LCID             Lcid,
  [in]           ULONG            Flags,
  [in]           DEVPROPTYPE      Type,
  [in]           ULONG            Size,
  [in, optional] PVOID            Data
);

NTSTATUS IoSetIoPriorityHint(
  [in] PIRP             Irp,
  [in] IO_PRIORITY_HINT PriorityHint
);

void IoSetLinkShareAccess(
  [in]                ACCESS_MASK        DesiredAccess,
  [in]                ULONG              DesiredShareAccess,
  [in, out]           PFILE_OBJECT       FileObject,
  [in, out]           PSHARE_ACCESS      ShareAccess,
  [in, out, optional] PLINK_SHARE_ACCESS LinkShareAccess,
  [in]                ULONG              IoShareAccessFlags
);

void IoSetNextIrpStackLocation(
  [in, out] PIRP Irp
);


void IoSetShareAccess(
  [in]      ACCESS_MASK   DesiredAccess,
  [in]      ULONG         DesiredShareAccess,
  [in, out] PFILE_OBJECT  FileObject,
  [out]     PSHARE_ACCESS ShareAccess
);

void IoSetShareAccessEx(
  [in]           ACCESS_MASK   DesiredAccess,
  [in]           ULONG         DesiredShareAccess,
  [in, out]      PFILE_OBJECT  FileObject,
  [out]          PSHARE_ACCESS ShareAccess,
  [in, optional] PBOOLEAN      WritePermission
);

void IoSetStartIoAttributes(
  [in] PDEVICE_OBJECT DeviceObject,
  [in] BOOLEAN        DeferredStartIo,
  [in] BOOLEAN        NonCancelable
);

void IoSizeOfIrp(
  [in]  StackSize
);

ULONG IoSizeofWorkItem();

void IoStartNextPacket(
  [in] PDEVICE_OBJECT DeviceObject,
  [in] BOOLEAN        Cancelable
);

void IoStartNextPacketByKey(
  [in] PDEVICE_OBJECT DeviceObject,
  [in] BOOLEAN        Cancelable,
  [in] ULONG          Key
);

void IoStartPacket(
  [in]           PDEVICE_OBJECT DeviceObject,
  [in]           PIRP           Irp,
  [in, optional] PULONG         Key,
  [in, optional] PDRIVER_CANCEL CancelFunction
);

void IoStartTimer(
  [in] PDEVICE_OBJECT DeviceObject
);

void IoStopTimer(
  [in] PDEVICE_OBJECT DeviceObject
);

void IoUninitializeWorkItem(
  [in] PIO_WORKITEM IoWorkItem
);

void IoUnregisterContainerNotification(
  [in] PVOID CallbackRegistration
);

NTSTATUS IoUnregisterPlugPlayNotification(
  [in] PVOID NotificationEntry
);

NTSTATUS IoUnregisterPlugPlayNotificationEx(
  [in] PVOID NotificationEntry
);

void IoUnregisterShutdownNotification(
  [in] PDEVICE_OBJECT DeviceObject
);

void IoUpdateLinkShareAccess(
  [in]                PFILE_OBJECT       FileObject,
  [in, out]           PSHARE_ACCESS      ShareAccess,
  [in, out, optional] PLINK_SHARE_ACCESS LinkShareAccess
);

void IoUpdateLinkShareAccessEx(
  PFILE_OBJECT       FileObject,
  PSHARE_ACCESS      ShareAccess,
  PLINK_SHARE_ACCESS LinkShareAccess,
  ULONG              IoShareAccessFlags
);

void IoUpdateShareAccess(
  [in]      PFILE_OBJECT  FileObject,
  [in, out] PSHARE_ACCESS ShareAccess
);

NTSTATUS IoValidateDeviceIoControlAccess(
  [in] PIRP  Irp,
  [in] ULONG RequiredAccess
);

LOGICAL IoWithinStackLimits(
  [in] ULONG_PTR RegionStart,
  [in] SIZE_T    RegionSize
);

NTSTATUS IoWMIAllocateInstanceIds(
  [in]  LPCGUID Guid,
  [in]  ULONG   InstanceCount,
  [out] ULONG   *FirstInstanceId
);

NTSTATUS IoWMIDeviceObjectToInstanceName(
  [in]  PVOID           DataBlockObject,
  [in]  PDEVICE_OBJECT  DeviceObject,
  [out] PUNICODE_STRING InstanceName
);

ULONG IoWMIDeviceObjectToProviderId(
  [in] PDEVICE_OBJECT DeviceObject
);

NTSTATUS IoWMIExecuteMethod(
  [in]      PVOID           DataBlockObject,
  [in]      PUNICODE_STRING InstanceName,
  [in]      ULONG           MethodId,
  [in]      ULONG           InBufferSize,
  [in, out] PULONG          OutBufferSize,
  [in, out] PUCHAR          InOutBuffer
);

NTSTATUS IoWMIHandleToInstanceName(
  [in]  PVOID           DataBlockObject,
  [in]  HANDLE          FileHandle,
  [out] PUNICODE_STRING InstanceName
);

NTSTATUS IoWMIOpenBlock(
  [in]  LPCGUID Guid,
  [in]  ULONG   DesiredAccess,
  [out] PVOID   *DataBlockObject
);

NTSTATUS IoWMIQueryAllData(
  [in]            PVOID  DataBlockObject,
  [in, out]       PULONG InOutBufferSize,
  [out, optional] PVOID  OutBuffer
);

NTSTATUS IoWMIQueryAllDataMultiple(
  [in]            PVOID  *DataBlockObjectList,
  [in]            ULONG  ObjectCount,
  [in, out]       PULONG InOutBufferSize,
  [out, optional] PVOID  OutBuffer
);

NTSTATUS IoWMIQuerySingleInstance(
  [in]            PVOID           DataBlockObject,
  [in]            PUNICODE_STRING InstanceName,
  [in, out]       PULONG          InOutBufferSize,
  [out, optional] PVOID           OutBuffer
);

NTSTATUS IoWMIQuerySingleInstanceMultiple(
  [in]            PVOID           *DataBlockObjectList,
  [in]            PUNICODE_STRING InstanceNames,
  [in]            ULONG           ObjectCount,
  [in, out]       PULONG          InOutBufferSize,
  [out, optional] PVOID           OutBuffer
);

NTSTATUS IoWMIRegistrationControl(
  [in] PDEVICE_OBJECT DeviceObject,
  [in] ULONG          Action
);

NTSTATUS IoWMISetNotificationCallback(
  [in, out]      PVOID                     Object,
  [in]           WMI_NOTIFICATION_CALLBACK Callback,
  [in, optional] PVOID                     Context
);

NTSTATUS IoWMISetSingleInstance(
  [in] PVOID           DataBlockObject,
  [in] PUNICODE_STRING InstanceName,
  [in] ULONG           Version,
  [in] ULONG           ValueBufferSize,
  [in] PVOID           ValueBuffer
);

NTSTATUS IoWMISetSingleItem(
  [in] PVOID           DataBlockObject,
  [in] PUNICODE_STRING InstanceName,
  [in] ULONG           DataItemId,
  [in] ULONG           Version,
  [in] ULONG           ValueBufferSize,
  [in] PVOID           ValueBuffer
);

NTSTATUS IoWMISuggestInstanceName(
  [in, optional] PDEVICE_OBJECT  PhysicalDeviceObject,
  [in, optional] PUNICODE_STRING SymbolicLinkName,
  [in]           BOOLEAN         CombineNames,
  [out]          PUNICODE_STRING SuggestedInstanceName
);

NTSTATUS IoWMIWriteEvent(
  [in, out] PVOID WnodeEventItem
);

void IoWriteErrorLogEntry(
  [in] PVOID ElEntry
);

NTSTATUS IoWriteKsrPersistentMemory(
  PVOID  DataHandle,
  PVOID  Buffer,
  SIZE_T Size
);

typedef struct _IRP {
  CSHORT                    Type;
  USHORT                    Size;
  PMDL                      MdlAddress;
  ULONG                     Flags;
  union {
    struct _IRP     *MasterIrp;
    __volatile LONG IrpCount;
    PVOID           SystemBuffer;
  } AssociatedIrp;
  LIST_ENTRY                ThreadListEntry;
  IO_STATUS_BLOCK           IoStatus;
  KPROCESSOR_MODE           RequestorMode;
  BOOLEAN                   PendingReturned;
  CHAR                      StackCount;
  CHAR                      CurrentLocation;
  BOOLEAN                   Cancel;
  KIRQL                     CancelIrql;
  CCHAR                     ApcEnvironment;
  UCHAR                     AllocationFlags;
  union {
    PIO_STATUS_BLOCK UserIosb;
    PVOID            IoRingContext;
  };
  PKEVENT                   UserEvent;
  union {
    struct {
      union {
        PIO_APC_ROUTINE UserApcRoutine;
        PVOID           IssuingProcess;
      };
      union {
        PVOID                 UserApcContext;
#if ...
        _IORING_OBJECT        *IoRing;
#else
        struct _IORING_OBJECT *IoRing;
#endif
      };
    } AsynchronousParameters;
    LARGE_INTEGER AllocationSize;
  } Overlay;
  __volatile PDRIVER_CANCEL CancelRoutine;
  PVOID                     UserBuffer;
  union {
    struct {
      union {
        KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
        struct {
          PVOID DriverContext[4];
        };
      };
      PETHREAD     Thread;
      PCHAR        AuxiliaryBuffer;
      struct {
        LIST_ENTRY ListEntry;
        union {
          struct _IO_STACK_LOCATION *CurrentStackLocation;
          ULONG                     PacketType;
        };
      };
      PFILE_OBJECT OriginalFileObject;
    } Overlay;
    KAPC  Apc;
    PVOID CompletionKey;
  } Tail;
} IRP;

typedef enum _IRQ_DEVICE_POLICY {
  IrqPolicyMachineDefault = 0,
  IrqPolicyAllCloseProcessors = 1,
  IrqPolicyOneCloseProcessor = 2,
  IrqPolicyAllProcessorsInMachine = 3,
  IrqPolicySpecifiedProcessors = 4,
  IrqPolicySpreadMessagesAcrossAllProcessors = 5,
  IrqPolicyAllProcessorsInMachineWhenSteered = 6
} IRQ_DEVICE_POLICY, *PIRQ_DEVICE_POLICY;

typedef enum _IRQ_PRIORITY {
  IrqPriorityUndefined,
  IrqPriorityLow,
  IrqPriorityNormal,
  IrqPriorityHigh
} IRQ_PRIORITY, *PIRQ_PRIORITY;

BOOLEAN IsListEmpty(
  [in] const LIST_ENTRY *ListHead
);

typedef struct _KBUGCHECK_ADD_PAGES {
  PVOID     Context;
  ULONG     Flags;
  ULONG     BugCheckCode;
  ULONG_PTR Address;
  ULONG_PTR Count;
} KBUGCHECK_ADD_PAGES, *PKBUGCHECK_ADD_PAGES;

typedef enum _KBUGCHECK_CALLBACK_REASON {
  KbCallbackInvalid,
  KbCallbackReserved1,
  KbCallbackSecondaryDumpData,
  KbCallbackDumpIo,
  KbCallbackAddPages,
  KbCallbackSecondaryMultiPartDumpData,
  KbCallbackRemovePages,
  KbCallbackTriageDumpData,
  KbCallbackReserved2
} KBUGCHECK_CALLBACK_REASON;


typedef struct _KBUGCHECK_DUMP_IO {
  IN ULONG64                Offset;
  IN PVOID                  Buffer;
  IN ULONG                  BufferLength;
  IN KBUGCHECK_DUMP_IO_TYPE Type;
} KBUGCHECK_DUMP_IO, *PKBUGCHECK_DUMP_IO;

typedef enum _KBUGCHECK_DUMP_IO_TYPE {
  KbDumpIoInvalid,
  KbDumpIoHeader,
  KbDumpIoBody,
  KbDumpIoSecondaryData,
  KbDumpIoComplete
} KBUGCHECK_DUMP_IO_TYPE;

typedef struct _KBUGCHECK_SECONDARY_DUMP_DATA {
  IN PVOID  InBuffer;
  IN ULONG  InBufferLength;
  IN ULONG  MaximumAllowed;
  OUT GUID  Guid;
  OUT PVOID OutBuffer;
  OUT ULONG OutBufferLength;
} KBUGCHECK_SECONDARY_DUMP_DATA, *PKBUGCHECK_SECONDARY_DUMP_DATA;

typedef struct _KDPC_WATCHDOG_INFORMATION {
  ULONG DpcTimeLimit;
  ULONG DpcTimeCount;
  ULONG DpcWatchdogLimit;
  ULONG DpcWatchdogCount;
  ULONG Reserved;
} KDPC_WATCHDOG_INFORMATION, *PKDPC_WATCHDOG_INFORMATION;

typedef struct _KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT {
  KE_PROCESSOR_CHANGE_NOTIFY_STATE State;
  ULONG                            NtNumber;
  NTSTATUS                         Status;
  PROCESSOR_NUMBER                 ProcNumber;
} KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT, *PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT;

typedef enum {
  KeProcessorAddStartNotify,
  KeProcessorAddCompleteNotify,
  KeProcessorAddFailureNotify
} KE_PROCESSOR_CHANGE_NOTIFY_STATE;

void KeAcquireGuardedMutex(
  PKGUARDED_MUTEX Mutex
);

void KeAcquireGuardedMutexUnsafe(
  PKGUARDED_MUTEX FastMutex
);

void KeAcquireInStackQueuedSpinLock(
  PKSPIN_LOCK         SpinLock,
  PKLOCK_QUEUE_HANDLE LockHandle
);

void KeAcquireInStackQueuedSpinLockAtDpcLevel(
  PKSPIN_LOCK         SpinLock,
  PKLOCK_QUEUE_HANDLE LockHandle
);

void KeAcquireInStackQueuedSpinLockForDpc(
  PKSPIN_LOCK         SpinLock,
  PKLOCK_QUEUE_HANDLE LockHandle
);

KIRQL KeAcquireInterruptSpinLock(
  PKINTERRUPT Interrupt
);

void KeAcquireSpinLock(
   SpinLock,
   OldIrql
);

void KeAcquireSpinLockAtDpcLevel(
  [in, out] PKSPIN_LOCK SpinLock
);

KIRQL KeAcquireSpinLockForDpc(
  PKSPIN_LOCK SpinLock
);

KIRQL KeAcquireSpinLockRaiseToDpc(
  PKSPIN_LOCK SpinLock
);

NTSTATUS KeAddTriageDumpDataBlock(
  [_Inout_] PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray,
            PVOID                    Address,
  [_In_]    SIZE_T                   Size
);

BOOLEAN KeAreAllApcsDisabled();

BOOLEAN KeAreApcsDisabled();

void KeBugCheckEx(
  [in] ULONG     BugCheckCode,
  [in] ULONG_PTR BugCheckParameter1,
  [in] ULONG_PTR BugCheckParameter2,
  [in] ULONG_PTR BugCheckParameter3,
  [in] ULONG_PTR BugCheckParameter4
);

BOOLEAN KeCancelTimer(
  [in, out] PKTIMER unnamedParam1
);

void KeClearEvent(
  [in, out] PRKEVENT Event
);

NTSTATUS KeConvertAuxiliaryCounterToPerformanceCounter(
  [in]            ULONG64  AuxiliaryCounterValue,
  [out]           PULONG64 PerformanceCounterValue,
  [out, optional] PULONG64 ConversionError
);

NTSTATUS KeConvertPerformanceCounterToAuxiliaryCounter(
  [in]            ULONG64  PerformanceCounterValue,
  [out]           PULONG64 AuxiliaryCounterValue,
  [out, optional] PULONG64 ConversionError
);

NTSTATUS KeDelayExecutionThread(
  [in] KPROCESSOR_MODE WaitMode,
  [in] BOOLEAN         Alertable,
  [in] PLARGE_INTEGER  Interval
);

NTSTATUS KeDeregisterBoundCallback(
  [in] PVOID Handle
);

BOOLEAN KeDeregisterBugCheckCallback(
  [in, out] PKBUGCHECK_CALLBACK_RECORD CallbackRecord
);

BOOLEAN KeDeregisterBugCheckReasonCallback(
  [in, out] PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord
);

NTSTATUS KeDeregisterNmiCallback(
  [in] PVOID Handle
);

void KeDeregisterProcessorChangeCallback(
  [in] PVOID CallbackHandle

  void KeEnterCriticalRegion();

  void KeEnterGuardedRegion();

void KeFlushIoBuffers(
  [in] PMDL    Mdl,
  [in] BOOLEAN ReadOperation,
  [in] BOOLEAN DmaOperation
);

void KeFlushQueuedDpcs();

void KefReleaseSpinLockFromDpcLevel(
  [in, out] PKSPIN_LOCK SpinLock
);

NTHALAPI KIRQL KeGetCurrentIrql();

USHORT KeGetCurrentNodeNumber();

ULONG KeGetCurrentProcessorNumberEx(
  [out, optional] PPROCESSOR_NUMBER ProcNumber
);

PKTHREAD KeGetCurrentThread();

ULONG KeGetProcessorIndexFromNumber(
  [in] PPROCESSOR_NUMBER ProcNumber
);

NTSTATUS KeGetProcessorNumberFromIndex(
  [in]  ULONG             ProcIndex,
  [out] PPROCESSOR_NUMBER ProcNumber
);

ULONG KeGetRecommendedSharedDataAlignment();

NTSTATUS KeInitializeCrashDumpHeader(
  [in]            ULONG  DumpType,
  [in]            ULONG  Flags,
  [out]           PVOID  Buffer,
  [in]            ULONG  BufferSize,
  [out, optional] PULONG BufferNeeded
);

void KeInitializeDeviceQueue(
  [out] PKDEVICE_QUEUE DeviceQueue
);

void KeInitializeDpc(
  [out]          __drv_aliasesMem PRKDPC Dpc,
  [in]           PKDEFERRED_ROUTINE      DeferredRoutine,
  [in, optional] __drv_aliasesMem PVOID  DeferredContext
);


void KeInitializeEvent(
  [out] PRKEVENT   Event,
  [in]  EVENT_TYPE Type,
  [in]  BOOLEAN    State
);

void KeInitializeGuardedMutex(
  [out] PKGUARDED_MUTEX Mutex
);

void KeInitializeMutex(
  [out] PRKMUTEX Mutex,
  [in]  ULONG    Level
);

void KeInitializeSemaphore(
  [out] PRKSEMAPHORE Semaphore,
  [in]  LONG         Count,
  [in]  LONG         Limit
);

void KeInitializeSpinLock(
  [out] PKSPIN_LOCK SpinLock
);

void KeInitializeThreadedDpc(
  [out]          PRKDPC             Dpc,
  [in]           PKDEFERRED_ROUTINE DeferredRoutine,
  [in, optional] PVOID              DeferredContext
);

void KeInitializeTimer(
  [out] PKTIMER Timer
);

void KeInitializeTimerEx(
  [out] PKTIMER    Timer,
  [in]  TIMER_TYPE Type
);

BOOLEAN KeInsertByKeyDeviceQueue(
  [in, out] PKDEVICE_QUEUE       DeviceQueue,
  [in, out] PKDEVICE_QUEUE_ENTRY DeviceQueueEntry,
  [in]      ULONG                SortKey
);

BOOLEAN KeInsertDeviceQueue(
  [in, out] PKDEVICE_QUEUE       DeviceQueue,
  [in, out] PKDEVICE_QUEUE_ENTRY DeviceQueueEntry
);


BOOLEAN KeInsertQueueDpc(
  [in, out]      PRKDPC                 Dpc,
  [in, optional] PVOID                  SystemArgument1,
  [in, optional] __drv_aliasesMem PVOID SystemArgument2
);

ULONG_PTR KeIpiGenericCall(
  [in] PKIPI_BROADCAST_WORKER BroadcastFunction,
  [in] ULONG_PTR              Context
);

LOGICAL KeIsExecutingDpc();

void KeLeaveCriticalRegion();

void KeLeaveGuardedRegion();

void KeLowerIrql(
  [in] KIRQL NewIrql
);

void KeMemoryBarrier();

USHORT KeQueryActiveGroupCount();

ULONG KeQueryActiveProcessorCount(
  [out, optional] PKAFFINITY ActiveProcessors
);

ULONG KeQueryActiveProcessorCountEx(
  [in] USHORT GroupNumber
);


KAFFINITY KeQueryActiveProcessors();


NTSTATUS KeQueryAuxiliaryCounterFrequency(
  [out, optional] PULONG64 AuxiliaryCounterFrequency
);


NTSTATUS KeQueryDpcWatchdogInformation(
  [out] PKDPC_WATCHDOG_INFORMATION WatchdogInformation
);

KAFFINITY KeQueryGroupAffinity(
  [in] USHORT GroupNumber
);

USHORT KeQueryHighestNodeNumber();

ULONGLONG KeQueryInterruptTime();

ULONG64 KeQueryInterruptTimePrecise(
  [out] PULONG64 QpcTimeStamp
);

NTSTATUS KeQueryLogicalProcessorRelationship(
  [in, optional]  PPROCESSOR_NUMBER                        ProcessorNumber,
  [in]            LOGICAL_PROCESSOR_RELATIONSHIP           RelationshipType,
  [out, optional] PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
  [in, out]       PULONG                                   Length
);

USHORT KeQueryMaximumGroupCount();


ULONG KeQueryMaximumProcessorCount();

ULONG KeQueryMaximumProcessorCountEx(
  [in] USHORT GroupNumber
);

void KeQueryNodeActiveAffinity(
  [in]            USHORT          NodeNumber,
  [out, optional] PGROUP_AFFINITY Affinity,
  [out, optional] PUSHORT         Count
);

NTSTATUS KeQueryNodeActiveAffinity2(
  [in]  USHORT          NodeNumber,
  [out] PGROUP_AFFINITY GroupAffinities,
  [in]  USHORT          GroupAffinitiesCount,
  [out] PUSHORT         GroupAffinitiesRequired
);

ULONG KeQueryNodeActiveProcessorCount(
  [in] USHORT NodeNumber
);

USHORT KeQueryNodeMaximumProcessorCount(
  [in] USHORT NodeNumber
);


NTHALAPI LARGE_INTEGER KeQueryPerformanceCounter(
  [out, optional] PLARGE_INTEGER PerformanceFrequency
);

KPRIORITY KeQueryPriorityThread(
  [in] PKTHREAD Thread
);

ULONG KeQueryRuntimeThread(
  [in]  PKTHREAD Thread,
  [out] PULONG   UserTime
);

void KeQuerySystemTime(
  [out] PLARGE_INTEGER CurrentTime
);

void KeQuerySystemTimePrecise(
  [out] PLARGE_INTEGER CurrentTime
);

void KeQueryTickCount(
  [out]  CurrentCount
);

ULONG KeQueryTimeIncrement();

ULONG64 KeQueryTotalCycleTimeThread(
  [in, out] PKTHREAD Thread,
  [out]     PULONG64 CycleTimeStamp
);

ULONGLONG KeQueryUnbiasedInterruptTime();

VOID KeRaiseIrql(
  _In_  KIRQL  NewIrql,
  _Out_ PKIRQL OldIrql
);

_DECL_HAL_KE_IMPORT KIRQL KeRaiseIrqlToDpcLevel();

LONG KeReadStateEvent(
  [in] PRKEVENT Event
);

LONG KeReadStateMutex(
  [in] PRKMUTEX Mutex
);

LONG KeReadStateSemaphore(
  [in] PRKSEMAPHORE Semaphore
);

BOOLEAN KeReadStateTimer(
  [in] PKTIMER Timer
);

PVOID KeRegisterBoundCallback(
  [in] PBOUND_CALLBACK CallbackRoutine
);

BOOLEAN KeRegisterBugCheckCallback(
  [out]          PKBUGCHECK_CALLBACK_RECORD  CallbackRecord,
  [in]           PKBUGCHECK_CALLBACK_ROUTINE CallbackRoutine,
  [in, optional] PVOID                       Buffer,
  [in]           ULONG                       Length,
  [in]           PUCHAR                      Component
);

BOOLEAN KeRegisterBugCheckReasonCallback(
  [out] PKBUGCHECK_REASON_CALLBACK_RECORD  CallbackRecord,
  [in]  PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine,
  [in]  KBUGCHECK_CALLBACK_REASON          Reason,
  [in]  PUCHAR                             Component
);

PVOID KeRegisterNmiCallback(
  [in]           PNMI_CALLBACK CallbackRoutine,
  [in, optional] PVOID         Context
);

PVOID KeRegisterProcessorChangeCallback(
  [in]           PPROCESSOR_CALLBACK_FUNCTION CallbackFunction,
  [in, optional] PVOID                        CallbackContext,
  [in]           ULONG                        Flags
);

void KeReleaseGuardedMutex(
  [in, out] PKGUARDED_MUTEX Mutex
);

void KeReleaseGuardedMutexUnsafe(
  [in, out] PKGUARDED_MUTEX FastMutex
);

void KeReleaseInStackQueuedSpinLock(
  [in] PKLOCK_QUEUE_HANDLE LockHandle
);

void KeReleaseInStackQueuedSpinLockForDpc(
  [in] PKLOCK_QUEUE_HANDLE LockHandle
);

void KeReleaseInStackQueuedSpinLockFromDpcLevel(
  [in] PKLOCK_QUEUE_HANDLE LockHandle
);

void KeReleaseInterruptSpinLock(
  [in, out] PKINTERRUPT Interrupt,
  [in]      KIRQL       OldIrql
);

LONG KeReleaseMutex(
  [in, out] PRKMUTEX Mutex,
  [in]      BOOLEAN  Wait
);

LONG KeReleaseSemaphore(
  [in, out] PRKSEMAPHORE Semaphore,
  [in]      KPRIORITY    Increment,
  [in]      LONG         Adjustment,
  [in]      BOOLEAN      Wait
);

VOID
KeReleaseSpinLock (
    _Inout_ PKSPIN_LOCK SpinLock,
    _In_ _IRQL_restores_ KIRQL NewIrql
);

void KeReleaseSpinLockForDpc(
  [in, out] PKSPIN_LOCK SpinLock,
  [in]      KIRQL       OldIrql
);

void KeReleaseSpinLockFromDpcLevel(
  [in, out] PKSPIN_LOCK SpinLock
);

PKDEVICE_QUEUE_ENTRY KeRemoveByKeyDeviceQueue(
  [in, out] PKDEVICE_QUEUE DeviceQueue,
  [in]      ULONG          SortKey
);


PKDEVICE_QUEUE_ENTRY KeRemoveDeviceQueue(
  [in, out] PKDEVICE_QUEUE DeviceQueue
);

BOOLEAN KeRemoveEntryDeviceQueue(
  [in, out] PKDEVICE_QUEUE       DeviceQueue,
  [in, out] PKDEVICE_QUEUE_ENTRY DeviceQueueEntry
);

BOOLEAN KeRemoveQueueDpc(
  [in, out] PRKDPC Dpc
);

LONG KeResetEvent(
  [in, out] PRKEVENT Event
);

void KeRestoreExtendedProcessorState(
  [in] PXSTATE_SAVE XStateSave
);

NTSTATUS KeRestoreFloatingPointState(
  [in] PKFLOATING_SAVE FloatSave
);

void KeRevertToUserAffinityThreadEx(
  [in] KAFFINITY Affinity
);

void KeRevertToUserAffinityThreadEx(
  [in] KAFFINITY Affinity
);

void KeRevertToUserGroupAffinityThread(
  [in] PGROUP_AFFINITY PreviousAffinity
);

typedef struct _KERNEL_CET_CONTEXT {
  ULONG64 Ssp;
  ULONG64 Rip;
  USHORT  SegCs;
  union {
    USHORT AllFlags;
    struct {
      USHORT UseWrss : 1;
      USHORT PopShadowStackOne : 1;
      USHORT Unused : 14;
    } DUMMYSTRUCTNAME;
  } DUMMYUNIONNAME;
  USHORT  Fill[2];
} KERNEL_CET_CONTEXT, *PKERNEL_CET_CONTEXT;

typedef struct _KERNEL_SOFT_RESTART_NOTIFICATION {
  USHORT Version;
  USHORT Size;
  GUID   Event;
} KERNEL_SOFT_RESTART_NOTIFICATION, *PKERNEL_SOFT_RESTART_NOTIFICATION;

NTSTATUS KeSaveExtendedProcessorState(
  [in]  ULONG64      Mask,
  [out] PXSTATE_SAVE XStateSave
);

NTSTATUS KeSaveFloatingPointState(
  [out] PKFLOATING_SAVE FloatSave
);

BOOLEAN KeSetCoalescableTimer(
  [in, out]      PKTIMER       Timer,
  [in]           LARGE_INTEGER DueTime,
  [in]           ULONG         Period,
  [in]           ULONG         TolerableDelay,
  [in, optional] PKDPC         Dpc
);

LONG KeSetEvent(
  [in, out] PRKEVENT  Event,
  [in]      KPRIORITY Increment,
  [in]      BOOLEAN   Wait
);

void KeSetImportanceDpc(
  [in, out] PRKDPC          Dpc,
  [in]      KDPC_IMPORTANCE Importance
);

KPRIORITY KeSetPriorityThread(
  [in, out] PKTHREAD  Thread,
  [in]      KPRIORITY Priority
);

void KeSetSystemAffinityThread(
  [in] KAFFINITY Affinity
);

KAFFINITY KeSetSystemAffinityThreadEx(
  [in] KAFFINITY Affinity
);

void KeSetSystemGroupAffinityThread(
  [in]            PGROUP_AFFINITY Affinity,
  [out, optional] PGROUP_AFFINITY PreviousAffinity
);

void KeSetTargetProcessorDpc(
  [in, out] PRKDPC Dpc,
  [in]      CCHAR  Number
);

NTSTATUS KeSetTargetProcessorDpcEx(
  [in, out] PKDPC             Dpc,
  [in]      PPROCESSOR_NUMBER ProcNumber
);

BOOLEAN KeSetTimer(
  [in, out]      PKTIMER       Timer,
  [in]           LARGE_INTEGER DueTime,
  [in, optional] PKDPC         Dpc
);

BOOLEAN KeSetTimerEx(
  [in, out]      PKTIMER       Timer,
  [in]           LARGE_INTEGER DueTime,
  [in]           LONG          Period,
  [in, optional] PKDPC         Dpc
);

LOGICAL KeShouldYieldProcessor();

NTHALAPI VOID KeStallExecutionProcessor(
  [in] ULONG MicroSeconds
);

NTHALAPI VOID KeStallExecutionProcessor(
  [in] ULONG MicroSeconds
);


BOOLEAN KeSynchronizeExecution(
  [in, out]      PKINTERRUPT            Interrupt,
  [in]           PKSYNCHRONIZE_ROUTINE  SynchronizeRoutine,
  [in, optional] __drv_aliasesMem PVOID SynchronizeContext
);

BOOLEAN KeTestSpinLock(
  [in] PKSPIN_LOCK SpinLock
);

BOOLEAN KeTryToAcquireGuardedMutex(
  [in, out] PKGUARDED_MUTEX Mutex
);

BOOLEAN KeTryToAcquireSpinLockAtDpcLevel(
  [in, out] PKSPIN_LOCK SpinLock
);

NTSTATUS
KeWaitForMultipleObjects (
    ULONG Count,
    PVOID Object[],
    WaitType,
    KWAIT_REASON WaitReason,
    KPROCESSOR_MODE WaitMode,
    BOOLEAN Alertable,
    PLARGE_INTEGER Timeout,
    PKWAIT_BLOCK WaitBlockArray
    );

NTSTATUS
KeWaitForSingleObject (
    PVOID Object,
    KWAIT_REASON WaitReason,
    KPROCESSOR_MODE WaitMode,
    BOOLEAN Alertable,
    PLARGE_INTEGER Timeout
    );

typedef struct _KEY_BASIC_INFORMATION {
  LARGE_INTEGER LastWriteTime;
  ULONG         TitleIndex;
  ULONG         NameLength;
  WCHAR         Name[1];
} KEY_BASIC_INFORMATION, *PKEY_BASIC_INFORMATION;

typedef struct _KEY_FULL_INFORMATION {
  LARGE_INTEGER LastWriteTime;
  ULONG         TitleIndex;
  ULONG         ClassOffset;
  ULONG         ClassLength;
  ULONG         SubKeys;
  ULONG         MaxNameLen;
  ULONG         MaxClassLen;
  ULONG         Values;
  ULONG         MaxValueNameLen;
  ULONG         MaxValueDataLen;
  WCHAR         Class[1];
} KEY_FULL_INFORMATION, *PKEY_FULL_INFORMATION;

typedef enum _KEY_INFORMATION_CLASS {
  KeyBasicInformation,
  KeyNodeInformation,
  KeyFullInformation,
  KeyNameInformation,
  KeyCachedInformation,
  KeyFlagsInformation,
  KeyVirtualizationInformation,
  KeyHandleTagsInformation,
  KeyTrustInformation,
  KeyLayerInformation,
  MaxKeyInfoClass
} KEY_INFORMATION_CLASS;

typedef struct _KEY_NODE_INFORMATION {
  LARGE_INTEGER LastWriteTime;
  ULONG         TitleIndex;
  ULONG         ClassOffset;
  ULONG         ClassLength;
  ULONG         NameLength;
  WCHAR         Name[1];
} KEY_NODE_INFORMATION, *PKEY_NODE_INFORMATION;

typedef enum _KEY_SET_INFORMATION_CLASS {
  KeyWriteTimeInformation,
  KeyWow64FlagsInformation,
  KeyControlFlagsInformation,
  KeySetVirtualizationInformation,
  KeySetDebugInformation,
  KeySetHandleTagsInformation,
  KeySetLayerInformation,
  MaxKeySetInfoClass
} KEY_SET_INFORMATION_CLASS;

typedef struct _KEY_VALUE_BASIC_INFORMATION {
  ULONG TitleIndex;
  ULONG Type;
  ULONG NameLength;
  WCHAR Name[1];
} KEY_VALUE_BASIC_INFORMATION, *PKEY_VALUE_BASIC_INFORMATION;

typedef struct _KEY_VALUE_ENTRY {
  PUNICODE_STRING ValueName;
  ULONG           DataLength;
  ULONG           DataOffset;
  ULONG           Type;
} KEY_VALUE_ENTRY, *PKEY_VALUE_ENTRY;

typedef struct _KEY_VALUE_FULL_INFORMATION {
  ULONG TitleIndex;
  ULONG Type;
  ULONG DataOffset;
  ULONG DataLength;
  ULONG NameLength;
  WCHAR Name[1];
} KEY_VALUE_FULL_INFORMATION, *PKEY_VALUE_FULL_INFORMATION;

typedef enum _KEY_VALUE_INFORMATION_CLASS {
  KeyValueBasicInformation,
  KeyValueFullInformation,
  KeyValuePartialInformation,
  KeyValueFullInformationAlign64,
  KeyValuePartialInformationAlign64,
  KeyValueLayerInformation,
  MaxKeyValueInfoClass
} KEY_VALUE_INFORMATION_CLASS;


typedef struct _KEY_VALUE_PARTIAL_INFORMATION {
  ULONG TitleIndex;
  ULONG Type;
  ULONG DataLength;
  UCHAR Data[1];
} KEY_VALUE_PARTIAL_INFORMATION, *PKEY_VALUE_PARTIAL_INFORMATION;

typedef struct _KEY_WRITE_TIME_INFORMATION {
  LARGE_INTEGER LastWriteTime;
} KEY_WRITE_TIME_INFORMATION, *PKEY_WRITE_TIME_INFORMATION;

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
} KINTERRUPT_POLARITY, *PKINTERRUPT_POLARITY;

typedef struct _KMUTANT {
  DISPATCHER_HEADER Header;
  LIST_ENTRY        MutantListEntry;
  struct _KTHREAD   *OwnerThread;
  union {
    UCHAR MutantFlags;
    struct {
      UCHAR Abandoned : 1;
      UCHAR Spare1 : 7;
    } DUMMYSTRUCTNAME;
  } DUMMYUNIONNAME;
  UCHAR             ApcDisable;
} KMUTANT, *PKMUTANT, *PRKMUTANT, KMUTEX, *PKMUTEX, *PRKMUTEX;

typedef struct _KTMOBJECT_CURSOR {
  GUID  LastQuery;
  ULONG ObjectIdCount;
  GUID  ObjectIds[1];
} KTMOBJECT_CURSOR, *PKTMOBJECT_CURSOR;

typedef enum _KTMOBJECT_TYPE {
  KTMOBJECT_TRANSACTION,
  KTMOBJECT_TRANSACTION_MANAGER,
  KTMOBJECT_RESOURCE_MANAGER,
  KTMOBJECT_ENLISTMENT,
  KTMOBJECT_INVALID
} KTMOBJECT_TYPE, *PKTMOBJECT_TYPE;

void KzLowerIrql(
  [in] KIRQL NewIrql
);

KIRQL KzRaiseIrql(
  [in] KIRQL NewIrql
);

typedef enum {
  LT_DONT_CARE,
  LT_LOWEST_LATENCY
} LATENCY_TIME;

typedef struct _LINK_SHARE_ACCESS {
  ULONG OpenCount;
  ULONG Deleters;
  ULONG SharedDelete;
} LINK_SHARE_ACCESS, *PLINK_SHARE_ACCESS;

typedef struct _MAILSLOT_CREATE_PARAMETERS {
  ULONG         MailslotQuota;
  ULONG         MaximumMessageSize;
  LARGE_INTEGER ReadTimeout;
  BOOLEAN       TimeoutSpecified;
} MAILSLOT_CREATE_PARAMETERS, *PMAILSLOT_CREATE_PARAMETERS;

typedef struct _MDL {
  struct _MDL      *Next;
  CSHORT           Size;
  CSHORT           MdlFlags;
  struct _EPROCESS *Process;
  PVOID            MappedSystemVa;
  PVOID            StartVa;
  ULONG            ByteCount;
  ULONG            ByteOffset;
} MDL, *PMDL;

typedef struct MEM_EXTENDED_PARAMETER {
  struct {
    ULONG64 Type : MEM_EXTENDED_PARAMETER_TYPE_BITS;
    ULONG64 Reserved : 64 - MEM_EXTENDED_PARAMETER_TYPE_BITS;
  } DUMMYSTRUCTNAME;
  union {
    ULONG64 ULong64;
    PVOID   Pointer;
    SIZE_T  Size;
    HANDLE  Handle;
    ULONG   ULong;
  } DUMMYUNIONNAME;
} MEM_EXTENDED_PARAMETER, *PMEM_EXTENDED_PARAMETER;

typedef enum MEM_EXTENDED_PARAMETER_TYPE {
  MemExtendedParameterInvalidType = 0,
  MemExtendedParameterAddressRequirements = 1,
  MemExtendedParameterNumaNode = 2,
  MemExtendedParameterPartitionHandle = 3,
  MemExtendedParameterUserPhysicalHandle = 4,
  MemExtendedParameterAttributeFlags = 5,
  MemExtendedParameterImageMachine = 6,
  MemExtendedParameterMax
}  *PMEM_EXTENDED_PARAMETER_TYPE;

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

typedef struct _MEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION {
  ULONG64     DedicatedMemoryTypeId;
  ULONG       HandleAttributes;
  ACCESS_MASK DesiredAccess;
  HANDLE      DedicatedMemoryPartitionHandle;
} MEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION, *PMEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION;

typedef struct _MM_PHYSICAL_ADDRESS_LIST {
  PHYSICAL_ADDRESS PhysicalAddress;
  SIZE_T           NumberOfBytes;
} MM_PHYSICAL_ADDRESS_LIST, *PMM_PHYSICAL_ADDRESS_LIST;

NTSTATUS MmAdvanceMdl(
  [in, out] PMDL  Mdl,
  [in]      ULONG NumberOfBytes
);

PVOID MmAllocateContiguousMemory(
  [in] SIZE_T           NumberOfBytes,
  [in] PHYSICAL_ADDRESS HighestAcceptableAddress
);

NTSTATUS MmAllocateContiguousMemoryEx(
  [in]           PSIZE_T          NumberOfBytes,
  [in]           PHYSICAL_ADDRESS LowestAcceptableAddress,
  [in]           PHYSICAL_ADDRESS HighestAcceptableAddress,
  [in]           PHYSICAL_ADDRESS BoundaryAddressMultiple,
  [in]           NODE_REQUIREMENT PreferredNode,
  [in]           ULONG            Protect,
  [in, optional] PVOID            PartitionObject,
  [in]           ULONG            Tag,
  [in]           ULONG            Flags,
  [out]          PVOID            *BaseAddress
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

PVOID MmAllocateMappingAddress(
  [in] SIZE_T NumberOfBytes,
  [in] ULONG  PoolTag
);


PVOID MmAllocateMappingAddressEx(
  SIZE_T NumberOfBytes,
  ULONG  PoolTag,
  ULONG  Flags
);

NTSTATUS MmAllocateMdlForIoSpace(
  [in]  PMM_PHYSICAL_ADDRESS_LIST PhysicalAddressList,
  [in]  SIZE_T                    NumberOfEntries,
  [out] PMDL                      *NewMdl
);

PMDL MmAllocateNodePagesForMdlEx(
  [in] PHYSICAL_ADDRESS    LowAddress,
  [in] PHYSICAL_ADDRESS    HighAddress,
  [in] PHYSICAL_ADDRESS    SkipBytes,
  [in] SIZE_T              TotalBytes,
  [in] MEMORY_CACHING_TYPE CacheType,
  [in] ULONG               IdealNode,
  [in] ULONG               Flags
);

PMDL MmAllocatePagesForMdl(
  [in] PHYSICAL_ADDRESS LowAddress,
  [in] PHYSICAL_ADDRESS HighAddress,
  [in] PHYSICAL_ADDRESS SkipBytes,
  [in] SIZE_T           TotalBytes
);

PMDL MmAllocatePagesForMdlEx(
  [in] PHYSICAL_ADDRESS    LowAddress,
  [in] PHYSICAL_ADDRESS    HighAddress,
  [in] PHYSICAL_ADDRESS    SkipBytes,
  [in] SIZE_T              TotalBytes,
  [in] MEMORY_CACHING_TYPE CacheType,
  [in] ULONG               Flags
);

void MmBuildMdlForNonPagedPool(
  [in, out] PMDL MemoryDescriptorList
);

void MmFreeContiguousMemory(
  [in] PVOID BaseAddress
);

void MmFreeContiguousMemorySpecifyCache(
  [in] PVOID               BaseAddress,
  [in] SIZE_T              NumberOfBytes,
  [in] MEMORY_CACHING_TYPE CacheType
);

void MmFreeMappingAddress(
  [in] PVOID BaseAddress,
  [in] ULONG PoolTag
);

void MmFreePagesFromMdl(
  [in] PMDL MemoryDescriptorList
);

ULONG MmGetMdlByteCount(
  [in] PMDL Mdl
);

PPFN_NUMBER MmGetMdlPfnArray(
  _In_ PMDL Mdl
);

PVOID MmGetSystemAddressForMdl(
   MDL
);

PVOID MmGetSystemRoutineAddress(
  [in] PUNICODE_STRING SystemRoutineName
);

PVOID MmGetSystemRoutineAddressEx(
  PUNICODE_STRING ModuleName,
  PSTR            FunctionName
);

LOGICAL MmIsDriverSuspectForVerifier(
  [in] _DRIVER_OBJECT *DriverObject
);

LOGICAL MmIsDriverVerifying(
  [in] _DRIVER_OBJECT *DriverObject
);


LOGICAL MmIsDriverVerifyingByAddress(
  [in] PVOID AddressWithinSection
);

void MmLockPagableCodeSection(
  [in]  Address
);

PVOID MmLockPagableDataSection(
  [in] PVOID AddressWithinSection
);

PVOID MmMapIoSpace(
  [in] PHYSICAL_ADDRESS    PhysicalAddress,
  [in] SIZE_T              NumberOfBytes,
  [in] MEMORY_CACHING_TYPE CacheType
);

PVOID MmMapIoSpaceEx(
  [in] PHYSICAL_ADDRESS PhysicalAddress,
  [in] SIZE_T           NumberOfBytes,
  [in] ULONG            Protect
);

PVOID MmMapLockedPages(
  [in] PMDL                                                                          MemoryDescriptorList,
  [in] __drv_strictType(KPROCESSOR_MODE / enum _MODE,__drv_typeConst)KPROCESSOR_MODE AccessMode
);

PVOID MmMapLockedPagesSpecifyCache(
  [in]           PMDL                                                                          MemoryDescriptorList,
  [in]           __drv_strictType(KPROCESSOR_MODE / enum _MODE,__drv_typeConst)KPROCESSOR_MODE AccessMode,
  [in]           __drv_strictTypeMatch(__drv_typeCond)MEMORY_CACHING_TYPE                      CacheType,
  [in, optional] PVOID                                                                         RequestedAddress,
  [in]           ULONG                                                                         BugCheckOnFailure,
  [in]           ULONG                                                                         Priority
);

PVOID MmMapLockedPagesWithReservedMapping(
  [in] PVOID                                                    MappingAddress,
  [in] ULONG                                                    PoolTag,
  [in] PMDL                                                     MemoryDescriptorList,
  [in] __drv_strictTypeMatch(__drv_typeCond)MEMORY_CACHING_TYPE CacheType
);

NTSTATUS MmMapMdl(
  [in] PMDL            MemoryDescriptorList,
  [in] ULONG           Protection,
  [in] PMM_MDL_ROUTINE DriverRoutine,
  [in] PVOID           DriverContext
);

NTSTATUS MmMapMemoryDumpMdlEx(
  PVOID      Va,
  PFN_NUMBER PageTotal,
  PMDL       MemoryDumpMdl,
  ULONG      Flags
);

PVOID MmPageEntireDriver(
  [in] PVOID AddressWithinSection
);

void MmProbeAndLockPages(
  [in, out] PMDL            MemoryDescriptorList,
  [in]      KPROCESSOR_MODE AccessMode,
  [in]      LOCK_OPERATION  Operation
);

void MmProbeAndLockSelectedPages(
  [in, out] PMDL                  MemoryDescriptorList,
  [in]      PFILE_SEGMENT_ELEMENT SegmentArray,
  [in]      KPROCESSOR_MODE       AccessMode,
  [in]      LOCK_OPERATION        Operation
);

NTSTATUS MmProtectDriverSection(
  [in] PVOID  AddressWithinSection,
  [in] SIZE_T Size,
  [in] ULONG  Flags
);

NTSTATUS MmProtectMdlSystemAddress(
  [in] PMDL  MemoryDescriptorList,
  [in] ULONG NewProtect
);

MM_SYSTEMSIZE MmQuerySystemSize();

void MmResetDriverPaging(
  [in] PVOID AddressWithinSection
);

SIZE_T MmSizeOfMdl(
  [in] PVOID  Base,
  [in] SIZE_T Length
);


void MmUnlockPagableImageSection(
  [in] PVOID ImageSectionHandle
);

void MmUnlockPages(
  [in, out] PMDL MemoryDescriptorList
);

void MmUnmapIoSpace(
  [in] PVOID  BaseAddress,
  [in] SIZE_T NumberOfBytes
);

void MmUnmapLockedPages(
  [in] PVOID BaseAddress,
  [in] PMDL  MemoryDescriptorList
);

void MmUnmapReservedMapping(
  [in] PVOID BaseAddress,
  [in] ULONG PoolTag,
  [in] PMDL  MemoryDescriptorList
);

typedef enum _MONITOR_DISPLAY_STATE {
  PowerMonitorOff,
  PowerMonitorOn,
  PowerMonitorDim
} MONITOR_DISPLAY_STATE, *PMONITOR_DISPLAY_STATE;

typedef struct _NAMED_PIPE_CREATE_PARAMETERS {
  ULONG         NamedPipeType;
  ULONG         ReadMode;
  ULONG         CompletionMode;
  ULONG         MaximumInstances;
  ULONG         InboundQuota;
  ULONG         OutboundQuota;
  LARGE_INTEGER DefaultTimeout;
  BOOLEAN       TimeoutSpecified;
} NAMED_PIPE_CREATE_PARAMETERS, *PNAMED_PIPE_CREATE_PARAMETERS;

typedef struct {
  GUID Guid;
} NOTIFY_USER_POWER_SETTING, *PNOTIFY_USER_POWER_SETTING;

__kernel_entry NTSYSCALLAPI NTSTATUS NtCommitComplete(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtCommitEnlistment(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtCommitTransaction(
  [in] HANDLE  TransactionHandle,
  [in] BOOLEAN Wait
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtCreateEnlistment(
  [out]          PHANDLE            EnlistmentHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in]           HANDLE             ResourceManagerHandle,
  [in]           HANDLE             TransactionHandle,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes,
  [in, optional] ULONG              CreateOptions,
  [in]           NOTIFICATION_MASK  NotificationMask,
  [in, optional] PVOID              EnlistmentKey
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtCreateResourceManager(
  [out]          PHANDLE            ResourceManagerHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in]           HANDLE             TmHandle,
  [in]           LPGUID             RmGuid,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes,
  [in, optional] ULONG              CreateOptions,
  [in, optional] PUNICODE_STRING    Description
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtCreateTransaction(
  [out]          PHANDLE            TransactionHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes,
  [in, optional] LPGUID             Uow,
  [in, optional] HANDLE             TmHandle,
  [in, optional] ULONG              CreateOptions,
  [in, optional] ULONG              IsolationLevel,
  [in, optional] ULONG              IsolationFlags,
  [in, optional] PLARGE_INTEGER     Timeout,
  [in, optional] PUNICODE_STRING    Description
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtCreateTransactionManager(
  [out]          PHANDLE            TmHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes,
  [in, optional] PUNICODE_STRING    LogFileName,
  [in, optional] ULONG              CreateOptions,
  [in, optional] ULONG              CommitStrength
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtEnumerateTransactionObject(
  [in, optional] HANDLE            RootObjectHandle,
  [in]           KTMOBJECT_TYPE    QueryType,
  [in, out]      PKTMOBJECT_CURSOR ObjectCursor,
  [in]           ULONG             ObjectCursorLength,
  [out]          PULONG            ReturnLength
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtGetNotificationResourceManager(
  [in]            HANDLE                    ResourceManagerHandle,
  [out]           PTRANSACTION_NOTIFICATION TransactionNotification,
  [in]            ULONG                     NotificationLength,
  [in]            PLARGE_INTEGER            Timeout,
  [out, optional] PULONG                    ReturnLength,
  [in]            ULONG                     Asynchronous,
  [in, optional]  ULONG_PTR                 AsynchronousContext
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtManagePartition(
  [in]           HANDLE                      TargetHandle,
  [in, optional] HANDLE                      SourceHandle,
  [in]           PARTITION_INFORMATION_CLASS PartitionInformationClass,
  [in, out]      PVOID                       PartitionInformation,
  [in]           ULONG                       PartitionInformationLength
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtOpenEnlistment(
  [out]          PHANDLE            EnlistmentHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in]           HANDLE             ResourceManagerHandle,
  [in]           LPGUID             EnlistmentGuid,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtOpenResourceManager(
  [out]          PHANDLE            ResourceManagerHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in]           HANDLE             TmHandle,
  [in]           LPGUID             ResourceManagerGuid,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtOpenTransaction(
  [out]          PHANDLE            TransactionHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes,
  [in]           LPGUID             Uow,
  [in, optional] HANDLE             TmHandle
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtOpenTransactionManager(
  [out]          PHANDLE            TmHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes,
  [in, optional] PUNICODE_STRING    LogFileName,
  [in, optional] LPGUID             TmIdentity,
  [in, optional] ULONG              OpenOptions
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtPowerInformation(
  [in]            POWER_INFORMATION_LEVEL InformationLevel,
  [in, optional]  PVOID                   InputBuffer,
  [in]            ULONG                   InputBufferLength,
  [out, optional] PVOID                   OutputBuffer,
  [in]            ULONG                   OutputBufferLength
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtPrepareComplete(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtPrepareEnlistment(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtPrePrepareComplete(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtPrePrepareEnlistment(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtQueryInformationEnlistment(
  [in]            HANDLE                       EnlistmentHandle,
  [in]            ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
  [out]           PVOID                        EnlistmentInformation,
  [in]            ULONG                        EnlistmentInformationLength,
  [out, optional] PULONG                       ReturnLength
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtQueryInformationResourceManager(
  [in]            HANDLE                            ResourceManagerHandle,
  [in]            RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
  [out]           PVOID                             ResourceManagerInformation,
  [in]            ULONG                             ResourceManagerInformationLength,
  [out, optional] PULONG                            ReturnLength
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtQueryInformationTransaction(
  [in]            HANDLE                        TransactionHandle,
  [in]            TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
  [out]           PVOID                         TransactionInformation,
  [in]            ULONG                         TransactionInformationLength,
  [out, optional] PULONG                        ReturnLength
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtQueryInformationTransactionManager(
  [in]            HANDLE                               TransactionManagerHandle,
  [in]            TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
  [out]           PVOID                                TransactionManagerInformation,
  [in]            ULONG                                TransactionManagerInformationLength,
  [out, optional] PULONG                               ReturnLength
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtReadOnlyEnlistment(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtRecoverEnlistment(
  [in]           HANDLE EnlistmentHandle,
  [in, optional] PVOID  EnlistmentKey
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtRecoverResourceManager(
  [in] HANDLE ResourceManagerHandle
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtRecoverTransactionManager(
  [in] HANDLE TransactionManagerHandle
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtRenameTransactionManager(
  [in] PUNICODE_STRING LogFileName,
  [in] LPGUID          ExistingTransactionManagerGuid
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtRollbackComplete(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtRollbackEnlistment(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtRollbackTransaction(
  [in] HANDLE  TransactionHandle,
  [in] BOOLEAN Wait
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtRollforwardTransactionManager(
  [in]           HANDLE         TransactionManagerHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtSetInformationEnlistment(
  [in] HANDLE                       EnlistmentHandle,
  [in] ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
  [in] PVOID                        EnlistmentInformation,
  [in] ULONG                        EnlistmentInformationLength
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtSetInformationResourceManager(
  HANDLE                            ResourceManagerHandle,
  RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
  PVOID                             ResourceManagerInformation,
  ULONG                             ResourceManagerInformationLength
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtSetInformationTransaction(
  [in] HANDLE                        TransactionHandle,
  [in] TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
  [in] PVOID                         TransactionInformation,
  [in] ULONG                         TransactionInformationLength
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtSetInformationTransactionManager(
  [in, optional] HANDLE                               TmHandle,
  [in]           TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
  [in]           PVOID                                TransactionManagerInformation,
  [in]           ULONG                                TransactionManagerInformationLength
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtSinglePhaseReject(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

typedef struct _OB_CALLBACK_REGISTRATION {
  USHORT                    Version;
  USHORT                    OperationRegistrationCount;
  UNICODE_STRING            Altitude;
  PVOID                     RegistrationContext;
  OB_OPERATION_REGISTRATION *OperationRegistration;
} OB_CALLBACK_REGISTRATION, *POB_CALLBACK_REGISTRATION;


typedef struct _OB_OPERATION_REGISTRATION {
  POBJECT_TYPE                *ObjectType;
  OB_OPERATION                Operations;
  POB_PRE_OPERATION_CALLBACK  PreOperation;
  POB_POST_OPERATION_CALLBACK PostOperation;
} OB_OPERATION_REGISTRATION, *POB_OPERATION_REGISTRATION;

typedef struct _OB_POST_CREATE_HANDLE_INFORMATION {
  ACCESS_MASK GrantedAccess;
} OB_POST_CREATE_HANDLE_INFORMATION, *POB_POST_CREATE_HANDLE_INFORMATION;

typedef struct _OB_POST_DUPLICATE_HANDLE_INFORMATION {
  ACCESS_MASK GrantedAccess;
} OB_POST_DUPLICATE_HANDLE_INFORMATION, *POB_POST_DUPLICATE_HANDLE_INFORMATION;

typedef struct _OB_POST_OPERATION_INFORMATION {
  OB_OPERATION                  Operation;
  union {
    ULONG Flags;
    struct {
      ULONG KernelHandle : 1;
      ULONG Reserved : 31;
    };
  };
  PVOID                         Object;
  POBJECT_TYPE                  ObjectType;
  PVOID                         CallContext;
  NTSTATUS                      ReturnStatus;
  POB_POST_OPERATION_PARAMETERS Parameters;
} OB_POST_OPERATION_INFORMATION, *POB_POST_OPERATION_INFORMATION;

typedef union _OB_POST_OPERATION_PARAMETERS {
  OB_POST_CREATE_HANDLE_INFORMATION    CreateHandleInformation;
  OB_POST_DUPLICATE_HANDLE_INFORMATION DuplicateHandleInformation;
} OB_POST_OPERATION_PARAMETERS, *POB_POST_OPERATION_PARAMETERS;

typedef struct _OB_PRE_CREATE_HANDLE_INFORMATION {
  ACCESS_MASK DesiredAccess;
  ACCESS_MASK OriginalDesiredAccess;
} OB_PRE_CREATE_HANDLE_INFORMATION, *POB_PRE_CREATE_HANDLE_INFORMATION;

typedef struct _OB_PRE_DUPLICATE_HANDLE_INFORMATION {
  ACCESS_MASK DesiredAccess;
  ACCESS_MASK OriginalDesiredAccess;
  PVOID       SourceProcess;
  PVOID       TargetProcess;
} OB_PRE_DUPLICATE_HANDLE_INFORMATION, *POB_PRE_DUPLICATE_HANDLE_INFORMATION;

typedef struct _OB_PRE_OPERATION_INFORMATION {
  OB_OPERATION                 Operation;
  union {
    ULONG Flags;
    struct {
      ULONG KernelHandle : 1;
      ULONG Reserved : 31;
    };
  };
  PVOID                        Object;
  POBJECT_TYPE                 ObjectType;
  PVOID                        CallContext;
  POB_PRE_OPERATION_PARAMETERS Parameters;
} OB_PRE_OPERATION_INFORMATION, *POB_PRE_OPERATION_INFORMATION;

typedef union _OB_PRE_OPERATION_PARAMETERS {
  OB_PRE_CREATE_HANDLE_INFORMATION    CreateHandleInformation;
  OB_PRE_DUPLICATE_HANDLE_INFORMATION DuplicateHandleInformation;
} OB_PRE_OPERATION_PARAMETERS, *POB_PRE_OPERATION_PARAMETERS;

NTSTATUS ObCloseHandle(
  [in] HANDLE          Handle,
  [in] KPROCESSOR_MODE PreviousMode
);

void ObDereferenceObject(
  [in]  a
);

void ObDereferenceObjectDeferDelete(
  [in] PVOID Object
);

void ObDereferenceObjectDeferDeleteWithTag(
  [in] PVOID Object,
  [in] ULONG Tag
);

void ObDereferenceObjectWithTag(
  [in]  a,
  [in]  t
);

LONG_PTR ObfReferenceObject(
  [in] PVOID Object
);

NTSTATUS ObGetObjectSecurity(
  [in]  PVOID                Object,
  [out] PSECURITY_DESCRIPTOR *SecurityDescriptor,
  [out] PBOOLEAN             MemoryAllocated
);

void ObReferenceObject(
  [in]  Object
);

NTSTATUS ObReferenceObjectByHandle(
  [in]            HANDLE                     Handle,
  [in]            ACCESS_MASK                DesiredAccess,
  [in, optional]  POBJECT_TYPE               ObjectType,
  [in]            KPROCESSOR_MODE            AccessMode,
  [out]           PVOID                      *Object,
  [out, optional] POBJECT_HANDLE_INFORMATION HandleInformation
);

NTSTATUS ObReferenceObjectByHandleWithTag(
  [in]            HANDLE                     Handle,
  [in]            ACCESS_MASK                DesiredAccess,
  [in, optional]  POBJECT_TYPE               ObjectType,
  [in]            KPROCESSOR_MODE            AccessMode,
  [in]            ULONG                      Tag,
  [out]           PVOID                      *Object,
  [out, optional] POBJECT_HANDLE_INFORMATION HandleInformation
);

NTSTATUS ObReferenceObjectByPointer(
  [in]           PVOID           Object,
  [in]           ACCESS_MASK     DesiredAccess,
  [in, optional] POBJECT_TYPE    ObjectType,
  [in]           KPROCESSOR_MODE AccessMode
);

NTSTATUS ObReferenceObjectByPointerWithTag(
  [in]           PVOID           Object,
  [in]           ACCESS_MASK     DesiredAccess,
  [in, optional] POBJECT_TYPE    ObjectType,
  [in]           KPROCESSOR_MODE AccessMode,
  [in]           ULONG           Tag
);

BOOLEAN ObReferenceObjectSafe(
  PVOID Object
);

void ObReferenceObjectWithTag(
  [in]  Object,
  [in]  Tag
);

NTSTATUS ObRegisterCallbacks(
  [in]  POB_CALLBACK_REGISTRATION CallbackRegistration,
  [out] PVOID                     *RegistrationHandle
);

void ObReleaseObjectSecurity(
  [in] PSECURITY_DESCRIPTOR SecurityDescriptor,
  [in] BOOLEAN              MemoryAllocated
);

void ObUnRegisterCallbacks(
  [in] PVOID RegistrationHandle
);


typedef struct _OSVERSIONINFOEXW {
  ULONG  dwOSVersionInfoSize;
  ULONG  dwMajorVersion;
  ULONG  dwMinorVersion;
  ULONG  dwBuildNumber;
  ULONG  dwPlatformId;
  WCHAR  szCSDVersion[128];
  USHORT wServicePackMajor;
  USHORT wServicePackMinor;
  USHORT wSuiteMask;
  UCHAR  wProductType;
  UCHAR  wReserved;
} OSVERSIONINFOEXW, *POSVERSIONINFOEXW, *LPOSVERSIONINFOEXW, RTL_OSVERSIONINFOEXW, *PRTL_OSVERSIONINFOEXW;



typedef struct _OSVERSIONINFOW {
  ULONG dwOSVersionInfoSize;
  ULONG dwMajorVersion;
  ULONG dwMinorVersion;
  ULONG dwBuildNumber;
  ULONG dwPlatformId;
  WCHAR szCSDVersion[128];
} OSVERSIONINFOW, *POSVERSIONINFOW, *LPOSVERSIONINFOW, RTL_OSVERSIONINFOW, *PRTL_OSVERSIONINFOW;

typedef struct _PCI_ATS_INTERFACE {
  USHORT                 Size;
  USHORT                 Version;
  PVOID                  Context;
  PINTERFACE_REFERENCE   InterfaceReference;
  PINTERFACE_DEREFERENCE InterfaceDereference;
  PPCI_SET_ATS           SetAddressTranslationServices;
  UCHAR                  InvalidateQueueDepth;
} PCI_ATS_INTERFACE, *PPCI_ATS_INTERFACE;

typedef struct _PCI_COMMON_CONFIG : PCI_COMMON_HEADER {
  UCHAR DeviceSpecific[192];
} PCI_COMMON_CONFIG, *PPCI_COMMON_CONFIG;

typedef struct _PCI_MSIX_TABLE_CONFIG_INTERFACE {
  USHORT                     Size;
  USHORT                     Version;
  PVOID                      Context;
  PINTERFACE_REFERENCE       InterfaceReference;
  PINTERFACE_DEREFERENCE     InterfaceDereference;
  PPCI_MSIX_SET_ENTRY        SetTableEntry;
  PPCI_MSIX_MASKUNMASK_ENTRY MaskTableEntry;
  PPCI_MSIX_MASKUNMASK_ENTRY UnmaskTableEntry;
  PPCI_MSIX_GET_ENTRY        GetTableEntry;
  PPCI_MSIX_GET_TABLE_SIZE   GetTableSize;
} PCI_MSIX_TABLE_CONFIG_INTERFACE, *PPCI_MSIX_TABLE_CONFIG_INTERFACE;

typedef struct _PCI_SECURITY_INTERFACE2 {
  USHORT                 Size;
  USHORT                 Version;
  PVOID                  Context;
  PINTERFACE_REFERENCE   InterfaceReference;
  PINTERFACE_DEREFERENCE InterfaceDereference;
  ULONG                  Flags;
  ULONG                  SupportedScenarios;
  PPCI_SET_ACS2          SetAccessControlServices;
} PCI_SECURITY_INTERFACE2, *PPCI_SECURITY_INTERFACE2;

typedef struct _PCI_SEGMENT_BUS_NUMBER {
  union {
    struct {
      ULONG BusNumber : 8;
      ULONG SegmentNumber : 16;
      ULONG Reserved : 8;
    } bits;
    ULONG AsULONG;
  } u;
} PCI_SEGMENT_BUS_NUMBER, *PPCI_SEGMENT_BUS_NUMBER;

typedef struct _PCI_SLOT_NUMBER {
  union {
    struct {
      ULONG DeviceNumber : 5;
      ULONG FunctionNumber : 3;
      ULONG Reserved : 24;
    } bits;
    ULONG AsULONG;
  } u;
} PCI_SLOT_NUMBER, *PPCI_SLOT_NUMBER;

typedef struct _PLUGPLAY_NOTIFICATION_HEADER {
  USHORT Version;
  USHORT Size;
  GUID   Event;
} PLUGPLAY_NOTIFICATION_HEADER, *PPLUGPLAY_NOTIFICATION_HEADER;

typedef struct _PNP_BUS_INFORMATION {
  GUID           BusTypeGuid;
  INTERFACE_TYPE LegacyBusType;
  ULONG          BusNumber;
} PNP_BUS_INFORMATION, *PPNP_BUS_INFORMATION;

typedef struct _PO_FX_COMPONENT_IDLE_STATE {
  ULONGLONG TransitionLatency;
  ULONGLONG ResidencyRequirement;
  ULONG     NominalPower;
} PO_FX_COMPONENT_IDLE_STATE, *PPO_FX_COMPONENT_IDLE_STATE;

typedef struct _PO_FX_COMPONENT_PERF_INFO {
  ULONG                    PerfStateSetsCount;
  PO_FX_COMPONENT_PERF_SET PerfStateSets[ANYSIZE_ARRAY];
} PO_FX_COMPONENT_PERF_INFO, *PPO_FX_COMPONENT_PERF_INFO;

typedef struct _PO_FX_COMPONENT_PERF_SET {
  UNICODE_STRING        Name;
  ULONGLONG             Flags;
  PO_FX_PERF_STATE_UNIT Unit;
  PO_FX_PERF_STATE_TYPE Type;
  union {
    struct {
      ULONG             Count;
      PPO_FX_PERF_STATE States;
    } Discrete;
    struct {
      ULONGLONG Minimum;
      ULONGLONG Maximum;
    } Range;
  };
} PO_FX_COMPONENT_PERF_SET, *PPO_FX_COMPONENT_PERF_SET;

typedef struct _PO_FX_COMPONENT_V1 {
  GUID                        Id;
  ULONG                       IdleStateCount;
  ULONG                       DeepestWakeableIdleState;
  PPO_FX_COMPONENT_IDLE_STATE IdleStates;
} PO_FX_COMPONENT_V1, *PPO_FX_COMPONENT_V1;

typedef struct _PO_FX_COMPONENT_V2 {
  GUID                        Id;
  ULONGLONG                   Flags;
  ULONG                       DeepestWakeableIdleState;
  ULONG                       IdleStateCount;
  PPO_FX_COMPONENT_IDLE_STATE IdleStates;
  ULONG                       ProviderCount;
  PULONG                      Providers;
} PO_FX_COMPONENT_V2, *PPO_FX_COMPONENT_V2;

typedef struct _PO_FX_DEVICE_V1 {
  ULONG                                      Version;
  ULONG                                      ComponentCount;
  PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK ComponentActiveConditionCallback;
  PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK   ComponentIdleConditionCallback;
  PPO_FX_COMPONENT_IDLE_STATE_CALLBACK       ComponentIdleStateCallback;
  PPO_FX_DEVICE_POWER_REQUIRED_CALLBACK      DevicePowerRequiredCallback;
  PPO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK  DevicePowerNotRequiredCallback;
  PPO_FX_POWER_CONTROL_CALLBACK              PowerControlCallback;
  PVOID                                      DeviceContext;
  PO_FX_COMPONENT_V1                         Components[ANYSIZE_ARRAY];
} PO_FX_DEVICE_V1, *PPO_FX_DEVICE_V1;

typedef struct _PO_FX_DEVICE_V2 {
  ULONG                                      Version;
  ULONGLONG                                  Flags;
  PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK ComponentActiveConditionCallback;
  PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK   ComponentIdleConditionCallback;
  PPO_FX_COMPONENT_IDLE_STATE_CALLBACK       ComponentIdleStateCallback;
  PPO_FX_DEVICE_POWER_REQUIRED_CALLBACK      DevicePowerRequiredCallback;
  PPO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK  DevicePowerNotRequiredCallback;
  PPO_FX_POWER_CONTROL_CALLBACK              PowerControlCallback;
  PVOID                                      DeviceContext;
  ULONG                                      ComponentCount;
  PO_FX_COMPONENT_V2                         Components[ANYSIZE_ARRAY];
} PO_FX_DEVICE_V2, *PPO_FX_DEVICE_V2;

typedef struct _PO_FX_DEVICE_V3 {
  ULONG                                      Version;
  ULONGLONG                                  Flags;
  PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK ComponentActiveConditionCallback;
  PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK   ComponentIdleConditionCallback;
  PPO_FX_COMPONENT_IDLE_STATE_CALLBACK       ComponentIdleStateCallback;
  PPO_FX_DEVICE_POWER_REQUIRED_CALLBACK      DevicePowerRequiredCallback;
  PPO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK  DevicePowerNotRequiredCallback;
  PPO_FX_POWER_CONTROL_CALLBACK              PowerControlCallback;
  PPO_FX_DIRECTED_POWER_UP_CALLBACK          DirectedPowerUpCallback;
  PPO_FX_DIRECTED_POWER_DOWN_CALLBACK        DirectedPowerDownCallback;
  ULONG                                      DirectedFxTimeoutInSeconds;
  PVOID                                      DeviceContext;
  ULONG                                      ComponentCount;
  PO_FX_COMPONENT_V2                         Components[ANYSIZE_ARRAY];
} PO_FX_DEVICE_V3, *PPO_FX_DEVICE_V3;

typedef struct _PO_FX_PERF_STATE {
  ULONGLONG Value;
  PVOID     Context;
} PO_FX_PERF_STATE, *PPO_FX_PERF_STATE;

typedef struct _PO_FX_PERF_STATE_CHANGE {
  ULONG Set;
  union {
    ULONG     StateIndex;
    ULONGLONG StateValue;
  };
} PO_FX_PERF_STATE_CHANGE, *PPO_FX_PERF_STATE_CHANGE;

typedef enum _PO_FX_PERF_STATE_TYPE {
  PoFxPerfStateTypeDiscrete,
  PoFxPerfStateTypeRange,
  PoFxPerfStateTypeMaximum
} PO_FX_PERF_STATE_TYPE, *PPO_FX_PERF_STATE_TYPE;

typedef enum _PO_FX_PERF_STATE_UNIT {
  PoFxPerfStateUnitOther,
  PoFxPerfStateUnitFrequency,
  PoFxPerfStateUnitBandwidth,
  PoFxPerfStateUnitMaximum
} PO_FX_PERF_STATE_UNIT, *PPO_FX_PERF_STATE_UNIT;

NTSTATUS PoCallDriver(
  [in]      PDEVICE_OBJECT        DeviceObject,
  [in, out] __drv_aliasesMem PIRP Irp
);

NTSTATUS PoClearPowerRequest(
  [in, out] PVOID              PowerRequest,
  [in]      POWER_REQUEST_TYPE Type
);

NTSTATUS PoCreatePowerRequest(
  [out] PVOID                   *PowerRequest,
  [in]  PDEVICE_OBJECT          DeviceObject,
  [in]  PCOUNTED_REASON_CONTEXT Context
);

void PoDeletePowerRequest(
  [in, out] PVOID PowerRequest
);

void PoEndDeviceBusy(
  [in, out] PULONG IdlePointer
);

void PoFxActivateComponent(
  [in] POHANDLE Handle,
  [in] ULONG    Component,
  [in] ULONG    Flags
);

void PoFxCompleteDevicePowerNotRequired(
  [in] POHANDLE Handle
);

void PoFxCompleteDirectedPowerDown(
  POHANDLE Handle
);

void PoFxCompleteIdleCondition(
  [in] POHANDLE Handle,
  [in] ULONG    Component
);

void PoFxCompleteIdleState(
  [in] POHANDLE Handle,
  [in] ULONG    Component
);

void PoFxIdleComponent(
  [in] POHANDLE Handle,
  [in] ULONG    Component,
  [in] ULONG    Flags
);

void PoFxIssueComponentPerfStateChange(
  [in] POHANDLE                 Handle,
  [in] ULONG                    Flags,
  [in] ULONG                    Component,
  [in] PPO_FX_PERF_STATE_CHANGE PerfChange,
  [in] PVOID                    Context
);

void PoFxIssueComponentPerfStateChangeMultiple(
  [in] POHANDLE                   Handle,
  [in] ULONG                      Flags,
  [in] ULONG                      Component,
  [in] ULONG                      PerfChangesCount,
  [in] PO_FX_PERF_STATE_CHANGE [] PerfChanges,
  [in] PVOID                      Context
);

void PoFxNotifySurprisePowerOn(
  [in] PDEVICE_OBJECT Pdo
);

NTSTATUS PoFxPowerControl(
  [in]            POHANDLE Handle,
  [in]            LPCGUID  PowerControlCode,
  [in, optional]  PVOID    InBuffer,
  [in]            SIZE_T   InBufferSize,
  [out, optional] PVOID    OutBuffer,
  [in]            SIZE_T   OutBufferSize,
  [out, optional] PSIZE_T  BytesReturned
);

NTSTATUS PoFxPowerOnCrashdumpDevice(
  [in]           POHANDLE Handle,
  [in, optional] PVOID    Context
);

NTSTATUS PoFxQueryCurrentComponentPerfState(
  [in] POHANDLE   Handle,
  [in] ULONG      Flags,
  [in] ULONG      Component,
  [in] ULONG      SetIndex,
  [in] PULONGLONG CurrentPerf
);

NTSTATUS PoFxRegisterComponentPerfStates(
  [in]  POHANDLE                             Handle,
  [in]  ULONG                                Component,
  [in]  ULONGLONG                            Flags,
  [in]  PPO_FX_COMPONENT_PERF_STATE_CALLBACK ComponentPerfStateCallback,
  [in]  PPO_FX_COMPONENT_PERF_INFO           InputStateInfo,
  [out] PPO_FX_COMPONENT_PERF_INFO           *OutputStateInfo
);

NTSTATUS PoFxRegisterCrashdumpDevice(
  POHANDLE Handle
);

NTSTATUS PoFxRegisterDevice(
  [in]  PDEVICE_OBJECT Pdo,
  [in]  PPO_FX_DEVICE  Device,
  [out] POHANDLE       *Handle
);

void PoFxReportDevicePoweredOn(
  [in] POHANDLE Handle
);

void PoFxSetComponentLatency(
  [in] POHANDLE  Handle,
  [in] ULONG     Component,
  [in] ULONGLONG Latency
);

void PoFxSetComponentResidency(
  [in] POHANDLE  Handle,
  [in] ULONG     Component,
  [in] ULONGLONG Residency
);

void PoFxSetComponentWake(
  [in] POHANDLE Handle,
  [in] ULONG    Component,
  [in] BOOLEAN  WakeHint
);

void PoFxSetDeviceIdleTimeout(
  [in] POHANDLE  Handle,
  [in] ULONGLONG IdleTimeout
);

NTSTATUS PoFxSetTargetDripsDevicePowerState(
  [in] POHANDLE           Handle,
  [in] DEVICE_POWER_STATE TargetState
);

void PoFxStartDevicePowerManagement(
  [in] POHANDLE Handle
);

void PoFxUnregisterDevice(
  [in] POHANDLE Handle
);

BOOLEAN PoGetSystemWake(
  [in] PIRP Irp
);

typedef struct _POOL_CREATE_EXTENDED_PARAMS {
  ULONG Version;
} POOL_CREATE_EXTENDED_PARAMS, *PPOOL_CREATE_EXTENDED_PARAMS;

typedef struct _POOL_EXTENDED_PARAMETER {
  struct {
    ULONG64 Type : POOL_EXTENDED_PARAMETER_TYPE_BITS;
    ULONG64 Optional : POOL_EXTENDED_PARAMETER_REQUIRED_FIELD_BITS;
    ULONG64 Reserved : POOL_EXTENDED_PARAMETER_RESERVED_BITS;
  } DUMMYSTRUCTNAME;
  union {
    ULONG64                          Reserved2;
    PVOID                            Reserved3;
    EX_POOL_PRIORITY                 Priority;
    POOL_EXTENDED_PARAMS_SECURE_POOL *SecurePoolParams;
    POOL_NODE_REQUIREMENT            PreferredNode;
  } DUMMYUNIONNAME;
} POOL_EXTENDED_PARAMETER, *PPOOL_EXTENDED_PARAMETER;

typedef enum POOL_EXTENDED_PARAMETER_TYPE {
  PoolExtendedParameterInvalidType = 0,
  PoolExtendedParameterPriority,
  PoolExtendedParameterSecurePool,
  PoolExtendedParameterNumaNode,
  PoolExtendedParameterMax
}  *PPOOL_EXTENDED_PARAMETER_TYPE;

typedef struct _POOL_EXTENDED_PARAMS_SECURE_POOL {
  HANDLE    SecurePoolHandle;
  PVOID     Buffer;
  ULONG_PTR Cookie;
  ULONG     SecurePoolFlags;
} POOL_EXTENDED_PARAMS_SECURE_POOL;

typedef enum _POOL_TYPE {
    NonPagedPool,
    NonPagedPoolExecute = NonPagedPool,
    PagedPool,
    NonPagedPoolMustSucceed = NonPagedPool + 2,
    DontUseThisType,
    NonPagedPoolCacheAligned = NonPagedPool + 4,
    PagedPoolCacheAligned,
    NonPagedPoolCacheAlignedMustS = NonPagedPool + 6,
    MaxPoolType,
    NonPagedPoolBase = 0,
    NonPagedPoolBaseMustSucceed = NonPagedPoolBase + 2,
    NonPagedPoolBaseCacheAligned = NonPagedPoolBase + 4,
    NonPagedPoolBaseCacheAlignedMustS = NonPagedPoolBase + 6,
    NonPagedPoolSession = 32,
    PagedPoolSession = NonPagedPoolSession + 1,
    NonPagedPoolMustSucceedSession = PagedPoolSession + 1,
    DontUseThisTypeSession = NonPagedPoolMustSucceedSession + 1,
    NonPagedPoolCacheAlignedSession = DontUseThisTypeSession + 1,
    PagedPoolCacheAlignedSession = NonPagedPoolCacheAlignedSession + 1,
    NonPagedPoolCacheAlignedMustSSession = PagedPoolCacheAlignedSession + 1,
    NonPagedPoolNx = 512,
    NonPagedPoolNxCacheAligned = NonPagedPoolNx + 4,
    NonPagedPoolSessionNx = NonPagedPoolNx + 32,

} POOL_TYPE;

PSINGLE_LIST_ENTRY PopEntryList(
  [in, out] PSINGLE_LIST_ENTRY ListHead
);

BOOLEAN PoQueryWatchdogTime(
  [in]  PDEVICE_OBJECT Pdo,
  [out] PULONG         SecondsRemaining
);

PULONG PoRegisterDeviceForIdleDetection(
  [in] PDEVICE_OBJECT     DeviceObject,
  [in] ULONG              ConservationIdleTime,
  [in] ULONG              PerformanceIdleTime,
  [in] DEVICE_POWER_STATE State
);


NTSTATUS PoRegisterPowerSettingCallback(
  [in, optional] PDEVICE_OBJECT          DeviceObject,
  [in]           LPCGUID                 SettingGuid,
  [in]           PPOWER_SETTING_CALLBACK Callback,
  [in, optional] PVOID                   Context,
  [out]          PVOID                   *Handle
);

PVOID PoRegisterSystemState(
  [in, out] PVOID           StateHandle,
  [in]      EXECUTION_STATE Flags
);

NTSTATUS PoRequestPowerIrp(
  [in]           PDEVICE_OBJECT          DeviceObject,
  [in]           UCHAR                   MinorFunction,
  [in]           POWER_STATE             PowerState,
  [in, optional] PREQUEST_POWER_COMPLETE CompletionFunction,
  [in, optional] __drv_aliasesMem PVOID  Context,
  [out]          PIRP                    *Irp
);

void PoSetDeviceBusy(
  [in, out]  IdlePointer
);

void PoSetDeviceBusyEx(
  [in, out] PULONG IdlePointer
);

NTSTATUS PoSetPowerRequest(
  [in, out] PVOID              PowerRequest,
  [in]      POWER_REQUEST_TYPE Type
);

POWER_STATE PoSetPowerState(
  [in] PDEVICE_OBJECT   DeviceObject,
  [in] POWER_STATE_TYPE Type,
  [in] POWER_STATE      State
);

void PoSetSystemState(
  [in] EXECUTION_STATE Flags
);

void PoSetSystemWake(
  [in, out] PIRP Irp
);

void PoSetSystemWakeDevice(
  [in] PDEVICE_OBJECT DeviceObject
);

void PoStartDeviceBusy(
  [in, out] PULONG IdlePointer
);

void PoStartNextPowerIrp(
  [in, out] PIRP Irp
);

NTSTATUS PoUnregisterPowerSettingCallback(
  [in, out] PVOID Handle
);

void PoUnregisterSystemState(
  [in, out] PVOID StateHandle
);

typedef enum {
  PowerActionNone,
  PowerActionReserved,
  PowerActionSleep,
  PowerActionHibernate,
  PowerActionShutdown,
  PowerActionShutdownReset,
  PowerActionShutdownOff,
  PowerActionWarmEject,
  PowerActionDisplayOff
} POWER_ACTION, *PPOWER_ACTION;

typedef enum {
  SystemPowerPolicyAc,
  SystemPowerPolicyDc,
  VerifySystemPolicyAc,
  VerifySystemPolicyDc,
  SystemPowerCapabilities,
  SystemBatteryState,
  SystemPowerStateHandler,
  ProcessorStateHandler,
  SystemPowerPolicyCurrent,
  AdministratorPowerPolicy,
  SystemReserveHiberFile,
  ProcessorInformation,
  SystemPowerInformation,
  ProcessorStateHandler2,
  LastWakeTime,
  LastSleepTime,
  SystemExecutionState,
  SystemPowerStateNotifyHandler,
  ProcessorPowerPolicyAc,
  ProcessorPowerPolicyDc,
  VerifyProcessorPowerPolicyAc,
  VerifyProcessorPowerPolicyDc,
  ProcessorPowerPolicyCurrent,
  SystemPowerStateLogging,
  SystemPowerLoggingEntry,
  SetPowerSettingValue,
  NotifyUserPowerSetting,
  PowerInformationLevelUnused0,
  SystemMonitorHiberBootPowerOff,
  SystemVideoState,
  TraceApplicationPowerMessage,
  TraceApplicationPowerMessageEnd,
  ProcessorPerfStates,
  ProcessorIdleStates,
  ProcessorCap,
  SystemWakeSource,
  SystemHiberFileInformation,
  TraceServicePowerMessage,
  ProcessorLoad,
  PowerShutdownNotification,
  MonitorCapabilities,
  SessionPowerInit,
  SessionDisplayState,
  PowerRequestCreate,
  PowerRequestAction,
  GetPowerRequestList,
  ProcessorInformationEx,
  NotifyUserModeLegacyPowerEvent,
  GroupPark,
  ProcessorIdleDomains,
  WakeTimerList,
  SystemHiberFileSize,
  ProcessorIdleStatesHv,
  ProcessorPerfStatesHv,
  ProcessorPerfCapHv,
  ProcessorSetIdle,
  LogicalProcessorIdling,
  UserPresence,
  PowerSettingNotificationName,
  GetPowerSettingValue,
  IdleResiliency,
  SessionRITState,
  SessionConnectNotification,
  SessionPowerCleanup,
  SessionLockState,
  SystemHiberbootState,
  PlatformInformation,
  PdcInvocation,
  MonitorInvocation,
  FirmwareTableInformationRegistered,
  SetShutdownSelectedTime,
  SuspendResumeInvocation,
  PlmPowerRequestCreate,
  ScreenOff,
  CsDeviceNotification,
  PlatformRole,
  LastResumePerformance,
  DisplayBurst,
  ExitLatencySamplingPercentage,
  RegisterSpmPowerSettings,
  PlatformIdleStates,
  ProcessorIdleVeto,
  PlatformIdleVeto,
  SystemBatteryStatePrecise,
  ThermalEvent,
  PowerRequestActionInternal,
  BatteryDeviceState,
  PowerInformationInternal,
  ThermalStandby,
  SystemHiberFileType,
  PhysicalPowerButtonPress,
  QueryPotentialDripsConstraint,
  EnergyTrackerCreate,
  EnergyTrackerQuery,
  UpdateBlackBoxRecorder,
  SessionAllowExternalDmaDevices,
  SendSuspendResumeNotification,
  BlackBoxRecorderDirectAccessBuffer,
  PowerInformationLevelMaximum
} POWER_INFORMATION_LEVEL;

typedef enum {
  MonitorRequestReasonUnknown,
  MonitorRequestReasonPowerButton,
  MonitorRequestReasonRemoteConnection,
  MonitorRequestReasonScMonitorpower,
  MonitorRequestReasonUserInput,
  MonitorRequestReasonAcDcDisplayBurst,
  MonitorRequestReasonUserDisplayBurst,
  MonitorRequestReasonPoSetSystemState,
  MonitorRequestReasonSetThreadExecutionState,
  MonitorRequestReasonFullWake,
  MonitorRequestReasonSessionUnlock,
  MonitorRequestReasonScreenOffRequest,
  MonitorRequestReasonIdleTimeout,
  MonitorRequestReasonPolicyChange,
  MonitorRequestReasonSleepButton,
  MonitorRequestReasonLid,
  MonitorRequestReasonBatteryCountChange,
  MonitorRequestReasonGracePeriod,
  MonitorRequestReasonPnP,
  MonitorRequestReasonDP,
  MonitorRequestReasonSxTransition,
  MonitorRequestReasonSystemIdle,
  MonitorRequestReasonNearProximity,
  MonitorRequestReasonThermalStandby,
  MonitorRequestReasonResumePdc,
  MonitorRequestReasonResumeS4,
  MonitorRequestReasonTerminal,
  MonitorRequestReasonPdcSignal,
  MonitorRequestReasonAcDcDisplayBurstSuppressed,
  MonitorRequestReasonSystemStateEntered,
  MonitorRequestReasonWinrt,
  MonitorRequestReasonUserInputKeyboard,
  MonitorRequestReasonUserInputMouse,
  MonitorRequestReasonUserInputTouchpad,
  MonitorRequestReasonUserInputPen,
  MonitorRequestReasonUserInputAccelerometer,
  MonitorRequestReasonUserInputHid,
  MonitorRequestReasonUserInputPoUserPresent,
  MonitorRequestReasonUserInputSessionSwitch,
  MonitorRequestReasonUserInputInitialization,
  MonitorRequestReasonPdcSignalWindowsMobilePwrNotif,
  MonitorRequestReasonPdcSignalWindowsMobileShell,
  MonitorRequestReasonPdcSignalHeyCortana,
  MonitorRequestReasonPdcSignalHolographicShell,
  MonitorRequestReasonPdcSignalFingerprint,
  MonitorRequestReasonDirectedDrips,
  MonitorRequestReasonDim,
  MonitorRequestReasonBuiltinPanel,
  MonitorRequestReasonDisplayRequiredUnDim,
  MonitorRequestReasonBatteryCountChangeSuppressed,
  MonitorRequestReasonResumeModernStandby,
  MonitorRequestReasonTerminalInit,
  MonitorRequestReasonPdcSignalSensorsHumanPresence,
  MonitorRequestReasonBatteryPreCritical,
  MonitorRequestReasonUserInputTouch,
  MonitorRequestReasonMax
} POWER_MONITOR_REQUEST_REASON;

typedef enum _POWER_MONITOR_REQUEST_TYPE {
  MonitorRequestTypeOff,
  MonitorRequestTypeOnAndPresent,
  MonitorRequestTypeToggleOn
} POWER_MONITOR_REQUEST_TYPE;

typedef struct _POWER_PLATFORM_INFORMATION {
  BOOLEAN AoAc;
} POWER_PLATFORM_INFORMATION, *PPOWER_PLATFORM_INFORMATION;

typedef enum _POWER_REQUEST_TYPE {
  PowerRequestDisplayRequired,
  PowerRequestSystemRequired,
  PowerRequestAwayModeRequired,
  PowerRequestExecutionRequired
} POWER_REQUEST_TYPE, *PPOWER_REQUEST_TYPE;

typedef struct _POWER_SESSION_ALLOW_EXTERNAL_DMA_DEVICES {
  BOOLEAN IsAllowed;
} POWER_SESSION_ALLOW_EXTERNAL_DMA_DEVICES, *PPOWER_SESSION_ALLOW_EXTERNAL_DMA_DEVICES;

typedef union _POWER_STATE {
  SYSTEM_POWER_STATE SystemState;
  DEVICE_POWER_STATE DeviceState;
} POWER_STATE, *PPOWER_STATE;

typedef enum _POWER_STATE_TYPE {
  SystemPowerState,
  DevicePowerState
} POWER_STATE_TYPE, *PPOWER_STATE_TYPE;

typedef enum {
  UserNotPresent,
  UserPresent,
  UserUnknown
} POWER_USER_PRESENCE_TYPE, *PPOWER_USER_PRESENCE_TYPE;

typedef struct _PRIVILEGE_SET {
  ULONG               PrivilegeCount;
  ULONG               Control;
  LUID_AND_ATTRIBUTES Privilege[ANYSIZE_ARRAY];
} PRIVILEGE_SET, *PPRIVILEGE_SET;

void ProbeForRead(
  [in] const volatile VOID *Address,
  [in] SIZE_T              Length,
  [in] ULONG               Alignment
);

void ProbeForWrite(
  [in, out] volatile VOID *Address,
  [in]      SIZE_T        Length,
  [in]      ULONG         Alignment
);

NTSTATUS PsAllocateAffinityToken(
  [out] PAFFINITY_TOKEN *AffinityToken
);

NTSTATUS PsCreateSystemThread(
  [out]           PHANDLE            ThreadHandle,
  [in]            ULONG              DesiredAccess,
  [in, optional]  POBJECT_ATTRIBUTES ObjectAttributes,
  [in, optional]  HANDLE             ProcessHandle,
  [out, optional] PCLIENT_ID         ClientId,
  [in]            PKSTART_ROUTINE    StartRoutine,
  [in, optional]  PVOID              StartContext
);

void PsFreeAffinityToken(
  _Frees_ptr_ PAFFINITY_TOKEN AffinityToken
);

PETHREAD PsGetCurrentThread();

BOOLEAN PsGetVersion(
  [out, optional] PULONG          MajorVersion,
  [out, optional] PULONG          MinorVersion,
  [out, optional] PULONG          BuildNumber,
  [out, optional] PUNICODE_STRING CSDVersion
);

ULONG64 PsQueryTotalCycleTimeProcess(
  [in, out] PEPROCESS Process,
  [out]     PULONG64  CycleTimeStamp
);

void PsRevertToUserMultipleGroupAffinityThread(
  [in] PAFFINITY_TOKEN AffinityToken
);

NTSTATUS PsSetSystemMultipleGroupAffinityThread(
  [in]      PGROUP_AFFINITY GroupAffinities,
  [in]      USHORT          GroupCount,
  [in, out] PAFFINITY_TOKEN AffinityToken
);

NTSTATUS PsTerminateSystemThread(
  [in] NTSTATUS ExitStatus
);

typedef struct _PTM_CONTROL_INTERFACE {
  USHORT                        Size;
  USHORT                        Version;
  PVOID                         Context;
  PINTERFACE_REFERENCE          InterfaceReference;
  PINTERFACE_DEREFERENCE        InterfaceDereference;
  PPTM_DEVICE_QUERY_GRANULARITY QueryGranularity;
  PPTM_DEVICE_QUERY_TIME_SOURCE QueryTimeSource;
  PPTM_DEVICE_ENABLE            Enable;
  PPTM_DEVICE_DISABLE           Disable;
} PTM_CONTROL_INTERFACE, *PPTM_CONTROL_INTERFACE;

void PushEntryList(
  [in, out] PSINGLE_LIST_ENTRY                  ListHead,
  [in, out] __drv_aliasesMem PSINGLE_LIST_ENTRY Entry
);

NTHALAPI VOID READ_PORT_BUFFER_UCHAR(
  [in]  PUCHAR Port,
  [out] PUCHAR Buffer,
  [in]  ULONG  Count
);

NTHALAPI VOID READ_PORT_BUFFER_ULONG(
  [in]  PULONG Port,
  [out] PULONG Buffer,
  [in]  ULONG  Count
);

NTHALAPI VOID READ_PORT_BUFFER_USHORT(
  [in]  PUSHORT Port,
  [out] PUSHORT Buffer,
  [in]  ULONG   Count
);

NTHALAPI UCHAR READ_PORT_UCHAR(
  [in] PUCHAR Port
);

NTHALAPI ULONG READ_PORT_ULONG(
  [in] PULONG Port
);

NTHALAPI USHORT READ_PORT_USHORT(
  [in] PUSHORT Port
);

void READ_REGISTER_BUFFER_UCHAR(
  [in]  volatile UCHAR *Register,
  [out] PUCHAR         Buffer,
  [in]  ULONG          Count
);

void READ_REGISTER_BUFFER_ULONG(
  [in]  volatile ULONG *Register,
  [out] PULONG         Buffer,
  [in]  ULONG          Count
);

void READ_REGISTER_BUFFER_ULONG64(
  [in]  volatile ULONG64 *Register,
  [out] PULONG64         Buffer,
  [in]  ULONG            Count
);

void READ_REGISTER_BUFFER_USHORT(
  [in]  volatile USHORT *Register,
  [out] PUSHORT         Buffer,
  [in]  ULONG           Count
);

UCHAR READ_REGISTER_UCHAR(
  [in] volatile UCHAR *Register
);

ULONG READ_REGISTER_ULONG(
  [in] volatile ULONG *Register
);

ULONG64 READ_REGISTER_ULONG64(
  [in] volatile ULONG64 *Register
);

USHORT READ_REGISTER_USHORT(
  [in] volatile USHORT *Register
);

UCHAR ReadBooleanRaw(
  BOOLEAN const volatile *Source
);

INT32 ReadInt32Acquire(
  INT32 const volatile *Source
);

INT32 ReadInt32NoFence(
  INT32 const volatile *Source
);

INT32 ReadInt32Raw(
  INT32 const volatile *Source
);

UINT32 ReadUInt32Acquire(
  UINT32 const volatile *Source
);

UINT32 ReadUInt32NoFence(
  UINT32 const volatile *Source
);

UINT32 ReadUInt32Raw(
  UINT32 const volatile *Source
);

typedef struct _REENUMERATE_SELF_INTERFACE_STANDARD {
  USHORT                 Size;
  USHORT                 Version;
  PVOID                  Context;
  PINTERFACE_REFERENCE   InterfaceReference;
  PINTERFACE_DEREFERENCE InterfaceDereference;
  PREENUMERATE_SELF      SurpriseRemoveAndReenumerateSelf;
} REENUMERATE_SELF_INTERFACE_STANDARD, *PREENUMERATE_SELF_INTERFACE_STANDARD;

typedef struct _REG_CALLBACK_CONTEXT_CLEANUP_INFORMATION {
  PVOID Object;
  PVOID ObjectContext;
  PVOID Reserved;
} REG_CALLBACK_CONTEXT_CLEANUP_INFORMATION, *PREG_CALLBACK_CONTEXT_CLEANUP_INFORMATION;

typedef struct _REG_CREATE_KEY_INFORMATION {
  PUNICODE_STRING CompleteName;
  PVOID           RootObject;
  PVOID           ObjectType;
  ULONG           CreateOptions;
  PUNICODE_STRING Class;
  PVOID           SecurityDescriptor;
  PVOID           SecurityQualityOfService;
  ACCESS_MASK     DesiredAccess;
  ACCESS_MASK     GrantedAccess;
  PULONG          Disposition;
  PVOID           *ResultObject;
  PVOID           CallContext;
  PVOID           RootObjectContext;
  PVOID           Transaction;
  PVOID           Reserved;
} REG_CREATE_KEY_INFORMATION, REG_OPEN_KEY_INFORMATION, *PREG_CREATE_KEY_INFORMATION, *PREG_OPEN_KEY_INFORMATION;

typedef struct _REG_CREATE_KEY_INFORMATION_V1 {
  PUNICODE_STRING CompleteName;
  PVOID           RootObject;
  PVOID           ObjectType;
  ULONG           Options;
  PUNICODE_STRING Class;
  PVOID           SecurityDescriptor;
  PVOID           SecurityQualityOfService;
  ACCESS_MASK     DesiredAccess;
  ACCESS_MASK     GrantedAccess;
  PULONG          Disposition;
  PVOID           *ResultObject;
  PVOID           CallContext;
  PVOID           RootObjectContext;
  PVOID           Transaction;
  ULONG_PTR       Version;
  PUNICODE_STRING RemainingName;
  ULONG           Wow64Flags;
  ULONG           Attributes;
  KPROCESSOR_MODE CheckAccessMode;
} REG_CREATE_KEY_INFORMATION_V1, REG_OPEN_KEY_INFORMATION_V1, *PREG_CREATE_KEY_INFORMATION_V1, *PREG_OPEN_KEY_INFORMATION_V1;

typedef struct _REG_DELETE_KEY_INFORMATION {
  PVOID Object;
  PVOID CallContext;
  PVOID ObjectContext;
  PVOID Reserved;
} REG_DELETE_KEY_INFORMATION, *PREG_DELETE_KEY_INFORMATION, REG_FLUSH_KEY_INFORMATION, *PREG_FLUSH_KEY_INFORMATION;

typedef struct _REG_DELETE_VALUE_KEY_INFORMATION {
  PVOID           Object;
  PUNICODE_STRING ValueName;
  PVOID           CallContext;
  PVOID           ObjectContext;
  PVOID           Reserved;
} REG_DELETE_VALUE_KEY_INFORMATION, *PREG_DELETE_VALUE_KEY_INFORMATION;

typedef struct _REG_ENUMERATE_KEY_INFORMATION {
  PVOID                 Object;
  ULONG                 Index;
  KEY_INFORMATION_CLASS KeyInformationClass;
  PVOID                 KeyInformation;
  ULONG                 Length;
  PULONG                ResultLength;
  PVOID                 CallContext;
  PVOID                 ObjectContext;
  PVOID                 Reserved;
} REG_ENUMERATE_KEY_INFORMATION, *PREG_ENUMERATE_KEY_INFORMATION;

typedef struct _REG_ENUMERATE_VALUE_KEY_INFORMATION {
  PVOID                       Object;
  ULONG                       Index;
  KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass;
  PVOID                       KeyValueInformation;
  ULONG                       Length;
  PULONG                      ResultLength;
  PVOID                       CallContext;
  PVOID                       ObjectContext;
  PVOID                       Reserved;
} REG_ENUMERATE_VALUE_KEY_INFORMATION, *PREG_ENUMERATE_VALUE_KEY_INFORMATION;

typedef struct _REG_KEY_HANDLE_CLOSE_INFORMATION {
  PVOID Object;
  PVOID CallContext;
  PVOID ObjectContext;
  PVOID Reserved;
} REG_KEY_HANDLE_CLOSE_INFORMATION, *PREG_KEY_HANDLE_CLOSE_INFORMATION;

typedef struct _REG_LOAD_KEY_INFORMATION {
  PVOID           Object;
  PUNICODE_STRING KeyName;
  PUNICODE_STRING SourceFile;
  ULONG           Flags;
  PVOID           TrustClassObject;
  PVOID           UserEvent;
  ACCESS_MASK     DesiredAccess;
  PHANDLE         RootHandle;
  PVOID           CallContext;
  PVOID           ObjectContext;
  PVOID           Reserved;
} REG_LOAD_KEY_INFORMATION, *PREG_LOAD_KEY_INFORMATION;

typedef struct _REG_LOAD_KEY_INFORMATION_V2 {
  PVOID           Object;
  PUNICODE_STRING KeyName;
  PUNICODE_STRING SourceFile;
  ULONG           Flags;
  PVOID           TrustClassObject;
  PVOID           UserEvent;
  ACCESS_MASK     DesiredAccess;
  PHANDLE         RootHandle;
  PVOID           CallContext;
  PVOID           ObjectContext;
  ULONG_PTR       Version;
  PVOID           FileAccessToken;
} REG_LOAD_KEY_INFORMATION_V2, *PREG_LOAD_KEY_INFORMATION_V2;

typedef enum _REG_NOTIFY_CLASS {
  RegNtDeleteKey,
  RegNtPreDeleteKey,
  RegNtSetValueKey,
  RegNtPreSetValueKey,
  RegNtDeleteValueKey,
  RegNtPreDeleteValueKey,
  RegNtSetInformationKey,
  RegNtPreSetInformationKey,
  RegNtRenameKey,
  RegNtPreRenameKey,
  RegNtEnumerateKey,
  RegNtPreEnumerateKey,
  RegNtEnumerateValueKey,
  RegNtPreEnumerateValueKey,
  RegNtQueryKey,
  RegNtPreQueryKey,
  RegNtQueryValueKey,
  RegNtPreQueryValueKey,
  RegNtQueryMultipleValueKey,
  RegNtPreQueryMultipleValueKey,
  RegNtPreCreateKey,
  RegNtPostCreateKey,
  RegNtPreOpenKey,
  RegNtPostOpenKey,
  RegNtKeyHandleClose,
  RegNtPreKeyHandleClose,
  RegNtPostDeleteKey,
  RegNtPostSetValueKey,
  RegNtPostDeleteValueKey,
  RegNtPostSetInformationKey,
  RegNtPostRenameKey,
  RegNtPostEnumerateKey,
  RegNtPostEnumerateValueKey,
  RegNtPostQueryKey,
  RegNtPostQueryValueKey,
  RegNtPostQueryMultipleValueKey,
  RegNtPostKeyHandleClose,
  RegNtPreCreateKeyEx,
  RegNtPostCreateKeyEx,
  RegNtPreOpenKeyEx,
  RegNtPostOpenKeyEx,
  RegNtPreFlushKey,
  RegNtPostFlushKey,
  RegNtPreLoadKey,
  RegNtPostLoadKey,
  RegNtPreUnLoadKey,
  RegNtPostUnLoadKey,
  RegNtPreQueryKeySecurity,
  RegNtPostQueryKeySecurity,
  RegNtPreSetKeySecurity,
  RegNtPostSetKeySecurity,
  RegNtCallbackObjectContextCleanup,
  RegNtPreRestoreKey,
  RegNtPostRestoreKey,
  RegNtPreSaveKey,
  RegNtPostSaveKey,
  RegNtPreReplaceKey,
  RegNtPostReplaceKey,
  RegNtPreQueryKeyName,
  RegNtPostQueryKeyName,
  RegNtPreSaveMergedKey,
  RegNtPostSaveMergedKey,
  MaxRegNtNotifyClass
} REG_NOTIFY_CLASS;

typedef struct _REG_POST_CREATE_KEY_INFORMATION {
  PUNICODE_STRING CompleteName;
  PVOID           Object;
  NTSTATUS        Status;
} REG_POST_CREATE_KEY_INFORMATION, REG_POST_OPEN_KEY_INFORMATION, *PREG_POST_CREATE_KEY_INFORMATION, *PREG_POST_OPEN_KEY_INFORMATION;

typedef struct _REG_POST_OPERATION_INFORMATION {
  PVOID    Object;
  NTSTATUS Status;
  PVOID    PreInformation;
  NTSTATUS ReturnStatus;
  PVOID    CallContext;
  PVOID    ObjectContext;
  PVOID    Reserved;
} REG_POST_OPERATION_INFORMATION, *PREG_POST_OPERATION_INFORMATION;

typedef struct _REG_PRE_CREATE_KEY_INFORMATION {
  PUNICODE_STRING CompleteName;
} REG_PRE_CREATE_KEY_INFORMATION, REG_PRE_OPEN_KEY_INFORMATION, *PREG_PRE_CREATE_KEY_INFORMATION, *PREG_PRE_OPEN_KEY_INFORMATION;


typedef struct _REG_PRE_CREATE_KEY_INFORMATION {
  PUNICODE_STRING CompleteName;
} REG_PRE_CREATE_KEY_INFORMATION, REG_PRE_OPEN_KEY_INFORMATION, *PREG_PRE_CREATE_KEY_INFORMATION, *PREG_PRE_OPEN_KEY_INFORMATION;


typedef struct _REG_QUERY_KEY_INFORMATION {
  PVOID                 Object;
  KEY_INFORMATION_CLASS KeyInformationClass;
  PVOID                 KeyInformation;
  ULONG                 Length;
  PULONG                ResultLength;
  PVOID                 CallContext;
  PVOID                 ObjectContext;
  PVOID                 Reserved;
} REG_QUERY_KEY_INFORMATION, *PREG_QUERY_KEY_INFORMATION;


typedef struct _REG_QUERY_KEY_NAME {
  PVOID                    Object;
  POBJECT_NAME_INFORMATION ObjectNameInfo;
  ULONG                    Length;
  PULONG                   ReturnLength;
  PVOID                    CallContext;
  PVOID                    ObjectContext;
  PVOID                    Reserved;
} REG_QUERY_KEY_NAME, *PREG_QUERY_KEY_NAME;

typedef struct _REG_QUERY_KEY_SECURITY_INFORMATION {
  PVOID                 Object;
  PSECURITY_INFORMATION SecurityInformation;
  PSECURITY_DESCRIPTOR  SecurityDescriptor;
  PULONG                Length;
  PVOID                 CallContext;
  PVOID                 ObjectContext;
  PVOID                 Reserved;
} REG_QUERY_KEY_SECURITY_INFORMATION, *PREG_QUERY_KEY_SECURITY_INFORMATION;

typedef struct _REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION {
  PVOID            Object;
  PKEY_VALUE_ENTRY ValueEntries;
  ULONG            EntryCount;
  PVOID            ValueBuffer;
  PULONG           BufferLength;
  PULONG           RequiredBufferLength;
  PVOID            CallContext;
  PVOID            ObjectContext;
  PVOID            Reserved;
} REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION, *PREG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION;

typedef struct _REG_QUERY_VALUE_KEY_INFORMATION {
  PVOID                       Object;
  PUNICODE_STRING             ValueName;
  KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass;
  PVOID                       KeyValueInformation;
  ULONG                       Length;
  PULONG                      ResultLength;
  PVOID                       CallContext;
  PVOID                       ObjectContext;
  PVOID                       Reserved;
} REG_QUERY_VALUE_KEY_INFORMATION, *PREG_QUERY_VALUE_KEY_INFORMATION;

typedef struct _REG_RENAME_KEY_INFORMATION {
  PVOID           Object;
  PUNICODE_STRING NewName;
  PVOID           CallContext;
  PVOID           ObjectContext;
  PVOID           Reserved;
} REG_RENAME_KEY_INFORMATION, *PREG_RENAME_KEY_INFORMATION;

typedef struct _REG_REPLACE_KEY_INFORMATION {
  PVOID           Object;
  PUNICODE_STRING OldFileName;
  PUNICODE_STRING NewFileName;
  PVOID           CallContext;
  PVOID           ObjectContext;
  PVOID           Reserved;
} REG_REPLACE_KEY_INFORMATION, *PREG_REPLACE_KEY_INFORMATION;

typedef struct _REG_RESTORE_KEY_INFORMATION {
  PVOID  Object;
  HANDLE FileHandle;
  ULONG  Flags;
  PVOID  CallContext;
  PVOID  ObjectContext;
  PVOID  Reserved;
} REG_RESTORE_KEY_INFORMATION, *PREG_RESTORE_KEY_INFORMATION;

typedef struct _REG_SAVE_KEY_INFORMATION {
  PVOID  Object;
  HANDLE FileHandle;
  ULONG  Format;
  PVOID  CallContext;
  PVOID  ObjectContext;
  PVOID  Reserved;
} REG_SAVE_KEY_INFORMATION, *PREG_SAVE_KEY_INFORMATION;

typedef struct _REG_SAVE_MERGED_KEY_INFORMATION {
  PVOID  Object;
  HANDLE FileHandle;
  PVOID  HighKeyObject;
  PVOID  LowKeyObject;
  PVOID  CallContext;
  PVOID  ObjectContext;
  PVOID  Reserved;
} REG_SAVE_MERGED_KEY_INFORMATION, *PREG_SAVE_MERGED_KEY_INFORMATION;


typedef struct _REG_SET_INFORMATION_KEY_INFORMATION {
  PVOID                     Object;
  KEY_SET_INFORMATION_CLASS KeySetInformationClass;
  PVOID                     KeySetInformation;
  ULONG                     KeySetInformationLength;
  PVOID                     CallContext;
  PVOID                     ObjectContext;
  PVOID                     Reserved;
} REG_SET_INFORMATION_KEY_INFORMATION, *PREG_SET_INFORMATION_KEY_INFORMATION;

typedef struct _REG_SET_KEY_SECURITY_INFORMATION {
  PVOID                 Object;
  PSECURITY_INFORMATION SecurityInformation;
  PSECURITY_DESCRIPTOR  SecurityDescriptor;
  PVOID                 CallContext;
  PVOID                 ObjectContext;
  PVOID                 Reserved;
} REG_SET_KEY_SECURITY_INFORMATION, *PREG_SET_KEY_SECURITY_INFORMATION;

typedef struct _REG_SET_VALUE_KEY_INFORMATION {
  PVOID           Object;
  PUNICODE_STRING ValueName;
  ULONG           TitleIndex;
  ULONG           Type;
  PVOID           Data;
  ULONG           DataSize;
  PVOID           CallContext;
  PVOID           ObjectContext;
  PVOID           Reserved;
} REG_SET_VALUE_KEY_INFORMATION, *PREG_SET_VALUE_KEY_INFORMATION;


typedef struct _REG_UNLOAD_KEY_INFORMATION {
  PVOID Object;
  PVOID UserEvent;
  PVOID CallContext;
  PVOID ObjectContext;
  PVOID Reserved;
} REG_UNLOAD_KEY_INFORMATION, *PREG_UNLOAD_KEY_INFORMATION;

BOOLEAN RemoveEntryList(
  [in] PLIST_ENTRY Entry
);

PLIST_ENTRY RemoveHeadList(
  [in, out] PLIST_ENTRY ListHead
);

PLIST_ENTRY RemoveTailList(
  [in, out] PLIST_ENTRY ListHead
);


typedef struct _RESOURCEMANAGER_BASIC_INFORMATION {
  GUID  ResourceManagerId;
  ULONG DescriptionLength;
  WCHAR Description[1];
} RESOURCEMANAGER_BASIC_INFORMATION, *PRESOURCEMANAGER_BASIC_INFORMATION;

typedef struct _RESOURCEMANAGER_COMPLETION_INFORMATION {
  HANDLE    IoCompletionPortHandle;
  ULONG_PTR CompletionKey;
} RESOURCEMANAGER_COMPLETION_INFORMATION, *PRESOURCEMANAGER_COMPLETION_INFORMATION;

typedef enum _RESOURCEMANAGER_INFORMATION_CLASS {
  ResourceManagerBasicInformation,
  ResourceManagerCompletionInformation
} RESOURCEMANAGER_INFORMATION_CLASS;


  NTSYSAPI
  ULONG
  NTAPI
  RtlAnsiStringToUnicodeSize(
  PANSI_STRING AnsiString
  );


#define RtlAnsiStringToUnicodeSize(STRING) (                 \
    RtlxAnsiStringToUnicodeSize(STRING)                      \
)



NTSYSAPI NTSTATUS RtlAnsiStringToUnicodeString(
  [in, out] PUNICODE_STRING DestinationString,
  [in]      PCANSI_STRING   SourceString,
  [in]      BOOLEAN         AllocateDestinationString
);


NTSYSAPI NTSTATUS RtlAppendUnicodeStringToString(
  [in, out] PUNICODE_STRING  Destination,
  [in]      PCUNICODE_STRING Source
);

NTSYSAPI NTSTATUS RtlAppendUnicodeToString(
  [in, out]      PUNICODE_STRING Destination,
  [in, optional] PCWSTR          Source
);


NTSYSAPI BOOLEAN RtlAreBitsClear(
  [in] PRTL_BITMAP BitMapHeader,
  [in] ULONG       StartingIndex,
  [in] ULONG       Length
);

NTSYSAPI BOOLEAN RtlAreBitsSet(
  [in] PRTL_BITMAP BitMapHeader,
  [in] ULONG       StartingIndex,
  [in] ULONG       Length
);


BOOLEAN RtlCheckBit(
  [in] PRTL_BITMAP BitMapHeader,
  [in] ULONG       BitPosition
);

NTSYSAPI NTSTATUS RtlCheckRegistryKey(
  [in] ULONG RelativeTo,
  [in] PWSTR Path
);

NTSYSAPI VOID RtlClearAllBits(
  [in] PRTL_BITMAP BitMapHeader
);

NTSYSAPI VOID RtlClearBit(
  [in] PRTL_BITMAP BitMapHeader,
  [in] ULONG       BitNumber
);

NTSYSAPI VOID RtlClearBits(
  [in] PRTL_BITMAP BitMapHeader,
  [in] ULONG       StartingIndex,
  [in] ULONG       NumberToClear
);

NTSYSAPI ULONGLONG RtlCmDecodeMemIoResource(
  [in]            PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor,
  [out, optional] PULONGLONG                      Start
);

NTSYSAPI NTSTATUS RtlCmEncodeMemIoResource(
  [in] PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor,
  [in] UCHAR                           Type,
  [in] ULONGLONG                       Length,
  [in] ULONGLONG                       Start
);

NTSYSAPI SIZE_T RtlCompareMemory(
  [in] const VOID *Source1,
  [in] const VOID *Source2,
  [in] SIZE_T     Length
);

NTSYSAPI LONG RtlCompareUnicodeString(
  [in] PCUNICODE_STRING String1,
  [in] PCUNICODE_STRING String2,
  [in] BOOLEAN          CaseInSensitive
);

int RtlConstantTimeEqualMemory(
  const void    *v1,
  const void    *v2,
  unsigned long len
);

DECLSPEC_DEPRECATED_DDK_WINXP LARGE_INTEGER NTAPI_INLINE RtlConvertLongToLargeInteger(
  [in] LONG SignedInteger
);

DECLSPEC_DEPRECATED_DDK_WINXP LARGE_INTEGER NTAPI_INLINE RtlConvertUlongToLargeInteger(
  [in] ULONG UnsignedInteger
);

void RtlCopyMemory(
   void*       Destination,
   const void* Source,
   size_t      Length
);

NTSYSAPI VOID RtlCopyMemoryNonTemporal(
  VOID       *Destination,
  const VOID *Source,
  SIZE_T     Length
);

NTSYSAPI VOID RtlCopyUnicodeString(
  [in, out]      PUNICODE_STRING  DestinationString,
  [in, optional] PCUNICODE_STRING SourceString
);

NTSYSAPI NTSTATUS RtlCreateRegistryKey(
  [in] ULONG RelativeTo,
  [in] PWSTR Path
);

NTSYSAPI NTSTATUS RtlCreateSecurityDescriptor(
  [out] PSECURITY_DESCRIPTOR SecurityDescriptor,
  [in]  ULONG                Revision
);

NTSYSAPI NTSTATUS RtlDeleteRegistryValue(
  [in] ULONG  RelativeTo,
  [in] PCWSTR Path,
  [in] PCWSTR ValueName
);

NTSYSAPI WCHAR RtlDowncaseUnicodeChar(
  [in] WCHAR SourceCharacter
);

BOOL WINAPI
RtlEqualMemory(
   [in] void*  Destination,
   [in] void*  Source,
   [in] size_t Length
);

NTSYSAPI BOOLEAN RtlEqualUnicodeString(
  [in] PCUNICODE_STRING String1,
  [in] PCUNICODE_STRING String2,
  [in] BOOLEAN          CaseInSensitive
);

void RtlFillMemory(
   void*  Destination,
   size_t Length
   int    Fill
);


NTSYSAPI VOID RtlFillMemoryNonTemporal(
  VOID        *Destination,
  SIZE_T      Length,
  const UCHAR Value
);

NTSYSAPI ULONG RtlFindClearBits(
  [in] PRTL_BITMAP BitMapHeader,
  [in] ULONG       NumberToFind,
  [in] ULONG       HintIndex
);

NTSYSAPI ULONG RtlFindClearBitsAndSet(
  [in] PRTL_BITMAP BitMapHeader,
  [in] ULONG       NumberToFind,
  [in] ULONG       HintIndex
);

NTSYSAPI ULONG RtlFindClearRuns(
  [in]  PRTL_BITMAP     BitMapHeader,
  [out] PRTL_BITMAP_RUN RunArray,
  [in]  ULONG           SizeOfRunArray,
  [in]  BOOLEAN         LocateLongestRuns
);

NTSYSAPI ULONG RtlFindFirstRunClear(
  [in]  PRTL_BITMAP BitMapHeader,
  [out] PULONG      StartingIndex
);

NTSYSAPI ULONG RtlFindLastBackwardRunClear(
  [in]  PRTL_BITMAP BitMapHeader,
  [in]  ULONG       FromIndex,
  [out] PULONG      StartingRunIndex
);

NTSYSAPI CCHAR RtlFindLeastSignificantBit(
  [in] ULONGLONG Set
);

NTSYSAPI ULONG RtlFindLongestRunClear(
  [in]  PRTL_BITMAP BitMapHeader,
  [out] PULONG      StartingIndex
);

NTSYSAPI CCHAR RtlFindMostSignificantBit(
  [in] ULONGLONG Set
);

NTSYSAPI ULONG RtlFindNextForwardRunClear(
  [in]  PRTL_BITMAP BitMapHeader,
  [in]  ULONG       FromIndex,
  [out] PULONG      StartingRunIndex
);

NTSYSAPI ULONG RtlFindSetBits(
  [in] PRTL_BITMAP BitMapHeader,
  [in] ULONG       NumberToFind,
  [in] ULONG       HintIndex
);




NTSYSAPI ULONG RtlFindSetBitsAndClear(
  [in] PRTL_BITMAP BitMapHeader,
  [in] ULONG       NumberToFind,
  [in] ULONG       HintIndex
);


NTSYSAPI VOID RtlFreeAnsiString(
  [in, out] PANSI_STRING AnsiString
);


NTSYSAPI VOID RtlFreeUnicodeString(
  [in, out] PUNICODE_STRING UnicodeString
);

NTSYSAPI VOID RtlFreeUTF8String(
  PUTF8_STRING utf8String
);

NTSYSAPI NTSTATUS RtlGetVersion(
  [out] PRTL_OSVERSIONINFOW lpVersionInformation
);

NTSYSAPI NTSTATUS RtlGUIDFromString(
  [in]  PCUNICODE_STRING GuidString,
  [out] GUID             *Guid
);

NTSYSAPI NTSTATUS RtlHashUnicodeString(
  [in]  PCUNICODE_STRING String,
  [in]  BOOLEAN          CaseInSensitive,
  [in]  ULONG            HashAlgorithm,
  [out] PULONG           HashValue
);

NTSYSAPI VOID RtlInitAnsiString(
  [out]          PANSI_STRING          DestinationString,
  [in, optional] __drv_aliasesMem PCSZ SourceString
);

NTSYSAPI VOID RtlInitializeBitMap(
  [out] PRTL_BITMAP             BitMapHeader,
  [in]  __drv_aliasesMem PULONG BitMapBuffer,
  [in]  ULONG                   SizeOfBitMap
);

NTSYSAPI VOID RtlInitString(
  [out]          PSTRING               DestinationString,
  [in, optional] __drv_aliasesMem PCSZ SourceString
);


NTSYSAPI NTSTATUS RtlInitStringEx(
  [out]          PSTRING               DestinationString,
  [in, optional] __drv_aliasesMem PCSZ SourceString
);

NTSYSAPI VOID RtlInitUnicodeString(
  [out]          PUNICODE_STRING         DestinationString,
  [in, optional] __drv_aliasesMem PCWSTR SourceString
);


NTSYSAPI VOID RtlInitUTF8String(
  PUTF8_STRING          DestinationString,
  __drv_aliasesMem PCSZ SourceString
);

NTSYSAPI NTSTATUS RtlInitUTF8StringEx(
  PUTF8_STRING          DestinationString,
  __drv_aliasesMem PCSZ SourceString
);

NTSYSAPI NTSTATUS RtlInt64ToUnicodeString(
  [in]           ULONGLONG       Value,
  [in, optional] ULONG           Base,
  [in, out]      PUNICODE_STRING String
);

NTSYSAPI NTSTATUS RtlIntegerToUnicodeString(
  [in]           ULONG           Value,
  [in, optional] ULONG           Base,
  [in, out]      PUNICODE_STRING String
);

void RtlIntPtrToUnicodeString(
  [in]            Value,
  [in, optional]  Base,
  [in, out]       String
);

NTSYSAPI ULONGLONG RtlIoDecodeMemIoResource(
  [in]            PIO_RESOURCE_DESCRIPTOR Descriptor,
  [out, optional] PULONGLONG              Alignment,
  [out, optional] PULONGLONG              MinimumAddress,
  [out, optional] PULONGLONG              MaximumAddress
);

NTSYSAPI NTSTATUS RtlIoEncodeMemIoResource(
  [in] PIO_RESOURCE_DESCRIPTOR Descriptor,
  [in] UCHAR                   Type,
  [in] ULONGLONG               Length,
  [in] ULONGLONG               Alignment,
  [in] ULONGLONG               MinimumAddress,
  [in] ULONGLONG               MaximumAddress
);

BOOLEAN RtlIsNtDdiVersionAvailable(
  [in] ULONG Version
);

BOOLEAN RtlIsServicePackVersionInstalled(
  [in] ULONG Version
);

NTSYSAPI ULONG RtlLengthSecurityDescriptor(
  [in] PSECURITY_DESCRIPTOR SecurityDescriptor
);

void RtlMoveMemory(
   void*       Destination,
   const void* Source,
   size_t      Length
);


NTSYSAPI ULONG RtlNumberOfClearBits(
  [in] PRTL_BITMAP BitMapHeader
);

NTSYSAPI ULONG RtlNumberOfSetBits(
  [in] PRTL_BITMAP BitMapHeader
);

NTSYSAPI ULONG RtlNumberOfSetBitsUlongPtr(
  [in] ULONG_PTR Target
);

NTSYSAPI VOID RtlPrefetchMemoryNonTemporal(
  [in] PVOID  Source,
  [in] SIZE_T Length
);

NTSYSAPI NTSTATUS RtlQueryRegistryValues(
  [in]           ULONG                     RelativeTo,
  [in]           PCWSTR                    Path,
  [in, out]      PRTL_QUERY_REGISTRY_TABLE QueryTable,
  [in, optional] PVOID                     Context,
  [in, optional] PVOID                     Environment
);

void RtlSanitizeUnicodeStringPadding(
  PUNICODE_STRING String
);

PVOID RtlSecureZeroMemory(
  [out] PVOID  ptr,
  [in]  SIZE_T cnt
);

NTSYSAPI VOID RtlSetAllBits(
  [in] PRTL_BITMAP BitMapHeader
);

NTSYSAPI VOID RtlSetBit(
  [in] PRTL_BITMAP BitMapHeader,
  [in] ULONG       BitNumber
);

NTSYSAPI VOID RtlSetBits(
  [in] PRTL_BITMAP BitMapHeader,
  [in] ULONG       StartingIndex,
  [in] ULONG       NumberToSet
);

NTSYSAPI NTSTATUS RtlSetDaclSecurityDescriptor(
  [in, out]      PSECURITY_DESCRIPTOR SecurityDescriptor,
  [in]           BOOLEAN              DaclPresent,
  [in, optional] PACL                 Dacl,
  [in, optional] BOOLEAN              DaclDefaulted
);

NTSYSAPI NTSTATUS RtlStringFromGUID(
  [in]  REFGUID         Guid,
  [out] PUNICODE_STRING GuidString
);

NTSYSAPI BOOLEAN RtlTestBit(
  [in] PRTL_BITMAP BitMapHeader,
  [in] ULONG       BitNumber
);

NTSYSAPI BOOLEAN RtlTimeFieldsToTime(
  [in]  PTIME_FIELDS   TimeFields,
  [out] PLARGE_INTEGER Time
);


NTSYSAPI VOID RtlTimeToTimeFields(
  [in]  PLARGE_INTEGER Time,
  [out] PTIME_FIELDS   TimeFields
);

NTSYSAPI ULONG RtlUlongByteSwap(
  [in] ULONG Source
);

NTSYSAPI ULONGLONG RtlUlonglongByteSwap(
  ULONGLONG Source
);

void RtlUnicodeStringToAnsiSize(
  [in]  STRING
);

NTSYSAPI NTSTATUS RtlUnicodeStringToAnsiString(
  [in, out] PANSI_STRING     DestinationString,
  [in]      PCUNICODE_STRING SourceString,
  [in]      BOOLEAN          AllocateDestinationString
);

NTSYSAPI NTSTATUS RtlUnicodeStringToInteger(
  [in]           PCUNICODE_STRING String,
  [in, optional] ULONG            Base,
  [out]          PULONG           Value
);

NTSYSAPI NTSTATUS RtlUnicodeStringToUTF8String(
  PUTF8_STRING     DestinationString,
  PCUNICODE_STRING SourceString,
  BOOLEAN          AllocateDestinationString
);

NTSYSAPI NTSTATUS RtlUnicodeToUTF8N(
  [out] PCHAR  UTF8StringDestination,
  [in]  ULONG  UTF8StringMaxByteCount,
  [out] PULONG UTF8StringActualByteCount,
  [in]  PCWCH  UnicodeStringSource,
  [in]  ULONG  UnicodeStringByteCount
);

NTSYSAPI WCHAR RtlUpcaseUnicodeChar(
  [in] WCHAR SourceCharacter
);

NTSYSAPI USHORT RtlUshortByteSwap(
  [in] USHORT Source
);


NTSYSAPI NTSTATUS RtlUTF8StringToUnicodeString(
  PUNICODE_STRING DestinationString,
  PUTF8_STRING    SourceString,
  BOOLEAN         AllocateDestinationString
);

NTSYSAPI NTSTATUS RtlUTF8ToUnicodeN(
  [out, optional] PWSTR  UnicodeStringDestination,
  [in]            ULONG  UnicodeStringMaxByteCount,
  [out]           PULONG UnicodeStringActualByteCount,
  [in]            PCCH   UTF8StringSource,
  [in]            ULONG  UTF8StringByteCount
);

NTSYSAPI BOOLEAN RtlValidRelativeSecurityDescriptor(
  [in] PSECURITY_DESCRIPTOR SecurityDescriptorInput,
  [in] ULONG                SecurityDescriptorLength,
  [in] SECURITY_INFORMATION RequiredInformation
);

NTSYSAPI BOOLEAN RtlValidSecurityDescriptor(
  [in] PSECURITY_DESCRIPTOR SecurityDescriptor
);

NTSYSAPI NTSTATUS RtlVerifyVersionInfo(
  [in] PRTL_OSVERSIONINFOEXW VersionInfo,
  [in] ULONG                 TypeMask,
  [in] ULONGLONG             ConditionMask
);

NTSYSAPI NTSTATUS RtlWriteRegistryValue(
  [in]           ULONG  RelativeTo,
  [in]           PCWSTR Path,
  [in]           PCWSTR ValueName,
  [in]           ULONG  ValueType,
  [in, optional] PVOID  ValueData,
  [in]           ULONG  ValueLength
);

NTSYSAPI ULONG RtlxAnsiStringToUnicodeSize(
  [in] PCANSI_STRING AnsiString
);

NTSYSAPI ULONG RtlxUnicodeStringToAnsiSize(
  [in] PCUNICODE_STRING UnicodeString
);

void RtlZeroMemory(
   void*  Destination,
   size_t Length
);

typedef struct _SCATTER_GATHER_LIST {
  ULONG                  NumberOfElements;
  ULONG_PTR              Reserved;
  SCATTER_GATHER_ELEMENT Elements[];
} SCATTER_GATHER_LIST, *PSCATTER_GATHER_LIST;

typedef struct _SDEV_IDENTIFIER_INTERFACE {
  INTERFACE            InterfaceHeader;
  PGET_SDEV_IDENTIFIER GetIdentifier;
} SDEV_IDENTIFIER_INTERFACE, *PSDEV_IDENTIFIER_INTERFACE;

typedef enum _SE_IMAGE_TYPE {
  SeImageTypeElamDriver,
  SeImageTypeDriver = ,
  SeImageTypePlatformSecureFile = ,
  SeImageTypeDynamicCodeFile = ,
  SeImageTypeMax =
} SE_IMAGE_TYPE, *PSE_IMAGE_TYPE;


BOOLEAN SeAccessCheck(
  [in]  PSECURITY_DESCRIPTOR      SecurityDescriptor,
  [in]  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
  [in]  BOOLEAN                   SubjectContextLocked,
  [in]  ACCESS_MASK               DesiredAccess,
  [in]  ACCESS_MASK               PreviouslyGrantedAccess,
  [out] PPRIVILEGE_SET            *Privileges,
  [in]  PGENERIC_MAPPING          GenericMapping,
  [in]  KPROCESSOR_MODE           AccessMode,
  [out] PACCESS_MASK              GrantedAccess,
  [out] PNTSTATUS                 AccessStatus
);


NTSTATUS SeAssignSecurity(
  [in, optional] PSECURITY_DESCRIPTOR      ParentDescriptor,
  [in, optional] PSECURITY_DESCRIPTOR      ExplicitDescriptor,
  [out]          PSECURITY_DESCRIPTOR      *NewDescriptor,
  [in]           BOOLEAN                   IsDirectoryObject,
  [in]           PSECURITY_SUBJECT_CONTEXT SubjectContext,
  [in]           PGENERIC_MAPPING          GenericMapping,
  [in]           POOL_TYPE                 PoolType
);



NTSTATUS SeAssignSecurityEx(
  [in, optional] PSECURITY_DESCRIPTOR      ParentDescriptor,
  [in, optional] PSECURITY_DESCRIPTOR      ExplicitDescriptor,
  [out]          PSECURITY_DESCRIPTOR      *NewDescriptor,
  [in, optional] GUID                      *ObjectType,
  [in]           BOOLEAN                   IsDirectoryObject,
  [in]           ULONG                     AutoInheritFlags,
  [in]           PSECURITY_SUBJECT_CONTEXT SubjectContext,
  [in]           PGENERIC_MAPPING          GenericMapping,
  [in]           POOL_TYPE                 PoolType
);

typedef struct _SECTION_OBJECT_POINTERS {
  PVOID DataSectionObject;
  PVOID SharedCacheMap;
  PVOID ImageSectionObject;
} SECTION_OBJECT_POINTERS;

NTSTATUS SeDeassignSecurity(
  [in, out] PSECURITY_DESCRIPTOR *SecurityDescriptor
);

typedef struct {
  ULONG                  Version;
  GUID                   Guid;
  SYSTEM_POWER_CONDITION PowerCondition;
  ULONG                  DataLength;
  UCHAR                  Data[ANYSIZE_ARRAY];
} SET_POWER_SETTING_VALUE, *PSET_POWER_SETTING_VALUE;

BOOLEAN SeValidSecurityDescriptor(
  [in] ULONG                Length,
  [in] PSECURITY_DESCRIPTOR SecurityDescriptor
);


typedef struct _SLIST_ENTRY {
  struct _SLIST_ENTRY *Next;
} SLIST_ENTRY, *PSLIST_ENTRY;


typedef struct _SYSTEM_POOL_ZEROING_INFORMATION {
  BOOLEAN PoolZeroingSupportPresent;
} SYSTEM_POOL_ZEROING_INFORMATION, *PSYSTEM_POOL_ZEROING_INFORMATION;


typedef enum {
  PoAc,
  PoDc,
  PoHot,
  PoConditionMaximum
} SYSTEM_POWER_CONDITION;

typedef enum _SYSTEM_POWER_STATE {
  PowerSystemUnspecified,
  PowerSystemWorking,
  PowerSystemSleeping1,
  PowerSystemSleeping2,
  PowerSystemSleeping3,
  PowerSystemHibernate,
  PowerSystemShutdown,
  PowerSystemMaximum
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;

typedef struct _SYSTEM_POWER_STATE_CONTEXT {
  union {
    struct {
      ULONG Reserved1 : 8;
      ULONG TargetSystemState : 4;
      ULONG EffectiveSystemState : 4;
      ULONG CurrentSystemState : 4;
      ULONG IgnoreHibernationPath : 1;
      ULONG PseudoTransition : 1;
      ULONG KernelSoftReboot : 1;
      ULONG DirectedDripsTransition : 1;
      ULONG Reserved2 : 8;
    } DUMMYSTRUCTNAME;
    ULONG ContextAsUlong;
  } DUMMYUNIONNAME;
} SYSTEM_POWER_STATE_CONTEXT, *PSYSTEM_POWER_STATE_CONTEXT;

typedef struct _TARGET_DEVICE_CUSTOM_NOTIFICATION {
  USHORT       Version;
  USHORT       Size;
  GUID         Event;
  PFILE_OBJECT FileObject;
  LONG         NameBufferOffset;
  UCHAR        CustomDataBuffer[1];
} TARGET_DEVICE_CUSTOM_NOTIFICATION, *PTARGET_DEVICE_CUSTOM_NOTIFICATION;

typedef struct _TARGET_DEVICE_REMOVAL_NOTIFICATION {
  USHORT       Version;
  USHORT       Size;
  GUID         Event;
  PFILE_OBJECT FileObject;
} TARGET_DEVICE_REMOVAL_NOTIFICATION, *PTARGET_DEVICE_REMOVAL_NOTIFICATION;


typedef struct _TIME_FIELDS {
  CSHORT Year;
  CSHORT Month;
  CSHORT Day;
  CSHORT Hour;
  CSHORT Minute;
  CSHORT Second;
  CSHORT Milliseconds;
  CSHORT Weekday;
} TIME_FIELDS;

NTSTATUS TmCommitComplete(
  [in] PKENLISTMENT   Enlistment,
  [in] PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmCommitEnlistment(
  [in] PKENLISTMENT   Enlistment,
  [in] PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmCommitTransaction(
  [in] PKTRANSACTION Transaction,
  [in] BOOLEAN       Wait
);

NTSTATUS TmCreateEnlistment(
  [out]          PHANDLE            EnlistmentHandle,
  [in]           KPROCESSOR_MODE    PreviousMode,
  [in]           ACCESS_MASK        DesiredAccess,
  [in]           POBJECT_ATTRIBUTES ObjectAttributes,
  [in]           PRKRESOURCEMANAGER ResourceManager,
  [in]           PKTRANSACTION      Transaction,
  [in, optional] ULONG              CreateOptions,
  [in]           NOTIFICATION_MASK  NotificationMask,
  [in, optional] PVOID              EnlistmentKey
);

NTSTATUS TmDereferenceEnlistmentKey(
  [in]            PKENLISTMENT Enlistment,
  [out, optional] PBOOLEAN     LastReference
);

NTSTATUS TmEnableCallbacks(
  [in]           PKRESOURCEMANAGER   ResourceManager,
  [in]           PTM_RM_NOTIFICATION CallbackRoutine,
  [in, optional] PVOID               RMKey
);

void TmGetTransactionId(
  [in]  PKTRANSACTION Transaction,
  [out] PUOW          TransactionId
);

NTSTATUS TmInitializeTransactionManager(
  [in]           PRKTM            TransactionManager,
  [in, optional] PCUNICODE_STRING LogFileName,
  [in]           PGUID            TmId,
  [in, optional] ULONG            CreateOptions
);

BOOLEAN TmIsTransactionActive(
  [in] PKTRANSACTION Transaction
);

NTSTATUS TmPrepareComplete(
  [in] PKENLISTMENT   Enlistment,
  [in] PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmPrepareEnlistment(
  [in] PKENLISTMENT   Enlistment,
  [in] PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmPrePrepareComplete(
  [in] PKENLISTMENT   Enlistment,
  [in] PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmPrePrepareEnlistment(
  [in] PKENLISTMENT   Enlistment,
  [in] PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmReadOnlyEnlistment(
  [in] PKENLISTMENT   Enlistment,
  [in] PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmRecoverEnlistment(
  [in] PKENLISTMENT Enlistment,
  [in] PVOID        EnlistmentKey
);

NTSTATUS TmRecoverResourceManager(
  [in] PKRESOURCEMANAGER ResourceManager
);

NTSTATUS TmRecoverTransactionManager(
  [in] PKTM           Tm,
  [in] PLARGE_INTEGER TargetVirtualClock
);

NTSTATUS TmReferenceEnlistmentKey(
  [in]  PKENLISTMENT Enlistment,
  [out] PVOID        *Key
);



NTSTATUS TmRenameTransactionManager(
  [in] PUNICODE_STRING LogFileName,
  [in] LPGUID          ExistingTransactionManagerGuid
);

NTSTATUS TmRequestOutcomeEnlistment(
  [in] PKENLISTMENT   Enlistment,
  [in] PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmRollbackComplete(
  [in] PKENLISTMENT   Enlistment,
  [in] PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmRollbackEnlistment(
  [in] PKENLISTMENT   Enlistment,
  [in] PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmRollbackTransaction(
  [in] PKTRANSACTION Transaction,
  [in] BOOLEAN       Wait
);

NTSTATUS TmSinglePhaseReject(
  [in] PKENLISTMENT   Enlistment,
  [in] PLARGE_INTEGER TmVirtualClock
);

typedef enum _TRACE_INFORMATION_CLASS {
  TraceIdClass,
  TraceHandleClass,
  TraceEnableFlagsClass,
  TraceEnableLevelClass,
  GlobalLoggerHandleClass,
  EventLoggerHandleClass,
  AllLoggerHandlesClass,
  TraceHandleByNameClass,
  LoggerEventsLostClass,
  TraceSessionSettingsClass,
  LoggerEventsLoggedClass,
  DiskIoNotifyRoutinesClass,
  TraceInformationClassReserved1,
  FltIoNotifyRoutinesClass,
  TraceInformationClassReserved2,
  WdfNotifyRoutinesClass,
  MaxTraceInformationClass
} TRACE_INFORMATION_CLASS;

typedef struct _TRANSACTION_BASIC_INFORMATION {
  GUID  TransactionId;
  ULONG State;
  ULONG Outcome;
} TRANSACTION_BASIC_INFORMATION, *PTRANSACTION_BASIC_INFORMATION;

typedef struct _TRANSACTION_ENLISTMENT_PAIR {
  GUID EnlistmentId;
  GUID ResourceManagerId;
} TRANSACTION_ENLISTMENT_PAIR, *PTRANSACTION_ENLISTMENT_PAIR;

typedef struct _TRANSACTION_ENLISTMENTS_INFORMATION {
  ULONG                       NumberOfEnlistments;
  TRANSACTION_ENLISTMENT_PAIR EnlistmentPair[1];
} TRANSACTION_ENLISTMENTS_INFORMATION, *PTRANSACTION_ENLISTMENTS_INFORMATION;

typedef enum _TRANSACTION_INFORMATION_CLASS {
  TransactionBasicInformation,
  TransactionPropertiesInformation,
  TransactionEnlistmentInformation,
  TransactionSuperiorEnlistmentInformation
} TRANSACTION_INFORMATION_CLASS;

typedef enum _TRANSACTION_OUTCOME {
  TransactionOutcomeUndetermined,
  TransactionOutcomeCommitted,
  TransactionOutcomeAborted
} TRANSACTION_OUTCOME;

typedef struct _TRANSACTION_PROPERTIES_INFORMATION {
  ULONG         IsolationLevel;
  ULONG         IsolationFlags;
  LARGE_INTEGER Timeout;
  ULONG         Outcome;
  ULONG         DescriptionLength;
  WCHAR         Description[1];
} TRANSACTION_PROPERTIES_INFORMATION, *PTRANSACTION_PROPERTIES_INFORMATION;


typedef enum _TRANSACTION_STATE {
  TransactionStateNormal,
  TransactionStateIndoubt,
  TransactionStateCommittedNotify
} TRANSACTION_STATE;

typedef struct _TRANSACTIONMANAGER_BASIC_INFORMATION {
  GUID          TmIdentity;
  LARGE_INTEGER VirtualClock;
} TRANSACTIONMANAGER_BASIC_INFORMATION, *PTRANSACTIONMANAGER_BASIC_INFORMATION;

typedef struct _TRANSACTIONMANAGER_LOG_INFORMATION {
  GUID LogIdentity;
} TRANSACTIONMANAGER_LOG_INFORMATION, *PTRANSACTIONMANAGER_LOG_INFORMATION;

typedef struct _TRANSACTIONMANAGER_LOGPATH_INFORMATION {
  ULONG LogPathLength;
  WCHAR LogPath[1];
} TRANSACTIONMANAGER_LOGPATH_INFORMATION, *PTRANSACTIONMANAGER_LOGPATH_INFORMATION;

typedef struct _TRANSACTIONMANAGER_RECOVERY_INFORMATION {
  ULONGLONG LastRecoveredLsn;
} TRANSACTIONMANAGER_RECOVERY_INFORMATION, *PTRANSACTIONMANAGER_RECOVERY_INFORMATION;

NTSTATUS VslCreateSecureSection(
  PHANDLE   Handle,
  PEPROCESS TargetProcess,
  PMDL      Mdl,
  ULONG     DevicePageProtection,
  ULONG     Attributes
);

NTSTATUS VslDeleteSecureSection(
  HANDLE GlobalHandle
);

typedef struct _WAIT_CONTEXT_BLOCK {
  union {
    KDEVICE_QUEUE_ENTRY WaitQueueEntry;
    struct {
      LIST_ENTRY DmaWaitEntry;
      ULONG      NumberOfChannels;
      ULONG      SyncCallback : 1;
      ULONG      DmaContext : 1;
      ULONG      ZeroMapRegisters : 1;
      ULONG      Reserved : 9;
      ULONG      NumberOfRemapPages : 20;
    };
  };
  PDRIVER_CONTROL DeviceRoutine;
  PVOID           DeviceContext;
  ULONG           NumberOfMapRegisters;
  PVOID           DeviceObject;
  PVOID           CurrentIrp;
  PKDPC           BufferChainingDpc;
} WAIT_CONTEXT_BLOCK, *PWAIT_CONTEXT_BLOCK;

NTSTATUS WmiQueryTraceInformation(
  [in]            TRACE_INFORMATION_CLASS TraceInformationClass,
  [out]           PVOID                   TraceInformation,
  [in]            ULONG                   TraceInformationLength,
  [out, optional] PULONG                  RequiredLength,
  [in, optional]  PVOID                   Buffer
);

NTSTATUS WmiTraceMessage(
  [in] TRACEHANDLE LoggerHandle,
  [in] ULONG       MessageFlags,
  [in] LPCGUID     MessageGuid,
  [in] USHORT      MessageNumber,
       ...
);

NTSTATUS WmiTraceMessageVa(
  [in] TRACEHANDLE LoggerHandle,
  [in] ULONG       MessageFlags,
  [in] LPCGUID     MessageGuid,
  [in] USHORT      MessageNumber,
  [in] va_list     MessageArgList
);

typedef enum _WORK_QUEUE_TYPE {
  CriticalWorkQueue,
  DelayedWorkQueue,
  HyperCriticalWorkQueue,
  NormalWorkQueue,
  BackgroundWorkQueue,
  RealTimeWorkQueue,
  SuperCriticalWorkQueue,
  MaximumWorkQueue,
  CustomPriorityWorkQueue
} WORK_QUEUE_TYPE;

NTHALAPI VOID WRITE_PORT_BUFFER_UCHAR(
  [in] PUCHAR Port,
  [in] PUCHAR Buffer,
  [in] ULONG  Count
);

NTHALAPI VOID WRITE_PORT_BUFFER_ULONG(
  [in] PULONG Port,
  [in] PULONG Buffer,
  [in] ULONG  Count
);

NTHALAPI VOID WRITE_PORT_BUFFER_USHORT(
  [in] PUSHORT Port,
  [in] PUSHORT Buffer,
  [in] ULONG   Count
);

NTHALAPI VOID WRITE_PORT_UCHAR(
  [in] PUCHAR Port,
  [in] UCHAR  Value
);

NTHALAPI VOID WRITE_PORT_ULONG(
  [in] PULONG Port,
  [in] ULONG  Value
);

NTHALAPI VOID WRITE_PORT_USHORT(
  [in] PUSHORT Port,
  [in] USHORT  Value
);

void WRITE_REGISTER_BUFFER_UCHAR(
  [in] volatile UCHAR *Register,
  [in] PUCHAR         Buffer,
  [in] ULONG          Count
);

void WRITE_REGISTER_BUFFER_ULONG(
  [in] volatile ULONG *Register,
  [in] PULONG         Buffer,
  [in] ULONG          Count
);

void WRITE_REGISTER_BUFFER_ULONG64(
  [in] volatile ULONG64 *Register,
  [in] PULONG64         Buffer,
  [in] ULONG            Count
);

void WRITE_REGISTER_BUFFER_USHORT(
  [in] volatile USHORT *Register,
  [in] PUSHORT         Buffer,
  [in] ULONG           Count
);

void WRITE_REGISTER_UCHAR(
  [in] volatile UCHAR *Register,
  [in] UCHAR          Value
);

void WRITE_REGISTER_ULONG(
  [in] volatile ULONG *Register,
  [in] ULONG          Value
);

void WRITE_REGISTER_ULONG64(
  [in] volatile ULONG64 *Register,
  [in] ULONG64          Value
);

void WRITE_REGISTER_USHORT(
  [in] volatile USHORT *Register,
  [in] USHORT          Value
);

void WriteInt32NoFence(
  INT32 volatile *Destination,
  INT32          Value
);

void WriteInt32Raw(
  INT32 volatile *Destination,
  INT32          Value
);

void WriteInt32Release(
  INT32 volatile *Destination,
  INT32          Value
);


void WriteUInt32NoFence(
  UINT32 volatile *Destination,
  UINT32          Value
);

void WriteUInt32Raw(
  UINT32 volatile *Destination,
  UINT32          Value
);

void WriteUInt32Release(
  UINT32 volatile *Destination,
  UINT32          Value
);

typedef struct _XSAVE_CET_U_FORMAT {
  ULONG64 Ia32CetUMsr;
  ULONG64 Ia32Pl3SspMsr;
} XSAVE_CET_U_FORMAT, *PXSAVE_CET_U_FORMAT;

NTSYSAPI NTSTATUS ZwClose(
  [in] HANDLE Handle
);

NTSYSCALLAPI NTSTATUS ZwCommitComplete(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwCommitEnlistment(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwCommitTransaction(
  [in] HANDLE  TransactionHandle,
  [in] BOOLEAN Wait
);

NTSYSAPI NTSTATUS ZwCreateDirectoryObject(
  [out] PHANDLE            DirectoryHandle,
  [in]  ACCESS_MASK        DesiredAccess,
  [in]  POBJECT_ATTRIBUTES ObjectAttributes
);

NTSYSCALLAPI NTSTATUS ZwCreateEnlistment(
  [out]          PHANDLE            EnlistmentHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in]           HANDLE             ResourceManagerHandle,
  [in]           HANDLE             TransactionHandle,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes,
  [in, optional] ULONG              CreateOptions,
  [in]           NOTIFICATION_MASK  NotificationMask,
  [in, optional] PVOID              EnlistmentKey
);

NTSYSAPI NTSTATUS ZwCreateFile(
  [out]          PHANDLE            FileHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in]           POBJECT_ATTRIBUTES ObjectAttributes,
  [out]          PIO_STATUS_BLOCK   IoStatusBlock,
  [in, optional] PLARGE_INTEGER     AllocationSize,
  [in]           ULONG              FileAttributes,
  [in]           ULONG              ShareAccess,
  [in]           ULONG              CreateDisposition,
  [in]           ULONG              CreateOptions,
  [in, optional] PVOID              EaBuffer,
  [in]           ULONG              EaLength
);

NTSYSAPI NTSTATUS ZwCreateKey(
  [out]           PHANDLE            KeyHandle,
  [in]            ACCESS_MASK        DesiredAccess,
  [in]            POBJECT_ATTRIBUTES ObjectAttributes,
                  ULONG              TitleIndex,
  [in, optional]  PUNICODE_STRING    Class,
  [in]            ULONG              CreateOptions,
  [out, optional] PULONG             Disposition
);

NTSYSAPI NTSTATUS ZwCreateKeyTransacted(
  [out]           PHANDLE            KeyHandle,
  [in]            ACCESS_MASK        DesiredAccess,
  [in]            POBJECT_ATTRIBUTES ObjectAttributes,
                  ULONG              TitleIndex,
  [in, optional]  PUNICODE_STRING    Class,
  [in]            ULONG              CreateOptions,
  [in]            HANDLE             TransactionHandle,
  [out, optional] PULONG             Disposition
);

NTSYSCALLAPI NTSTATUS ZwCreateResourceManager(
  [out]          PHANDLE            ResourceManagerHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in]           HANDLE             TmHandle,
  [in, optional] LPGUID             ResourceManagerGuid,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes,
  [in, optional] ULONG              CreateOptions,
  [in, optional] PUNICODE_STRING    Description
);

NTSYSAPI NTSTATUS ZwCreateSection(
  [out]          PHANDLE            SectionHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes,
  [in, optional] PLARGE_INTEGER     MaximumSize,
  [in]           ULONG              SectionPageProtection,
  [in]           ULONG              AllocationAttributes,
  [in, optional] HANDLE             FileHandle
);

NTSYSCALLAPI NTSTATUS ZwCreateTransaction(
  [out]          PHANDLE            TransactionHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes,
  [in, optional] LPGUID             Uow,
  [in, optional] HANDLE             TmHandle,
  [in, optional] ULONG              CreateOptions,
  [in, optional] ULONG              IsolationLevel,
  [in, optional] ULONG              IsolationFlags,
  [in, optional] PLARGE_INTEGER     Timeout,
  [in, optional] PUNICODE_STRING    Description
);

NTSYSCALLAPI NTSTATUS ZwCreateTransactionManager(
  [out]          PHANDLE            TmHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes,
  [in, optional] PUNICODE_STRING    LogFileName,
  [in, optional] ULONG              CreateOptions,
  [in, optional] ULONG              CommitStrength
);

NTSYSAPI NTSTATUS ZwDeleteKey(
  [in] HANDLE KeyHandle
);

NTSYSAPI NTSTATUS ZwDeleteValueKey(
  [in] HANDLE          KeyHandle,
  [in] PUNICODE_STRING ValueName
);

NTSYSAPI NTSTATUS ZwEnumerateKey(
  [in]            HANDLE                KeyHandle,
  [in]            ULONG                 Index,
  [in]            KEY_INFORMATION_CLASS KeyInformationClass,
  [out, optional] PVOID                 KeyInformation,
  [in]            ULONG                 Length,
  [out]           PULONG                ResultLength
);

NTSYSCALLAPI NTSTATUS ZwEnumerateTransactionObject(
  [in, optional] HANDLE            RootObjectHandle,
  [in]           KTMOBJECT_TYPE    QueryType,
  [in, out]      PKTMOBJECT_CURSOR ObjectCursor,
  [in]           ULONG             ObjectCursorLength,
  [out]          PULONG            ReturnLength
);

NTSYSAPI NTSTATUS ZwEnumerateValueKey(
  [in]            HANDLE                      KeyHandle,
  [in]            ULONG                       Index,
  [in]            KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
  [out, optional] PVOID                       KeyValueInformation,
  [in]            ULONG                       Length,
  [out]           PULONG                      ResultLength
);

NTSYSAPI NTSTATUS ZwFlushKey(
  [in] HANDLE KeyHandle
);


NTSYSCALLAPI NTSTATUS ZwGetNotificationResourceManager(
  [in]            HANDLE                    ResourceManagerHandle,
  [out]           PTRANSACTION_NOTIFICATION TransactionNotification,
  [in]            ULONG                     NotificationLength,
  [in]            PLARGE_INTEGER            Timeout,
  [out, optional] PULONG                    ReturnLength,
  [in]            ULONG                     Asynchronous,
  [in, optional]  ULONG_PTR                 AsynchronousContext
);

NTSYSAPI NTSTATUS ZwLoadDriver(
  [in] PUNICODE_STRING DriverServiceName
);

NTSYSAPI NTSTATUS ZwMakeTemporaryObject(
  [in] HANDLE Handle
);

NTSYSAPI NTSTATUS ZwMapViewOfSection(
  [in]                HANDLE          SectionHandle,
  [in]                HANDLE          ProcessHandle,
  [in, out]           PVOID           *BaseAddress,
  [in]                ULONG_PTR       ZeroBits,
  [in]                SIZE_T          CommitSize,
  [in, out, optional] PLARGE_INTEGER  SectionOffset,
  [in, out]           PSIZE_T         ViewSize,
  [in]                SECTION_INHERIT InheritDisposition,
  [in]                ULONG           AllocationType,
  [in]                ULONG           Win32Protect
);

NTSYSCALLAPI NTSTATUS ZwOpenEnlistment(
  [out]          PHANDLE            EnlistmentHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in]           HANDLE             RmHandle,
  [in]           LPGUID             EnlistmentGuid,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes
);

NTSYSCALLAPI NTSTATUS ZwOpenEvent(
  [out] PHANDLE            EventHandle,
  [in]  ACCESS_MASK        DesiredAccess,
  [in]  POBJECT_ATTRIBUTES ObjectAttributes
);

NTSYSAPI NTSTATUS ZwOpenFile(
  [out] PHANDLE            FileHandle,
  [in]  ACCESS_MASK        DesiredAccess,
  [in]  POBJECT_ATTRIBUTES ObjectAttributes,
  [out] PIO_STATUS_BLOCK   IoStatusBlock,
  [in]  ULONG              ShareAccess,
  [in]  ULONG              OpenOptions
);

NTSYSAPI NTSTATUS ZwOpenKey(
  [out] PHANDLE            KeyHandle,
  [in]  ACCESS_MASK        DesiredAccess,
  [in]  POBJECT_ATTRIBUTES ObjectAttributes
);

NTSYSAPI NTSTATUS ZwOpenKeyEx(
  [out] PHANDLE            KeyHandle,
  [in]  ACCESS_MASK        DesiredAccess,
  [in]  POBJECT_ATTRIBUTES ObjectAttributes,
  [in]  ULONG              OpenOptions
);

NTSYSAPI NTSTATUS ZwOpenKeyTransacted(
  [out] PHANDLE            KeyHandle,
  [in]  ACCESS_MASK        DesiredAccess,
  [in]  POBJECT_ATTRIBUTES ObjectAttributes,
  [in]  HANDLE             TransactionHandle
);

NTSYSAPI NTSTATUS ZwOpenKeyTransactedEx(
  [out] PHANDLE            KeyHandle,
  [in]  ACCESS_MASK        DesiredAccess,
  [in]  POBJECT_ATTRIBUTES ObjectAttributes,
  [in]  ULONG              OpenOptions,
  [in]  HANDLE             TransactionHandle
);

NTSYSCALLAPI NTSTATUS ZwOpenResourceManager(
  [out]          PHANDLE            ResourceManagerHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in]           HANDLE             TmHandle,
  [in]           LPGUID             ResourceManagerGuid,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes
);

NTSYSAPI NTSTATUS ZwOpenSection(
  [out] PHANDLE            SectionHandle,
  [in]  ACCESS_MASK        DesiredAccess,
  [in]  POBJECT_ATTRIBUTES ObjectAttributes
);

NTSYSAPI NTSTATUS ZwOpenSymbolicLinkObject(
  [out] PHANDLE            LinkHandle,
  [in]  ACCESS_MASK        DesiredAccess,
  [in]  POBJECT_ATTRIBUTES ObjectAttributes
);

NTSYSCALLAPI NTSTATUS ZwOpenTransaction(
  [out]          PHANDLE            TransactionHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes,
  [in]           LPGUID             Uow,
  [in, optional] HANDLE             TmHandle
);

NTSYSCALLAPI NTSTATUS ZwOpenTransactionManager(
  [out]          PHANDLE            TmHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes,
  [in, optional] PUNICODE_STRING    LogFileName,
  [in, optional] LPGUID             TmIdentity,
  [in, optional] ULONG              OpenOptions
);

NTSYSCALLAPI NTSTATUS ZwPrepareComplete(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwPrepareEnlistment(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwPrePrepareComplete(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwPrePrepareEnlistment(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

NTSYSAPI NTSTATUS ZwQueryFullAttributesFile(
  [in]  POBJECT_ATTRIBUTES             ObjectAttributes,
  [out] PFILE_NETWORK_OPEN_INFORMATION FileInformation
);

NTSYSAPI NTSTATUS ZwQueryInformationByName(
  [in]  POBJECT_ATTRIBUTES     ObjectAttributes,
  [out] PIO_STATUS_BLOCK       IoStatusBlock,
  [out] PVOID                  FileInformation,
  [in]  ULONG                  Length,
  [in]  FILE_INFORMATION_CLASS FileInformationClass
);

NTSYSCALLAPI NTSTATUS ZwQueryInformationEnlistment(
  [in]            HANDLE                       EnlistmentHandle,
  [in]            ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
  [out]           PVOID                        EnlistmentInformation,
  [in]            ULONG                        EnlistmentInformationLength,
  [out, optional] PULONG                       ReturnLength
);

NTSYSAPI NTSTATUS ZwQueryInformationFile(
  [in]  HANDLE                 FileHandle,
  [out] PIO_STATUS_BLOCK       IoStatusBlock,
  [out] PVOID                  FileInformation,
  [in]  ULONG                  Length,
  [in]  FILE_INFORMATION_CLASS FileInformationClass
);

NTSYSCALLAPI NTSTATUS ZwQueryInformationResourceManager(
  [in]            HANDLE                            ResourceManagerHandle,
  [in]            RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
  [out]           PVOID                             ResourceManagerInformation,
  [in]            ULONG                             ResourceManagerInformationLength,
  [out, optional] PULONG                            ReturnLength
);

NTSYSCALLAPI NTSTATUS ZwQueryInformationTransaction(
  [in]            HANDLE                        TransactionHandle,
  [in]            TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
  [out]           PVOID                         TransactionInformation,
  [in]            ULONG                         TransactionInformationLength,
  [out, optional] PULONG                        ReturnLength
);

NTSYSCALLAPI NTSTATUS ZwQueryInformationTransactionManager(
  [in]            HANDLE                               TransactionManagerHandle,
  [in]            TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
  [out]           PVOID                                TransactionManagerInformation,
  [in]            ULONG                                TransactionManagerInformationLength,
  [out, optional] PULONG                               ReturnLength
);

NTSYSAPI NTSTATUS ZwQueryKey(
  [in]            HANDLE                KeyHandle,
  [in]            KEY_INFORMATION_CLASS KeyInformationClass,
  [out, optional] PVOID                 KeyInformation,
  [in]            ULONG                 Length,
  [out]           PULONG                ResultLength
);

NTSYSAPI NTSTATUS ZwQuerySymbolicLinkObject(
  [in]            HANDLE          LinkHandle,
  [in, out]       PUNICODE_STRING LinkTarget,
  [out, optional] PULONG          ReturnedLength
);

NTSYSAPI NTSTATUS ZwQueryValueKey(
  [in]            HANDLE                      KeyHandle,
  [in]            PUNICODE_STRING             ValueName,
  [in]            KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
  [out, optional] PVOID                       KeyValueInformation,
  [in]            ULONG                       Length,
  [out]           PULONG                      ResultLength
);

NTSYSAPI NTSTATUS ZwReadFile(
  [in]           HANDLE           FileHandle,
  [in, optional] HANDLE           Event,
  [in, optional] PIO_APC_ROUTINE  ApcRoutine,
  [in, optional] PVOID            ApcContext,
  [out]          PIO_STATUS_BLOCK IoStatusBlock,
  [out]          PVOID            Buffer,
  [in]           ULONG            Length,
  [in, optional] PLARGE_INTEGER   ByteOffset,
  [in, optional] PULONG           Key
);

NTSYSCALLAPI NTSTATUS ZwReadOnlyEnlistment(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwRecoverEnlistment(
  [in]           HANDLE EnlistmentHandle,
  [in, optional] PVOID  EnlistmentKey
);


NTSYSCALLAPI NTSTATUS ZwRecoverResourceManager(
  [in] HANDLE ResourceManagerHandle
);

NTSYSCALLAPI NTSTATUS ZwRecoverTransactionManager(
  [in] HANDLE TransactionManagerHandle
);

NTSYSCALLAPI NTSTATUS ZwRollbackComplete(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwRollbackEnlistment(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwRollbackTransaction(
  [in] HANDLE  TransactionHandle,
  [in] BOOLEAN Wait
);

NTSYSCALLAPI NTSTATUS ZwRollforwardTransactionManager(
  [in]           HANDLE         TransactionManagerHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwSetInformationEnlistment(
  [in] HANDLE                       EnlistmentHandle,
  [in] ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
  [in] PVOID                        EnlistmentInformation,
  [in] ULONG                        EnlistmentInformationLength
);

NTSYSAPI NTSTATUS ZwSetInformationFile(
  [in]  HANDLE                 FileHandle,
  [out] PIO_STATUS_BLOCK       IoStatusBlock,
  [in]  PVOID                  FileInformation,
  [in]  ULONG                  Length,
  [in]  FILE_INFORMATION_CLASS FileInformationClass
);

NTSYSCALLAPI NTSTATUS ZwSetInformationResourceManager(
  HANDLE                            ResourceManagerHandle,
  RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
  PVOID                             ResourceManagerInformation,
  ULONG                             ResourceManagerInformationLength
);

NTSYSCALLAPI NTSTATUS ZwSetInformationTransaction(
  [in] HANDLE                        TransactionHandle,
  [in] TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
  [in] PVOID                         TransactionInformation,
  [in] ULONG                         TransactionInformationLength
);

NTSYSAPI NTSTATUS ZwSetValueKey(
  [in]           HANDLE          KeyHandle,
  [in]           PUNICODE_STRING ValueName,
  [in, optional] ULONG           TitleIndex,
  [in]           ULONG           Type,
  [in, optional] PVOID           Data,
  [in]           ULONG           DataSize
);

NTSYSCALLAPI NTSTATUS ZwSinglePhaseReject(
  [in]           HANDLE         EnlistmentHandle,
  [in, optional] PLARGE_INTEGER TmVirtualClock
);

NTSYSAPI NTSTATUS ZwUnloadDriver(
  [in] PUNICODE_STRING DriverServiceName
);

NTSYSAPI NTSTATUS ZwUnmapViewOfSection(
  [in]           HANDLE ProcessHandle,
  [in, optional] PVOID  BaseAddress
);

NTSYSAPI NTSTATUS ZwWriteFile(
  [in]           HANDLE           FileHandle,
  [in, optional] HANDLE           Event,
  [in, optional] PIO_APC_ROUTINE  ApcRoutine,
  [in, optional] PVOID            ApcContext,
  [out]          PIO_STATUS_BLOCK IoStatusBlock,
  [in]           PVOID            Buffer,
  [in]           ULONG            Length,
  [in, optional] PLARGE_INTEGER   ByteOffset,
  [in, optional] PULONG           Key
);

*/

#endif