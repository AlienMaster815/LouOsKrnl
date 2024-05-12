#ifndef WDM_H
#define WDM_H

#include "irp.h"
#include "ntoapi.h"
#include <NtAPI.h>

typedef enum _IO_NOTIFICATION_EVENT_CATEGORY {
    EventCategoryReserved,
    EventCategoryHardwareProfileChange,
    EventCategoryDeviceInterfaceChange,
    EventCategoryTargetDeviceChange,
    EventCategoryKernelSoftRestart
} IO_NOTIFICATION_EVENT_CATEGORY;

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


typedef enum _IOMMU_MAP_PHYSICAL_ADDRESS_TYPE {
  MapPhysicalAddressTypeMdl,
  MapPhysicalAddressTypeContiguousRange,
  MapPhysicalAddressTypePfn,
  MapPhysicalAddressTypeMax
} IOMMU_MAP_PHYSICAL_ADDRESS_TYPE, *PIOMMU_MAP_PHYSICAL_ADDRESS_TYPE;

typedef struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN {
    IOMMU_DMA_LOGICAL_ADDRESS LogicalAddressBase;
    SIZE_T                    Size;
} IOMMU_DMA_LOGICAL_ADDRESS_TOKEN, * PIOMMU_DMA_LOGICAL_ADDRESS_TOKEN;

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

typedef enum _KEY_VALUE_INFORMATION_CLASS {
    KeyValueBasicInformation,
    KeyValueFullInformation,
    KeyValuePartialInformation,
    KeyValueFullInformationAlign64,
    KeyValuePartialInformationAlign64,
    KeyValueLayerInformation,
    MaxKeyValueInfoClass
} KEY_VALUE_INFORMATION_CLASS;


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
typedef struct _XSAVE_CET_U_FORMAT {
    ULONG64 Ia32CetUMsr;
    ULONG64 Ia32Pl3SspMsr;
} XSAVE_CET_U_FORMAT, * PXSAVE_CET_U_FORMAT;

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

typedef enum _IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE {
    IommuDmaLogicalAllocatorNone,
    IommuDmaLogicalAllocatorBuddy,
    IommuDmaLogicalAllocatorMax
} IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE, * PIOMMU_DMA_LOGICAL_ALLOCATOR_TYPE;


typedef struct _TRANSACTION_BASIC_INFORMATION {
    GUID  TransactionId;
    ULONG State;
    ULONG Outcome;
} TRANSACTION_BASIC_INFORMATION, * PTRANSACTION_BASIC_INFORMATION;

typedef struct _TRANSACTION_ENLISTMENT_PAIR {
    GUID EnlistmentId;
    GUID ResourceManagerId;
} TRANSACTION_ENLISTMENT_PAIR, * PTRANSACTION_ENLISTMENT_PAIR;

typedef struct _TRANSACTION_ENLISTMENTS_INFORMATION {
    ULONG                       NumberOfEnlistments;
    TRANSACTION_ENLISTMENT_PAIR EnlistmentPair[1];
} TRANSACTION_ENLISTMENTS_INFORMATION, * PTRANSACTION_ENLISTMENTS_INFORMATION;

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
} TRANSACTION_PROPERTIES_INFORMATION, * PTRANSACTION_PROPERTIES_INFORMATION;

typedef struct _KEY_VALUE_ENTRY {
    PUNICODE_STRING ValueName;
    ULONG           DataLength;
    ULONG           DataOffset;
    ULONG           Type;
} KEY_VALUE_ENTRY, * PKEY_VALUE_ENTRY;

typedef struct _RESOURCEMANAGER_BASIC_INFORMATION {
    GUID  ResourceManagerId;
    ULONG DescriptionLength;
    WCHAR Description[1];
} RESOURCEMANAGER_BASIC_INFORMATION, * PRESOURCEMANAGER_BASIC_INFORMATION;

typedef struct _RESOURCEMANAGER_COMPLETION_INFORMATION {
    HANDLE    IoCompletionPortHandle;
    ULONG_PTR CompletionKey;
} RESOURCEMANAGER_COMPLETION_INFORMATION, * PRESOURCEMANAGER_COMPLETION_INFORMATION;

typedef enum _RESOURCEMANAGER_INFORMATION_CLASS {
    ResourceManagerBasicInformation,
    ResourceManagerCompletionInformation
} RESOURCEMANAGER_INFORMATION_CLASS;

typedef struct _SLIST_ENTRY {
    struct _SLIST_ENTRY* Next;
} SLIST_ENTRY, * PSLIST_ENTRY;


typedef struct _SYSTEM_POOL_ZEROING_INFORMATION {
    BOOLEAN PoolZeroingSupportPresent;
} SYSTEM_POOL_ZEROING_INFORMATION, * PSYSTEM_POOL_ZEROING_INFORMATION;


typedef enum {
    PoAc,
    PoDc,
    PoHot,
    PoConditionMaximum
} SYSTEM_POWER_CONDITION;


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
    struct _FILE_OBJECT* RelatedFileObject;
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
    ULONG                  Waiters;
    ULONG                  Busy;
    PVOID                             LastLock;
    KEVENT                            Lock;
    KEVENT                            Event;
    PIO_COMPLETION_CONTEXT CompletionContext;
    KSPIN_LOCK                        IrpListLock;
    LIST_ENTRY                        IrpList;
    PVOID                  FileObjectExtension;
} FILE_OBJECT, * PFILE_OBJECT;

typedef struct _TARGET_DEVICE_CUSTOM_NOTIFICATION {
    USHORT       Version;
    USHORT       Size;
    GUID         Event;
    PFILE_OBJECT FileObject;
    LONG         NameBufferOffset;
    UCHAR        CustomDataBuffer[1];
} TARGET_DEVICE_CUSTOM_NOTIFICATION, * PTARGET_DEVICE_CUSTOM_NOTIFICATION;

typedef struct _TARGET_DEVICE_REMOVAL_NOTIFICATION {
    USHORT       Version;
    USHORT       Size;
    GUID         Event;
    PFILE_OBJECT FileObject;
} TARGET_DEVICE_REMOVAL_NOTIFICATION, * PTARGET_DEVICE_REMOVAL_NOTIFICATION;


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

typedef struct {
    ULONG                  Version;
    GUID                   Guid;
    SYSTEM_POWER_CONDITION PowerCondition;
    ULONG                  DataLength;
    UCHAR*                  Data;
} SET_POWER_SETTING_VALUE, * PSET_POWER_SETTING_VALUE;

typedef struct _POOL_CREATE_EXTENDED_PARAMS {
    ULONG Version;
} POOL_CREATE_EXTENDED_PARAMS, * PPOOL_CREATE_EXTENDED_PARAMS;



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
        POOL_EXTENDED_PARAMS_SECURE_POOL* SecurePoolParams;
        POOL_NODE_REQUIREMENT            PreferredNode;
    } DUMMYUNIONNAME;
} POOL_EXTENDED_PARAMETER, * PPOOL_EXTENDED_PARAMETER;

typedef enum POOL_EXTENDED_PARAMETER_TYPE {
    PoolExtendedParameterInvalidType = 0,
    PoolExtendedParameterPriority,
    PoolExtendedParameterSecurePool,
    PoolExtendedParameterNumaNode,
    PoolExtendedParameterMax
}  *PPOOL_EXTENDED_PARAMETER_TYPE;




typedef struct _SCATTER_GATHER_LIST {
    ULONG                  NumberOfElements;
    ULONG_PTR              Reserved;
    SCATTER_GATHER_ELEMENT Elements[];
} SCATTER_GATHER_LIST, * PSCATTER_GATHER_LIST;

typedef struct _SDEV_IDENTIFIER_INTERFACE {
    INTERFACE            InterfaceHeader;
    PGET_SDEV_IDENTIFIER GetIdentifier;
} SDEV_IDENTIFIER_INTERFACE, * PSDEV_IDENTIFIER_INTERFACE;

typedef enum _SE_IMAGE_TYPE {
    SeImageTypeElamDriver,
    SeImageTypeDriver,
    SeImageTypePlatformSecureFile,
    SeImageTypeDynamicCodeFile,
    SeImageTypeMax,
} SE_IMAGE_TYPE, * PSE_IMAGE_TYPE;


typedef struct _SECTION_OBJECT_POINTERS {
    PVOID DataSectionObject;
    PVOID SharedCacheMap;
    PVOID ImageSectionObject;
} SECTION_OBJECT_POINTERS;

typedef struct _REENUMERATE_SELF_INTERFACE_STANDARD {
    USHORT                 Size;
    USHORT                 Version;
    PVOID                  Context;
    PINTERFACE_REFERENCE   InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PREENUMERATE_SELF      SurpriseRemoveAndReenumerateSelf;
} REENUMERATE_SELF_INTERFACE_STANDARD, * PREENUMERATE_SELF_INTERFACE_STANDARD;

typedef struct _REG_CALLBACK_CONTEXT_CLEANUP_INFORMATION {
    PVOID Object;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_CALLBACK_CONTEXT_CLEANUP_INFORMATION, * PREG_CALLBACK_CONTEXT_CLEANUP_INFORMATION;

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
    PVOID* ResultObject;
    PVOID           CallContext;
    PVOID           RootObjectContext;
    PVOID           Transaction;
    PVOID           Reserved;
} REG_CREATE_KEY_INFORMATION, REG_OPEN_KEY_INFORMATION, * PREG_CREATE_KEY_INFORMATION, * PREG_OPEN_KEY_INFORMATION;

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
    PVOID* ResultObject;
    PVOID           CallContext;
    PVOID           RootObjectContext;
    PVOID           Transaction;
    ULONG_PTR       Version;
    PUNICODE_STRING RemainingName;
    ULONG           Wow64Flags;
    ULONG           Attributes;
    KPROCESSOR_MODE CheckAccessMode;
} REG_CREATE_KEY_INFORMATION_V1, REG_OPEN_KEY_INFORMATION_V1, * PREG_CREATE_KEY_INFORMATION_V1, * PREG_OPEN_KEY_INFORMATION_V1;

typedef struct _REG_DELETE_KEY_INFORMATION {
    PVOID Object;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_DELETE_KEY_INFORMATION, * PREG_DELETE_KEY_INFORMATION, REG_FLUSH_KEY_INFORMATION, * PREG_FLUSH_KEY_INFORMATION;

typedef struct _REG_DELETE_VALUE_KEY_INFORMATION {
    PVOID           Object;
    PUNICODE_STRING ValueName;
    PVOID           CallContext;
    PVOID           ObjectContext;
    PVOID           Reserved;
} REG_DELETE_VALUE_KEY_INFORMATION, * PREG_DELETE_VALUE_KEY_INFORMATION;

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
} REG_ENUMERATE_KEY_INFORMATION, * PREG_ENUMERATE_KEY_INFORMATION;

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
} REG_ENUMERATE_VALUE_KEY_INFORMATION, * PREG_ENUMERATE_VALUE_KEY_INFORMATION;

typedef struct _REG_KEY_HANDLE_CLOSE_INFORMATION {
    PVOID Object;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_KEY_HANDLE_CLOSE_INFORMATION, * PREG_KEY_HANDLE_CLOSE_INFORMATION;

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
} REG_LOAD_KEY_INFORMATION, * PREG_LOAD_KEY_INFORMATION;

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
} REG_LOAD_KEY_INFORMATION_V2, * PREG_LOAD_KEY_INFORMATION_V2;

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
} REG_POST_CREATE_KEY_INFORMATION, REG_POST_OPEN_KEY_INFORMATION, * PREG_POST_CREATE_KEY_INFORMATION, * PREG_POST_OPEN_KEY_INFORMATION;

typedef struct _REG_POST_OPERATION_INFORMATION {
    PVOID    Object;
    NTSTATUS Status;
    PVOID    PreInformation;
    NTSTATUS ReturnStatus;
    PVOID    CallContext;
    PVOID    ObjectContext;
    PVOID    Reserved;
} REG_POST_OPERATION_INFORMATION, * PREG_POST_OPERATION_INFORMATION;

typedef struct _REG_PRE_CREATE_KEY_INFORMATION {
    PUNICODE_STRING CompleteName;
} REG_PRE_CREATE_KEY_INFORMATION, REG_PRE_OPEN_KEY_INFORMATION, * PREG_PRE_CREATE_KEY_INFORMATION, * PREG_PRE_OPEN_KEY_INFORMATION;

typedef enum {
    LT_DONT_CARE,
    LT_LOWEST_LATENCY
} LATENCY_TIME;

typedef struct _LINK_SHARE_ACCESS {
    ULONG OpenCount;
    ULONG Deleters;
    ULONG SharedDelete;
} LINK_SHARE_ACCESS, * PLINK_SHARE_ACCESS;

typedef struct _MAILSLOT_CREATE_PARAMETERS {
    ULONG         MailslotQuota;
    ULONG         MaximumMessageSize;
    LARGE_INTEGER ReadTimeout;
    BOOLEAN       TimeoutSpecified;
} MAILSLOT_CREATE_PARAMETERS, * PMAILSLOT_CREATE_PARAMETERS;


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
} MEM_EXTENDED_PARAMETER, * PMEM_EXTENDED_PARAMETER;

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


typedef struct _MEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION {
    ULONG64     DedicatedMemoryTypeId;
    ULONG       HandleAttributes;
    ACCESS_MASK DesiredAccess;
    HANDLE      DedicatedMemoryPartitionHandle;
} MEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION, * PMEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION;

typedef struct _MM_PHYSICAL_ADDRESS_LIST {
    PHYSICAL_ADDRESS PhysicalAddress;
    SIZE_T           NumberOfBytes;
} MM_PHYSICAL_ADDRESS_LIST, * PMM_PHYSICAL_ADDRESS_LIST;


typedef struct _REG_QUERY_KEY_INFORMATION {
    PVOID                 Object;
    KEY_INFORMATION_CLASS KeyInformationClass;
    PVOID                 KeyInformation;
    ULONG                 Length;
    PULONG                ResultLength;
    PVOID                 CallContext;
    PVOID                 ObjectContext;
    PVOID                 Reserved;
} REG_QUERY_KEY_INFORMATION, * PREG_QUERY_KEY_INFORMATION;


typedef struct _REG_QUERY_KEY_NAME {
    PVOID                    Object;
    POBJECT_NAME_INFORMATION ObjectNameInfo;
    ULONG                    Length;
    PULONG                   ReturnLength;
    PVOID                    CallContext;
    PVOID                    ObjectContext;
    PVOID                    Reserved;
} REG_QUERY_KEY_NAME, * PREG_QUERY_KEY_NAME;

typedef struct _REG_QUERY_KEY_SECURITY_INFORMATION {
    PVOID                 Object;
    PSECURITY_INFORMATION SecurityInformation;
    PSECURITY_DESCRIPTOR  SecurityDescriptor;
    PULONG                Length;
    PVOID                 CallContext;
    PVOID                 ObjectContext;
    PVOID                 Reserved;
} REG_QUERY_KEY_SECURITY_INFORMATION, * PREG_QUERY_KEY_SECURITY_INFORMATION;

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
} REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION, * PREG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION;

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
} REG_QUERY_VALUE_KEY_INFORMATION, * PREG_QUERY_VALUE_KEY_INFORMATION;

typedef struct _REG_RENAME_KEY_INFORMATION {
    PVOID           Object;
    PUNICODE_STRING NewName;
    PVOID           CallContext;
    PVOID           ObjectContext;
    PVOID           Reserved;
} REG_RENAME_KEY_INFORMATION, * PREG_RENAME_KEY_INFORMATION;

typedef struct _REG_REPLACE_KEY_INFORMATION {
    PVOID           Object;
    PUNICODE_STRING OldFileName;
    PUNICODE_STRING NewFileName;
    PVOID           CallContext;
    PVOID           ObjectContext;
    PVOID           Reserved;
} REG_REPLACE_KEY_INFORMATION, * PREG_REPLACE_KEY_INFORMATION;

typedef struct _REG_RESTORE_KEY_INFORMATION {
    PVOID  Object;
    HANDLE FileHandle;
    ULONG  Flags;
    PVOID  CallContext;
    PVOID  ObjectContext;
    PVOID  Reserved;
} REG_RESTORE_KEY_INFORMATION, * PREG_RESTORE_KEY_INFORMATION;

typedef struct _REG_SAVE_KEY_INFORMATION {
    PVOID  Object;
    HANDLE FileHandle;
    ULONG  Format;
    PVOID  CallContext;
    PVOID  ObjectContext;
    PVOID  Reserved;
} REG_SAVE_KEY_INFORMATION, * PREG_SAVE_KEY_INFORMATION;

typedef struct _REG_SAVE_MERGED_KEY_INFORMATION {
    PVOID  Object;
    HANDLE FileHandle;
    PVOID  HighKeyObject;
    PVOID  LowKeyObject;
    PVOID  CallContext;
    PVOID  ObjectContext;
    PVOID  Reserved;
} REG_SAVE_MERGED_KEY_INFORMATION, * PREG_SAVE_MERGED_KEY_INFORMATION;


typedef struct _REG_SET_INFORMATION_KEY_INFORMATION {
    PVOID                     Object;
    KEY_SET_INFORMATION_CLASS KeySetInformationClass;
    PVOID                     KeySetInformation;
    ULONG                     KeySetInformationLength;
    PVOID                     CallContext;
    PVOID                     ObjectContext;
    PVOID                     Reserved;
} REG_SET_INFORMATION_KEY_INFORMATION, * PREG_SET_INFORMATION_KEY_INFORMATION;

typedef struct _REG_SET_KEY_SECURITY_INFORMATION {
    PVOID                 Object;
    PSECURITY_INFORMATION SecurityInformation;
    PSECURITY_DESCRIPTOR  SecurityDescriptor;
    PVOID                 CallContext;
    PVOID                 ObjectContext;
    PVOID                 Reserved;
} REG_SET_KEY_SECURITY_INFORMATION, * PREG_SET_KEY_SECURITY_INFORMATION;

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
} REG_SET_VALUE_KEY_INFORMATION, * PREG_SET_VALUE_KEY_INFORMATION;


typedef struct _REG_UNLOAD_KEY_INFORMATION {
    PVOID Object;
    PVOID UserEvent;
    PVOID CallContext;
    PVOID ObjectContext;
    PVOID Reserved;
} REG_UNLOAD_KEY_INFORMATION, * PREG_UNLOAD_KEY_INFORMATION;

typedef struct _KEY_BASIC_INFORMATION {
    LARGE_INTEGER LastWriteTime;
    ULONG         TitleIndex;
    ULONG         NameLength;
    WCHAR         Name[1];
} KEY_BASIC_INFORMATION, * PKEY_BASIC_INFORMATION;

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
} KEY_FULL_INFORMATION, * PKEY_FULL_INFORMATION;


typedef struct _KEY_NODE_INFORMATION {
    LARGE_INTEGER LastWriteTime;
    ULONG         TitleIndex;
    ULONG         ClassOffset;
    ULONG         ClassLength;
    ULONG         NameLength;
    WCHAR         Name[1];
} KEY_NODE_INFORMATION, * PKEY_NODE_INFORMATION;


typedef struct _KEY_VALUE_BASIC_INFORMATION {
    ULONG TitleIndex;
    ULONG Type;
    ULONG NameLength;
    WCHAR Name[1];
} KEY_VALUE_BASIC_INFORMATION, * PKEY_VALUE_BASIC_INFORMATION;



typedef struct _KEY_VALUE_FULL_INFORMATION {
    ULONG TitleIndex;
    ULONG Type;
    ULONG DataOffset;
    ULONG DataLength;
    ULONG NameLength;
    WCHAR Name[1];
} KEY_VALUE_FULL_INFORMATION, * PKEY_VALUE_FULL_INFORMATION;



typedef struct _KEY_VALUE_PARTIAL_INFORMATION {
    ULONG TitleIndex;
    ULONG Type;
    ULONG DataLength;
    UCHAR Data[1];
} KEY_VALUE_PARTIAL_INFORMATION, * PKEY_VALUE_PARTIAL_INFORMATION;

typedef struct _KEY_WRITE_TIME_INFORMATION {
    LARGE_INTEGER LastWriteTime;
} KEY_WRITE_TIME_INFORMATION, * PKEY_WRITE_TIME_INFORMATION;



typedef struct _KMUTANT {
    DISPATCHER_HEADER Header;
    LIST_ENTRY        MutantListEntry;
    struct _KTHREAD* OwnerThread;
    union {
        UCHAR MutantFlags;
        struct {
            UCHAR Abandoned : 1;
            UCHAR Spare1 : 7;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
    UCHAR             ApcDisable;
} KMUTANT, * PKMUTANT, * PRKMUTANT, KMUTEX, * PKMUTEX, * PRKMUTEX;

typedef struct _KTMOBJECT_CURSOR {
    GUID  LastQuery;
    ULONG ObjectIdCount;
    GUID  ObjectIds[1];
} KTMOBJECT_CURSOR, * PKTMOBJECT_CURSOR;

typedef enum _KTMOBJECT_TYPE {
    KTMOBJECT_TRANSACTION,
    KTMOBJECT_TRANSACTION_MANAGER,
    KTMOBJECT_RESOURCE_MANAGER,
    KTMOBJECT_ENLISTMENT,
    KTMOBJECT_INVALID
} KTMOBJECT_TYPE, * PKTMOBJECT_TYPE;

typedef struct _OB_OPERATION_REGISTRATION {
    POBJECT_TYPE* ObjectType;
    OB_OPERATION                Operations;
    POB_PRE_OPERATION_CALLBACK  PreOperation;
    POB_POST_OPERATION_CALLBACK PostOperation;
} OB_OPERATION_REGISTRATION, * POB_OPERATION_REGISTRATION;

typedef struct _OB_CALLBACK_REGISTRATION {
    USHORT                    Version;
    USHORT                    OperationRegistrationCount;
    UNICODE_STRING            Altitude;
    PVOID                     RegistrationContext;
    OB_OPERATION_REGISTRATION* OperationRegistration;
} OB_CALLBACK_REGISTRATION, * POB_CALLBACK_REGISTRATION;


typedef struct _OB_POST_CREATE_HANDLE_INFORMATION {
    ACCESS_MASK GrantedAccess;
} OB_POST_CREATE_HANDLE_INFORMATION, * POB_POST_CREATE_HANDLE_INFORMATION;

typedef struct _OB_POST_DUPLICATE_HANDLE_INFORMATION {
    ACCESS_MASK GrantedAccess;
} OB_POST_DUPLICATE_HANDLE_INFORMATION, * POB_POST_DUPLICATE_HANDLE_INFORMATION;

typedef struct _OB_PRE_CREATE_HANDLE_INFORMATION {
    ACCESS_MASK DesiredAccess;
    ACCESS_MASK OriginalDesiredAccess;
} OB_PRE_CREATE_HANDLE_INFORMATION, * POB_PRE_CREATE_HANDLE_INFORMATION;

typedef struct _OB_PRE_DUPLICATE_HANDLE_INFORMATION {
    ACCESS_MASK DesiredAccess;
    ACCESS_MASK OriginalDesiredAccess;
    PVOID       SourceProcess;
    PVOID       TargetProcess;
} OB_PRE_DUPLICATE_HANDLE_INFORMATION, * POB_PRE_DUPLICATE_HANDLE_INFORMATION;

typedef union _OB_POST_OPERATION_PARAMETERS {
    OB_POST_CREATE_HANDLE_INFORMATION    CreateHandleInformation;
    OB_POST_DUPLICATE_HANDLE_INFORMATION DuplicateHandleInformation;
} OB_POST_OPERATION_PARAMETERS, * POB_POST_OPERATION_PARAMETERS;

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
} OB_POST_OPERATION_INFORMATION, * POB_POST_OPERATION_INFORMATION;


typedef union _OB_PRE_OPERATION_PARAMETERS {
    OB_PRE_CREATE_HANDLE_INFORMATION    CreateHandleInformation;
    OB_PRE_DUPLICATE_HANDLE_INFORMATION DuplicateHandleInformation;
} OB_PRE_OPERATION_PARAMETERS, * POB_PRE_OPERATION_PARAMETERS;



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
} OB_PRE_OPERATION_INFORMATION, * POB_PRE_OPERATION_INFORMATION;





typedef struct {
    GUID Guid;
} NOTIFY_USER_POWER_SETTING, * PNOTIFY_USER_POWER_SETTING;

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
} OSVERSIONINFOEXW, * POSVERSIONINFOEXW, * LPOSVERSIONINFOEXW, RTL_OSVERSIONINFOEXW, * PRTL_OSVERSIONINFOEXW;



typedef struct _OSVERSIONINFOW {
    ULONG dwOSVersionInfoSize;
    ULONG dwMajorVersion;
    ULONG dwMinorVersion;
    ULONG dwBuildNumber;
    ULONG dwPlatformId;
    WCHAR szCSDVersion[128];
} OSVERSIONINFOW, * POSVERSIONINFOW, * LPOSVERSIONINFOW, RTL_OSVERSIONINFOW, * PRTL_OSVERSIONINFOW;

typedef struct _PCI_ATS_INTERFACE {
    USHORT                 Size;
    USHORT                 Version;
    PVOID                  Context;
    PINTERFACE_REFERENCE   InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PPCI_SET_ATS           SetAddressTranslationServices;
    UCHAR                  InvalidateQueueDepth;
} PCI_ATS_INTERFACE, * PPCI_ATS_INTERFACE;

