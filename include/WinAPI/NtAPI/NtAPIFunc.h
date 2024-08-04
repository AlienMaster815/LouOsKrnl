#ifndef _NTAPI_FUNC_H
#define _NTAPI_FUNC_H
#include <NtAPI.h>
#pragma once

#define min(a, b) ((a) < (b) ? (a) : (b))

typedef void* HANDLE;


typedef CHAR** PSTR;
typedef NTSTATUS* PNTSTATUS;

typedef struct _OFFSETINSTANCEDATAANDLENGTH {
    ULONG OffsetInstanceData;
    ULONG LengthInstanceData;
} OFFSETINSTANCEDATAANDLENGTH, * POFFSETINSTANCEDATAANDLENGTH;

typedef struct _IMAGE_EXPORT_DIRECTORY {
    DWORD   Characteristics;
    DWORD   TimeDateStamp;
    WORD    MajorVersion;
    WORD    MinorVersion;
    DWORD   Name;
    DWORD   Base;
    DWORD   NumberOfFunctions;
    DWORD   NumberOfNames;
    DWORD   AddressOfFunctions;     // RVA from base of image
    DWORD   AddressOfNames;         // RVA from base of image
    DWORD   AddressOfNameOrdinals;  // RVA from base of image
} IMAGE_EXPORT_DIRECTORY, * PIMAGE_EXPORT_DIRECTORY;

typedef enum {
    KernelMode,
    UserMode,
}KPROCESSOR_MODE;

typedef UCHAR KIRQL;

//TODO: Find the Definitions of these in the kit
//  and replace these with the actual definition