typedef struct _PO_FX_PERF_STATE {
    ULONGLONG Value;
    PVOID     Context;
} PO_FX_PERF_STATE, * PPO_FX_PERF_STATE;

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
} PCI_MSIX_TABLE_CONFIG_INTERFACE, * PPCI_MSIX_TABLE_CONFIG_INTERFACE;

typedef struct _PCI_SECURITY_INTERFACE2 {
    USHORT                 Size;
    USHORT                 Version;
    PVOID                  Context;
    PINTERFACE_REFERENCE   InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    ULONG                  Flags;
    ULONG                  SupportedScenarios;
    PPCI_SET_ACS2          SetAccessControlServices;
} PCI_SECURITY_INTERFACE2, * PPCI_SECURITY_INTERFACE2;

typedef struct _PCI_SEGMENT_BUS_NUMBER {
    union {
        struct {
            ULONG BusNumber : 8;
            ULONG SegmentNumber : 16;
            ULONG Reserved : 8;
        } bits;
        ULONG AsULONG;
    } u;
} PCI_SEGMENT_BUS_NUMBER, * PPCI_SEGMENT_BUS_NUMBER;


typedef struct _PLUGPLAY_NOTIFICATION_HEADER {
    USHORT Version;
    USHORT Size;
    GUID   Event;
} PLUGPLAY_NOTIFICATION_HEADER, * PPLUGPLAY_NOTIFICATION_HEADER;


typedef enum _PO_FX_PERF_STATE_TYPE {
    PoFxPerfStateTypeDiscrete,
    PoFxPerfStateTypeRange,
    PoFxPerfStateTypeMaximum
} PO_FX_PERF_STATE_TYPE, * PPO_FX_PERF_STATE_TYPE;

typedef enum _PO_FX_PERF_STATE_UNIT {
    PoFxPerfStateUnitOther,
    PoFxPerfStateUnitFrequency,
    PoFxPerfStateUnitBandwidth,
    PoFxPerfStateUnitMaximum
} PO_FX_PERF_STATE_UNIT, * PPO_FX_PERF_STATE_UNIT;

typedef enum _TRANSACTION_STATE {
    TransactionStateNormal,
    TransactionStateIndoubt,
    TransactionStateCommittedNotify
} TRANSACTION_STATE;

typedef struct _PNP_BUS_INFORMATION {
    GUID           BusTypeGuid;
    INTERFACE_TYPE LegacyBusType;
    ULONG          BusNumber;
} PNP_BUS_INFORMATION, * PPNP_BUS_INFORMATION;

typedef struct _PO_FX_COMPONENT_IDLE_STATE {
    ULONGLONG TransitionLatency;
    ULONGLONG ResidencyRequirement;
    ULONG     NominalPower;
} PO_FX_COMPONENT_IDLE_STATE, * PPO_FX_COMPONENT_IDLE_STATE;

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
} PO_FX_COMPONENT_PERF_SET, * PPO_FX_COMPONENT_PERF_SET;

typedef struct _PO_FX_COMPONENT_PERF_INFO {
    ULONG                    PerfStateSetsCount;
    PO_FX_COMPONENT_PERF_SET* PerfStateSets;
} PO_FX_COMPONENT_PERF_INFO, * PPO_FX_COMPONENT_PERF_INFO;


typedef struct _PO_FX_COMPONENT_V1 {
    GUID                        Id;
    ULONG                       IdleStateCount;
    ULONG                       DeepestWakeableIdleState;
    PPO_FX_COMPONENT_IDLE_STATE IdleStates;
} PO_FX_COMPONENT_V1, * PPO_FX_COMPONENT_V1;

typedef struct _PO_FX_COMPONENT_V2 {
    GUID                        Id;
    ULONGLONG                   Flags;
    ULONG                       DeepestWakeableIdleState;
    ULONG                       IdleStateCount;
    PPO_FX_COMPONENT_IDLE_STATE IdleStates;
    ULONG                       ProviderCount;
    PULONG                      Providers;
} PO_FX_COMPONENT_V2, * PPO_FX_COMPONENT_V2;

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
    PO_FX_COMPONENT_V1*                         Components;
} PO_FX_DEVICE_V1, * PPO_FX_DEVICE_V1;

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
    PO_FX_COMPONENT_V2*                         Components;
} PO_FX_DEVICE_V2, * PPO_FX_DEVICE_V2;

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
    PO_FX_COMPONENT_V2*                         Components;
} PO_FX_DEVICE_V3, * PPO_FX_DEVICE_V3;



typedef struct _PO_FX_PERF_STATE_CHANGE {
    ULONG Set;
    union {
        ULONG     StateIndex;
        ULONGLONG StateValue;
    };
} PO_FX_PERF_STATE_CHANGE, * PPO_FX_PERF_STATE_CHANGE;






typedef struct _TRANSACTIONMANAGER_BASIC_INFORMATION {
    GUID          TmIdentity;
    LARGE_INTEGER VirtualClock;
} TRANSACTIONMANAGER_BASIC_INFORMATION, * PTRANSACTIONMANAGER_BASIC_INFORMATION;

typedef struct _TRANSACTIONMANAGER_LOG_INFORMATION {
    GUID LogIdentity;
} TRANSACTIONMANAGER_LOG_INFORMATION, * PTRANSACTIONMANAGER_LOG_INFORMATION;

typedef struct _TRANSACTIONMANAGER_LOGPATH_INFORMATION {
    ULONG LogPathLength;
    WCHAR LogPath[1];
} TRANSACTIONMANAGER_LOGPATH_INFORMATION, * PTRANSACTIONMANAGER_LOGPATH_INFORMATION;

typedef struct _TRANSACTIONMANAGER_RECOVERY_INFORMATION {
    ULONGLONG LastRecoveredLsn;
} TRANSACTIONMANAGER_RECOVERY_INFORMATION, * PTRANSACTIONMANAGER_RECOVERY_INFORMATION;



typedef struct _CLS_LSN {
    ULONGLONG Internal;
} CLS_LSN, * PCLS_LSN, PPCLS_LSN;

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


typedef struct _DMA_ADAPTER {
    USHORT          Version;
    USHORT          Size;
    PDMA_OPERATIONS DmaOperations;
} *PADAPTER_OBJECT, DMA_ADAPTER, * PDMA_ADAPTER;


 
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
  _In_ _Out_ PLIST_ENTRY ListHead,
  _In_ _Out_ PLIST_ENTRY ListToAppend
);

/*
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
*/


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
} CLFS_MGMT_POLICY_TYPE, * PCLFS_MGMT_POLICY_TYPE;

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

typedef struct _CLFS_STREAM_ID_INFORMATION {
  UCHAR StreamIdentifier;
} CLFS_STREAM_ID_INFORMATION, *PCLFS_STREAM_ID_INFORMATION, PPCLFS_STREAM_ID_INFORMATION;


typedef struct _CLS_CONTAINER_INFORMATION {
    ULONG                FileAttributes;
    ULONGLONG            CreationTime;
    ULONGLONG            LastAccessTime;
    ULONGLONG            LastWriteTime;
    LONGLONG             ContainerSize;
    ULONG                FileNameActualLength;
    ULONG                FileNameLength;
    WCHAR* FileName;
    CLFS_CONTAINER_STATE State;
    CLFS_CONTAINER_ID    PhysicalContainerId;
    CLFS_CONTAINER_ID    LogicalContainerId;
} CLS_CONTAINER_INFORMATION, * PCLS_CONTAINER_INFORMATION, PPCLS_CONTAINER_INFORMATION;

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
} CLS_INFORMATION, * PCLS_INFORMATION, * PPCLS_INFORMATION;



typedef struct _CLS_IO_STATISTICS_HEADER {
    UCHAR              ubMajorVersion;
    UCHAR              ubMinorVersion;
    CLFS_IOSTATS_CLASS eStatsClass;
    USHORT             cbLength;
    ULONG              coffData;
} CLS_IO_STATISTICS_HEADER, * PCLS_IO_STATISTICS_HEADER, PPCLS_IO_STATISTICS_HEADER;

typedef enum _CLS_LOG_INFORMATION_CLASS {
    ClfsLogBasicInformation,
    ClfsLogBasicInformationPhysical,
    ClfsLogPhysicalNameInformation,
    ClfsLogStreamIdentifierInformation,
    ClfsLogSystemMarkingInformation,
    ClfsLogPhysicalLsnInformation
} CLS_LOG_INFORMATION_CLASS, * PCLS_LOG_INFORMATION_CLASS, PPCLS_LOG_INFORMATION_CLASS;

typedef struct _CLS_SCAN_CONTEXT {
    CLFS_NODE_ID               cidNode;
    PLOG_FILE_OBJECT           plfoLog;
    ULONG                      cIndex;
    ULONG                      cContainers;
    ULONG                      cContainersReturned;
    CLFS_SCAN_MODE             eScanMode;
    PCLS_CONTAINER_INFORMATION pinfoContainer;
} CLS_SCAN_CONTEXT, * PCLS_SCAN_CONTEXT, PPCLS_SCAN_CONTEXT;

typedef struct _CLS_WRITE_ENTRY {
    PVOID Buffer;
    ULONG ByteLength;
} CLS_WRITE_ENTRY, * PCLS_WRITE_ENTRY, PPCLS_WRITE_ENTRY;

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
} CM_FLOPPY_DEVICE_DATA, * PCM_FLOPPY_DEVICE_DATA;

typedef struct _CM_FULL_RESOURCE_DESCRIPTOR {
    INTERFACE_TYPE           InterfaceType;
    ULONG                    BusNumber;
    CM_PARTIAL_RESOURCE_LIST PartialResourceList;
} CM_FULL_RESOURCE_DESCRIPTOR, * PCM_FULL_RESOURCE_DESCRIPTOR;

typedef struct _CM_INT13_DRIVE_PARAMETER {
    USHORT DriveSelect;
    ULONG  MaxCylinders;
    USHORT SectorsPerTrack;
    USHORT MaxHeads;
    USHORT NumberDrives;
} CM_INT13_DRIVE_PARAMETER, * PCM_INT13_DRIVE_PARAMETER;

typedef struct _CM_KEYBOARD_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    UCHAR  Type;
    UCHAR  Subtype;
    USHORT KeyboardFlags;
} CM_KEYBOARD_DEVICE_DATA, * PCM_KEYBOARD_DEVICE_DATA;

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
            USHORT    Level;
            USHORT    Group;

            //ULONG     Level;

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
//#if ...
                    USHORT    Level;
                    USHORT    Group;
//#else
//                    ULONG     Level;
//#endif
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
} CM_PARTIAL_RESOURCE_DESCRIPTOR, * PCM_PARTIAL_RESOURCE_DESCRIPTOR;


typedef struct _CM_RESOURCE_LIST {
    ULONG                       Count;
    CM_FULL_RESOURCE_DESCRIPTOR List[1];
} CM_RESOURCE_LIST, * PCM_RESOURCE_LIST;


typedef struct _CM_SCSI_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    UCHAR  HostIdentifier;
} CM_SCSI_DEVICE_DATA, * PCM_SCSI_DEVICE_DATA;

typedef struct _CM_SERIAL_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    ULONG  BaudClock;
} CM_SERIAL_DEVICE_DATA, * PCM_SERIAL_DEVICE_DATA;

typedef struct _CLS_IO_STATISTICS {
    CLS_IO_STATISTICS_HEADER hdrIoStats;
    ULONGLONG                cFlush;
    ULONGLONG                cbFlush;
    ULONGLONG                cMetaFlush;
    ULONGLONG                cbMetaFlush;
} CLS_IO_STATISTICS, * PCLS_IO_STATISTICS, PPCLS_IO_STATISTICS;

CLFSUSER_API NTSTATUS ClfsAddLogContainer(
  _In_ PLOG_FILE_OBJECT plfoLog,
  _In_ PULONGLONG       pcbContainer,
  _In_ PUNICODE_STRING  puszContainerPath
);


CLFSUSER_API NTSTATUS ClfsAddLogContainerSet(
  _In_           PLOG_FILE_OBJECT plfoLog,
  _In_           USHORT           cContainers,
  _In_opt_       PULONGLONG       pcbContainer,
  _In_           PUNICODE_STRING  rguszContainerPath
);


CLFSUSER_API NTSTATUS ClfsAdvanceLogBase(
   PVOID     pvMarshalContext,
  _In_      PCLFS_LSN plsnBase,
  _In_      ULONG     fFlags
);

CLFSUSER_API NTSTATUS ClfsAlignReservedLog(
  _In_  PVOID       pvMarshalContext,
  _In_  ULONG       cRecords,
  _In_  LONGLONG*   rgcbReservation,
  _Out_ PLONGLONG   pcbAlignReservation
);

CLFSUSER_API NTSTATUS ClfsAllocReservedLog(
  _In_ PVOID     pvMarshalContext,
  _In_ ULONG     cRecords,
  _In_ PLONGLONG pcbAdjustment
);

CLFSUSER_API NTSTATUS ClfsCloseAndResetLogFile(
  _In_ PLOG_FILE_OBJECT plfoLog
);

CLFSUSER_API NTSTATUS ClfsCloseLogFileObject(
  _In_ PLOG_FILE_OBJECT plfoLog
);

CLFSUSER_API NTSTATUS ClfsCreateLogFile(
  _Out_          PPLOG_FILE_OBJECT    pplfoLog,
  _In_           PUNICODE_STRING      puszLogFileName,
  _In_           ACCESS_MASK          fDesiredAccess,
  _In_           ULONG                dwShareMode,
  _In_opt_ PSECURITY_DESCRIPTOR psdLogFile,
  _In_           ULONG                fCreateDisposition,
  _In_           ULONG                fCreateOptions,
  _In_           ULONG                fFlagsAndAttributes,
  _In_           ULONG                fLogOptionFlag,
  _In_opt_ PVOID                pvContext,
  _In_           ULONG                cbContext
);

CLFSUSER_API NTSTATUS ClfsCreateMarshallingArea(
  _In_           PLOG_FILE_OBJECT   plfoLog,
  _In_           POOL_TYPE          ePoolType,
  _In_opt_ PALLOCATE_FUNCTION pfnAllocBuffer,
  _In_opt_ PFREE_FUNCTION     pfnFreeBuffer,
  _In_           ULONG              cbMarshallingBuffer,
  _In_           ULONG              cMaxWriteBuffers,
  _In_           ULONG              cMaxReadBuffers,
  _Out_          PVOID              *ppvMarshalContext
);

CLFSUSER_API NTSTATUS ClfsCreateScanContext(
  _In_      PLOG_FILE_OBJECT   plfoLog,
  _In_      ULONG              cFromContainer,
  _In_      ULONG              cContainers,
  _In_      CLFS_SCAN_MODE     eScanMode,
   PCLFS_SCAN_CONTEXT pcxScan
);

CLFSUSER_API NTSTATUS ClfsDeleteLogByPointer(
  _In_ PLOG_FILE_OBJECT plfoLog
);

CLFSUSER_API NTSTATUS ClfsDeleteLogFile(
  _In_           PUNICODE_STRING puszLogFileName,
                 PVOID           pvReserved,
  _In_           ULONG           fLogOptionFlag,
  _In_opt_ PVOID           pvContext,
  _In_           ULONG           cbContext
);

CLFSUSER_API NTSTATUS ClfsDeleteMarshallingArea(
  _In_ PVOID pvMarshalContext
);

CLFSUSER_API NTSTATUS ClfsFlushBuffers(
  _In_ PVOID pvMarshalContext
);

CLFSUSER_API NTSTATUS ClfsFlushToLsn(
  _In_            PVOID     pvMarshalContext,
  _In_            PCLFS_LSN plsnFlush,
   PCLFS_LSN plsnLastFlushed
);

CLFSUSER_API NTSTATUS ClfsGetContainerName(
  _In_            PLOG_FILE_OBJECT  plfoLog,
  _In_            CLFS_CONTAINER_ID cidLogicalContainer,
  _Out_           PUNICODE_STRING   puszContainerName,
   PULONG            pcActualLenContainerName
);

CLFSUSER_API NTSTATUS ClfsGetIoStatistics(
  _In_            PLOG_FILE_OBJECT   plfoLog,
         PVOID              pvStatsBuffer,
  _In_            ULONG              cbStatsBuffer,
  _In_            CLFS_IOSTATS_CLASS eStatsClass,
   PULONG             pcbStatsWritten
);

CLFSUSER_API ULONG ClfsLsnBlockOffset(
  _In_ const CLFS_LSN *plsn
);

CLFSUSER_API CLFS_CONTAINER_ID ClfsLsnContainer(
  _In_ const CLFS_LSN *plsn
);

CLFSUSER_API CLFS_LSN ClfsLsnCreate(
  _In_ CLFS_CONTAINER_ID cidContainer,
  _In_ ULONG             offBlock,
  _In_ ULONG             cRecord
);

CLFSUSER_API BOOLEAN ClfsLsnEqual(
  _In_ const CLFS_LSN *plsn1,
  _In_ const CLFS_LSN *plsn2
);

CLFSUSER_API BOOLEAN ClfsLsnGreater(
  _In_ const CLFS_LSN *plsn1,
  _In_ const CLFS_LSN *plsn2
);

CLFSUSER_API BOOLEAN ClfsLsnLess(
  _In_ const CLFS_LSN *plsn1,
  _In_ const CLFS_LSN *plsn2
);

CLFSUSER_API BOOLEAN ClfsLsnNull(
  _In_ const CLFS_LSN *plsn
);

CLFSUSER_API ULONG ClfsLsnRecordSequence(
  _In_ const CLFS_LSN *plsn
);

CLFSUSER_API NTSTATUS ClfsMgmtDeregisterManagedClient(
  CLFS_MGMT_CLIENT ClientCookie
);

CLFSUSER_API NTSTATUS ClfsMgmtHandleLogFileFull(
  _In_ CLFS_MGMT_CLIENT Client
);

CLFSUSER_API NTSTATUS ClfsMgmtInstallPolicy(
  _In_ PLOG_FILE_OBJECT  LogFile,
  _In_ PCLFS_MGMT_POLICY Policy,
  _In_ ULONG             PolicyLength
);

CLFSUSER_API NTSTATUS ClfsMgmtQueryPolicy(
  _In_  PLOG_FILE_OBJECT      LogFile,
  _In_  CLFS_MGMT_POLICY_TYPE PolicyType,
  _Out_ PCLFS_MGMT_POLICY     Policy,
  _Out_ PULONG                PolicyLength
);

CLFSUSER_API NTSTATUS ClfsMgmtRegisterManagedClient(
  _In_ PLOG_FILE_OBJECT               LogFile,
  _In_ PCLFS_MGMT_CLIENT_REGISTRATION RegistrationData,
       PCLFS_MGMT_CLIENT              ClientCookie
);

CLFSUSER_API NTSTATUS ClfsMgmtRemovePolicy(
  _In_ PLOG_FILE_OBJECT      LogFile,
  _In_ CLFS_MGMT_POLICY_TYPE PolicyType
);

CLFSUSER_API NTSTATUS ClfsMgmtSetLogFileSize(
  _In_           PLOG_FILE_OBJECT                     LogFile,
  _In_           PULONGLONG                           NewSizeInContainers,
  _Out_          PULONGLONG                           ResultingSizeInContainers,
  _In_opt_ PCLFS_SET_LOG_SIZE_COMPLETE_CALLBACK CompletionRoutine,
  _In_opt_ PVOID                                CompletionRoutineData
);

CLFSUSER_API NTSTATUS ClfsMgmtSetLogFileSizeAsClient(
  _In_            PLOG_FILE_OBJECT                     LogFile,
  _In_opt_  PCLFS_MGMT_CLIENT                    ClientCookie,
  _In_            PULONGLONG                           NewSizeInContainers,
   PULONGLONG                           ResultingSizeInContainers,
  _In_opt_  PCLFS_SET_LOG_SIZE_COMPLETE_CALLBACK CompletionRoutine,
  _In_opt_  PVOID                                CompletionRoutineData
);

CLFSUSER_API NTSTATUS ClfsMgmtTailAdvanceFailure(
  _In_ CLFS_MGMT_CLIENT Client,
  _In_ NTSTATUS         Reason
);

CLFSUSER_API NTSTATUS ClfsQueryLogFileInformation(
  _In_  PLOG_FILE_OBJECT           plfoLog,
  _In_  CLFS_LOG_INFORMATION_CLASS eInformationClass,
        PVOID                      pinfoInputBuffer,
        ULONG                      cbinfoInputBuffer,
  _Out_ PVOID                      pinfoBuffer,
        PULONG                     pcbInfoBuffer
);

CLFSUSER_API NTSTATUS ClfsReadLogRecord(
  _In_      PVOID             pvMarshalContext,
   PCLFS_LSN         plsnFirst,
  _In_      CLFS_CONTEXT_MODE peContextMode,
  _Out_     PVOID             *ppvReadBuffer,
  _Out_     PULONG            pcbReadBuffer,
  _Out_     PCLFS_RECORD_TYPE peRecordType,
  _Out_     PCLFS_LSN         plsnUndoNext,
  _Out_     PCLFS_LSN         plsnPrevious,
  _Out_     PVOID             *ppvReadContext
);

CLFSUSER_API NTSTATUS ClfsReadNextLogRecord(
        PVOID             pvReadContext,
  _Out_          PVOID             *ppvBuffer,
  _Out_          PULONG            pcbBuffer,
        PCLFS_RECORD_TYPE peRecordType,
  _In_opt_ PCLFS_LSN         plsnUser,
  _Out_          PCLFS_LSN         plsnUndoNext,
  _Out_          PCLFS_LSN         plsnPrevious,
  _Out_          PCLFS_LSN         plsnRecord
);

CLFSUSER_API NTSTATUS ClfsReadPreviousRestartArea(
  _In_  PVOID     pvReadContext,
  _Out_ PVOID     *ppvRestartBuffer,
  _Out_ PULONG    pcbRestartBuffer,
  _Out_ PCLFS_LSN plsnRestart
);

CLFSUSER_API NTSTATUS ClfsReadRestartArea(
   PVOID     pvMarshalContext,
  _Out_     PVOID     *ppvRestartBuffer,
  _Out_     PULONG    pcbRestartBuffer,
  _Out_     PCLFS_LSN plsn,
  _Out_     PVOID     *ppvReadContext
);


CLFSUSER_API NTSTATUS ClfsRemoveLogContainer(
  _In_ PLOG_FILE_OBJECT plfoLog,
  _In_ PUNICODE_STRING  puszContainerPath,
  _In_ BOOLEAN          fForce
);

CLFSUSER_API NTSTATUS ClfsRemoveLogContainerSet(
  _In_ PLOG_FILE_OBJECT plfoLog,
  _In_ USHORT           cContainers,
  _In_ PUNICODE_STRING  rgwszContainerPath,
  _In_ BOOLEAN          fForce
);

CLFSUSER_API NTSTATUS ClfsReserveAndAppendLog(
  _In_            PVOID             pvMarshalContext,
  _In_opt_  PCLFS_WRITE_ENTRY rgWriteEntries,
  _In_            ULONG             cWriteEntries,
  _In_opt_  PCLFS_LSN         plsnUndoNext,
  _In_opt_  PCLFS_LSN         plsnPrevious,
  _In_            ULONG             cReserveRecords,
         PLONGLONG         rgcbReservation,
  _In_            ULONG             fFlags,
   PCLFS_LSN         plsn
);

CLFSUSER_API NTSTATUS ClfsReserveAndAppendLogAligned(
  _In_            PVOID             pvMarshalContext,
  _In_opt_  PCLFS_WRITE_ENTRY rgWriteEntries,
  _In_            ULONG             cWriteEntries,
  _In_            ULONG             cbEntryAlignment,
  _In_opt_  PCLFS_LSN         plsnUndoNext,
  _In_opt_  PCLFS_LSN         plsnPrevious,
  _In_            ULONG             cReserveRecords,
         PLONGLONG         rgcbReservation,
  _In_            ULONG             fFlags,
   PCLFS_LSN         plsn
);

CLFSUSER_API NTSTATUS ClfsScanLogContainers(
   PCLFS_SCAN_CONTEXT pcxScan,
  _In_      CLFS_SCAN_MODE     eScanMode
);

CLFSUSER_API NTSTATUS ClfsSetArchiveTail(
  _In_ PLOG_FILE_OBJECT plfoLog,
  _In_ PCLFS_LSN        plsnArchiveTail
);

CLFSUSER_API NTSTATUS ClfsSetEndOfLog(
  _In_ PLOG_FILE_OBJECT plfoLog,
  _In_ PCLFS_LSN        plsnEnd
);

CLFSUSER_API NTSTATUS ClfsSetLogFileInformation(
  _In_ PLOG_FILE_OBJECT           plfoLog,
  _In_ CLFS_LOG_INFORMATION_CLASS eInformationClass,
  _In_ PVOID                      pinfoBuffer,
  _In_ ULONG                      cbBuffer
);

CLFSUSER_API NTSTATUS ClfsTerminateReadLog(
  _In_ PVOID pvCursorContext
);

CLFSUSER_API NTSTATUS ClfsWriteRestartArea(
         PVOID     pvMarshalContext,
  _In_            PVOID     pvRestartBuffer,
  _In_            ULONG     cbRestartBuffer,
  _In_opt_  PCLFS_LSN plsnBase,
  _In_            ULONG     fFlags,
   PULONG    pcbWritten,
   PCLFS_LSN plsnNext
);


NTSTATUS CmCallbackGetKeyObjectID(
  _In_            PLARGE_INTEGER   Cookie,
  _In_            PVOID            Object,
   PULONG_PTR       ObjectID,
   PCUNICODE_STRING *ObjectName
);

NTSTATUS CmCallbackGetKeyObjectIDEx(
  _In_            PLARGE_INTEGER   Cookie,
  _In_            PVOID            Object,
   PULONG_PTR       ObjectID,
   PCUNICODE_STRING *ObjectName,
  _In_            ULONG            Flags
);

void CmCallbackReleaseKeyObjectIDEx(
  PCUNICODE_STRING ObjectName
);

PVOID CmGetBoundTransaction(
  _In_ PLARGE_INTEGER Cookie,
  _In_ PVOID          Object
);

void CmGetCallbackVersion(
   PULONG Major,
   PULONG Minor
);

NTSTATUS CmRegisterCallback(
  _In_           PEX_CALLBACK_FUNCTION Function,
  _In_opt_ PVOID                 Context,
  _Out_          PLARGE_INTEGER        Cookie
);

NTSTATUS CmRegisterCallbackEx(
  _In_           PEX_CALLBACK_FUNCTION Function,
  _In_           PCUNICODE_STRING      Altitude,
  _In_           PVOID                 Driver,
  _In_opt_ PVOID                 Context,
  _Out_          PLARGE_INTEGER        Cookie,
                 PVOID                 Reserved
);

NTSTATUS CmSetCallbackObjectContext(
         PVOID          Object,
  _In_            PLARGE_INTEGER Cookie,
  _In_            PVOID          NewContext,
   PVOID          *OldContext
);

NTSTATUS CmUnRegisterCallback(
  _In_ LARGE_INTEGER Cookie
);

typedef struct _FILE_FS_DEVICE_INFORMATION {
    DEVICE_TYPE DeviceType;
    ULONG       Characteristics;
} FILE_FS_DEVICE_INFORMATION, * PFILE_FS_DEVICE_INFORMATION;

typedef struct _FILE_FULL_EA_INFORMATION {
    ULONG  NextEntryOffset;
    UCHAR  Flags;
    UCHAR  EaNameLength;
    USHORT EaValueLength;
    CHAR   EaName[1];
} FILE_FULL_EA_INFORMATION, * PFILE_FULL_EA_INFORMATION;

typedef struct _FILE_IO_PRIORITY_HINT_INFORMATION {
    IO_PRIORITY_HINT PriorityHint;
} FILE_IO_PRIORITY_HINT_INFORMATION, * PFILE_IO_PRIORITY_HINT_INFORMATION;

typedef struct _FILE_IS_REMOTE_DEVICE_INFORMATION {
    BOOLEAN IsRemote;
} FILE_IS_REMOTE_DEVICE_INFORMATION, * PFILE_IS_REMOTE_DEVICE_INFORMATION;




typedef struct _FILE_POSITION_INFORMATION {
    LARGE_INTEGER CurrentByteOffset;
} FILE_POSITION_INFORMATION, * PFILE_POSITION_INFORMATION;


typedef struct _FILE_STANDARD_INFORMATION_EX {
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG         NumberOfLinks;
    BOOLEAN       DeletePending;
    BOOLEAN       Directory;
    BOOLEAN       AlternateStream;
    BOOLEAN       MetadataAttribute;
} FILE_STANDARD_INFORMATION_EX, * PFILE_STANDARD_INFORMATION_EX;


PSLIST_ENTRY FirstEntrySList(
    _In_ PSLIST_HEADER SListHead
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
} FPGA_CONTROL_INTERFACE, * PFPGA_CONTROL_INTERFACE;


typedef
VOID
(*PDEVICE_RESET_COMPLETION)(
    _In_ NTSTATUS Status,
    _Inout_opt_ PVOID Context
    );


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

typedef struct _FUNCTION_LEVEL_DEVICE_RESET_PARAMETERS {
    ULONG                    Size;
    PDEVICE_RESET_COMPLETION DeviceResetCompletion;
    PVOID                    CompletionContext;
} FUNCTION_LEVEL_DEVICE_RESET_PARAMETERS, * PFUNCTION_LEVEL_DEVICE_RESET_PARAMETERS;


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
} HWPROFILE_CHANGE_NOTIFICATION, * PHWPROFILE_CHANGE_NOTIFICATION;

typedef struct _IMAGE_POLICY_ENTRY {
    IMAGE_POLICY_ENTRY_TYPE Type;
    IMAGE_POLICY_ID         PolicyId;
    union {
        const VOID* None;
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


typedef struct _IMAGE_POLICY_METADATA {
    UCHAR              Version;
    UCHAR              Reserved0[7];
    ULONGLONG          ApplicationId;
    IMAGE_POLICY_ENTRY* Policies;
} IMAGE_POLICY_METADATA;


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
} DEVICE_BUS_SPECIFIC_RESET_TYPE, * PDEVICE_BUS_SPECIFIC_RESET_TYPE;

typedef struct _DEVICE_BUS_SPECIFIC_RESET_INFO {
  GUID                           BusTypeGuid;
  DEVICE_BUS_SPECIFIC_RESET_TYPE ResetTypeSupported;
} DEVICE_BUS_SPECIFIC_RESET_INFO, *PDEVICE_BUS_SPECIFIC_RESET_INFO;

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
  DEVICE_POWER_STATE* DeviceState;
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
} DMA_IOMMU_INTERFACE_V1, * PDMA_IOMMU_INTERFACE_V1;

typedef enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE {
    CommonBufferConfigTypeLogicalAddressLimits,
    CommonBufferConfigTypeSubSection,
    CommonBufferConfigTypeHardwareAccessPermissions,
    CommonBufferConfigTypeMax
} DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE, * PDMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE;

typedef enum {
    DmaComplete,
    DmaAborted,
    DmaError,
    DmaCancelled
} DMA_COMPLETION_STATUS;


typedef enum _DOMAIN_CONFIGURATION_ARCH {
    DomainConfigurationArm64,
    DomainConfigurationX64,
    DomainConfigurationInvalid
} DOMAIN_CONFIGURATION_ARCH, * PDOMAIN_CONFIGURATION_ARCH;



typedef enum _DRIVER_REGKEY_TYPE {
    DriverRegKeyParameters,
    DriverRegKeyPersistentState,
    DriverRegKeySharedPersistentState
} DRIVER_REGKEY_TYPE, * PDRIVER_REGKEY_TYPE;



typedef enum _ENLISTMENT_INFORMATION_CLASS {
    EnlistmentBasicInformation,
    EnlistmentRecoveryInformation,
    EnlistmentCrmInformation
} ENLISTMENT_INFORMATION_CLASS;






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
} DMA_IOMMU_INTERFACE_V2, * PDMA_IOMMU_INTERFACE_V2;


typedef struct _DMA_ADAPTER_INFO {
    ULONG Version;
    union {
        DMA_ADAPTER_INFO_V1        V1;
        DMA_ADAPTER_INFO_CRASHDUMP Crashdump;
    };
} DMA_ADAPTER_INFO, * PDMA_ADAPTER_INFO;




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

typedef struct _DMA_TRANSFER_INFO_V1 {
    ULONG MapRegisterCount;
    ULONG ScatterGatherElementCount;
    ULONG ScatterGatherListSize;
} DMA_TRANSFER_INFO_V1, * PDMA_TRANSFER_INFO_V1;

typedef struct _DMA_TRANSFER_INFO_V2 {
    ULONG MapRegisterCount;
    ULONG ScatterGatherElementCount;
    ULONG ScatterGatherListSize;
    ULONG LogicalPageCount;
} DMA_TRANSFER_INFO_V2, * PDMA_TRANSFER_INFO_V2;


typedef struct _DMA_IOMMU_INTERFACE_EX {
  SIZE_T Size;
  ULONG  Version;
  union {
    DMA_IOMMU_INTERFACE_V1 V1;
    DMA_IOMMU_INTERFACE_V2 V2;
    DMA_IOMMU_INTERFACE_V3 V3;
  };
} DMA_IOMMU_INTERFACE_EX, *PDMA_IOMMU_INTERFACE_EX;

typedef struct _DMA_TRANSFER_INFO {
  ULONG Version;
  union {
    DMA_TRANSFER_INFO_V1 V1;
    DMA_TRANSFER_INFO_V2 V2;
  };
} DMA_TRANSFER_INFO, *PDMA_TRANSFER_INFO;

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

typedef struct _ENLISTMENT_BASIC_INFORMATION {
  GUID EnlistmentId;
  GUID TransactionId;
  GUID ResourceManagerId;
} ENLISTMENT_BASIC_INFORMATION, *PENLISTMENT_BASIC_INFORMATION;



typedef struct _DOMAIN_CONFIGURATION {
    DOMAIN_CONFIGURATION_ARCH Type;
    union {
        DOMAIN_CONFIGURATION_ARM64 Arm64;
        DOMAIN_CONFIGURATION_X64   X64;
    };
} DOMAIN_CONFIGURATION, * PDOMAIN_CONFIGURATION;


typedef struct _EXT_DELETE_PARAMETERS {
    ULONG                Version;
    ULONG                Reserved;
    PEXT_DELETE_CALLBACK DeleteCallback;
    PVOID                DeleteContext;
} EXT_DELETE_PARAMETERS, * PEXT_DELETE_PARAMETERS;

typedef struct _EXT_SET_PARAMETERS_V0 {
    ULONG    Version;
    ULONG    Reserved;
    LONGLONG NoWakeTolerance;
} EXT_SET_PARAMETERS, * PEXT_SET_PARAMETERS;

typedef struct _EXTENDED_CREATE_INFORMATION {
    LONGLONG ExtendedCreateFlags;
    PVOID    EaBuffer;
    ULONG    EaLength;
} EXTENDED_CREATE_INFORMATION, * PEXTENDED_CREATE_INFORMATION;

typedef struct _EXTENDED_CREATE_INFORMATION_32 {
    LONGLONG ExtendedCreateFlags;
    POINTER_32* EaBuffer;
    ULONG    EaLength;
} EXTENDED_CREATE_INFORMATION_32, * PEXTENDED_CREATE_INFORMATION_32;


NTSTATUS* EtwSetInformation(
  _In_           REGHANDLE        RegHandle,
  _In_           EVENT_INFO_CLASS InformationClass,
  _In_opt_ PVOID            EventInformation,
  _In_           ULONG            InformationLength
);

void ExAcquireFastMutex(
  PFAST_MUTEX FastMutex
);

void ExAcquireFastMutexUnsafe(
  PFAST_MUTEX FastMutex
);

//void ExAcquirePushLockExclusive(
//   Lock
//);

//void ExAcquirePushLockShared(
//   Lock
//);

BOOLEAN ExAcquireResourceExclusiveLite(
   PERESOURCE Resource,
  _In_      BOOLEAN    Wait
);

BOOLEAN ExAcquireResourceSharedLite(
   PERESOURCE Resource,
  _In_      BOOLEAN    Wait
);

BOOLEAN ExAcquireRundownProtection(
   PEX_RUNDOWN_REF RunRef
);

BOOLEAN ExAcquireRundownProtection(
   PEX_RUNDOWN_REF RunRef
);

BOOLEAN ExAcquireRundownProtection(
   PEX_RUNDOWN_REF RunRef
);

BOOLEAN ExAcquireRundownProtectionEx(
   PEX_RUNDOWN_REF RunRef,
  _In_      ULONG           Count
);

BOOLEAN ExAcquireSharedStarveExclusive(
   PERESOURCE Resource,
  _In_      BOOLEAN    Wait
);

BOOLEAN ExAcquireSharedWaitForExclusive(
   PERESOURCE Resource,
  _In_      BOOLEAN    Wait
);

KIRQL ExAcquireSpinLockExclusive(
  PEX_SPIN_LOCK SpinLock
);

void ExAcquireSpinLockExclusiveAtDpcLevel(
   PEX_SPIN_LOCK SpinLock
);

KIRQL ExAcquireSpinLockShared(
   PEX_SPIN_LOCK SpinLock
);

void ExAcquireSpinLockSharedAtDpcLevel(
  PEX_SPIN_LOCK SpinLock
);

PEX_RUNDOWN_REF_CACHE_AWARE ExAllocateCacheAwareRundownProtection(
  _In_ POOL_TYPE PoolType,
  _In_ ULONG PoolTag
);

PVOID ExAllocateFromLookasideListEx(
   PLOOKASIDE_LIST_EX Lookaside
);

PVOID ExAllocateFromNPagedLookasideList(
   PNPAGED_LOOKASIDE_LIST Lookaside
);

PVOID ExAllocateFromPagedLookasideList(
   PPAGED_LOOKASIDE_LIST Lookaside
);

PVOID ExAllocateFromPagedLookasideList(
   PPAGED_LOOKASIDE_LIST Lookaside
);

PVOID ExAllocatePool2(
  POOL_FLAGS Flags,
  SIZE_T     NumberOfBytes,
  ULONG      Tag
);

PVOID ExAllocatePool3(
  POOL_FLAGS                Flags,
  SIZE_T                    NumberOfBytes,
  ULONG                     Tag,
  PCPOOL_EXTENDED_PARAMETER ExtendedParameters,
  ULONG                     ExtendedParametersCount
);

PVOID ExAllocatePoolPriorityUninitialized(
  POOL_TYPE PoolType,
  SIZE_T                                         NumberOfBytes,
  ULONG                                          Tag,
  EX_POOL_PRIORITY                               Priority
);

PVOID ExAllocatePoolPriorityZero(
  POOL_TYPE PoolType,
  SIZE_T                                         NumberOfBytes,
  ULONG                                          Tag,
  EX_POOL_PRIORITY                               Priority
);

PVOID ExAllocatePoolQuotaUninitialized(
  POOL_TYPE PoolType,
  SIZE_T                                         NumberOfBytes,
  ULONG                                          Tag
);

PVOID ExAllocatePoolQuotaZero(
  POOL_TYPE PoolType,
  SIZE_T                                         NumberOfBytes,
  ULONG                                          Tag
);

PVOID ExAllocatePoolUninitialized(
  POOL_TYPE PoolType,
  SIZE_T                                         NumberOfBytes,
  ULONG                                          Tag
);

PVOID ExAllocatePoolWithQuota(
  _In_ POOL_TYPE PoolType,
  _In_ SIZE_T                                         NumberOfBytes
);

PVOID ExAllocatePoolWithQuotaTag(
  _In_ POOL_TYPE PoolType,
  _In_ SIZE_T                                         NumberOfBytes,
  _In_ ULONG                                          Tag
);

PVOID ExAllocatePoolWithTag(
  _In_ POOL_TYPE PoolType,
  _In_ SIZE_T                                         NumberOfBytes,
  _In_ ULONG                                          Tag
);

PVOID ExAllocatePoolWithTagPriority(
  _In_ POOL_TYPE        PoolType,
  _In_ SIZE_T                                                NumberOfBytes,
  _In_ ULONG                                                 Tag,
  _In_ EX_POOL_PRIORITY Priority
);

PVOID ExAllocatePoolZero(
  POOL_TYPE PoolType,
  SIZE_T                                         NumberOfBytes,
  ULONG                                          Tag
);

PEX_TIMER ExAllocateTimer(
  _In_opt_ PEXT_CALLBACK Callback,
  _In_opt_ PVOID         CallbackContext,
  _In_           ULONG         Attributes
);

BOOLEAN ExCancelTimer(
        PEX_TIMER              Timer,
  _In_opt_ PEXT_CANCEL_PARAMETERS Parameters
);

void ExConvertExclusiveToSharedLite(
   PERESOURCE Resource
);

NTSTATUS ExCreateCallback(
  _Out_ PCALLBACK_OBJECT   *CallbackObject,
  _In_  POBJECT_ATTRIBUTES ObjectAttributes,
  _In_  BOOLEAN            Create,
  _In_  BOOLEAN            AllowMultipleCallbacks
);

NTSTATUS ExCreatePool(
  ULONG                       Flags,
  ULONG_PTR                   Tag,
  POOL_CREATE_EXTENDED_PARAMS *Params,
  HANDLE                      *PoolHandle
);

void ExDeleteLookasideListEx(
   PLOOKASIDE_LIST_EX Lookaside
);

void ExDeleteNPagedLookasideList(
   PNPAGED_LOOKASIDE_LIST Lookaside
);

void ExDeletePagedLookasideList(
   PPAGED_LOOKASIDE_LIST Lookaside
);

NTSTATUS ExDeleteResourceLite(
   PERESOURCE Resource
);

BOOLEAN ExDeleteTimer(
  _In_ PEX_TIMER              Timer,
  _In_ BOOLEAN                Cancel,
  _In_ BOOLEAN                Wait,
  _In_ PEXT_DELETE_PARAMETERS Parameters
);

void ExDestroyPool(
  HANDLE PoolHandle
);

PVOID ExEnterCriticalRegionAndAcquireResourceExclusive(
  PERESOURCE Resource
);

void ExFlushLookasideListEx(
   PLOOKASIDE_LIST_EX Lookaside
);

void ExFreeCacheAwareRundownProtection(
   PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
);

void ExFreePool(
  _In_ PVOID P
);


void ExFreePool2(
  PVOID                     P,
  ULONG                     Tag,
  PCPOOL_EXTENDED_PARAMETER ExtendedParameters,
  ULONG                     ExtendedParametersCount
);

void ExFreePoolWithTag(
  _In_ PVOID P,
  _In_ ULONG Tag
);

void ExFreeToLookasideListEx(
   PLOOKASIDE_LIST_EX Lookaside,
  _In_      PVOID              Entry
);

void ExFreeToNPagedLookasideList(
   PNPAGED_LOOKASIDE_LIST Lookaside,
  _In_      PVOID                  Entry
);

void ExFreeToPagedLookasideList(
   PPAGED_LOOKASIDE_LIST Lookaside,
  _In_      PVOID                 Entry
);

ULONG ExGetExclusiveWaiterCount(
  _In_ PERESOURCE Resource
);

NTSTATUS ExGetFirmwareEnvironmentVariable(
  _In_            PUNICODE_STRING VariableName,
  _In_            LPGUID          VendorGuid,
   PVOID           Value,
         PULONG          ValueLength,
   PULONG          Attributes
);

FIRMWARE_TYPE ExGetFirmwareType();

KPROCESSOR_MODE ExGetPreviousMode();

ULONG ExGetSharedWaiterCount(
  _In_ PERESOURCE Resource
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
  _Out_ PFAST_MUTEX FastMutex
);

NTSTATUS ExInitializeLookasideListEx(
  _Out_          PLOOKASIDE_LIST_EX    Lookaside,
  _In_opt_ PALLOCATE_FUNCTION_EX Allocate,
  _In_opt_ PFREE_FUNCTION_EX     Free,
  _In_           POOL_TYPE             PoolType,
  _In_           ULONG                 Flags,
  _In_           SIZE_T                Size,
  _In_           ULONG                 Tag,
  _In_           USHORT                Depth
);

void ExInitializeNPagedLookasideList(
  _Out_          PNPAGED_LOOKASIDE_LIST Lookaside,
  _In_opt_ PALLOCATE_FUNCTION     Allocate,
  _In_opt_ PFREE_FUNCTION         Free,
  _In_           ULONG                  Flags,
  _In_           SIZE_T                 Size,
  _In_           ULONG                  Tag,
  _In_           USHORT                 Depth
);

void ExInitializePagedLookasideList(
  _Out_          PPAGED_LOOKASIDE_LIST Lookaside,
  _In_opt_ PALLOCATE_FUNCTION    Allocate,
  _In_opt_ PFREE_FUNCTION        Free,
  _In_           ULONG                 Flags,
  _In_           SIZE_T                Size,
  _In_           ULONG                 Tag,
  _In_           USHORT                Depth
);

void ExInitializePushLock(
  _Out_ PEX_PUSH_LOCK PushLock
);

NTSTATUS ExInitializeResourceLite(
  _Out_ PERESOURCE Resource
);

void ExInitializeRundownProtection(
  _Out_ PEX_RUNDOWN_REF RunRef
);

void ExInitializeRundownProtectionCacheAware(
  _Out_ PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware,
  _In_  SIZE_T                      RunRefSize
);

void ExInitializeSetTimerParameters(
  _Out_ PEXT_SET_PARAMETERS Parameters
);

LARGE_INTEGER ExInterlockedAddLargeInteger(
   PLARGE_INTEGER Addend,
  _In_      LARGE_INTEGER  Increment,
   PKSPIN_LOCK    Lock
);

//void ExInterlockedAddLargeStatistic(
  //_In_  Addend,
  //_In_  Increment
//);

ULONG ExInterlockedAddUlong(
   PULONG      Addend,
  _In_      ULONG       Increment,
   PKSPIN_LOCK Lock
);

//void ExInterlockedCompareExchange64(
//    Destination,
//  _In_       Exchange,
//             Comperand,
//  _In_       Lock
//);

NTKERNELAPI
PSLIST_ENTRY
ExInterlockedFlushSList (
    _Inout_ PSLIST_HEADER ListHead
    );

PLIST_ENTRY ExInterlockedInsertHeadList(
   PLIST_ENTRY                  ListHead,
   PLIST_ENTRY ListEntry,
   PKSPIN_LOCK                  Lock
);

PLIST_ENTRY ExInterlockedInsertTailList(
   PLIST_ENTRY                  ListHead,
   PLIST_ENTRY ListEntry,
   PKSPIN_LOCK                  Lock
);

PSINGLE_LIST_ENTRY ExInterlockedPopEntryList(
   PSINGLE_LIST_ENTRY ListHead,
   PKSPIN_LOCK        Lock
);

NTKERNELAPI
PSLIST_ENTRY
ExInterlockedPopEntrySList (
    _Inout_ PSLIST_HEADER ListHead,
    _Inout_ PKSPIN_LOCK Lock
    );

PSINGLE_LIST_ENTRY ExInterlockedPushEntryList(
   PSINGLE_LIST_ENTRY                  ListHead,
   PSINGLE_LIST_ENTRY ListEntry,
   PKSPIN_LOCK                         Lock
);

NTKERNELAPI
PSLIST_ENTRY
ExInterlockedPushEntrySList (
    _Inout_ PSLIST_HEADER ListHead,
    _Inout_ PSLIST_ENTRY ListEntry,
    _Inout_opt_ PKSPIN_LOCK Lock
    );

PLIST_ENTRY ExInterlockedRemoveHeadList(
   PLIST_ENTRY ListHead,
   PKSPIN_LOCK Lock
);

BOOLEAN ExIsProcessorFeaturePresent(
  _In_ ULONG ProcessorFeature
);

BOOLEAN ExIsResourceAcquiredExclusiveLite(
  _In_ PERESOURCE Resource
);

ULONG ExIsResourceAcquiredSharedLite(
  _In_ PERESOURCE Resource
);

BOOLEAN ExIsSoftBoot();

void ExLocalTimeToSystemTime(
  _In_  PLARGE_INTEGER LocalTime,
  _Out_ PLARGE_INTEGER SystemTime
);

void ExNotifyCallback(
  _In_           PVOID CallbackObject,
  _In_opt_ PVOID Argument1,
  _In_opt_ PVOID Argument2
);

PSLIST_ENTRY ExpInterlockedPopEntrySList(
  PSLIST_HEADER ListHead
);

PSLIST_ENTRY ExpInterlockedPushEntrySList(
  PSLIST_HEADER                 ListHead,
  PSLIST_ENTRY ListEntry
);

USHORT ExQueryDepthSList(
  _In_ PSLIST_HEADER SListHead
);

void ExQueryTimerResolution(
  _Out_ PULONG MaximumTime,
  _Out_ PULONG MinimumTime,
  _Out_ PULONG CurrentTime
);

void ExRaiseStatus(
  _In_ NTSTATUS Status
);

PVOID ExRegisterCallback(
        PCALLBACK_OBJECT   CallbackObject,
  _In_           PCALLBACK_FUNCTION CallbackFunction,
  _In_opt_ PVOID              CallbackContext
);

NTSTATUS ExReinitializeResourceLite(
   PERESOURCE Resource
);

void ExReInitializeRundownProtection(
   PEX_RUNDOWN_REF RunRef
);

void ExReInitializeRundownProtectionCacheAware(
   PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
);

void ExReleaseFastMutex(
  PFAST_MUTEX FastMutex
);

void ExReleaseFastMutexUnsafe(
  PFAST_MUTEX FastMutex
);

//void ExReleasePushLockExclusive(
//   Lock
//);

//void ExReleasePushLockShared(
//   Lock
//);

void ExReleaseResourceAndLeaveCriticalRegion(
  PERESOURCE Resource
);

void ExReleaseResourceForThreadLite(
   PERESOURCE       Resource,
  _In_      ERESOURCE_THREAD ResourceThreadId
);

void ExReleaseResourceLite(
   PERESOURCE Resource
);

void ExReleaseRundownProtection(
   PEX_RUNDOWN_REF RunRef
);

void ExReleaseRundownProtectionCacheAware(
   PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
);