//Filler Types Until Found
typedef void* FILE_INTERNAL_INFORMATION;
typedef void* PREPARSE_DATA_BUFFER;
typedef void* PFILE_TIMESTAMPS;
typedef void* TOKEN_TYPE;
typedef BOOLEAN* PBOOLEAN;
typedef void* OBJECT_INFORMATION_CLASS;
typedef ULONG SECURITY_INFORMATION;
typedef void* MEMORY_INFORMATION_CLASS;
typedef void* TOKEN_INFORMATION_CLASS;
typedef ULONG EXECUTION_STATE;
typedef const WCHAR* PCWCH;
typedef const CHAR* PCCH;
typedef void* VIRTUAL_MEMORY_INFORMATION_CLASS;
typedef void* PMEMORY_RANGE_ENTRY;
typedef const char* PCSZ;
typedef void* PSYSCTL_IRP_DISPOSITION;
typedef void* PWMI_QUERY_REGINFO;
typedef void* PWMI_QUERY_DATABLOCK;
typedef void* PWMI_SET_DATABLOCK;
typedef void* PWMI_SET_DATAITEM;
typedef void* PWMI_FUNCTION_CONTROL;
typedef void* PWMI_EXECUTE_METHOD;
typedef void* EMULATOR_PORT_ACCESS_TYPE;
typedef PSTR NTSTRSAFE_PSTR;
typedef PCSTR NTSTRSAFE_PCSTR;
typedef PWSTR NTSTRSAFE_PWSTR;
typedef PCWSTR NTSTRSAFE_PCWSTR;
typedef const char* PCNZCH;
typedef const wchar_t* PCNZWCH;
typedef const unsigned short* PCUNZWCH;
typedef PCNZCH STRSAFE_PCNZCH;
typedef PCNZWCH STRSAFE_PCNZWCH;
typedef PCUNZWCH STRSAFE_PCUNZWCH;
typedef void* PEPHANDLE;
typedef void* PACPI_METHOD_ARGUMENT; //Start Here
typedef void* POHANDLE;
typedef void* PPEPCALLBACKNOTIFYDPM;
typedef void* PPEPCALLBACKNOTIFYPPM;
typedef void* PPEPCALLBACKNOTIFYACPI;
typedef void* PPOFXCALLBACKREQUESTWORKER;
typedef void* PPOFXCALLBACKENUMERATEUNMASKEDINTERRUPTS;
typedef void* PPOFXCALLBACKPROCESSORHALT;
typedef void* PPOFXCALLBACKREQUESTINTERRUPT;
typedef void* PPOFXCALLBACKCRITICALRESOURCE;
typedef void* PPOFXCALLBACKPROCESSORIDLEVETO;
typedef void* PPOFXCALLBACKPLATFORMIDLEVETO;
typedef void* PPOFXCALLBACKUPDATEPROCESSORIDLESTATE;
typedef void* PPOFXCALLBACKUPDATEPLATFORMIDLESTATE;
typedef void* PPOFXCALLBACKREQUESTCOMMON;
typedef void* PPEPCALLBACKPOWERONCRASHDUMPDEVICE;
typedef void* PEPCALLBACKNOTIFYACPI;
typedef void* ACPI_METHOD_ARGUMENT;
typedef void* PPEP_KERNEL_INFORMATION;
typedef void* PO_FX_COMPONENT;
typedef void* PPO_FX_COMPONENT_IDLE_STATE_CALLBACK;
typedef void* PPO_FX_COMPONENT_CRITICAL_TRANSITION_CALLBACK;
typedef void* PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK;
typedef void* PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK;
typedef void* FLOATING_SAVE_AREA;
typedef void* HalQuerySystemInformation;
typedef void* HalSetSystemInformation;
typedef void* HalQueryBusSlots;
typedef void* HalIoReadPartitionTable;
typedef void* HalIoSetPartitionInformation;
typedef void* HalIoWritePartitionTable;
typedef void* HalHandlerForBus;
typedef void* HalReferenceBusHandler;
typedef void* HalInitPnpDriver;
typedef void* HalInitPowerManagement;
typedef void* HalGetDmaAdapter;
typedef void* HalGetInterruptTranslator;
typedef void* HalStartMirroring;
typedef void* HalEndMirroring;
typedef void* HalMirrorPhysicalMemory;
typedef void* HalEndOfBoot;
typedef void* HalMirrorVerify;
typedef void* HalGetAcpiTable;
typedef void* HalSetPciErrorHandlerCallback;
typedef void* HalGetPrmCache;
typedef void* KSYSTEM_TIME;
typedef void* NT_PRODUCT_TYPE;
typedef void* ALTERNATIVE_ARCHITECTURE_TYPE;
typedef void* XSTATE_CONFIGURATION;
typedef void* PPHYSICAL_COUNTER_EVENT_BUFFER_OVERFLOW_HANDLER;
typedef void* PPHYSICAL_COUNTER_OVERFLOW_HANDLER;
typedef void* UUID;
typedef void* PGENERIC_MAPPING;
typedef void* PKTHREAD;
typedef void* PBOOT_DRIVER_CALLBACK_FUNCTION;
typedef void* PDRIVER_REINITIALIZE;
typedef void* LOGICAL;
typedef void* PEXPAND_STACK_CALLOUT;
typedef void* KPRIORITY;
typedef void* KDPC_IMPORTANCE;
typedef void* NODE_REQUIREMENT;
typedef void* PPHYSICAL_MEMORY_RANGE;
typedef void* PCLIENT_ID;
typedef void* CLIENT_ID;
typedef void* PZZWSTR;
typedef void* PGET_LOCATION_STRING;
typedef void* PESILO;
typedef void* SILO_CONTEXT_CLEANUP_CALLBACK;
typedef void* PEJOB;
typedef void* PSILO_MONITOR;
typedef void* PCREATE_THREAD_NOTIFY_ROUTINE;
typedef void* PLOAD_IMAGE_NOTIFY_ROUTINE;
typedef void* PCREATE_PROCESS_NOTIFY_ROUTINE;
typedef void* PCREATE_PROCESS_NOTIFY_ROUTINE_EX;
typedef void* PRTL_RUN_ONCE;
typedef void* PCORRELATION_VECTOR;
typedef void* PACCESS_MASK;
typedef void* PRTL_RUN_ONCE_INIT_FN;
typedef void* LUID;
typedef void* SILO_MONITOR_CREATE_CALLBACK;
typedef void* SILO_MONITOR_TERMINATE_CALLBACK;
typedef void* WHEA_ERROR_SOURCE_TYPE;
typedef void* WHEA_EVENT_LOG_ENTRY;
typedef void* PWHEA_ERROR_RECORD;
typedef void* PWHEA_ERROR_PACKET_V2;
typedef void* WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS;
typedef void* WHEA_ERROR_SEVERITY;
typedef void* WHEA_NOTIFICATION_DESCRIPTOR;
typedef void* WHEAP_DPC_ERROR_EVENT_TYPE;
typedef void* PFN_NUMBER;
typedef void* PWHEA_ERROR_SOURCE_CONFIGURATION;
typedef void* WHEA_SIGNAL_HANDLER_OVERRIDE_CALLBACK;
typedef void* PLUID;
typedef void* PGET_COMMON_BUFFER_FROM_VECTOR_BY_INDEX;
typedef void* PFREE_COMMON_BUFFER_FROM_VECTOR;
typedef void* PFREE_COMMON_BUFFER_VECTOR;
typedef void* PCREATE_COMMON_BUFFER_FROM_MDL;
typedef void* PALLOCATE_COMMON_BUFFER_VECTOR;
typedef void* PALLOCATE_COMMON_BUFFER_WITH_BOUNDS;
typedef void* PGET_DMA_DOMAIN;
typedef void* PLEAVE_DMA_DOMAIN;
typedef void* PJOIN_DMA_DOMAIN;
typedef void* PFLUSH_DMA_BUFFER;
typedef void* PALLOCATE_DOMAIN_COMMON_BUFFER;
typedef void* PCANCEL_MAPPED_TRANSFER;
typedef void* PFREE_ADAPTER_OBJECT;
typedef void* PFLUSH_ADAPTER_BUFFERS_EX;
typedef void* PBUILD_SCATTER_GATHER_LIST_EX;
typedef void* PGET_SCATTER_GATHER_LIST_EX;
typedef void* PMAP_TRANSFER_EX;
typedef void* PCANCEL_ADAPTER_CHANNEL;
typedef void* PCONFIGURE_ADAPTER_CHANNEL;
typedef void* PALLOCATE_ADAPTER_CHANNEL_EX;
typedef void* PALLOCATE_COMMON_BUFFER_EX;
typedef void* PINITIALIZE_DMA_TRANSFER_CONTEXT;
typedef void* PGET_DMA_TRANSFER_INFO;
typedef void* PGET_DMA_ADAPTER_INFO;
typedef void* PBUILD_MDL_FROM_SCATTER_GATHER_LIST;
typedef void* PBUILD_SCATTER_GATHER_LIST;
typedef void* PCALCULATE_SCATTER_GATHER_LIST_SIZE;
typedef void* PPUT_SCATTER_GATHER_LIST;
typedef void* PGET_SCATTER_GATHER_LIST;
typedef void* PREAD_DMA_COUNTER;
typedef void* PGET_DMA_ALIGNMENT;
typedef void* PMAP_TRANSFER;
typedef void* PFREE_MAP_REGISTERS;
typedef void* PFREE_ADAPTER_CHANNEL;
typedef void* PFLUSH_ADAPTER_BUFFERS;
typedef void* PALLOCATE_ADAPTER_CHANNEL;
typedef void* PFREE_COMMON_BUFFER;
typedef void* PALLOCATE_COMMON_BUFFER;
typedef void* PPUT_DMA_ADAPTER;
typedef void* PGPE_CONNECT_VECTOR2;
typedef void* PGPE_DISCONNECT_VECTOR2;
typedef void* PGPE_ENABLE_EVENT2;
typedef void* PGPE_DISABLE_EVENT2;
typedef void* PGPE_CLEAR_STATUS2;
typedef void* PREGISTER_FOR_DEVICE_NOTIFICATIONS2;
typedef void* PUNREGISTER_FOR_DEVICE_NOTIFICATIONS2;
typedef void* PTRANSLATE_BUS_ADDRESS;
typedef void* PGET_DMA_ADAPTER;
typedef void* PGET_SET_DEVICE_DATA;
typedef void* PGET_UPDATED_BUS_RESOURCE;
typedef void* PCLFS_CLIENT_ADVANCE_TAIL_CALLBACK;
typedef void* PCLFS_CLIENT_LFF_HANDLER_COMPLETE_CALLBACK;
typedef void* PCLFS_CLIENT_LOG_UNPINNED_CALLBACK;
typedef void* PLOG_FILE_OBJECT;
typedef void* PCLFS_LSN;
typedef void* PPLOG_FILE_OBJECT;
typedef void* PALLOCATE_FUNCTION;
typedef void* PFREE_FUNCTION;
typedef void* CLFS_SCAN_MODE;
typedef void* PCLFS_SCAN_CONTEXT;
typedef void* CLFS_LSN;
typedef void* CLFS_IOSTATS_CLASS;
typedef void* CLFS_CONTAINER_ID;
typedef void* CLFS_MGMT_CLIENT;
typedef void* PCLFS_MGMT_CLIENT;
typedef void* PCLFS_SET_LOG_SIZE_COMPLETE_CALLBACK;
typedef void* CLFS_LOG_INFORMATION_CLASS;
typedef void* PCLFS_RECORD_TYPE;
typedef void* PCLFS_WRITE_ENTRY;
typedef void* CLFS_CONTAINER_STATE;
typedef void* CLFS_NODE_ID;
typedef void* CM_PARTIAL_RESOURCE_LIST;
typedef void* PEX_CALLBACK_FUNCTION;
typedef void* PSET_D3COLD_SUPPORT;
typedef void* PD3COLD_REQUEST_CORE_POWER_RAIL;
typedef void* PD3COLD_REQUEST_AUX_POWER;
typedef void* PD3COLD_REQUEST_PERST_DELAY;
typedef void* PGET_IDLE_WAKE_INFO;
typedef void* PGET_D3COLD_CAPABILITY;
typedef void* PGET_D3COLD_LAST_TRANSITION_STATUS;
typedef void* DMA_WIDTH;
typedef void* DMA_SPEED;
typedef void* PIOMMU_DEVICE_FAULT_HANDLER;
typedef void* PDEVICE_RESET_HANDLER;
typedef void* PDEVICE_QUERY_BUS_SPECIFIC_RESET_HANDLER;
typedef void* PDEVICE_BUS_SPECIFIC_RESET_HANDLER;
typedef void* PGET_DEVICE_RESET_STATUS;
typedef void* DMA_IOMMU_INTERFACE_V3;
typedef void* PIOMMU_DOMAIN_CREATE;
typedef void* PIOMMU_DOMAIN_DELETE;
typedef void* PIOMMU_DOMAIN_ATTACH_DEVICE;
typedef void* PIOMMU_DOMAIN_DETACH_DEVICE;
typedef void* PIOMMU_FLUSH_DOMAIN;
typedef void* PIOMMU_FLUSH_DOMAIN_VA_LIST;
typedef void* PIOMMU_QUERY_INPUT_MAPPINGS;
typedef void* PIOMMU_MAP_LOGICAL_RANGE;
typedef void* PIOMMU_UNMAP_LOGICAL_RANGE;
typedef void* PIOMMU_MAP_IDENTITY_RANGE;
typedef void* PIOMMU_UNMAP_IDENTITY_RANGE;
typedef void* PIOMMU_SET_DEVICE_FAULT_REPORTING;
typedef void* PIOMMU_DOMAIN_CONFIGURE;
typedef void* PIOMMU_FREE_RESERVED_LOGICAL_ADDRESS_RANGE;
typedef void* PIOMMU_MAP_RESERVED_LOGICAL_RANGE;
typedef void* PIOMMU_UNMAP_RESERVED_LOGICAL_RANGE;
typedef void* PIOMMU_DEVICE_CREATE;
typedef void* PIOMMU_DOMAIN_DELETE;
typedef void* PIOMMU_DOMAIN_CREATE_EX;
typedef void* PIOMMU_DOMAIN_ATTACH_DEVICE_EX;
typedef void* PIOMMU_DOMAIN_DETACH_DEVICE_EX;
typedef void* PIOMMU_MAP_LOGICAL_RANGE_EX;
typedef void* PIOMMU_MAP_IDENTITY_RANGE_EX;
typedef void* PIOMMU_UNMAP_IDENTITY_RANGE_EX;
typedef void* PIOMMU_SET_DEVICE_FAULT_REPORTING_EX;
typedef void* PIOMMU_DEVICE_QUERY_DOMAIN_TYPES;
typedef void* PIOMMU_REGISTER_INTERFACE_STATE_CHANGE_CALLBACK;
typedef void* PIOMMU_UNREGISTER_INTERFACE_STATE_CHANGE_CALLBACK;
typedef void* PIOMMU_RESERVE_LOGICAL_ADDRESS_RANGE;
typedef void* PIOMMU_DEVICE_DELETE;
typedef void* REGHANDLE;
typedef void* EVENT_INFO_CLASS;
typedef void* PFAST_MUTEX;
typedef void* PERESOURCE;
typedef void* PEX_RUNDOWN_REF;
typedef void* PEX_SPIN_LOCK;
typedef void* PEX_RUNDOWN_REF_CACHE_AWARE;
typedef void* PLOOKASIDE_LIST_EX;
typedef void* PNPAGED_LOOKASIDE_LIST;
typedef void* PPAGED_LOOKASIDE_LIST;
typedef void* POOL_FLAGS;
typedef void* PCPOOL_EXTENDED_PARAMETER;
typedef void* PEX_TIMER;
typedef void* PEXT_CALLBACK;
typedef void* PEXT_CANCEL_PARAMETERS;
typedef void* PCALLBACK_OBJECT;
typedef void* FIRMWARE_TYPE;
typedef void* PALLOCATE_FUNCTION_EX;
typedef void* PFREE_FUNCTION_EX;
typedef void* PEX_PUSH_LOCK;
typedef void* PSLIST_HEADER;
typedef void* PCALLBACK_FUNCTION;
typedef void* ERESOURCE_THREAD;
typedef void* PEXT_DELETE_CALLBACK;
typedef void* PIO_COMPLETION_CONTEXT;
typedef void* PSECTION_OBJECT_POINTERS;
typedef void* PFPGA_BUS_SCAN;
typedef void* PFPGA_CONTROL_LINK;
typedef void* PFPGA_CONTROL_CONFIG_SPACE;
typedef void* PFPGA_CONTROL_ERROR_REPORTING;
typedef void* IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS;
typedef void* IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS;
typedef void* IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS;
typedef void* PSECURITY_QUALITY_OF_SERVICE;
typedef void* PACCESS_STATE;
typedef void* PNAMED_PIPE_CREATE_PARAMETERS;
typedef void* DIRECTORY_NOTIFY_INFORMATION_CLASS;
typedef void* PFILE_GET_QUOTA_INFORMATION;
typedef void* DEVICE_RELATION_TYPE;
typedef void* LCID;
typedef void* PPOWER_SEQUENCE;
typedef void* PIO_COMPLETION_ROUTINE;
typedef void* PVOID64;
typedef void* PKIRQL;
typedef void* PIO_REMOVE_LOCK;
typedef void* PIO_WORKITEM;
typedef void* PSHARE_ACCESS;
typedef void* PKSERVICE_ROUTINE;
typedef void* CREATE_FILE_TYPE;
typedef void* PKSTART_ROUTINE;
typedef void* PIO_CSQ;
typedef void* PIO_CSQ_INSERT_IRP;
typedef void* PIO_CSQ_REMOVE_IRP;
typedef void* PIO_CSQ_PEEK_NEXT_IRP;
typedef void* PIO_CSQ_ACQUIRE_LOCK;
typedef void* PIO_CSQ_RELEASE_LOCK;
typedef void* PIO_CSQ_COMPLETE_CANCELED_IRP;
typedef void* PIO_CSQ_INSERT_IRP_EX;
typedef void* PIO_CSQ_IRP_CONTEXT;
typedef void* PIO_PERSISTED_MEMORY_ENUMERATION_CALLBACK;
typedef void* DEVPROPKEY;
typedef void* PDEVPROPTYPE;
typedef void* DEVICE_REGISTRY_PROPERTY;
typedef void* DRIVER_DIRECTORY_TYPE;
typedef void* PIO_DPC_ROUTINE;
typedef void* PIO_TIMER_ROUTINE;
typedef void* _IORING_OBJECT;
typedef void* POOL_EXTENDED_PARAMS_SECURE_POOL;
typedef void* POOL_NODE_REQUIREMENT;
typedef void* SCATTER_GATHER_ELEMENT;
typedef void* PGET_SDEV_IDENTIFIER;
typedef void* PREENUMERATE_SELF;
typedef void* POBJECT_NAME_INFORMATION;
typedef void* PSECURITY_INFORMATION;
typedef void* POBJECT_TYPE;
typedef void* OB_OPERATION;
typedef void* POB_PRE_OPERATION_CALLBACK;
typedef void* POB_POST_OPERATION_CALLBACK;
typedef void* PPCI_SET_ATS;
typedef void* PPCI_MSIX_SET_ENTRY;
typedef void* PPCI_MSIX_MASKUNMASK_ENTRY;
typedef void* PPCI_MSIX_GET_ENTRY;
typedef void* PPCI_MSIX_GET_TABLE_SIZE;
typedef void* PPCI_SET_ACS2;
typedef void* PPO_FX_DEVICE_POWER_REQUIRED_CALLBACK;
typedef void* PPO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK;
typedef void* PPO_FX_POWER_CONTROL_CALLBACK;
typedef void* PPO_FX_DIRECTED_POWER_UP_CALLBACK;
typedef void* PPO_FX_DIRECTED_POWER_DOWN_CALLBACK;
typedef void* IOMMU_DEVICE_CREATION_CONFIGURATION_PASID;
typedef void* IOMMU_DMA_LOGICAL_ADDRESS;
typedef void* PPFN_NUMBER;
typedef void* PIO_WORKITEM_ROUTINE;
typedef void* PIO_WORKITEM_ROUTINE_EX;
typedef void* PIO_CONTAINER_NOTIFICATION_FUNCTION;
typedef void* PDRIVER_NOTIFICATION_CALLBACK_ROUTINE;
typedef void* PDEVICE_CHANGE_COMPLETE_CALLBACK;
typedef void* DEVPROPTYPE;
typedef void* WMI_NOTIFICATION_CALLBACK;
typedef void* PKGUARDED_MUTEX;
typedef void* PKLOCK_QUEUE_HANDLE;
typedef void* SpinLock;
typedef void* OldIrql;
typedef void* PKTRIAGE_DUMP_DATA_ARRAY;
typedef void* PKTIMER;
typedef void* PKBUGCHECK_CALLBACK_RECORD;
typedef void* PKBUGCHECK_REASON_CALLBACK_RECORD;
typedef void* PRKSEMAPHORE;
typedef void* TIMER_TYPE;
typedef void* PKIPI_BROADCAST_WORKER;
typedef void* LOGICAL_PROCESSOR_RELATIONSHIP;
typedef void* PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX;
typedef void* PBOUND_CALLBACK;
typedef void* PKBUGCHECK_CALLBACK_ROUTINE;
typedef void* PKBUGCHECK_REASON_CALLBACK_ROUTINE;
typedef void* PNMI_CALLBACK;
typedef void* PPROCESSOR_CALLBACK_FUNCTION;
typedef void* PXSTATE_SAVE;
typedef void* PKFLOATING_SAVE;
typedef void* PKSYNCHRONIZE_ROUTINE;
typedef void* KWAIT_REASON;
typedef void* PKWAIT_BLOCK;
typedef void* WAIT_TYPE;
typedef void* PMM_MDL_ROUTINE;
typedef void* LOCK_OPERATION;
typedef void* PFILE_SEGMENT_ELEMENT;
typedef void* MM_SYSTEMSIZE;
typedef void* NOTIFICATION_MASK;
typedef void* PTRANSACTION_NOTIFICATION;
typedef void* PARTITION_INFORMATION_CLASS;
typedef void* TRANSACTIONMANAGER_INFORMATION_CLASS;
typedef void* POBJECT_HANDLE_INFORMATION;
typedef void* PPO_FX_COMPONENT_PERF_STATE_CALLBACK;
typedef void* PPO_FX_DEVICE;
typedef void* PREQUEST_POWER_COMPLETE;
typedef void* PAFFINITY_TOKEN;
typedef void* PPTM_DEVICE_QUERY_GRANULARITY;
typedef void* PPTM_DEVICE_QUERY_TIME_SOURCE;
typedef void* PPTM_DEVICE_ENABLE;
typedef void* PPTM_DEVICE_DISABLE;
typedef void* PCANSI_STRING;
typedef void* PRTL_BITMAP;
typedef void* PRTL_BITMAP_RUN;
typedef void* PUTF8_STRING;
typedef void* PRTL_QUERY_REGISTRY_TABLE;
typedef void* REFGUID;
typedef void* PTIME_FIELDS;
typedef void* PSECURITY_SUBJECT_CONTEXT;
typedef void* PKENLISTMENT;
typedef void* PKTRANSACTION;
typedef void* PRKRESOURCEMANAGER;
typedef void* PKRESOURCEMANAGER;
typedef void* PTM_RM_NOTIFICATION;
typedef void* PUOW;
typedef void* PRKTM;
typedef void* PGUID;
typedef void* PKTM;
typedef void* TRACEHANDLE;
typedef void* SECTION_INHERIT;
typedef void* PKINTERRUPT_ROUTINE;