void ExReleaseRundownProtectionCacheAwareEx(
   PEX_RUNDOWN_REF_CACHE_AWARE RunRef,
  _In_      ULONG                       Count
);

void ExReleaseRundownProtectionEx(
   PEX_RUNDOWN_REF RunRef,
  _In_      ULONG           Count
);

void ExReleaseSpinLockExclusive(
   PEX_SPIN_LOCK SpinLock,
  _In_      KIRQL         OldIrql
);

void ExReleaseSpinLockExclusiveFromDpcLevel(
  PEX_SPIN_LOCK SpinLock
);

void ExReleaseSpinLockShared(
   PEX_SPIN_LOCK SpinLock,
  _In_      KIRQL         OldIrql
);

void ExReleaseSpinLockSharedFromDpcLevel(
  PEX_SPIN_LOCK SpinLock
);

void ExRundownCompleted(
  _Out_ PEX_RUNDOWN_REF RunRef
);

void ExRundownCompletedCacheAware(
   PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
);

NTSTATUS ExSecurePoolUpdate(
  _In_ HANDLE    SecurePoolHandle,
  _In_ ULONG     Tag,
  _In_ PVOID     Allocation,
  _In_ ULONG_PTR Cookie,
  _In_ SIZE_T    Offset,
  _In_ SIZE_T    Size,
  _In_ PVOID     Buffer
);

LOGICAL ExSecurePoolValidate(
  _In_ HANDLE    SecurePoolHandle,
  _In_ ULONG     Tag,
  _In_ PVOID     Allocation,
  _In_ ULONG_PTR Cookie
);

NTSTATUS ExSetFirmwareEnvironmentVariable(
  _In_ PUNICODE_STRING VariableName,
  _In_ LPGUID          VendorGuid,
  _In_ PVOID           Value,
  _In_ ULONG           ValueLength,
  _In_ ULONG           Attributes
);

void ExSetResourceOwnerPointer(
   PERESOURCE Resource,
  _In_      PVOID      OwnerPointer
);

void ExSetResourceOwnerPointerEx(
   PERESOURCE Resource,
  _In_      PVOID      OwnerPointer,
  _In_      ULONG      Flags
);

BOOLEAN ExSetTimer(
  _In_           PEX_TIMER           Timer,
  _In_           LONGLONG            DueTime,
  _In_           LONGLONG            Period,
  _In_opt_ PEXT_SET_PARAMETERS Parameters
);


ULONG ExSetTimerResolution(
  _In_ ULONG   DesiredTime,
  _In_ BOOLEAN SetResolution
);

SIZE_T ExSizeOfRundownProtectionCacheAware();

void ExSystemTimeToLocalTime(
  _In_  PLARGE_INTEGER SystemTime,
  _Out_ PLARGE_INTEGER LocalTime
);

LOGICAL ExTryConvertSharedSpinLockExclusive(
   PEX_SPIN_LOCK SpinLock
);

BOOLEAN ExTryToAcquireFastMutex(
  PFAST_MUTEX FastMutex
);

void ExUnregisterCallback(
   PVOID CallbackRegistration
);

void ExWaitForRundownProtectionRelease(
   PEX_RUNDOWN_REF RunRef
);

void ExWaitForRundownProtectionReleaseCacheAware(
   PEX_RUNDOWN_REF_CACHE_AWARE RunRef
);

//void FIELD_OFFSET(
//  _In_  type,
//  _In_  field
//);


//void IMAGE_POLICY_OVERRIDE(
//   _PolicyId_
//);

void InitializeListHead(
  _Out_ PLIST_ENTRY ListHead
);


void InitializeSListHead(
  _In_ PSLIST_HEADER SListHead
);

typedef struct _INPUT_MAPPING_ELEMENT {
  ULONG InputMappingId;
} INPUT_MAPPING_ELEMENT, *PINPUT_MAPPING_ELEMENT;

void InsertHeadList(
   PLIST_ENTRY                  ListHead,
   PLIST_ENTRY Entry
);

void InsertTailList(
   PLIST_ENTRY                  ListHead,
   PLIST_ENTRY Entry
);


LONG InterlockedAnd(
   LONG volatile *Destination,
  _In_      LONG          Value
);

LONG InterlockedCompareExchange(
   LONG volatile *Destination,
  _In_      LONG          ExChange,
  _In_      LONG          Comperand
);

PVOID InterlockedCompareExchangePointer(
   PVOID volatile *Destination,
  _In_      PVOID          Exchange,
  _In_      PVOID          Comperand
);

LONG  InterlockedDecrement(
   LONG volatile *Addend
);

LONG InterlockedExchange(
   LONG volatile *Target,
  _In_      LONG          Value
);

LONG InterlockedExchangeAdd(
   LONG volatile *Addend,
  _In_      LONG          Value
);

PVOID InterlockedExchangePointer(
        PVOID volatile *Target,
  _In_opt_ PVOID          Value
);

LONG  InterlockedIncrement(
   LONG volatile *Addend
);

LONG InterlockedOr(
   LONG volatile *Destination,
  _In_      LONG          Value
);

LONG InterlockedXor(
   LONG volatile *Destination,
  _In_      LONG          Value
);


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

typedef struct _IO_INTERRUPT_MESSAGE_INFO {
    KIRQL                           UnifiedIrql;
    ULONG                           MessageCount;
    IO_INTERRUPT_MESSAGE_INFO_ENTRY MessageInfo[1];
} IO_INTERRUPT_MESSAGE_INFO, * PIO_INTERRUPT_MESSAGE_INFO;

typedef struct _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS {
  ULONG Version;
  union {
    PVOID                      Generic;
    PKINTERRUPT                InterruptObject;
    PIO_INTERRUPT_MESSAGE_INFO InterruptMessageTable;
  } ConnectionContext;
} IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS, *PIO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS;

typedef struct _IO_DISCONNECT_INTERRUPT_PARAMETERS {
    ULONG Version;
    union {
        PVOID                      Generic;
        PKINTERRUPT                InterruptObject;
        PIO_INTERRUPT_MESSAGE_INFO InterruptMessageTable;
    } ConnectionContext;
} IO_DISCONNECT_INTERRUPT_PARAMETERS, * PIO_DISCONNECT_INTERRUPT_PARAMETERS;

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
      USHORT FileAttributes;
      USHORT                   ShareAccess;
      ULONG EaLength;
    } Create;
    struct {
      PIO_SECURITY_CONTEXT          SecurityContext;
      ULONG                         Options;
      USHORT Reserved;
      USHORT                        ShareAccess;
      PNAMED_PIPE_CREATE_PARAMETERS Parameters;
    } CreatePipe;
    struct {
      PIO_SECURITY_CONTEXT        SecurityContext;
      ULONG                       Options;
      USHORT Reserved;
      USHORT                      ShareAccess;
      PMAILSLOT_CREATE_PARAMETERS Parameters;
    } CreateMailslot;
    struct {
      ULONG                   Length;
      ULONG  Key;
      ULONG                   Flags;
      LARGE_INTEGER           ByteOffset;
    } Read;
    struct {
      ULONG                   Length;
      ULONG  Key;
      ULONG                   Flags;
      LARGE_INTEGER           ByteOffset;
    } Write;
    struct {
      ULONG                   Length;
      PUNICODE_STRING         FileName;
      FILE_INFORMATION_CLASS  FileInformationClass;
      ULONG FileIndex;
    } QueryDirectory;
    struct {
      ULONG                   Length;
      ULONG  CompletionFilter;
    } NotifyDirectory;
    struct {
      ULONG                                                Length;
      ULONG                               CompletionFilter;
      DIRECTORY_NOTIFY_INFORMATION_CLASS  DirectoryNotifyInformationClass;
    } NotifyDirectoryEx;
    struct {
      ULONG                                    Length;
      FILE_INFORMATION_CLASS  FileInformationClass;
    } QueryFile;
    struct {
      ULONG                                    Length;
      FILE_INFORMATION_CLASS  FileInformationClass;
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
      ULONG  EaIndex;
    } QueryEa;
    struct {
      ULONG Length;
    } SetEa;
    struct {
      ULONG                                  Length;
      FS_INFORMATION_CLASS  FsInformationClass;
    } QueryVolume;
    struct {
      ULONG                                  Length;
      FS_INFORMATION_CLASS  FsInformationClass;
    } SetVolume;
    struct {
      ULONG                   OutputBufferLength;
      ULONG  InputBufferLength;
      ULONG  FsControlCode;
      PVOID                   Type3InputBuffer;
    } FileSystemControl;
    struct {
      PLARGE_INTEGER          Length;
      ULONG  Key;
      LARGE_INTEGER           ByteOffset;
    } LockControl;
    struct {
      ULONG                   OutputBufferLength;
      ULONG  InputBufferLength;
      ULONG  IoControlCode;
      PVOID                   Type3InputBuffer;
    } DeviceIoControl;
    struct {
      SECURITY_INFORMATION    SecurityInformation;
      ULONG  Length;
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
      ULONG  Length;
    } ReadWriteConfig;
    struct {
      BOOLEAN Lock;
    } SetLock;
    struct {
      BUS_QUERY_ID_TYPE IdType;
    } QueryId;
    struct {
      DEVICE_TEXT_TYPE       DeviceTextType;
      LCID  LocaleId;
    } QueryDeviceText;
    struct {
      BOOLEAN                                          InPath;
      BOOLEAN                                          Reserved[3];
      DEVICE_USAGE_NOTIFICATION_TYPE  Type;
    } UsageNotification;
    struct {
      SYSTEM_POWER_STATE PowerState;
    } WaitWake;
    struct {
      PPOWER_SEQUENCE PowerSequence;
    } PowerSequence;
//#if ...
    struct {
      union {
        ULONG                      SystemContext;
        SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;
      };
      POWER_STATE_TYPE  Type;
      POWER_STATE       State;
      POWER_ACTION      ShutdownType;
    } Power;
//#else
//    struct {
//      ULONG                              SystemContext;
//      POWER_STATE_TYPE  Type;
//      POWER_STATE       State;
//      POWER_ACTION      ShutdownType;
//    } Power;
//#endif
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

typedef struct _IO_STATUS_BLOCK64 {
  union {
    NTSTATUS Status;
    PVOID64  Pointer;
  } DUMMYUNIONNAME;
  ULONG64 Information;
} IO_STATUS_BLOCK64;

#ifndef _IRP_
#define _IRP_
typedef
VOID
(*PDRIVER_CANCEL) (
    _In_ struct _DEVICE_OBJECT* DeviceObject,
    _In_ struct _IRP* Irp
    );


typedef struct _IRP {
    CSHORT                    Type;
    USHORT                    Size;
    PMDL                      MdlAddress;
    ULONG                     Flags;
    union {
        struct _IRP* MasterIrp;
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
                //#if ...
                _IORING_OBJECT* IoRing;
                //#else
                //        struct _IORING_OBJECT *IoRing;
                //#endif
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
                    struct _IO_STACK_LOCATION* CurrentStackLocation;
                    ULONG                     PacketType;
                };
            };
            PFILE_OBJECT OriginalFileObject;
        } Overlay;
        KAPC  Apc;
        PVOID CompletionKey;
    } Tail;
} IRP, * PIRP;
#endif


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

//void IoAdjustPagingPathCount(
//  _In_  _count_,
//  _In_  _paging_
//);

NTSTATUS IoAllocateDriverObjectExtension(
  _In_  PDRIVER_OBJECT DriverObject,
  _In_  PVOID          ClientIdentificationAddress,
  _In_  ULONG          DriverObjectExtensionSize,
  _Out_ PVOID          *DriverObjectExtension
);

PVOID IoAllocateErrorLogEntry(
  _In_ PVOID IoObject,
  _In_ UCHAR EntrySize
);

PIRP IoAllocateIrp(
  _In_ CCHAR   StackSize,
  _In_ BOOLEAN ChargeQuota
);

PIRP IoAllocateIrpEx(
  PDEVICE_OBJECT DeviceObject,
  CCHAR          StackSize,
  BOOLEAN        ChargeQuota
);

PMDL IoAllocateMdl(
  _In_opt_            PVOID VirtualAddress,
  _In_                ULONG                  Length,
  _In_                BOOLEAN                SecondaryBuffer,
  _In_                BOOLEAN                ChargeQuota,
  _In_ _Out_ PIRP                   Irp
);

PIO_WORKITEM IoAllocateWorkItem(
  _In_ PDEVICE_OBJECT DeviceObject
);

NTSTATUS IoAttachDevice(
  _In_  PDEVICE_OBJECT  SourceDevice,
  _In_  PUNICODE_STRING TargetDevice,
  _Out_ PDEVICE_OBJECT  *AttachedDevice
);

PDEVICE_OBJECT IoAttachDeviceToDeviceStack(
  _In_ PDEVICE_OBJECT SourceDevice,
  _In_ PDEVICE_OBJECT TargetDevice
);


PIRP IoBuildAsynchronousFsdRequest(
  _In_           ULONG            MajorFunction,
  _In_           PDEVICE_OBJECT   DeviceObject,
        PVOID            Buffer,
  _In_opt_ ULONG            Length,
  _In_opt_ PLARGE_INTEGER   StartingOffset,
  _In_opt_ PIO_STATUS_BLOCK IoStatusBlock
);

PIRP IoBuildDeviceIoControlRequest(
  _In_            ULONG            IoControlCode,
  _In_            PDEVICE_OBJECT   DeviceObject,
  _In_opt_  PVOID            InputBuffer,
  _In_            ULONG            InputBufferLength,
   PVOID            OutputBuffer,
  _In_            ULONG            OutputBufferLength,
  _In_            BOOLEAN          InternalDeviceIoControl,
  _In_opt_  PKEVENT          Event,
  _Out_           PIO_STATUS_BLOCK IoStatusBlock
);

void IoBuildPartialMdl(
  _In_      PMDL  SourceMdl,
   PMDL  TargetMdl,
  _In_      PVOID VirtualAddress,
  _In_      ULONG Length
);

 PIRP IoBuildSynchronousFsdRequest(
  _In_           ULONG            MajorFunction,
  _In_           PDEVICE_OBJECT   DeviceObject,
        PVOID            Buffer,
  _In_opt_ ULONG            Length,
  _In_opt_ PLARGE_INTEGER   StartingOffset,
  _In_           PKEVENT          Event,
  _Out_          PIO_STATUS_BLOCK IoStatusBlock
);

#define IoCallDriver(a,b)   \
        IofCallDriver(a,b)  \
)


BOOLEAN IoCancelIrp(
  _In_ PIRP Irp
);

NTSTATUS IoCheckLinkShareAccess(
  _In_                ACCESS_MASK        DesiredAccess,
  _In_                ULONG              DesiredShareAccess,
  _In_ _Out_ PFILE_OBJECT       FileObject,
  _In_ _Out_ PSHARE_ACCESS      ShareAccess,
  _In_ _Out_ PLINK_SHARE_ACCESS LinkShareAccess,
  _In_                ULONG              IoShareAccessFlags
);

NTSTATUS IoCheckShareAccess(
  _In_      ACCESS_MASK   DesiredAccess,
  _In_      ULONG         DesiredShareAccess,
   PFILE_OBJECT  FileObject,
   PSHARE_ACCESS ShareAccess,
  _In_      BOOLEAN       Update
);

NTSTATUS IoCheckShareAccessEx(
  _In_      ACCESS_MASK   DesiredAccess,
  _In_      ULONG         DesiredShareAccess,
   PFILE_OBJECT  FileObject,
   PSHARE_ACCESS ShareAccess,
  _In_      BOOLEAN       Update,
  _In_      PBOOLEAN      WritePermission
);

NTSTATUS IoConnectInterrupt(
  _Out_          PKINTERRUPT       *InterruptObject,
  _In_           PKSERVICE_ROUTINE ServiceRoutine,
  _In_opt_ PVOID             ServiceContext,
  _In_opt_ PKSPIN_LOCK       SpinLock,
  _In_           ULONG             Vector,
  _In_           KIRQL             Irql,
  _In_           KIRQL             SynchronizeIrql,
  _In_           KINTERRUPT_MODE   InterruptMode,
  _In_           BOOLEAN           ShareVector,
  _In_           KAFFINITY         ProcessorEnableMask,
  _In_           BOOLEAN           FloatingSave
);

NTSTATUS IoConnectInterruptEx(
   PIO_CONNECT_INTERRUPT_PARAMETERS Parameters
);

void IoCopyCurrentIrpStackLocationToNext(
   PIRP Irp
);

NTSTATUS IoCreateDevice(
  _In_           PDRIVER_OBJECT  DriverObject,
  _In_           ULONG           DeviceExtensionSize,
  _In_opt_ PUNICODE_STRING DeviceName,
  _In_           DEVICE_TYPE     DeviceType,
  _In_           ULONG           DeviceCharacteristics,
  _In_           BOOLEAN         Exclusive,
  _Out_          PDEVICE_OBJECT  *DeviceObject
);

NTSTATUS IoCreateFile(
  _Out_          PHANDLE            FileHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_           POBJECT_ATTRIBUTES ObjectAttributes,
  _Out_          PIO_STATUS_BLOCK   IoStatusBlock,
  _In_opt_ PLARGE_INTEGER     AllocationSize,
  _In_           ULONG              FileAttributes,
  _In_           ULONG              ShareAccess,
  _In_           ULONG              Disposition,
  _In_           ULONG              CreateOptions,
  _In_opt_ PVOID              EaBuffer,
  _In_           ULONG              EaLength,
  _In_           CREATE_FILE_TYPE   CreateFileType,
  _In_opt_ PVOID              InternalParameters,
  _In_           ULONG              Options
);

PKEVENT IoCreateNotificationEvent(
  _In_  PUNICODE_STRING EventName,
  _Out_ PHANDLE         EventHandle
);

NTSTATUS IoCreateSymbolicLink(
  _In_ PUNICODE_STRING SymbolicLinkName,
  _In_ PUNICODE_STRING DeviceName
);

PKEVENT IoCreateSynchronizationEvent(
  _In_  PUNICODE_STRING EventName,
  _Out_ PHANDLE         EventHandle
);

NTSTATUS IoCreateSystemThread(
         PVOID              IoObject,
  _Out_           PHANDLE            ThreadHandle,
  _In_            ULONG              DesiredAccess,
  _In_opt_  POBJECT_ATTRIBUTES ObjectAttributes,
  _In_opt_  HANDLE             ProcessHandle,
   PCLIENT_ID         ClientId,
  _In_            PKSTART_ROUTINE    StartRoutine,
  _In_opt_  PVOID              StartContext
);

NTSTATUS IoCreateUnprotectedSymbolicLink(
  _In_ PUNICODE_STRING SymbolicLinkName,
  _In_ PUNICODE_STRING DeviceName
);

NTSTATUS IoCsqInitialize(
  _Out_ PIO_CSQ                       Csq,
  _In_  PIO_CSQ_INSERT_IRP            CsqInsertIrp,
  _In_  PIO_CSQ_REMOVE_IRP            CsqRemoveIrp,
  _In_  PIO_CSQ_PEEK_NEXT_IRP         CsqPeekNextIrp,
  _In_  PIO_CSQ_ACQUIRE_LOCK          CsqAcquireLock,
  _In_  PIO_CSQ_RELEASE_LOCK          CsqReleaseLock,
  _In_  PIO_CSQ_COMPLETE_CANCELED_IRP CsqCompleteCanceledIrp
);

NTSTATUS IoCsqInitializeEx(
  _Out_ PIO_CSQ                       Csq,
  _In_  PIO_CSQ_INSERT_IRP_EX         CsqInsertIrp,
  _In_  PIO_CSQ_REMOVE_IRP            CsqRemoveIrp,
  _In_  PIO_CSQ_PEEK_NEXT_IRP         CsqPeekNextIrp,
  _In_  PIO_CSQ_ACQUIRE_LOCK          CsqAcquireLock,
  _In_  PIO_CSQ_RELEASE_LOCK          CsqReleaseLock,
  _In_  PIO_CSQ_COMPLETE_CANCELED_IRP CsqCompleteCanceledIrp
);

void IoCsqInsertIrp(
         PIO_CSQ             Csq,
         PIRP                Irp,
   PIO_CSQ_IRP_CONTEXT Context
);

NTSTATUS IoCsqInsertIrpEx(
         PIO_CSQ             Csq,
         PIRP                Irp,
   PIO_CSQ_IRP_CONTEXT Context,
  _In_opt_  PVOID               InsertContext
);

PIRP IoCsqRemoveIrp(
   PIO_CSQ             Csq,
   PIO_CSQ_IRP_CONTEXT Context
);

PIRP IoCsqRemoveNextIrp(
        PIO_CSQ Csq,
  _In_opt_ PVOID   PeekContext
);

void IoDeleteDevice(
  _In_ PDEVICE_OBJECT DeviceObject
);

NTSTATUS IoDeleteSymbolicLink(
  _In_ PUNICODE_STRING SymbolicLinkName
);

void IoDetachDevice(
   PDEVICE_OBJECT TargetDevice
);

void IoDisconnectInterrupt(
  _In_ PKINTERRUPT InterruptObject
);

void IoDisconnectInterruptEx(
   PIO_DISCONNECT_INTERRUPT_PARAMETERS Parameters
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
   PIRP Irp
);

void IofCompleteRequest(
  PIRP  Irp,
  CCHAR PriorityBoost
);

BOOLEAN IoForwardIrpSynchronously(
  _In_ PDEVICE_OBJECT DeviceObject,
  _In_ PIRP           Irp
);

void IoFreeErrorLogEntry(
  _In_ PVOID ElEntry
);

void IoFreeIrp(
  _In_ PIRP Irp
);

NTSTATUS IoFreeKsrPersistentMemory(
  PVOID DataHandle
);

void IoFreeMdl(
  _In_ PMDL Mdl
);

void IoFreeWorkItem(
  _In_ PIO_WORKITEM IoWorkItem
);

NTSTATUS IoGetAffinityInterrupt(
  _In_  PKINTERRUPT     InterruptObject,
  _Out_ PGROUP_AFFINITY GroupAffinity
);

PDEVICE_OBJECT IoGetAttachedDeviceReference(
  _In_ PDEVICE_OBJECT DeviceObject
);

NTSTATUS IoGetBootDiskInformation(
   PBOOTDISK_INFORMATION BootDiskInformation,
  _In_      ULONG                 Size
);

NTSTATUS IoGetContainerInformation(
  _In_           IO_CONTAINER_INFORMATION_CLASS InformationClass,
  _In_opt_ PVOID                          ContainerObject,
        PVOID                          Buffer,
  _In_           ULONG                          BufferLength
);

 PIO_STACK_LOCATION IoGetCurrentIrpStackLocation(
  _In_ PIRP Irp
);

PEPROCESS IoGetCurrentProcess();

NTSTATUS IoGetDeviceInterfaceAlias(
  _In_  PUNICODE_STRING SymbolicLinkName,
  _In_  const GUID      *AliasInterfaceClassGuid,
  _Out_ PUNICODE_STRING AliasSymbolicLinkName
);

NTSTATUS IoGetDeviceInterfacePropertyData(
  _In_  PUNICODE_STRING  SymbolicLinkName,
  _In_  const DEVPROPKEY *PropertyKey,
  _In_  LCID             Lcid,
        ULONG            Flags,
  _In_  ULONG            Size,
  _Out_ PVOID            Data,
  _Out_ PULONG           RequiredSize,
  _Out_ PDEVPROPTYPE     Type
);

NTSTATUS IoGetDeviceInterfaces(
  _In_           const GUID     *InterfaceClassGuid,
  _In_opt_ PDEVICE_OBJECT PhysicalDeviceObject,
  _In_           ULONG          Flags,
  _Out_          PZZWSTR        *SymbolicLinkList
);

NTSTATUS IoGetDeviceNumaNode(
  _In_  PDEVICE_OBJECT Pdo,
  _Out_ PUSHORT        NodeNumber
);

NTSTATUS IoGetDeviceObjectPointer(
  _In_  PUNICODE_STRING ObjectName,
  _In_  ACCESS_MASK     DesiredAccess,
  _Out_ PFILE_OBJECT    *FileObject,
  _Out_ PDEVICE_OBJECT  *DeviceObject
);

NTSTATUS IoGetDeviceProperty(
  _In_            PDEVICE_OBJECT           DeviceObject,
  _In_            DEVICE_REGISTRY_PROPERTY DeviceProperty,
  _In_            ULONG                    BufferLength,
   PVOID                    PropertyBuffer,
  _Out_           PULONG                   ResultLength
);

NTSTATUS IoGetDevicePropertyData(
  _In_  PDEVICE_OBJECT   Pdo,
  _In_  const DEVPROPKEY *PropertyKey,
  _In_  LCID             Lcid,
        ULONG            Flags,
  _In_  ULONG            Size,
  _Out_ PVOID            Data,
  _Out_ PULONG           RequiredSize,
  _Out_ PDEVPROPTYPE     Type
);

_DMA_ADAPTER * IoGetDmaAdapter(
  _In_opt_ PDEVICE_OBJECT      PhysicalDeviceObject,
  _In_           _DEVICE_DESCRIPTION *DeviceDescription,
  _Out_          PULONG              NumberOfMapRegisters
);