#define POOL_EXTENDED_PARAMETER_TYPE_BITS 1
#define POOL_EXTENDED_PARAMETER_REQUIRED_FIELD_BITS 1
#define POOL_EXTENDED_PARAMETER_RESERVED_BITS 1
#define MEM_EXTENDED_PARAMETER_TYPE_BITS 1
//ENDOF: TODO LIST\n

typedef uintptr_t PHYSICAL_ADDRESS;



#ifdef __cplusplus
#define NTHALAPI extern "C"
#define NTSYSCALLAPI extern "C"
#define NTSYSAPI extern "C"
#define CLFSUSER_API extern "C"
#define NTAPI_INLINE inline
#define NTKERNELAPI extern "C"
#define _DECL_HAL_KE_IMPORT extern "C"
#else

#define NTHALAPI extern
#define NTSYSCALLAPI extern
#define NTSYSAPI extern
#define CLFSUSER_API extern
#define NTAPI_INLINE inline
#define NTKERNELAPI extern
#define _DECL_HAL_KE_IMPORT extern
#endif


typedef size_t SIZE_T, * PSIZE_T;


//VOID RtlCopyUnicodeString(_Inout_ PUNICODE_STRING DestinationString, _In_opt_ PUNICODE_STRING SourceString);
ULONG DbgPrint(_In_z_ _Printf_format_string_ PCSTR Format, ...);
ULONG DbgPrintEx ( _In_ ULONG ComponentId, _In_ ULONG Level, _In_z_ _Printf_format_string_ PCSTR Format, ...);

#include "Misc/undocumentedTypes.h"
#include "aux_klib.h"
#include "ioaccess.h"
#include "miniport.h"
#include "ntddk.h"
#include "ntddsfio.h"
#include "ntddsysenv.h"
#include "ntifs.h"
#include "wmistr.h"
#include "ntddsfio.h"
#include "wmilib.h"
#include "irp.h"
#include "ntddsysenv.h"
#include "Ntintsafe.h"
#include "ntoapi.h"
#include "ntifs.h"
#include "wmidata.h"
#include "wdmsec.h"
#include "procgrp.h"
#include "ntstrsafe.h"
#include "pep_x.h"
#include "pepfx.h"
#include "wdm.h"
#include "ntstatus.h"
#include "iointx.h"

#endif