NTSTATUS IoGetDriverDirectory(
  _In_  PDRIVER_OBJECT        DriverObject,
  _In_  DRIVER_DIRECTORY_TYPE DirectoryType,
  _In_  ULONG                 Flags,
  _Out_ PHANDLE               DriverDirectoryHandle
);

 PVOID IoGetDriverObjectExtension(
  _In_ PDRIVER_OBJECT DriverObject,
  _In_ PVOID          ClientIdentificationAddress
);

//void IoGetFunctionCodeFromCtlCode(
//  _In_  ControlCode
//);

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
  _In_ PIRP Irp
);

 PIO_STACK_LOCATION IoGetNextIrpStackLocation(
  _In_ PIRP Irp
);


PDEVICE_OBJECT IoGetRelatedDeviceObject(
  _In_ PFILE_OBJECT FileObject
);

ULONG_PTR IoGetRemainingStackSize();

void IoGetStackLimits(
  _Out_ PULONG_PTR LowLimit,
  _Out_ PULONG_PTR HighLimit
);


void IoInitializeDpcRequest(
  _In_ PDEVICE_OBJECT  DeviceObject,
  _In_ PIO_DPC_ROUTINE DpcRoutine
);

void IoInitializeIrp(
   PIRP   Irp,
  _In_      USHORT PacketSize,
  _In_      CCHAR  StackSize
);

//void IoInitializeRemoveLock(
//  _In_  Lock,
//  _In_  Tag,
//  _In_  Maxmin,
//  _In_  HighWater
//);

NTSTATUS IoInitializeTimer(
  _In_           PDEVICE_OBJECT         DeviceObject,
  _In_           PIO_TIMER_ROUTINE      TimerRoutine,
  _In_opt_  PVOID Context
);

void IoInitializeWorkItem(
  _In_ PVOID        IoObject,
  _In_ PIO_WORKITEM IoWorkItem
);

void IoInvalidateDeviceRelations(
  _In_ PDEVICE_OBJECT       DeviceObject,
  _In_ DEVICE_RELATION_TYPE Type
);

void IoInvalidateDeviceState(
  _In_ PDEVICE_OBJECT PhysicalDeviceObject
);

BOOLEAN IoIs32bitProcess(
  _In_opt_ PIRP Irp
);

//BOOLEAN IoIsErrorUserInduced(
//   Status
//);

BOOLEAN IoIsWdmVersionAvailable(
  _In_ UCHAR MajorVersion,
  _In_ UCHAR MinorVersion
);

void IoMarkIrpPending(
   PIRP Irp
);

typedef struct _KBUGCHECK_ADD_PAGES {
    PVOID     Context;
    ULONG     Flags;
    ULONG     BugCheckCode;
    ULONG_PTR Address;
    ULONG_PTR Count;
} KBUGCHECK_ADD_PAGES, * PKBUGCHECK_ADD_PAGES;

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

typedef enum _KBUGCHECK_DUMP_IO_TYPE {
    KbDumpIoInvalid,
    KbDumpIoHeader,
    KbDumpIoBody,
    KbDumpIoSecondaryData,
    KbDumpIoComplete
} KBUGCHECK_DUMP_IO_TYPE;

typedef struct _KBUGCHECK_DUMP_IO {
    _In_ ULONG64                Offset;
    _In_ PVOID                  Buffer;
    _In_ ULONG                  BufferLength;
    _In_ KBUGCHECK_DUMP_IO_TYPE Type;
} KBUGCHECK_DUMP_IO, * PKBUGCHECK_DUMP_IO;



typedef struct _KBUGCHECK_SECONDARY_DUMP_DATA {
    _In_ PVOID  InBuffer;
    _In_ ULONG  InBufferLength;
    _In_ ULONG  MaximumAllowed;
    _Out_ GUID  Guid;
    _Out_ PVOID OutBuffer;
    _Out_ ULONG OutBufferLength;
} KBUGCHECK_SECONDARY_DUMP_DATA, * PKBUGCHECK_SECONDARY_DUMP_DATA;

typedef struct _KDPC_WATCHDOG_INFORMATION {
    ULONG DpcTimeLimit;
    ULONG DpcTimeCount;
    ULONG DpcWatchdogLimit;
    ULONG DpcWatchdogCount;
    ULONG Reserved;
} KDPC_WATCHDOG_INFORMATION, * PKDPC_WATCHDOG_INFORMATION;

typedef enum {
    KeProcessorAddStartNotify,
    KeProcessorAddCompleteNotify,
    KeProcessorAddFailureNotify
} KE_PROCESSOR_CHANGE_NOTIFY_STATE;

typedef struct _KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT {
    KE_PROCESSOR_CHANGE_NOTIFY_STATE State;
    ULONG                            NtNumber;
    NTSTATUS                         Status;
    PROCESSOR_NUMBER                 ProcNumber;
} KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT, * PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT;

typedef struct _IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI {
    UINT32 InputMappingBase;
    UINT32 MappingsCount;
} IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI, * PIOMMU_DEVICE_CREATION_CONFIGURATION_ACPI;

typedef enum _IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE {
    IommuDeviceCreationConfigTypeNone,
    IommuDeviceCreationConfigTypeAcpi,
    IommuDeviceCreationConfigTypeDeviceId,
    IommuDeviceCreationConfigTypePasid,
    IommuDeviceCreationConfigTypeMax
} IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE, * PIOMMU_DEVICE_CREATION_CONFIGURATION_TYPE;

typedef struct _IOMMU_DEVICE_CREATION_CONFIGURATION {
  LIST_ENTRY                               NextConfiguration;
  IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE ConfigType;
  union {
    IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI  Acpi;
    PVOID                                     DeviceId;
    IOMMU_DEVICE_CREATION_CONFIGURATION_PASID Pasid;
  };
} IOMMU_DEVICE_CREATION_CONFIGURATION, *PIOMMU_DEVICE_CREATION_CONFIGURATION;



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

typedef union _IOMMU_INTERFACE_STATE_CHANGE_FIELDS {
    struct {
        ULONG AvailableDomainTypes : 1;
        ULONG Reserved : 31;
    } DUMMYSTRUCTNAME;
    ULONG  AsULONG;
} IOMMU_INTERFACE_STATE_CHANGE_FIELDS, * PIOMMU_INTERFACE_STATE_CHANGE_FIELDS;

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

NTSTATUS IoOpenDeviceInterfaceRegistryKey(
  _In_  PUNICODE_STRING SymbolicLinkName,
  _In_  ACCESS_MASK     DesiredAccess,
  _Out_ PHANDLE         DeviceInterfaceRegKey
);

NTSTATUS IoOpenDeviceRegistryKey(
  _In_  PDEVICE_OBJECT DeviceObject,
  _In_  ULONG          DevInstKeyType,
  _In_  ACCESS_MASK    DesiredAccess,
  _Out_ PHANDLE        DeviceRegKey
);

NTSTATUS IoOpenDriverRegistryKey(
  _In_  PDRIVER_OBJECT     DriverObject,
  _In_  DRIVER_REGKEY_TYPE RegKeyType,
  _In_  ACCESS_MASK        DesiredAccess,
  _In_  ULONG              Flags,
  _Out_ PHANDLE            DriverRegKey
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
  _In_            PIO_WORKITEM IoWorkItem,
  _In_           PIO_WORKITEM_ROUTINE          WorkerRoutine,
  _In_           WORK_QUEUE_TYPE               QueueType,
  _In_opt_  PVOID        Context
);

void IoQueueWorkItemEx(
  _In_            PIO_WORKITEM IoWorkItem,
  _In_           PIO_WORKITEM_ROUTINE_EX       WorkerRoutine,
  _In_           WORK_QUEUE_TYPE               QueueType,
  _In_opt_  PVOID        Context
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
  _In_           PDEVICE_OBJECT  PhysicalDeviceObject,
  _In_           const GUID      *InterfaceClassGuid,
  _In_opt_ PUNICODE_STRING ReferenceString,
  _Out_          PUNICODE_STRING SymbolicLinkName
);

NTSTATUS IoRegisterLastChanceShutdownNotification(
  _In_ PDEVICE_OBJECT DeviceObject
);

NTSTATUS IoRegisterPlugPlayNotification(
  _In_           IO_NOTIFICATION_EVENT_CATEGORY        EventCategory,
  _In_           ULONG                                 EventCategoryFlags,
  _In_opt_ PVOID                                 EventCategoryData,
  _In_           PDRIVER_OBJECT                        DriverObject,
  _In_           PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine,
  _In_opt_  PVOID                Context,
  _Out_          PVOID                                 *NotificationEntry
);

NTSTATUS IoRegisterShutdownNotification(
  _In_ PDEVICE_OBJECT DeviceObject
);

void IoReleaseCancelSpinLock(
  KIRQL Irql
);

//void IoReleaseRemoveLock(
//  _In_  RemoveLock,
//  _In_  Tag
//);

//void IoReleaseRemoveLockAndWait(
//  _In_  RemoveLock,
//  _In_  Tag
//);

void IoRemoveLinkShareAccess(
  _In_                PFILE_OBJECT       FileObject,
             PSHARE_ACCESS      ShareAccess,
  _In_ _Out_ PLINK_SHARE_ACCESS LinkShareAccess
);

void IoRemoveShareAccess(
  _In_      PFILE_OBJECT  FileObject,
   PSHARE_ACCESS ShareAccess
);

void IoReportInterruptActive(
  _In_ PIO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS Parameters
);

void IoReportInterruptInactive(
  _In_ PIO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS Parameters
);

NTSTATUS IoReportTargetDeviceChange(
  _In_ PDEVICE_OBJECT PhysicalDeviceObject,
  _In_ PVOID          NotificationStructure
);

NTSTATUS IoReportTargetDeviceChangeAsynchronous(
  _In_           PDEVICE_OBJECT                   PhysicalDeviceObject,
  _In_           PVOID                            NotificationStructure,
  _In_opt_ PDEVICE_CHANGE_COMPLETE_CALLBACK Callback,
        PVOID                            Context
);

void IoRequestDeviceEject(
  _In_ PDEVICE_OBJECT PhysicalDeviceObject
);

void IoRequestDpc(
  _In_ PDEVICE_OBJECT         DeviceObject,
  _In_ PIRP                   Irp,
  _In_  PVOID Context
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
   PIRP     Irp,
  _In_      NTSTATUS Iostatus
);

//void Iosb64ToIosb(
//   _iosb,
//   _iosb64
//);

//void IosbToIosb64(
//   _iosb64,
//   _iosb
//);

PDRIVER_CANCEL IoSetCancelRoutine(
  _In_ PIRP           Irp,
  _In_ PDRIVER_CANCEL CancelRoutine
);

void IoSetCompletionRoutine(
  _In_           PIRP                   Irp,
  _In_opt_ PIO_COMPLETION_ROUTINE CompletionRoutine,
  _In_opt_  PVOID Context,
  _In_           BOOLEAN                InvokeOnSuccess,
  _In_           BOOLEAN                InvokeOnError,
  _In_           BOOLEAN                InvokeOnCancel
);

NTSTATUS IoSetCompletionRoutineEx(
  _In_           PDEVICE_OBJECT         DeviceObject,
  _In_           PIRP                   Irp,
  _In_           PIO_COMPLETION_ROUTINE CompletionRoutine,
  _In_opt_ PVOID                  Context,
  _In_           BOOLEAN                InvokeOnSuccess,
  _In_           BOOLEAN                InvokeOnError,
  _In_           BOOLEAN                InvokeOnCancel
);

NTSTATUS IoSetDeviceInterfacePropertyData(
  _In_           PUNICODE_STRING  SymbolicLinkName,
  _In_           const DEVPROPKEY *PropertyKey,
  _In_           LCID             Lcid,
  _In_           ULONG            Flags,
  _In_           DEVPROPTYPE      Type,
  _In_           ULONG            Size,
  _In_opt_ PVOID            Data
);

NTSTATUS IoSetDeviceInterfaceState(
  _In_ PUNICODE_STRING SymbolicLinkName,
  _In_ BOOLEAN         Enable
);

NTSTATUS IoSetDevicePropertyData(
  _In_           PDEVICE_OBJECT   Pdo,
  _In_           const DEVPROPKEY *PropertyKey,
  _In_           LCID             Lcid,
  _In_           ULONG            Flags,
  _In_           DEVPROPTYPE      Type,
  _In_           ULONG            Size,
  _In_opt_ PVOID            Data
);

NTSTATUS IoSetIoPriorityHint(
  _In_ PIRP             Irp,
  _In_ IO_PRIORITY_HINT PriorityHint
);

void IoSetLinkShareAccess(
  _In_                ACCESS_MASK        DesiredAccess,
  _In_                ULONG              DesiredShareAccess,
             PFILE_OBJECT       FileObject,
             PSHARE_ACCESS      ShareAccess,
  _In_ _Out_ PLINK_SHARE_ACCESS LinkShareAccess,
  _In_                ULONG              IoShareAccessFlags
);

void IoSetNextIrpStackLocation(
   PIRP Irp
);


void IoSetShareAccess(
  _In_      ACCESS_MASK   DesiredAccess,
  _In_      ULONG         DesiredShareAccess,
   PFILE_OBJECT  FileObject,
  _Out_     PSHARE_ACCESS ShareAccess
);

void IoSetShareAccessEx(
  _In_           ACCESS_MASK   DesiredAccess,
  _In_           ULONG         DesiredShareAccess,
        PFILE_OBJECT  FileObject,
  _Out_          PSHARE_ACCESS ShareAccess,
  _In_opt_ PBOOLEAN      WritePermission
);

void IoSetStartIoAttributes(
  _In_ PDEVICE_OBJECT DeviceObject,
  _In_ BOOLEAN        DeferredStartIo,
  _In_ BOOLEAN        NonCancelable
);

//void IoSizeOfIrp(
//  _In_  StackSize
//);

ULONG IoSizeofWorkItem();

void IoStartNextPacket(
  _In_ PDEVICE_OBJECT DeviceObject,
  _In_ BOOLEAN        Cancelable
);

void IoStartNextPacketByKey(
  _In_ PDEVICE_OBJECT DeviceObject,
  _In_ BOOLEAN        Cancelable,
  _In_ ULONG          Key
);

void IoStartPacket(
  _In_           PDEVICE_OBJECT DeviceObject,
  _In_           PIRP           Irp,
  _In_opt_ PULONG         Key,
  _In_opt_ PDRIVER_CANCEL CancelFunction
);

void IoStartTimer(
  _In_ PDEVICE_OBJECT DeviceObject
);

void IoStopTimer(
  _In_ PDEVICE_OBJECT DeviceObject
);

void IoUninitializeWorkItem(
  _In_ PIO_WORKITEM IoWorkItem
);

void IoUnregisterContainerNotification(
  _In_ PVOID CallbackRegistration
);

NTSTATUS IoUnregisterPlugPlayNotification(
  _In_ PVOID NotificationEntry
);

NTSTATUS IoUnregisterPlugPlayNotificationEx(
  _In_ PVOID NotificationEntry
);

void IoUnregisterShutdownNotification(
  _In_ PDEVICE_OBJECT DeviceObject
);

void IoUpdateLinkShareAccess(
  _In_                PFILE_OBJECT       FileObject,
             PSHARE_ACCESS      ShareAccess,
  _In_ _Out_ PLINK_SHARE_ACCESS LinkShareAccess
);

void IoUpdateLinkShareAccessEx(
  PFILE_OBJECT       FileObject,
  PSHARE_ACCESS      ShareAccess,
  PLINK_SHARE_ACCESS LinkShareAccess,
  ULONG              IoShareAccessFlags
);

void IoUpdateShareAccess(
  _In_      PFILE_OBJECT  FileObject,
   PSHARE_ACCESS ShareAccess
);

NTSTATUS IoValidateDeviceIoControlAccess(
  _In_ PIRP  Irp,
  _In_ ULONG RequiredAccess
);

LOGICAL IoWithinStackLimits(
  _In_ ULONG_PTR RegionStart,
  _In_ SIZE_T    RegionSize
);

NTSTATUS IoWMIAllocateInstanceIds(
  _In_  LPCGUID Guid,
  _In_  ULONG   InstanceCount,
  _Out_ ULONG   *FirstInstanceId
);

NTSTATUS IoWMIDeviceObjectToInstanceName(
  _In_  PVOID           DataBlockObject,
  _In_  PDEVICE_OBJECT  DeviceObject,
  _Out_ PUNICODE_STRING InstanceName
);

ULONG IoWMIDeviceObjectToProviderId(
  _In_ PDEVICE_OBJECT DeviceObject
);

NTSTATUS IoWMIExecuteMethod(
  _In_      PVOID           DataBlockObject,
  _In_      PUNICODE_STRING InstanceName,
  _In_      ULONG           MethodId,
  _In_      ULONG           InBufferSize,
   PULONG          OutBufferSize,
   PUCHAR          InOutBuffer
);

NTSTATUS IoWMIHandleToInstanceName(
  _In_  PVOID           DataBlockObject,
  _In_  HANDLE          FileHandle,
  _Out_ PUNICODE_STRING InstanceName
);

NTSTATUS IoWMIOpenBlock(
  _In_  LPCGUID Guid,
  _In_  ULONG   DesiredAccess,
  _Out_ PVOID   *DataBlockObject
);

NTSTATUS IoWMIQueryAllData(
  _In_            PVOID  DataBlockObject,
         PULONG InOutBufferSize,
   PVOID  OutBuffer
);

NTSTATUS IoWMIQueryAllDataMultiple(
  _In_            PVOID  *DataBlockObjectList,
  _In_            ULONG  ObjectCount,
         PULONG InOutBufferSize,
   PVOID  OutBuffer
);

NTSTATUS IoWMIQuerySingleInstance(
  _In_            PVOID           DataBlockObject,
  _In_            PUNICODE_STRING InstanceName,
         PULONG          InOutBufferSize,
   PVOID           OutBuffer
);

NTSTATUS IoWMIQuerySingleInstanceMultiple(
  _In_            PVOID           *DataBlockObjectList,
  _In_            PUNICODE_STRING InstanceNames,
  _In_            ULONG           ObjectCount,
         PULONG          InOutBufferSize,
   PVOID           OutBuffer
);

NTSTATUS IoWMIRegistrationControl(
  _In_ PDEVICE_OBJECT DeviceObject,
  _In_ ULONG          Action
);

NTSTATUS IoWMISetNotificationCallback(
        PVOID                     Object,
  _In_           WMI_NOTIFICATION_CALLBACK Callback,
  _In_opt_ PVOID                     Context
);

NTSTATUS IoWMISetSingleInstance(
  _In_ PVOID           DataBlockObject,
  _In_ PUNICODE_STRING InstanceName,
  _In_ ULONG           Version,
  _In_ ULONG           ValueBufferSize,
  _In_ PVOID           ValueBuffer
);

NTSTATUS IoWMISetSingleItem(
  _In_ PVOID           DataBlockObject,
  _In_ PUNICODE_STRING InstanceName,
  _In_ ULONG           DataItemId,
  _In_ ULONG           Version,
  _In_ ULONG           ValueBufferSize,
  _In_ PVOID           ValueBuffer
);

NTSTATUS IoWMISuggestInstanceName(
  _In_opt_ PDEVICE_OBJECT  PhysicalDeviceObject,
  _In_opt_ PUNICODE_STRING SymbolicLinkName,
  _In_           BOOLEAN         CombineNames,
  _Out_          PUNICODE_STRING SuggestedInstanceName
);

NTSTATUS IoWMIWriteEvent(
   PVOID WnodeEventItem
);

void IoWriteErrorLogEntry(
  _In_ PVOID ElEntry
);

NTSTATUS IoWriteKsrPersistentMemory(
  PVOID  DataHandle,
  PVOID  Buffer,
  SIZE_T Size
);



BOOLEAN IsListEmpty(
  _In_ const LIST_ENTRY *ListHead
);



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
   PKSPIN_LOCK SpinLock
);

KIRQL KeAcquireSpinLockForDpc(
  PKSPIN_LOCK SpinLock
);

KIRQL KeAcquireSpinLockRaiseToDpc(
  PKSPIN_LOCK SpinLock
);

NTSTATUS KeAddTriageDumpDataBlock(
  _Inout_ PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray,
            PVOID                    Address,
  _In_    SIZE_T                   Size
);

BOOLEAN KeAreAllApcsDisabled();

BOOLEAN KeAreApcsDisabled();

void KeBugCheckEx(
  _In_ ULONG     BugCheckCode,
  _In_ ULONG_PTR BugCheckParameter1,
  _In_ ULONG_PTR BugCheckParameter2,
  _In_ ULONG_PTR BugCheckParameter3,
  _In_ ULONG_PTR BugCheckParameter4
);

BOOLEAN KeCancelTimer(
   PKTIMER unnamedParam1
);

void KeClearEvent(
   PRKEVENT Event
);

NTSTATUS KeConvertAuxiliaryCounterToPerformanceCounter(
  _In_            ULONG64  AuxiliaryCounterValue,
  _Out_           PULONG64 PerformanceCounterValue,
   PULONG64 ConversionError
);

NTSTATUS KeConvertPerformanceCounterToAuxiliaryCounter(
  _In_            ULONG64  PerformanceCounterValue,
  _Out_           PULONG64 AuxiliaryCounterValue,
   PULONG64 ConversionError
);

NTSTATUS KeDelayExecutionThread(
  _In_ KPROCESSOR_MODE WaitMode,
  _In_ BOOLEAN         Alertable,
  _In_ PLARGE_INTEGER  Interval
);

NTSTATUS KeDeregisterBoundCallback(
  _In_ PVOID Handle
);

BOOLEAN KeDeregisterBugCheckCallback(
   PKBUGCHECK_CALLBACK_RECORD CallbackRecord
);

BOOLEAN KeDeregisterBugCheckReasonCallback(
   PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord
);

NTSTATUS KeDeregisterNmiCallback(
  _In_ PVOID Handle
);

void KeDeregisterProcessorChangeCallback(
    _In_ PVOID CallbackHandle
);


void KeEnterCriticalRegion();
void KeEnterGuardedRegion();

void KeFlushIoBuffers(
  _In_ PMDL    Mdl,
  _In_ BOOLEAN ReadOperation,
  _In_ BOOLEAN DmaOperation
);

void KeFlushQueuedDpcs();

void KefReleaseSpinLockFromDpcLevel(
   PKSPIN_LOCK SpinLock
);

NTHALAPI KIRQL KeGetCurrentIrql();

USHORT KeGetCurrentNodeNumber();

ULONG KeGetCurrentProcessorNumberEx(
   PPROCESSOR_NUMBER ProcNumber
);

PKTHREAD KeGetCurrentThread();

ULONG KeGetProcessorIndexFromNumber(
  _In_ PPROCESSOR_NUMBER ProcNumber
);

NTSTATUS KeGetProcessorNumberFromIndex(
  _In_  ULONG             ProcIndex,
  _Out_ PPROCESSOR_NUMBER ProcNumber
);

ULONG KeGetRecommendedSharedDataAlignment();

NTSTATUS KeInitializeCrashDumpHeader(
  _In_            ULONG  DumpType,
  _In_            ULONG  Flags,
  _Out_           PVOID  Buffer,
  _In_            ULONG  BufferSize,
   PULONG BufferNeeded
);

void KeInitializeDeviceQueue(
  _Out_ PKDEVICE_QUEUE DeviceQueue
);

void KeInitializeDpc(
  _Out_           PRKDPC Dpc,
  _In_           PKDEFERRED_ROUTINE      DeferredRoutine,
  _In_opt_  PVOID  DeferredContext
);


void KeInitializeEvent(
  _Out_ PRKEVENT   Event,
  _In_  EVENT_TYPE Type,
  _In_  BOOLEAN    State
);

void KeInitializeGuardedMutex(
  _Out_ PKGUARDED_MUTEX Mutex
);

void KeInitializeMutex(
  _Out_ PRKMUTEX Mutex,
  _In_  ULONG    Level
);

void KeInitializeSemaphore(
  _Out_ PRKSEMAPHORE Semaphore,
  _In_  LONG         Count,
  _In_  LONG         Limit
);

void KeInitializeSpinLock(
  _Out_ PKSPIN_LOCK SpinLock
);

void KeInitializeThreadedDpc(
  _Out_          PRKDPC             Dpc,
  _In_           PKDEFERRED_ROUTINE DeferredRoutine,
  _In_opt_ PVOID              DeferredContext
);

void KeInitializeTimer(
  _Out_ PKTIMER Timer
);

void KeInitializeTimerEx(
  _Out_ PKTIMER    Timer,
  _In_  TIMER_TYPE Type
);

BOOLEAN KeInsertByKeyDeviceQueue(
   PKDEVICE_QUEUE       DeviceQueue,
   PKDEVICE_QUEUE_ENTRY DeviceQueueEntry,
  _In_      ULONG                SortKey
);

BOOLEAN KeInsertDeviceQueue(
   PKDEVICE_QUEUE       DeviceQueue,
   PKDEVICE_QUEUE_ENTRY DeviceQueueEntry
);


BOOLEAN KeInsertQueueDpc(
        PRKDPC                 Dpc,
  _In_opt_ PVOID                  SystemArgument1,
  _In_opt_  PVOID SystemArgument2
);

ULONG_PTR KeIpiGenericCall(
  _In_ PKIPI_BROADCAST_WORKER BroadcastFunction,
  _In_ ULONG_PTR              Context
);

LOGICAL KeIsExecutingDpc();

void KeLeaveCriticalRegion();

void KeLeaveGuardedRegion();

void KeLowerIrql(
  _In_ KIRQL NewIrql
);

void KeMemoryBarrier();

USHORT KeQueryActiveGroupCount();

ULONG KeQueryActiveProcessorCount(
   PKAFFINITY ActiveProcessors
);

ULONG KeQueryActiveProcessorCountEx(
  _In_ USHORT GroupNumber
);


KAFFINITY KeQueryActiveProcessors();


NTSTATUS KeQueryAuxiliaryCounterFrequency(
   PULONG64 AuxiliaryCounterFrequency
);


NTSTATUS KeQueryDpcWatchdogInformation(
  _Out_ PKDPC_WATCHDOG_INFORMATION WatchdogInformation
);

KAFFINITY KeQueryGroupAffinity(
  _In_ USHORT GroupNumber
);

USHORT KeQueryHighestNodeNumber();

ULONGLONG KeQueryInterruptTime();

ULONG64 KeQueryInterruptTimePrecise(
  _Out_ PULONG64 QpcTimeStamp
);

NTSTATUS KeQueryLogicalProcessorRelationship(
  _In_opt_  PPROCESSOR_NUMBER                        ProcessorNumber,
  _In_            LOGICAL_PROCESSOR_RELATIONSHIP           RelationshipType,
   PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
         PULONG                                   Length
);

USHORT KeQueryMaximumGroupCount();


ULONG KeQueryMaximumProcessorCount();

ULONG KeQueryMaximumProcessorCountEx(
  _In_ USHORT GroupNumber
);

void KeQueryNodeActiveAffinity(
  _In_            USHORT          NodeNumber,
   PGROUP_AFFINITY Affinity,
   PUSHORT         Count
);

NTSTATUS KeQueryNodeActiveAffinity2(
  _In_  USHORT          NodeNumber,
  _Out_ PGROUP_AFFINITY GroupAffinities,
  _In_  USHORT          GroupAffinitiesCount,
  _Out_ PUSHORT         GroupAffinitiesRequired
);

ULONG KeQueryNodeActiveProcessorCount(
  _In_ USHORT NodeNumber
);

USHORT KeQueryNodeMaximumProcessorCount(
  _In_ USHORT NodeNumber
);


NTHALAPI LARGE_INTEGER KeQueryPerformanceCounter(
   PLARGE_INTEGER PerformanceFrequency
);

KPRIORITY KeQueryPriorityThread(
  _In_ PKTHREAD Thread
);

ULONG KeQueryRuntimeThread(
  _In_  PKTHREAD Thread,
  _Out_ PULONG   UserTime
);

void KeQuerySystemTime(
  _Out_ PLARGE_INTEGER CurrentTime
);

void KeQuerySystemTimePrecise(
  _Out_ PLARGE_INTEGER CurrentTime
);

//void KeQueryTickCount(
  //_Out_  CurrentCount
//);

ULONG KeQueryTimeIncrement();

ULONG64 KeQueryTotalCycleTimeThread(
   PKTHREAD Thread,
  _Out_     PULONG64 CycleTimeStamp
);

ULONGLONG KeQueryUnbiasedInterruptTime();

VOID KeRaiseIrql(
  _In_  KIRQL  NewIrql,
  _Out_ PKIRQL OldIrql
);

_DECL_HAL_KE_IMPORT KIRQL KeRaiseIrqlToDpcLevel();

LONG KeReadStateEvent(
  _In_ PRKEVENT Event
);

LONG KeReadStateMutex(
  _In_ PRKMUTEX Mutex
);

LONG KeReadStateSemaphore(
  _In_ PRKSEMAPHORE Semaphore
);

BOOLEAN KeReadStateTimer(
  _In_ PKTIMER Timer
);

PVOID KeRegisterBoundCallback(
  _In_ PBOUND_CALLBACK CallbackRoutine
);

BOOLEAN KeRegisterBugCheckCallback(
  _Out_          PKBUGCHECK_CALLBACK_RECORD  CallbackRecord,
  _In_           PKBUGCHECK_CALLBACK_ROUTINE CallbackRoutine,
  _In_opt_ PVOID                       Buffer,
  _In_           ULONG                       Length,
  _In_           PUCHAR                      Component
);

BOOLEAN KeRegisterBugCheckReasonCallback(
  _Out_ PKBUGCHECK_REASON_CALLBACK_RECORD  CallbackRecord,
  _In_  PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine,
  _In_  KBUGCHECK_CALLBACK_REASON          Reason,
  _In_  PUCHAR                             Component
);

PVOID KeRegisterNmiCallback(
  _In_           PNMI_CALLBACK CallbackRoutine,
  _In_opt_ PVOID         Context
);

PVOID KeRegisterProcessorChangeCallback(
  _In_           PPROCESSOR_CALLBACK_FUNCTION CallbackFunction,
  _In_opt_ PVOID                        CallbackContext,
  _In_           ULONG                        Flags
);

void KeReleaseGuardedMutex(
   PKGUARDED_MUTEX Mutex
);

void KeReleaseGuardedMutexUnsafe(
   PKGUARDED_MUTEX FastMutex
);

void KeReleaseInStackQueuedSpinLock(
  _In_ PKLOCK_QUEUE_HANDLE LockHandle
);

void KeReleaseInStackQueuedSpinLockForDpc(
  _In_ PKLOCK_QUEUE_HANDLE LockHandle
);

void KeReleaseInStackQueuedSpinLockFromDpcLevel(
  _In_ PKLOCK_QUEUE_HANDLE LockHandle
);

void KeReleaseInterruptSpinLock(
   PKINTERRUPT Interrupt,
  _In_      KIRQL       OldIrql
);

LONG KeReleaseMutex(
   PRKMUTEX Mutex,
  _In_      BOOLEAN  Wait
);

LONG KeReleaseSemaphore(
   PRKSEMAPHORE Semaphore,
  _In_      KPRIORITY    Increment,
  _In_      LONG         Adjustment,
  _In_      BOOLEAN      Wait
);

VOID
KeReleaseSpinLock (
    _Inout_ PKSPIN_LOCK SpinLock,
    _In_ KIRQL NewIrql
);

void KeReleaseSpinLockForDpc(
   PKSPIN_LOCK SpinLock,
  _In_      KIRQL       OldIrql
);

void KeReleaseSpinLockFromDpcLevel(
   PKSPIN_LOCK SpinLock
);

PKDEVICE_QUEUE_ENTRY KeRemoveByKeyDeviceQueue(
   PKDEVICE_QUEUE DeviceQueue,
  _In_      ULONG          SortKey
);


PKDEVICE_QUEUE_ENTRY KeRemoveDeviceQueue(
   PKDEVICE_QUEUE DeviceQueue
);

BOOLEAN KeRemoveEntryDeviceQueue(
   PKDEVICE_QUEUE       DeviceQueue,
   PKDEVICE_QUEUE_ENTRY DeviceQueueEntry
);

BOOLEAN KeRemoveQueueDpc(
   PRKDPC Dpc
);

LONG KeResetEvent(
   PRKEVENT Event
);

void KeRestoreExtendedProcessorState(
  _In_ PXSTATE_SAVE XStateSave
);

NTSTATUS KeRestoreFloatingPointState(
  _In_ PKFLOATING_SAVE FloatSave
);

void KeRevertToUserAffinityThreadEx(
  _In_ KAFFINITY Affinity
);

void KeRevertToUserAffinityThreadEx(
  _In_ KAFFINITY Affinity
);

void KeRevertToUserGroupAffinityThread(
  _In_ PGROUP_AFFINITY PreviousAffinity
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
  _In_  ULONG64      Mask,
  _Out_ PXSTATE_SAVE XStateSave
);

NTSTATUS KeSaveFloatingPointState(
  _Out_ PKFLOATING_SAVE FloatSave
);

BOOLEAN KeSetCoalescableTimer(
        PKTIMER       Timer,
  _In_           LARGE_INTEGER DueTime,
  _In_           ULONG         Period,
  _In_           ULONG         TolerableDelay,
  _In_opt_ PKDPC         Dpc
);

LONG KeSetEvent(
   PRKEVENT  Event,
  _In_      KPRIORITY Increment,
  _In_      BOOLEAN   Wait
);

void KeSetImportanceDpc(
   PRKDPC          Dpc,
  _In_      KDPC_IMPORTANCE Importance
);

KPRIORITY KeSetPriorityThread(
   PKTHREAD  Thread,
  _In_      KPRIORITY Priority
);

void KeSetSystemAffinityThread(
  _In_ KAFFINITY Affinity
);

KAFFINITY KeSetSystemAffinityThreadEx(
  _In_ KAFFINITY Affinity
);

void KeSetSystemGroupAffinityThread(
  _In_            PGROUP_AFFINITY Affinity,
   PGROUP_AFFINITY PreviousAffinity
);

void KeSetTargetProcessorDpc(
   PRKDPC Dpc,
  _In_      CCHAR  Number
);

NTSTATUS KeSetTargetProcessorDpcEx(
   PKDPC             Dpc,
  _In_      PPROCESSOR_NUMBER ProcNumber
);

BOOLEAN KeSetTimer(
        PKTIMER       Timer,
  _In_           LARGE_INTEGER DueTime,
  _In_opt_ PKDPC         Dpc
);

BOOLEAN KeSetTimerEx(
        PKTIMER       Timer,
  _In_           LARGE_INTEGER DueTime,
  _In_           LONG          Period,
  _In_opt_ PKDPC         Dpc
);

LOGICAL KeShouldYieldProcessor();

NTHALAPI VOID KeStallExecutionProcessor(
  _In_ ULONG MicroSeconds
);

NTHALAPI VOID KeStallExecutionProcessor(
  _In_ ULONG MicroSeconds
);


BOOLEAN KeSynchronizeExecution(
        PKINTERRUPT            Interrupt,
  _In_           PKSYNCHRONIZE_ROUTINE  SynchronizeRoutine,
  _In_opt_  PVOID SynchronizeContext
);

BOOLEAN KeTestSpinLock(
  _In_ PKSPIN_LOCK SpinLock
);

BOOLEAN KeTryToAcquireGuardedMutex(
   PKGUARDED_MUTEX Mutex
);

BOOLEAN KeTryToAcquireSpinLockAtDpcLevel(
   PKSPIN_LOCK SpinLock
);

NTSTATUS
KeWaitForMultipleObjects (
    ULONG Count,
    PVOID Object[],
    WAIT_TYPE WaitType,
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


void KzLowerIrql(
  _In_ KIRQL NewIrql
);

KIRQL KzRaiseIrql(
  _In_ KIRQL NewIrql
);



NTSTATUS MmAdvanceMdl(
   PMDL  Mdl,
  _In_      ULONG NumberOfBytes
);

PVOID MmAllocateContiguousMemory(
  _In_ SIZE_T           NumberOfBytes,
  _In_ PHYSICAL_ADDRESS HighestAcceptableAddress
);

NTSTATUS MmAllocateContiguousMemoryEx(
  _In_           PSIZE_T          NumberOfBytes,
  _In_           PHYSICAL_ADDRESS LowestAcceptableAddress,
  _In_           PHYSICAL_ADDRESS HighestAcceptableAddress,
  _In_           PHYSICAL_ADDRESS BoundaryAddressMultiple,
  _In_           NODE_REQUIREMENT PreferredNode,
  _In_           ULONG            Protect,
  _In_opt_ PVOID            PartitionObject,
  _In_           ULONG            Tag,
  _In_           ULONG            Flags,
  _Out_          PVOID            *BaseAddress
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

PVOID MmAllocateMappingAddress(
  _In_ SIZE_T NumberOfBytes,
  _In_ ULONG  PoolTag
);


PVOID MmAllocateMappingAddressEx(
  SIZE_T NumberOfBytes,
  ULONG  PoolTag,
  ULONG  Flags
);

NTSTATUS MmAllocateMdlForIoSpace(
  _In_  PMM_PHYSICAL_ADDRESS_LIST PhysicalAddressList,
  _In_  SIZE_T                    NumberOfEntries,
  _Out_ PMDL                      *NewMdl
);

PMDL MmAllocateNodePagesForMdlEx(
  _In_ PHYSICAL_ADDRESS    LowAddress,
  _In_ PHYSICAL_ADDRESS    HighAddress,
  _In_ PHYSICAL_ADDRESS    SkipBytes,
  _In_ SIZE_T              TotalBytes,
  _In_ MEMORY_CACHING_TYPE CacheType,
  _In_ ULONG               IdealNode,
  _In_ ULONG               Flags
);

PMDL MmAllocatePagesForMdl(
  _In_ PHYSICAL_ADDRESS LowAddress,
  _In_ PHYSICAL_ADDRESS HighAddress,
  _In_ PHYSICAL_ADDRESS SkipBytes,
  _In_ SIZE_T           TotalBytes
);

PMDL MmAllocatePagesForMdlEx(
  _In_ PHYSICAL_ADDRESS    LowAddress,
  _In_ PHYSICAL_ADDRESS    HighAddress,
  _In_ PHYSICAL_ADDRESS    SkipBytes,
  _In_ SIZE_T              TotalBytes,
  _In_ MEMORY_CACHING_TYPE CacheType,
  _In_ ULONG               Flags
);

void MmBuildMdlForNonPagedPool(
   PMDL MemoryDescriptorList
);

void MmFreeContiguousMemory(
  _In_ PVOID BaseAddress
);

void MmFreeContiguousMemorySpecifyCache(
  _In_ PVOID               BaseAddress,
  _In_ SIZE_T              NumberOfBytes,
  _In_ MEMORY_CACHING_TYPE CacheType
);

void MmFreeMappingAddress(
  _In_ PVOID BaseAddress,
  _In_ ULONG PoolTag
);

void MmFreePagesFromMdl(
  _In_ PMDL MemoryDescriptorList
);

ULONG MmGetMdlByteCount(
  _In_ PMDL Mdl
);

PPFN_NUMBER MmGetMdlPfnArray(
  _In_ PMDL Mdl
);

PVOID MmGetSystemAddressForMdl(
   MDL
);

PVOID MmGetSystemRoutineAddress(
  _In_ PUNICODE_STRING SystemRoutineName
);

PVOID MmGetSystemRoutineAddressEx(
  PUNICODE_STRING ModuleName,
  PSTR            FunctionName
);

LOGICAL MmIsDriverSuspectForVerifier(
  _In_ _DRIVER_OBJECT *DriverObject
);

LOGICAL MmIsDriverVerifying(
  _In_ _DRIVER_OBJECT *DriverObject
);


LOGICAL MmIsDriverVerifyingByAddress(
  _In_ PVOID AddressWithinSection
);

//void MmLockPagableCodeSection(
//  _In_  Address
//);

PVOID MmLockPagableDataSection(
  _In_ PVOID AddressWithinSection
);

PVOID MmMapIoSpace(
  _In_ PHYSICAL_ADDRESS    PhysicalAddress,
  _In_ SIZE_T              NumberOfBytes,
  _In_ MEMORY_CACHING_TYPE CacheType
);

PVOID MmMapIoSpaceEx(
  _In_ PHYSICAL_ADDRESS PhysicalAddress,
  _In_ SIZE_T           NumberOfBytes,
  _In_ ULONG            Protect
);

PVOID MmMapLockedPages(
  _In_ PMDL MemoryDescriptorList,
  _In_ KPROCESSOR_MODE ,
   uint64_t _MODE,
    KPROCESSOR_MODE AccessMode
);

PVOID MmMapLockedPagesSpecifyCache(
  _In_           PMDL                                                                          MemoryDescriptorList,
  _In_           KPROCESSOR_MODE Mode,
   uint64_t MODE,
  KPROCESSOR_MODE AccessMode,
  _In_           MEMORY_CACHING_TYPE                      CacheType,
  _In_opt_ PVOID                                                                         RequestedAddress,
  _In_           ULONG                                                                         BugCheckOnFailure,
  _In_           ULONG                                                                         Priority
);

PVOID MmMapLockedPagesWithReservedMapping(
  _In_ PVOID                                                    MappingAddress,
  _In_ ULONG                                                    PoolTag,
  _In_ PMDL                                                     MemoryDescriptorList,
  _In_ MEMORY_CACHING_TYPE CacheType
);

NTSTATUS MmMapMdl(
  _In_ PMDL            MemoryDescriptorList,
  _In_ ULONG           Protection,
  _In_ PMM_MDL_ROUTINE DriverRoutine,
  _In_ PVOID           DriverContext
);

NTSTATUS MmMapMemoryDumpMdlEx(
  PVOID      Va,
  PFN_NUMBER PageTotal,
  PMDL       MemoryDumpMdl,
  ULONG      Flags
);

PVOID MmPageEntireDriver(
  _In_ PVOID AddressWithinSection
);

void MmProbeAndLockPages(
   PMDL            MemoryDescriptorList,
  _In_      KPROCESSOR_MODE AccessMode,
  _In_      LOCK_OPERATION  Operation
);

void MmProbeAndLockSelectedPages(
   PMDL                  MemoryDescriptorList,
  _In_      PFILE_SEGMENT_ELEMENT SegmentArray,
  _In_      KPROCESSOR_MODE       AccessMode,
  _In_      LOCK_OPERATION        Operation
);

NTSTATUS MmProtectDriverSection(
  _In_ PVOID  AddressWithinSection,
  _In_ SIZE_T Size,
  _In_ ULONG  Flags
);

NTSTATUS MmProtectMdlSystemAddress(
  _In_ PMDL  MemoryDescriptorList,
  _In_ ULONG NewProtect
);

MM_SYSTEMSIZE MmQuerySystemSize();

void MmResetDriverPaging(
  _In_ PVOID AddressWithinSection
);

SIZE_T MmSizeOfMdl(
  _In_ PVOID  Base,
  _In_ SIZE_T Length
);


void MmUnlockPagableImageSection(
  _In_ PVOID ImageSectionHandle
);

void MmUnlockPages(
   PMDL MemoryDescriptorList
);

void MmUnmapIoSpace(
  _In_ PVOID  BaseAddress,
  _In_ SIZE_T NumberOfBytes
);

void MmUnmapLockedPages(
  _In_ PVOID BaseAddress,
  _In_ PMDL  MemoryDescriptorList
);

void MmUnmapReservedMapping(
  _In_ PVOID BaseAddress,
  _In_ ULONG PoolTag,
  _In_ PMDL  MemoryDescriptorList
);



NTSYSCALLAPI NTSTATUS NtCommitComplete(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS NtCommitEnlistment(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS NtCommitTransaction(
  _In_ HANDLE  TransactionHandle,
  _In_ BOOLEAN Wait
);

NTSYSCALLAPI NTSTATUS NtCreateEnlistment(
  _Out_          PHANDLE            EnlistmentHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_           HANDLE             ResourceManagerHandle,
  _In_           HANDLE             TransactionHandle,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
  _In_opt_ ULONG              CreateOptions,
  _In_           NOTIFICATION_MASK  NotificationMask,
  _In_opt_ PVOID              EnlistmentKey
);

NTSYSCALLAPI NTSTATUS NtCreateResourceManager(
  _Out_          PHANDLE            ResourceManagerHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_           HANDLE             TmHandle,
  _In_           LPGUID             RmGuid,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
  _In_opt_ ULONG              CreateOptions,
  _In_opt_ PUNICODE_STRING    Description
);

NTSYSCALLAPI NTSTATUS NtCreateTransaction(
  _Out_          PHANDLE            TransactionHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
  _In_opt_ LPGUID             Uow,
  _In_opt_ HANDLE             TmHandle,
  _In_opt_ ULONG              CreateOptions,
  _In_opt_ ULONG              IsolationLevel,
  _In_opt_ ULONG              IsolationFlags,
  _In_opt_ PLARGE_INTEGER     Timeout,
  _In_opt_ PUNICODE_STRING    Description
);

NTSYSCALLAPI NTSTATUS NtCreateTransactionManager(
  _Out_          PHANDLE            TmHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
  _In_opt_ PUNICODE_STRING    LogFileName,
  _In_opt_ ULONG              CreateOptions,
  _In_opt_ ULONG              CommitStrength
);

NTSYSCALLAPI NTSTATUS NtEnumerateTransactionObject(
  _In_opt_ HANDLE            RootObjectHandle,
  _In_           KTMOBJECT_TYPE    QueryType,
        PKTMOBJECT_CURSOR ObjectCursor,
  _In_           ULONG             ObjectCursorLength,
  _Out_          PULONG            ReturnLength
);

NTSYSCALLAPI NTSTATUS NtGetNotificationResourceManager(
  _In_            HANDLE                    ResourceManagerHandle,
  _Out_           PTRANSACTION_NOTIFICATION TransactionNotification,
  _In_            ULONG                     NotificationLength,
  _In_            PLARGE_INTEGER            Timeout,
   PULONG                    ReturnLength,
  _In_            ULONG                     Asynchronous,
  _In_opt_  ULONG_PTR                 AsynchronousContext
);

NTSYSCALLAPI NTSTATUS NtManagePartition(
  _In_           HANDLE                      TargetHandle,
  _In_opt_ HANDLE                      SourceHandle,
  _In_           PARTITION_INFORMATION_CLASS PartitionInformationClass,
        PVOID                       PartitionInformation,
  _In_           ULONG                       PartitionInformationLength
);

NTSYSCALLAPI NTSTATUS NtOpenEnlistment(
  _Out_          PHANDLE            EnlistmentHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_           HANDLE             ResourceManagerHandle,
  _In_           LPGUID             EnlistmentGuid,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes
);

NTSYSCALLAPI NTSTATUS NtOpenResourceManager(
  _Out_          PHANDLE            ResourceManagerHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_           HANDLE             TmHandle,
  _In_           LPGUID             ResourceManagerGuid,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes
);

NTSYSCALLAPI NTSTATUS NtOpenTransaction(
  _Out_          PHANDLE            TransactionHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
  _In_           LPGUID             Uow,
  _In_opt_ HANDLE             TmHandle
);

NTSYSCALLAPI NTSTATUS NtOpenTransactionManager(
  _Out_          PHANDLE            TmHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
  _In_opt_ PUNICODE_STRING    LogFileName,
  _In_opt_ LPGUID             TmIdentity,
  _In_opt_ ULONG              OpenOptions
);

NTSYSCALLAPI NTSTATUS NtPowerInformation(
  _In_            POWER_INFORMATION_LEVEL InformationLevel,
  _In_opt_  PVOID                   InputBuffer,
  _In_            ULONG                   InputBufferLength,
   PVOID                   OutputBuffer,
  _In_            ULONG                   OutputBufferLength
);

NTSYSCALLAPI NTSTATUS NtPrepareComplete(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS NtPrepareEnlistment(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS NtPrePrepareComplete(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS NtPrePrepareEnlistment(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS NtQueryInformationEnlistment(
  _In_            HANDLE                       EnlistmentHandle,
  _In_            ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
  _Out_           PVOID                        EnlistmentInformation,
  _In_            ULONG                        EnlistmentInformationLength,
   PULONG                       ReturnLength
);

NTSYSCALLAPI NTSTATUS NtQueryInformationResourceManager(
  _In_            HANDLE                            ResourceManagerHandle,
  _In_            RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
  _Out_           PVOID                             ResourceManagerInformation,
  _In_            ULONG                             ResourceManagerInformationLength,
   PULONG                            ReturnLength
);

NTSYSCALLAPI NTSTATUS NtQueryInformationTransaction(
  _In_            HANDLE                        TransactionHandle,
  _In_            TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
  _Out_           PVOID                         TransactionInformation,
  _In_            ULONG                         TransactionInformationLength,
   PULONG                        ReturnLength
);

NTSYSCALLAPI NTSTATUS NtQueryInformationTransactionManager(
  _In_            HANDLE                               TransactionManagerHandle,
  _In_            TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
  _Out_           PVOID                                TransactionManagerInformation,
  _In_            ULONG                                TransactionManagerInformationLength,
   PULONG                               ReturnLength
);

NTSYSCALLAPI NTSTATUS NtReadOnlyEnlistment(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS NtRecoverEnlistment(
  _In_           HANDLE EnlistmentHandle,
  _In_opt_ PVOID  EnlistmentKey
);

NTSYSCALLAPI NTSTATUS NtRecoverResourceManager(
  _In_ HANDLE ResourceManagerHandle
);

NTSYSCALLAPI NTSTATUS NtRecoverTransactionManager(
  _In_ HANDLE TransactionManagerHandle
);

NTSYSCALLAPI NTSTATUS NtRenameTransactionManager(
  _In_ PUNICODE_STRING LogFileName,
  _In_ LPGUID          ExistingTransactionManagerGuid
);

NTSYSCALLAPI NTSTATUS NtRollbackComplete(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS NtRollbackEnlistment(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS NtRollbackTransaction(
  _In_ HANDLE  TransactionHandle,
  _In_ BOOLEAN Wait
);

NTSYSCALLAPI NTSTATUS NtRollforwardTransactionManager(
  _In_           HANDLE         TransactionManagerHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS NtSetInformationEnlistment(
  _In_ HANDLE                       EnlistmentHandle,
  _In_ ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
  _In_ PVOID                        EnlistmentInformation,
  _In_ ULONG                        EnlistmentInformationLength
);

NTSYSCALLAPI NTSTATUS NtSetInformationResourceManager(
  HANDLE                            ResourceManagerHandle,
  RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
  PVOID                             ResourceManagerInformation,
  ULONG                             ResourceManagerInformationLength
);

NTSYSCALLAPI NTSTATUS NtSetInformationTransaction(
  _In_ HANDLE                        TransactionHandle,
  _In_ TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
  _In_ PVOID                         TransactionInformation,
  _In_ ULONG                         TransactionInformationLength
);

NTSYSCALLAPI NTSTATUS NtSetInformationTransactionManager(
  _In_opt_ HANDLE                               TmHandle,
  _In_           TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
  _In_           PVOID                                TransactionManagerInformation,
  _In_           ULONG                                TransactionManagerInformationLength
);

NTSYSCALLAPI NTSTATUS NtSinglePhaseReject(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);



NTSTATUS ObCloseHandle(
  _In_ HANDLE          Handle,
  _In_ KPROCESSOR_MODE PreviousMode
);

//void ObDereferenceObject(
//  _In_  a
//);

void ObDereferenceObjectDeferDelete(
  _In_ PVOID Object
);

void ObDereferenceObjectDeferDeleteWithTag(
  _In_ PVOID Object,
  _In_ ULONG Tag
);

//void ObDereferenceObjectWithTag(
//  _In_  a,
//  _In_  t
//);

LONG_PTR ObfReferenceObject(
  _In_ PVOID Object
);

NTSTATUS ObGetObjectSecurity(
  _In_  PVOID                Object,
  _Out_ PSECURITY_DESCRIPTOR *SecurityDescriptor,
  _Out_ PBOOLEAN             MemoryAllocated
);

//void ObReferenceObject(
//  _In_  Object
//);

NTSTATUS ObReferenceObjectByHandle(
  _In_            HANDLE                     Handle,
  _In_            ACCESS_MASK                DesiredAccess,
  _In_opt_  POBJECT_TYPE               ObjectType,
  _In_            KPROCESSOR_MODE            AccessMode,
  _Out_           PVOID                      *Object,
   POBJECT_HANDLE_INFORMATION HandleInformation
);

NTSTATUS ObReferenceObjectByHandleWithTag(
  _In_            HANDLE                     Handle,
  _In_            ACCESS_MASK                DesiredAccess,
  _In_opt_  POBJECT_TYPE               ObjectType,
  _In_            KPROCESSOR_MODE            AccessMode,
  _In_            ULONG                      Tag,
  _Out_           PVOID                      *Object,
   POBJECT_HANDLE_INFORMATION HandleInformation
);

NTSTATUS ObReferenceObjectByPointer(
  _In_           PVOID           Object,
  _In_           ACCESS_MASK     DesiredAccess,
  _In_opt_ POBJECT_TYPE    ObjectType,
  _In_           KPROCESSOR_MODE AccessMode
);

NTSTATUS ObReferenceObjectByPointerWithTag(
  _In_           PVOID           Object,
  _In_           ACCESS_MASK     DesiredAccess,
  _In_opt_ POBJECT_TYPE    ObjectType,
  _In_           KPROCESSOR_MODE AccessMode,
  _In_           ULONG           Tag
);

BOOLEAN ObReferenceObjectSafe(
  PVOID Object
);

//void ObReferenceObjectWithTag(
//  _In_  Object,
//  _In_  Tag
//);

NTSTATUS ObRegisterCallbacks(
  _In_  POB_CALLBACK_REGISTRATION CallbackRegistration,
  _Out_ PVOID                     *RegistrationHandle
);

void ObReleaseObjectSecurity(
  _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
  _In_ BOOLEAN              MemoryAllocated
);

void ObUnRegisterCallbacks(
  _In_ PVOID RegistrationHandle
);



NTSTATUS PoCallDriver(
  _In_      PDEVICE_OBJECT        DeviceObject,
    PIRP Irp
);

NTSTATUS PoClearPowerRequest(
   PVOID              PowerRequest,
  _In_      POWER_REQUEST_TYPE Type
);

NTSTATUS PoCreatePowerRequest(
  _Out_ PVOID                   *PowerRequest,
  _In_  PDEVICE_OBJECT          DeviceObject,
  _In_  PCOUNTED_REASON_CONTEXT Context
);

void PoDeletePowerRequest(
   PVOID PowerRequest
);

void PoEndDeviceBusy(
   PULONG IdlePointer
);

void PoFxActivateComponent(
  _In_ POHANDLE Handle,
  _In_ ULONG    Component,
  _In_ ULONG    Flags
);

void PoFxCompleteDevicePowerNotRequired(
  _In_ POHANDLE Handle
);

void PoFxCompleteDirectedPowerDown(
  POHANDLE Handle
);

void PoFxCompleteIdleCondition(
  _In_ POHANDLE Handle,
  _In_ ULONG    Component
);

void PoFxCompleteIdleState(
  _In_ POHANDLE Handle,
  _In_ ULONG    Component
);

void PoFxIdleComponent(
  _In_ POHANDLE Handle,
  _In_ ULONG    Component,
  _In_ ULONG    Flags
);

void PoFxIssueComponentPerfStateChange(
  _In_ POHANDLE                 Handle,
  _In_ ULONG                    Flags,
  _In_ ULONG                    Component,
  _In_ PPO_FX_PERF_STATE_CHANGE PerfChange,
  _In_ PVOID                    Context
);

void PoFxIssueComponentPerfStateChangeMultiple(
  _In_ POHANDLE                   Handle,
  _In_ ULONG                      Flags,
  _In_ ULONG                      Component,
  _In_ ULONG                      PerfChangesCount,
  _In_ PO_FX_PERF_STATE_CHANGE*  PerfChanges,
  _In_ PVOID                      Context
);

void PoFxNotifySurprisePowerOn(
  _In_ PDEVICE_OBJECT Pdo
);

NTSTATUS PoFxPowerControl(
  _In_            POHANDLE Handle,
  _In_            LPCGUID  PowerControlCode,
  _In_opt_  PVOID    InBuffer,
  _In_            SIZE_T   InBufferSize,
   PVOID    OutBuffer,
  _In_            SIZE_T   OutBufferSize,
   PSIZE_T  BytesReturned
);

NTSTATUS PoFxPowerOnCrashdumpDevice(
  _In_           POHANDLE Handle,
  _In_opt_ PVOID    Context
);

NTSTATUS PoFxQueryCurrentComponentPerfState(
  _In_ POHANDLE   Handle,
  _In_ ULONG      Flags,
  _In_ ULONG      Component,
  _In_ ULONG      SetIndex,
  _In_ PULONGLONG CurrentPerf
);

NTSTATUS PoFxRegisterComponentPerfStates(
  _In_  POHANDLE                             Handle,
  _In_  ULONG                                Component,
  _In_  ULONGLONG                            Flags,
  _In_  PPO_FX_COMPONENT_PERF_STATE_CALLBACK ComponentPerfStateCallback,
  _In_  PPO_FX_COMPONENT_PERF_INFO           InputStateInfo,
  _Out_ PPO_FX_COMPONENT_PERF_INFO           *OutputStateInfo
);

NTSTATUS PoFxRegisterCrashdumpDevice(
  POHANDLE Handle
);

NTSTATUS PoFxRegisterDevice(
  _In_  PDEVICE_OBJECT Pdo,
  _In_  PPO_FX_DEVICE  Device,
  _Out_ POHANDLE       *Handle
);

void PoFxReportDevicePoweredOn(
  _In_ POHANDLE Handle
);

void PoFxSetComponentLatency(
  _In_ POHANDLE  Handle,
  _In_ ULONG     Component,
  _In_ ULONGLONG Latency
);

void PoFxSetComponentResidency(
  _In_ POHANDLE  Handle,
  _In_ ULONG     Component,
  _In_ ULONGLONG Residency
);

void PoFxSetComponentWake(
  _In_ POHANDLE Handle,
  _In_ ULONG    Component,
  _In_ BOOLEAN  WakeHint
);

void PoFxSetDeviceIdleTimeout(
  _In_ POHANDLE  Handle,
  _In_ ULONGLONG IdleTimeout
);

NTSTATUS PoFxSetTargetDripsDevicePowerState(
  _In_ POHANDLE           Handle,
  _In_ DEVICE_POWER_STATE TargetState
);

void PoFxStartDevicePowerManagement(
  _In_ POHANDLE Handle
);

void PoFxUnregisterDevice(
  _In_ POHANDLE Handle
);

BOOLEAN PoGetSystemWake(
  _In_ PIRP Irp
);



PSINGLE_LIST_ENTRY PopEntryList(
   PSINGLE_LIST_ENTRY ListHead
);

BOOLEAN PoQueryWatchdogTime(
  _In_  PDEVICE_OBJECT Pdo,
  _Out_ PULONG         SecondsRemaining
);

PULONG PoRegisterDeviceForIdleDetection(
  _In_ PDEVICE_OBJECT     DeviceObject,
  _In_ ULONG              ConservationIdleTime,
  _In_ ULONG              PerformanceIdleTime,
  _In_ DEVICE_POWER_STATE State
);


NTSTATUS PoRegisterPowerSettingCallback(
  _In_opt_ PDEVICE_OBJECT          DeviceObject,
  _In_           LPCGUID                 SettingGuid,
  _In_           PPOWER_SETTING_CALLBACK Callback,
  _In_opt_ PVOID                   Context,
  _Out_          PVOID                   *Handle
);

PVOID PoRegisterSystemState(
   PVOID           StateHandle,
  _In_      EXECUTION_STATE Flags
);

NTSTATUS PoRequestPowerIrp(
  _In_           PDEVICE_OBJECT          DeviceObject,
  _In_           UCHAR                   MinorFunction,
  _In_           POWER_STATE             PowerState,
  _In_opt_ PREQUEST_POWER_COMPLETE CompletionFunction,
  _In_opt_  PVOID  Context,
  _Out_          PIRP                    *Irp
);

//void PoSetDeviceBusy(
//    IdlePointer
//);

void PoSetDeviceBusyEx(
   PULONG IdlePointer
);

NTSTATUS PoSetPowerRequest(
   PVOID              PowerRequest,
  _In_      POWER_REQUEST_TYPE Type
);

POWER_STATE PoSetPowerState(
  _In_ PDEVICE_OBJECT   DeviceObject,
  _In_ POWER_STATE_TYPE Type,
  _In_ POWER_STATE      State
);

void PoSetSystemState(
  _In_ EXECUTION_STATE Flags
);

void PoSetSystemWake(
   PIRP Irp
);

void PoSetSystemWakeDevice(
  _In_ PDEVICE_OBJECT DeviceObject
);

void PoStartDeviceBusy(
   PULONG IdlePointer
);

void PoStartNextPowerIrp(
   PIRP Irp
);

NTSTATUS PoUnregisterPowerSettingCallback(
   PVOID Handle
);

void PoUnregisterSystemState(
   PVOID StateHandle
);

typedef enum _POWER_MONITOR_REQUEST_TYPE {
  MonitorRequestTypeOff,
  MonitorRequestTypeOnAndPresent,
  MonitorRequestTypeToggleOn
} POWER_MONITOR_REQUEST_TYPE;




typedef enum {
  UserNotPresent,
  UserPresent,
  UserUnknown
} POWER_USER_PRESENCE_TYPE, *PPOWER_USER_PRESENCE_TYPE;

void ProbeForRead(
  _In_ const volatile VOID *Address,
  _In_ SIZE_T              Length,
  _In_ ULONG               Alignment
);

void ProbeForWrite(
   volatile VOID *Address,
  _In_      SIZE_T        Length,
  _In_      ULONG         Alignment
);

NTSTATUS PsAllocateAffinityToken(
  _Out_ PAFFINITY_TOKEN *AffinityToken
);

NTSTATUS PsCreateSystemThread(
  _Out_           PHANDLE            ThreadHandle,
  _In_            ULONG              DesiredAccess,
  _In_opt_  POBJECT_ATTRIBUTES ObjectAttributes,
  _In_opt_  HANDLE             ProcessHandle,
   PCLIENT_ID         ClientId,
  _In_            PKSTART_ROUTINE    StartRoutine,
  _In_opt_  PVOID              StartContext
);

void PsFreeAffinityToken(
  PAFFINITY_TOKEN AffinityToken
);

PETHREAD PsGetCurrentThread();

BOOLEAN PsGetVersion(
   PULONG          MajorVersion,
   PULONG          MinorVersion,
   PULONG          BuildNumber,
   PUNICODE_STRING CSDVersion
);

ULONG64 PsQueryTotalCycleTimeProcess(
   PEPROCESS Process,
  _Out_     PULONG64  CycleTimeStamp
);

void PsRevertToUserMultipleGroupAffinityThread(
  _In_ PAFFINITY_TOKEN AffinityToken
);

NTSTATUS PsSetSystemMultipleGroupAffinityThread(
  _In_      PGROUP_AFFINITY GroupAffinities,
  _In_      USHORT          GroupCount,
   PAFFINITY_TOKEN AffinityToken
);

NTSTATUS PsTerminateSystemThread(
  _In_ NTSTATUS ExitStatus
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
   PSINGLE_LIST_ENTRY                  ListHead,
    PSINGLE_LIST_ENTRY Entry
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

BOOLEAN RemoveEntryList(
  _In_ PLIST_ENTRY Entry
);

PLIST_ENTRY RemoveHeadList(
   PLIST_ENTRY ListHead
);

PLIST_ENTRY RemoveTailList(
   PLIST_ENTRY ListHead
);



  
  ULONG
  RtlAnsiStringToUnicodeSize(
  PANSI_STRING AnsiString
  );


#define RtlAnsiStringToUnicodeSize(STRING) (                 \
    RtlxAnsiStringToUnicodeSize(STRING)                      \
)



 NTSTATUS RtlAnsiStringToUnicodeString(
   PUNICODE_STRING DestinationString,
  _In_      PCANSI_STRING   SourceString,
  _In_      BOOLEAN         AllocateDestinationString
);


 NTSTATUS RtlAppendUnicodeStringToString(
   PUNICODE_STRING  Destination,
  _In_      PCUNICODE_STRING Source
);

 NTSTATUS RtlAppendUnicodeToString(
        PUNICODE_STRING Destination,
  _In_opt_ PCWSTR          Source
);


BOOLEAN RtlAreBitsClear(
  _In_ PRTL_BITMAP BitMapHeader,
  _In_ ULONG       StartingIndex,
  _In_ ULONG       Length
);

BOOLEAN RtlAreBitsSet(
  _In_ PRTL_BITMAP BitMapHeader,
  _In_ ULONG       StartingIndex,
  _In_ ULONG       Length
);


BOOLEAN RtlCheckBit(
  _In_ PRTL_BITMAP BitMapHeader,
  _In_ ULONG       BitPosition
);

 NTSTATUS RtlCheckRegistryKey(
  _In_ ULONG RelativeTo,
  _In_ PWSTR Path
);

 VOID RtlClearAllBits(
  _In_ PRTL_BITMAP BitMapHeader
);

 VOID RtlClearBit(
  _In_ PRTL_BITMAP BitMapHeader,
  _In_ ULONG       BitNumber
);

 VOID RtlClearBits(
  _In_ PRTL_BITMAP BitMapHeader,
  _In_ ULONG       StartingIndex,
  _In_ ULONG       NumberToClear
);

 ULONGLONG RtlCmDecodeMemIoResource(
  _In_            PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor,
   PULONGLONG                      Start
);

 NTSTATUS RtlCmEncodeMemIoResource(
  _In_ PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor,
  _In_ UCHAR                           Type,
  _In_ ULONGLONG                       Length,
  _In_ ULONGLONG                       Start
);

 SIZE_T RtlCompareMemory(
  _In_ const VOID *Source1,
  _In_ const VOID *Source2,
  _In_ SIZE_T     Length
);

 LONG RtlCompareUnicodeString(
  _In_ PCUNICODE_STRING String1,
  _In_ PCUNICODE_STRING String2,
  _In_ BOOLEAN          CaseInSensitive
);

int RtlConstantTimeEqualMemory(
  const void    *v1,
  const void    *v2,
  unsigned long len
);

LARGE_INTEGER NTAPI_INLINE RtlConvertLongToLargeInteger(
  _In_ LONG SignedInteger
);

LARGE_INTEGER NTAPI_INLINE RtlConvertUlongToLargeInteger(
  _In_ ULONG UnsignedInteger
);

void RtlCopyMemory(
   void*       Destination,
   const void* Source,
   size_t      Length
);

 VOID RtlCopyMemoryNonTemporal(
  VOID       *Destination,
  const VOID *Source,
  SIZE_T     Length
);

 VOID RtlCopyUnicodeString(
        PUNICODE_STRING  DestinationString,
  _In_opt_ PCUNICODE_STRING SourceString
);

 NTSTATUS RtlCreateRegistryKey(
  _In_ ULONG RelativeTo,
  _In_ PWSTR Path
);

 NTSTATUS RtlCreateSecurityDescriptor(
  _Out_ PSECURITY_DESCRIPTOR SecurityDescriptor,
  _In_  ULONG                Revision
);

 NTSTATUS RtlDeleteRegistryValue(
  _In_ ULONG  RelativeTo,
  _In_ PCWSTR Path,
  _In_ PCWSTR ValueName
);

 WCHAR RtlDowncaseUnicodeChar(
  _In_ WCHAR SourceCharacter
);

BOOLEAN
RtlEqualMemory(
   _In_ void*  Destination,
   _In_ void*  Source,
   _In_ size_t Length
);

 BOOLEAN RtlEqualUnicodeString(
  _In_ PCUNICODE_STRING String1,
  _In_ PCUNICODE_STRING String2,
  _In_ BOOLEAN          CaseInSensitive
);

void RtlFillMemory(
   void*  Destination,
   size_t Length,
   int    Fill
);


 VOID RtlFillMemoryNonTemporal(
  VOID        *Destination,
  SIZE_T      Length,
  const UCHAR Value
);

 ULONG RtlFindClearBits(
  _In_ PRTL_BITMAP BitMapHeader,
  _In_ ULONG       NumberToFind,
  _In_ ULONG       HintIndex
);

 ULONG RtlFindClearBitsAndSet(
  _In_ PRTL_BITMAP BitMapHeader,
  _In_ ULONG       NumberToFind,
  _In_ ULONG       HintIndex
);

 ULONG RtlFindClearRuns(
  _In_  PRTL_BITMAP     BitMapHeader,
  _Out_ PRTL_BITMAP_RUN RunArray,
  _In_  ULONG           SizeOfRunArray,
  _In_  BOOLEAN         LocateLongestRuns
);

 ULONG RtlFindFirstRunClear(
  _In_  PRTL_BITMAP BitMapHeader,
  _Out_ PULONG      StartingIndex
);

 ULONG RtlFindLastBackwardRunClear(
  _In_  PRTL_BITMAP BitMapHeader,
  _In_  ULONG       FromIndex,
  _Out_ PULONG      StartingRunIndex
);

 CCHAR RtlFindLeastSignificantBit(
  _In_ ULONGLONG Set
);

 ULONG RtlFindLongestRunClear(
  _In_  PRTL_BITMAP BitMapHeader,
  _Out_ PULONG      StartingIndex
);

 CCHAR RtlFindMostSignificantBit(
  _In_ ULONGLONG Set
);

 ULONG RtlFindNextForwardRunClear(
  _In_  PRTL_BITMAP BitMapHeader,
  _In_  ULONG       FromIndex,
  _Out_ PULONG      StartingRunIndex
);

 ULONG RtlFindSetBits(
  _In_ PRTL_BITMAP BitMapHeader,
  _In_ ULONG       NumberToFind,
  _In_ ULONG       HintIndex
);




 ULONG RtlFindSetBitsAndClear(
  _In_ PRTL_BITMAP BitMapHeader,
  _In_ ULONG       NumberToFind,
  _In_ ULONG       HintIndex
);


 VOID RtlFreeAnsiString(
   PANSI_STRING AnsiString
);


 VOID RtlFreeUnicodeString(
   PUNICODE_STRING UnicodeString
);

 VOID RtlFreeUTF8String(
  PUTF8_STRING utf8String
);

 NTSTATUS RtlGetVersion(
  _Out_ PRTL_OSVERSIONINFOW lpVersionInformation
);

 NTSTATUS RtlGUIDFromString(
  _In_  PCUNICODE_STRING GuidString,
  _Out_ GUID             *Guid
);

 NTSTATUS RtlHashUnicodeString(
  _In_  PCUNICODE_STRING String,
  _In_  BOOLEAN          CaseInSensitive,
  _In_  ULONG            HashAlgorithm,
  _Out_ PULONG           HashValue
);

 VOID RtlInitAnsiString(
  _Out_          PANSI_STRING          DestinationString,
  _In_opt_  PCSZ SourceString
);

 VOID RtlInitializeBitMap(
  _Out_ PRTL_BITMAP             BitMapHeader,
  _In_   PULONG BitMapBuffer,
  _In_  ULONG                   SizeOfBitMap
);

 VOID RtlInitString(
  _Out_          PSTRING               DestinationString,
  _In_opt_  PCSZ SourceString
);



 VOID RtlInitUnicodeString(
  _Out_          PUNICODE_STRING         DestinationString,
  _In_opt_  PCWSTR SourceString
);


 VOID RtlInitUTF8String(
  PUTF8_STRING          DestinationString,
   PCSZ SourceString
);

 NTSTATUS RtlInitUTF8StringEx(
  PUTF8_STRING          DestinationString,
   PCSZ SourceString
);

 NTSTATUS RtlInt64ToUnicodeString(
  _In_           ULONGLONG       Value,
  _In_opt_ ULONG           Base,
        PUNICODE_STRING String
);

 NTSTATUS RtlIntegerToUnicodeString(
  _In_           ULONG           Value,
  _In_opt_ ULONG           Base,
        PUNICODE_STRING String
);

//void RtlIntPtrToUnicodeString(
//  _In_            Value,
//  _In_opt_  Base,
//         String
//);

 ULONGLONG RtlIoDecodeMemIoResource(
  _In_            PIO_RESOURCE_DESCRIPTOR Descriptor,
   PULONGLONG              Alignment,
   PULONGLONG              MinimumAddress,
   PULONGLONG              MaximumAddress
);

 NTSTATUS RtlIoEncodeMemIoResource(
  _In_ PIO_RESOURCE_DESCRIPTOR Descriptor,
  _In_ UCHAR                   Type,
  _In_ ULONGLONG               Length,
  _In_ ULONGLONG               Alignment,
  _In_ ULONGLONG               MinimumAddress,
  _In_ ULONGLONG               MaximumAddress
);

BOOLEAN RtlIsNtDdiVersionAvailable(
  _In_ ULONG Version
);

BOOLEAN RtlIsServicePackVersionInstalled(
  _In_ ULONG Version
);

 ULONG RtlLengthSecurityDescriptor(
  _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
);

void RtlMoveMemory(
   void*       Destination,
   const void* Source,
   size_t      Length
);


 ULONG RtlNumberOfClearBits(
  _In_ PRTL_BITMAP BitMapHeader
);

 ULONG RtlNumberOfSetBits(
  _In_ PRTL_BITMAP BitMapHeader
);

 ULONG RtlNumberOfSetBitsUlongPtr(
  _In_ ULONG_PTR Target
);

 VOID RtlPrefetchMemoryNonTemporal(
  _In_ PVOID  Source,
  _In_ SIZE_T Length
);

 NTSTATUS RtlQueryRegistryValues(
  _In_           ULONG                     RelativeTo,
  _In_           PCWSTR                    Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
  _In_opt_ PVOID                     Context,
  _In_opt_ PVOID                     Environment
);

void RtlSanitizeUnicodeStringPadding(
  PUNICODE_STRING String
);

PVOID RtlSecureZeroMemory(
  _Out_ PVOID  ptr,
  _In_  SIZE_T cnt
);

 VOID RtlSetAllBits(
  _In_ PRTL_BITMAP BitMapHeader
);

 VOID RtlSetBit(
  _In_ PRTL_BITMAP BitMapHeader,
  _In_ ULONG       BitNumber
);

 VOID RtlSetBits(
  _In_ PRTL_BITMAP BitMapHeader,
  _In_ ULONG       StartingIndex,
  _In_ ULONG       NumberToSet
);

 NTSTATUS RtlSetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
  _In_           BOOLEAN              DaclPresent,
  _In_opt_ PACL                 Dacl,
  _In_opt_ BOOLEAN              DaclDefaulted
);

 NTSTATUS RtlStringFromGUID(
  _In_  REFGUID         Guid,
  _Out_ PUNICODE_STRING GuidString
);

 BOOLEAN RtlTestBit(
  _In_ PRTL_BITMAP BitMapHeader,
  _In_ ULONG       BitNumber
);

 BOOLEAN RtlTimeFieldsToTime(
  _In_  PTIME_FIELDS   TimeFields,
  _Out_ PLARGE_INTEGER Time
);


 VOID RtlTimeToTimeFields(
  _In_  PLARGE_INTEGER Time,
  _Out_ PTIME_FIELDS   TimeFields
);

 ULONG RtlUlongByteSwap(
  _In_ ULONG Source
);

 ULONGLONG RtlUlonglongByteSwap(
  ULONGLONG Source
);

void RtlUnicodeStringToAnsiSize(
  _In_  STRING
);

 NTSTATUS RtlUnicodeStringToAnsiString(
   PANSI_STRING     DestinationString,
  _In_      PCUNICODE_STRING SourceString,
  _In_      BOOLEAN          AllocateDestinationString
);

 NTSTATUS RtlUnicodeStringToInteger(
  _In_           PCUNICODE_STRING String,
  _In_opt_ ULONG            Base,
  _Out_          PULONG           Value
);

 NTSTATUS RtlUnicodeStringToUTF8String(
  PUTF8_STRING     DestinationString,
  PCUNICODE_STRING SourceString,
  BOOLEAN          AllocateDestinationString
);



 WCHAR RtlUpcaseUnicodeChar(
  _In_ WCHAR SourceCharacter
);

 USHORT RtlUshortByteSwap(
  _In_ USHORT Source
);


 NTSTATUS RtlUTF8StringToUnicodeString(
  PUNICODE_STRING DestinationString,
  PUTF8_STRING    SourceString,
  BOOLEAN         AllocateDestinationString
);


 BOOLEAN RtlValidRelativeSecurityDescriptor(
  _In_ PSECURITY_DESCRIPTOR SecurityDescriptorInput,
  _In_ ULONG                SecurityDescriptorLength,
  _In_ SECURITY_INFORMATION RequiredInformation
);

 BOOLEAN RtlValidSecurityDescriptor(
  _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
);

 NTSTATUS RtlVerifyVersionInfo(
  _In_ PRTL_OSVERSIONINFOEXW VersionInfo,
  _In_ ULONG                 TypeMask,
  _In_ ULONGLONG             ConditionMask
);

 NTSTATUS RtlWriteRegistryValue(
  _In_           ULONG  RelativeTo,
  _In_           PCWSTR Path,
  _In_           PCWSTR ValueName,
  _In_           ULONG  ValueType,
  _In_opt_ PVOID  ValueData,
  _In_           ULONG  ValueLength
);

 ULONG RtlxAnsiStringToUnicodeSize(
  _In_ PCANSI_STRING AnsiString
);

 ULONG RtlxUnicodeStringToAnsiSize(
  _In_ PCUNICODE_STRING UnicodeString
);

void RtlZeroMemory(
   void*  Destination,
   size_t Length
);



BOOLEAN SeAccessCheck(
  _In_  PSECURITY_DESCRIPTOR      SecurityDescriptor,
  _In_  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
  _In_  BOOLEAN                   SubjectContextLocked,
  _In_  ACCESS_MASK               DesiredAccess,
  _In_  ACCESS_MASK               PreviouslyGrantedAccess,
  _Out_ PPRIVILEGE_SET            *Privileges,
  _In_  PGENERIC_MAPPING          GenericMapping,
  _In_  KPROCESSOR_MODE           AccessMode,
  _Out_ PACCESS_MASK              GrantedAccess,
  _Out_ PNTSTATUS                 AccessStatus
);


NTSTATUS SeAssignSecurity(
  _In_opt_ PSECURITY_DESCRIPTOR      ParentDescriptor,
  _In_opt_ PSECURITY_DESCRIPTOR      ExplicitDescriptor,
  _Out_          PSECURITY_DESCRIPTOR      *NewDescriptor,
  _In_           BOOLEAN                   IsDirectoryObject,
  _In_           PSECURITY_SUBJECT_CONTEXT SubjectContext,
  _In_           PGENERIC_MAPPING          GenericMapping,
  _In_           POOL_TYPE                 PoolType
);



NTSTATUS SeAssignSecurityEx(
  _In_opt_ PSECURITY_DESCRIPTOR      ParentDescriptor,
  _In_opt_ PSECURITY_DESCRIPTOR      ExplicitDescriptor,
  _Out_          PSECURITY_DESCRIPTOR      *NewDescriptor,
  _In_opt_ GUID                      *ObjectType,
  _In_           BOOLEAN                   IsDirectoryObject,
  _In_           ULONG                     AutoInheritFlags,
  _In_           PSECURITY_SUBJECT_CONTEXT SubjectContext,
  _In_           PGENERIC_MAPPING          GenericMapping,
  _In_           POOL_TYPE                 PoolType
);


NTSTATUS SeDeassignSecurity(
   PSECURITY_DESCRIPTOR *SecurityDescriptor
);


BOOLEAN SeValidSecurityDescriptor(
  _In_ ULONG                Length,
  _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
);



NTSTATUS TmCommitComplete(
  _In_ PKENLISTMENT   Enlistment,
  _In_ PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmCommitEnlistment(
  _In_ PKENLISTMENT   Enlistment,
  _In_ PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmCommitTransaction(
  _In_ PKTRANSACTION Transaction,
  _In_ BOOLEAN       Wait
);

NTSTATUS TmCreateEnlistment(
  _Out_          PHANDLE            EnlistmentHandle,
  _In_           KPROCESSOR_MODE    PreviousMode,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_           POBJECT_ATTRIBUTES ObjectAttributes,
  _In_           PRKRESOURCEMANAGER ResourceManager,
  _In_           PKTRANSACTION      Transaction,
  _In_opt_ ULONG              CreateOptions,
  _In_           NOTIFICATION_MASK  NotificationMask,
  _In_opt_ PVOID              EnlistmentKey
);

NTSTATUS TmDereferenceEnlistmentKey(
  _In_            PKENLISTMENT Enlistment,
   PBOOLEAN     LastReference
);

NTSTATUS TmEnableCallbacks(
  _In_           PKRESOURCEMANAGER   ResourceManager,
  _In_           PTM_RM_NOTIFICATION CallbackRoutine,
  _In_opt_ PVOID               RMKey
);

void TmGetTransactionId(
  _In_  PKTRANSACTION Transaction,
  _Out_ PUOW          TransactionId
);

NTSTATUS TmInitializeTransactionManager(
  _In_           PRKTM            TransactionManager,
  _In_opt_ PCUNICODE_STRING LogFileName,
  _In_           PGUID            TmId,
  _In_opt_ ULONG            CreateOptions
);

BOOLEAN TmIsTransactionActive(
  _In_ PKTRANSACTION Transaction
);

NTSTATUS TmPrepareComplete(
  _In_ PKENLISTMENT   Enlistment,
  _In_ PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmPrepareEnlistment(
  _In_ PKENLISTMENT   Enlistment,
  _In_ PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmPrePrepareComplete(
  _In_ PKENLISTMENT   Enlistment,
  _In_ PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmPrePrepareEnlistment(
  _In_ PKENLISTMENT   Enlistment,
  _In_ PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmReadOnlyEnlistment(
  _In_ PKENLISTMENT   Enlistment,
  _In_ PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmRecoverEnlistment(
  _In_ PKENLISTMENT Enlistment,
  _In_ PVOID        EnlistmentKey
);

NTSTATUS TmRecoverResourceManager(
  _In_ PKRESOURCEMANAGER ResourceManager
);

NTSTATUS TmRecoverTransactionManager(
  _In_ PKTM           Tm,
  _In_ PLARGE_INTEGER TargetVirtualClock
);

NTSTATUS TmReferenceEnlistmentKey(
  _In_  PKENLISTMENT Enlistment,
  _Out_ PVOID        *Key
);



NTSTATUS TmRenameTransactionManager(
  _In_ PUNICODE_STRING LogFileName,
  _In_ LPGUID          ExistingTransactionManagerGuid
);

NTSTATUS TmRequestOutcomeEnlistment(
  _In_ PKENLISTMENT   Enlistment,
  _In_ PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmRollbackComplete(
  _In_ PKENLISTMENT   Enlistment,
  _In_ PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmRollbackEnlistment(
  _In_ PKENLISTMENT   Enlistment,
  _In_ PLARGE_INTEGER TmVirtualClock
);

NTSTATUS TmRollbackTransaction(
  _In_ PKTRANSACTION Transaction,
  _In_ BOOLEAN       Wait
);

NTSTATUS TmSinglePhaseReject(
  _In_ PKENLISTMENT   Enlistment,
  _In_ PLARGE_INTEGER TmVirtualClock
);


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


NTSTATUS WmiQueryTraceInformation(
  _In_            TRACE_INFORMATION_CLASS TraceInformationClass,
  _Out_           PVOID                   TraceInformation,
  _In_            ULONG                   TraceInformationLength,
   PULONG                  RequiredLength,
  _In_opt_  PVOID                   Buffer
);

NTSTATUS WmiTraceMessage(
  _In_ TRACEHANDLE LoggerHandle,
  _In_ ULONG       MessageFlags,
  _In_ LPCGUID     MessageGuid,
  _In_ USHORT      MessageNumber,
       ...
);

NTSTATUS WmiTraceMessageVa(
  _In_ TRACEHANDLE LoggerHandle,
  _In_ ULONG       MessageFlags,
  _In_ LPCGUID     MessageGuid,
  _In_ USHORT      MessageNumber,
  _In_ va_list     MessageArgList
);

////



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



 NTSTATUS ZwClose(
  _In_ HANDLE Handle
);

NTSYSCALLAPI NTSTATUS ZwCommitComplete(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwCommitEnlistment(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwCommitTransaction(
  _In_ HANDLE  TransactionHandle,
  _In_ BOOLEAN Wait
);

 NTSTATUS ZwCreateDirectoryObject(
  _Out_ PHANDLE            DirectoryHandle,
  _In_  ACCESS_MASK        DesiredAccess,
  _In_  POBJECT_ATTRIBUTES ObjectAttributes
);

NTSYSCALLAPI NTSTATUS ZwCreateEnlistment(
  _Out_          PHANDLE            EnlistmentHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_           HANDLE             ResourceManagerHandle,
  _In_           HANDLE             TransactionHandle,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
  _In_opt_ ULONG              CreateOptions,
  _In_           NOTIFICATION_MASK  NotificationMask,
  _In_opt_ PVOID              EnlistmentKey
);

 NTSTATUS ZwCreateFile(
  _Out_          PHANDLE            FileHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_           POBJECT_ATTRIBUTES ObjectAttributes,
  _Out_          PIO_STATUS_BLOCK   IoStatusBlock,
  _In_opt_ PLARGE_INTEGER     AllocationSize,
  _In_           ULONG              FileAttributes,
  _In_           ULONG              ShareAccess,
  _In_           ULONG              CreateDisposition,
  _In_           ULONG              CreateOptions,
  _In_opt_ PVOID              EaBuffer,
  _In_           ULONG              EaLength
);

 NTSTATUS ZwCreateKey(
  _Out_           PHANDLE            KeyHandle,
  _In_            ACCESS_MASK        DesiredAccess,
  _In_            POBJECT_ATTRIBUTES ObjectAttributes,
                  ULONG              TitleIndex,
  _In_opt_  PUNICODE_STRING    Class,
  _In_            ULONG              CreateOptions,
   PULONG             Disposition
);

 NTSTATUS ZwCreateKeyTransacted(
  _Out_           PHANDLE            KeyHandle,
  _In_            ACCESS_MASK        DesiredAccess,
  _In_            POBJECT_ATTRIBUTES ObjectAttributes,
                  ULONG              TitleIndex,
  _In_opt_  PUNICODE_STRING    Class,
  _In_            ULONG              CreateOptions,
  _In_            HANDLE             TransactionHandle,
   PULONG             Disposition
);

NTSYSCALLAPI NTSTATUS ZwCreateResourceManager(
  _Out_          PHANDLE            ResourceManagerHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_           HANDLE             TmHandle,
  _In_opt_ LPGUID             ResourceManagerGuid,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
  _In_opt_ ULONG              CreateOptions,
  _In_opt_ PUNICODE_STRING    Description
);

 NTSTATUS ZwCreateSection(
  _Out_          PHANDLE            SectionHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
  _In_opt_ PLARGE_INTEGER     MaximumSize,
  _In_           ULONG              SectionPageProtection,
  _In_           ULONG              AllocationAttributes,
  _In_opt_ HANDLE             FileHandle
);

NTSYSCALLAPI NTSTATUS ZwCreateTransaction(
  _Out_          PHANDLE            TransactionHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
  _In_opt_ LPGUID             Uow,
  _In_opt_ HANDLE             TmHandle,
  _In_opt_ ULONG              CreateOptions,
  _In_opt_ ULONG              IsolationLevel,
  _In_opt_ ULONG              IsolationFlags,
  _In_opt_ PLARGE_INTEGER     Timeout,
  _In_opt_ PUNICODE_STRING    Description
);

NTSYSCALLAPI NTSTATUS ZwCreateTransactionManager(
  _Out_          PHANDLE            TmHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
  _In_opt_ PUNICODE_STRING    LogFileName,
  _In_opt_ ULONG              CreateOptions,
  _In_opt_ ULONG              CommitStrength
);

 NTSTATUS ZwDeleteKey(
  _In_ HANDLE KeyHandle
);

 NTSTATUS ZwDeleteValueKey(
  _In_ HANDLE          KeyHandle,
  _In_ PUNICODE_STRING ValueName
);

 NTSTATUS ZwEnumerateKey(
  _In_            HANDLE                KeyHandle,
  _In_            ULONG                 Index,
  _In_            KEY_INFORMATION_CLASS KeyInformationClass,
   PVOID                 KeyInformation,
  _In_            ULONG                 Length,
  _Out_           PULONG                ResultLength
);

NTSYSCALLAPI NTSTATUS ZwEnumerateTransactionObject(
  _In_opt_ HANDLE            RootObjectHandle,
  _In_           KTMOBJECT_TYPE    QueryType,
        PKTMOBJECT_CURSOR ObjectCursor,
  _In_           ULONG             ObjectCursorLength,
  _Out_          PULONG            ReturnLength
);

 NTSTATUS ZwEnumerateValueKey(
  _In_            HANDLE                      KeyHandle,
  _In_            ULONG                       Index,
  _In_            KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
   PVOID                       KeyValueInformation,
  _In_            ULONG                       Length,
  _Out_           PULONG                      ResultLength
);

 NTSTATUS ZwFlushKey(
  _In_ HANDLE KeyHandle
);


NTSYSCALLAPI NTSTATUS ZwGetNotificationResourceManager(
  _In_            HANDLE                    ResourceManagerHandle,
  _Out_           PTRANSACTION_NOTIFICATION TransactionNotification,
  _In_            ULONG                     NotificationLength,
  _In_            PLARGE_INTEGER            Timeout,
   PULONG                    ReturnLength,
  _In_            ULONG                     Asynchronous,
  _In_opt_  ULONG_PTR                 AsynchronousContext
);

 NTSTATUS ZwLoadDriver(
  _In_ PUNICODE_STRING DriverServiceName
);

 NTSTATUS ZwMakeTemporaryObject(
  _In_ HANDLE Handle
);

 NTSTATUS ZwMapViewOfSection(
  _In_                HANDLE          SectionHandle,
  _In_                HANDLE          ProcessHandle,
             PVOID           *BaseAddress,
  _In_                ULONG_PTR       ZeroBits,
  _In_                SIZE_T          CommitSize,
  _In_ _Out_ PLARGE_INTEGER  SectionOffset,
             PSIZE_T         ViewSize,
  _In_                SECTION_INHERIT InheritDisposition,
  _In_                ULONG           AllocationType,
  _In_                ULONG           Win32Protect
);

NTSYSCALLAPI NTSTATUS ZwOpenEnlistment(
  _Out_          PHANDLE            EnlistmentHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_           HANDLE             RmHandle,
  _In_           LPGUID             EnlistmentGuid,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes
);

NTSYSCALLAPI NTSTATUS ZwOpenEvent(
  _Out_ PHANDLE            EventHandle,
  _In_  ACCESS_MASK        DesiredAccess,
  _In_  POBJECT_ATTRIBUTES ObjectAttributes
);

 NTSTATUS ZwOpenFile(
  _Out_ PHANDLE            FileHandle,
  _In_  ACCESS_MASK        DesiredAccess,
  _In_  POBJECT_ATTRIBUTES ObjectAttributes,
  _Out_ PIO_STATUS_BLOCK   IoStatusBlock,
  _In_  ULONG              ShareAccess,
  _In_  ULONG              OpenOptions
);

 NTSTATUS ZwOpenKey(
  _Out_ PHANDLE            KeyHandle,
  _In_  ACCESS_MASK        DesiredAccess,
  _In_  POBJECT_ATTRIBUTES ObjectAttributes
);

 NTSTATUS ZwOpenKeyEx(
  _Out_ PHANDLE            KeyHandle,
  _In_  ACCESS_MASK        DesiredAccess,
  _In_  POBJECT_ATTRIBUTES ObjectAttributes,
  _In_  ULONG              OpenOptions
);

 NTSTATUS ZwOpenKeyTransacted(
  _Out_ PHANDLE            KeyHandle,
  _In_  ACCESS_MASK        DesiredAccess,
  _In_  POBJECT_ATTRIBUTES ObjectAttributes,
  _In_  HANDLE             TransactionHandle
);

 NTSTATUS ZwOpenKeyTransactedEx(
  _Out_ PHANDLE            KeyHandle,
  _In_  ACCESS_MASK        DesiredAccess,
  _In_  POBJECT_ATTRIBUTES ObjectAttributes,
  _In_  ULONG              OpenOptions,
  _In_  HANDLE             TransactionHandle
);

NTSYSCALLAPI NTSTATUS ZwOpenResourceManager(
  _Out_          PHANDLE            ResourceManagerHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_           HANDLE             TmHandle,
  _In_           LPGUID             ResourceManagerGuid,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes
);

 NTSTATUS ZwOpenSection(
  _Out_ PHANDLE            SectionHandle,
  _In_  ACCESS_MASK        DesiredAccess,
  _In_  POBJECT_ATTRIBUTES ObjectAttributes
);

 NTSTATUS ZwOpenSymbolicLinkObject(
  _Out_ PHANDLE            LinkHandle,
  _In_  ACCESS_MASK        DesiredAccess,
  _In_  POBJECT_ATTRIBUTES ObjectAttributes
);

NTSYSCALLAPI NTSTATUS ZwOpenTransaction(
  _Out_          PHANDLE            TransactionHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
  _In_           LPGUID             Uow,
  _In_opt_ HANDLE             TmHandle
);

NTSYSCALLAPI NTSTATUS ZwOpenTransactionManager(
  _Out_          PHANDLE            TmHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
  _In_opt_ PUNICODE_STRING    LogFileName,
  _In_opt_ LPGUID             TmIdentity,
  _In_opt_ ULONG              OpenOptions
);

NTSYSCALLAPI NTSTATUS ZwPrepareComplete(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwPrepareEnlistment(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwPrePrepareComplete(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwPrePrepareEnlistment(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

 NTSTATUS ZwQueryFullAttributesFile(
  _In_  POBJECT_ATTRIBUTES             ObjectAttributes,
  _Out_ PFILE_NETWORK_OPEN_INFORMATION FileInformation
);

 NTSTATUS ZwQueryInformationByName(
  _In_  POBJECT_ATTRIBUTES     ObjectAttributes,
  _Out_ PIO_STATUS_BLOCK       IoStatusBlock,
  _Out_ PVOID                  FileInformation,
  _In_  ULONG                  Length,
  _In_  FILE_INFORMATION_CLASS FileInformationClass
);

NTSYSCALLAPI NTSTATUS ZwQueryInformationEnlistment(
  _In_            HANDLE                       EnlistmentHandle,
  _In_            ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
  _Out_           PVOID                        EnlistmentInformation,
  _In_            ULONG                        EnlistmentInformationLength,
   PULONG                       ReturnLength
);

 NTSTATUS ZwQueryInformationFile(
  _In_  HANDLE                 FileHandle,
  _Out_ PIO_STATUS_BLOCK       IoStatusBlock,
  _Out_ PVOID                  FileInformation,
  _In_  ULONG                  Length,
  _In_  FILE_INFORMATION_CLASS FileInformationClass
);

NTSYSCALLAPI NTSTATUS ZwQueryInformationResourceManager(
  _In_            HANDLE                            ResourceManagerHandle,
  _In_            RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
  _Out_           PVOID                             ResourceManagerInformation,
  _In_            ULONG                             ResourceManagerInformationLength,
   PULONG                            ReturnLength
);

NTSYSCALLAPI NTSTATUS ZwQueryInformationTransaction(
  _In_            HANDLE                        TransactionHandle,
  _In_            TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
  _Out_           PVOID                         TransactionInformation,
  _In_            ULONG                         TransactionInformationLength,
   PULONG                        ReturnLength
);

NTSYSCALLAPI NTSTATUS ZwQueryInformationTransactionManager(
  _In_            HANDLE                               TransactionManagerHandle,
  _In_            TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
  _Out_           PVOID                                TransactionManagerInformation,
  _In_            ULONG                                TransactionManagerInformationLength,
   PULONG                               ReturnLength
);

 NTSTATUS ZwQueryKey(
  _In_            HANDLE                KeyHandle,
  _In_            KEY_INFORMATION_CLASS KeyInformationClass,
   PVOID                 KeyInformation,
  _In_            ULONG                 Length,
  _Out_           PULONG                ResultLength
);

 NTSTATUS ZwQuerySymbolicLinkObject(
  _In_            HANDLE          LinkHandle,
         PUNICODE_STRING LinkTarget,
   PULONG          ReturnedLength
);

 NTSTATUS ZwQueryValueKey(
  _In_            HANDLE                      KeyHandle,
  _In_            PUNICODE_STRING             ValueName,
  _In_            KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
   PVOID                       KeyValueInformation,
  _In_            ULONG                       Length,
  _Out_           PULONG                      ResultLength
);

 NTSTATUS ZwReadFile(
  _In_           HANDLE           FileHandle,
  _In_opt_ HANDLE           Event,
  _In_opt_ PIO_APC_ROUTINE  ApcRoutine,
  _In_opt_ PVOID            ApcContext,
  _Out_          PIO_STATUS_BLOCK IoStatusBlock,
  _Out_          PVOID            Buffer,
  _In_           ULONG            Length,
  _In_opt_ PLARGE_INTEGER   ByteOffset,
  _In_opt_ PULONG           Key
);

NTSYSCALLAPI NTSTATUS ZwReadOnlyEnlistment(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwRecoverEnlistment(
  _In_           HANDLE EnlistmentHandle,
  _In_opt_ PVOID  EnlistmentKey
);


NTSYSCALLAPI NTSTATUS ZwRecoverResourceManager(
  _In_ HANDLE ResourceManagerHandle
);

NTSYSCALLAPI NTSTATUS ZwRecoverTransactionManager(
  _In_ HANDLE TransactionManagerHandle
);

NTSYSCALLAPI NTSTATUS ZwRollbackComplete(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwRollbackEnlistment(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwRollbackTransaction(
  _In_ HANDLE  TransactionHandle,
  _In_ BOOLEAN Wait
);

NTSYSCALLAPI NTSTATUS ZwRollforwardTransactionManager(
  _In_           HANDLE         TransactionManagerHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

NTSYSCALLAPI NTSTATUS ZwSetInformationEnlistment(
  _In_ HANDLE                       EnlistmentHandle,
  _In_ ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
  _In_ PVOID                        EnlistmentInformation,
  _In_ ULONG                        EnlistmentInformationLength
);

 NTSTATUS ZwSetInformationFile(
  _In_  HANDLE                 FileHandle,
  _Out_ PIO_STATUS_BLOCK       IoStatusBlock,
  _In_  PVOID                  FileInformation,
  _In_  ULONG                  Length,
  _In_  FILE_INFORMATION_CLASS FileInformationClass
);

NTSYSCALLAPI NTSTATUS ZwSetInformationResourceManager(
  HANDLE                            ResourceManagerHandle,
  RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
  PVOID                             ResourceManagerInformation,
  ULONG                             ResourceManagerInformationLength
);

NTSYSCALLAPI NTSTATUS ZwSetInformationTransaction(
  _In_ HANDLE                        TransactionHandle,
  _In_ TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
  _In_ PVOID                         TransactionInformation,
  _In_ ULONG                         TransactionInformationLength
);

 NTSTATUS ZwSetValueKey(
  _In_           HANDLE          KeyHandle,
  _In_           PUNICODE_STRING ValueName,
  _In_opt_ ULONG           TitleIndex,
  _In_           ULONG           Type,
  _In_opt_ PVOID           Data,
  _In_           ULONG           DataSize
);

NTSYSCALLAPI NTSTATUS ZwSinglePhaseReject(
  _In_           HANDLE         EnlistmentHandle,
  _In_opt_ PLARGE_INTEGER TmVirtualClock
);

 NTSTATUS ZwUnloadDriver(
  _In_ PUNICODE_STRING DriverServiceName
);

 NTSTATUS ZwUnmapViewOfSection(
  _In_           HANDLE ProcessHandle,
  _In_opt_ PVOID  BaseAddress
);

 NTSTATUS ZwWriteFile(
  _In_           HANDLE           FileHandle,
  _In_opt_ HANDLE           Event,
  _In_opt_ PIO_APC_ROUTINE  ApcRoutine,
  _In_opt_ PVOID            ApcContext,
  _Out_          PIO_STATUS_BLOCK IoStatusBlock,
  _In_           PVOID            Buffer,
  _In_           ULONG            Length,
  _In_opt_ PLARGE_INTEGER   ByteOffset,
  _In_opt_ PULONG           Key
);


#endif