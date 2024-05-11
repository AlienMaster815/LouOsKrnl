#ifndef _NTAPI_FUNC_H
#define _NTAPI_FUNC_H
#include <NtAPI.h>
#pragma once

typedef void* HANDLE;


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

typedef void* PKINTERRUPT;

typedef struct _IO_DISCONNECT_INTERRUPT_PARAMETERS {
    ULONG Version;             // Indicates the version of the structure
    union {
        struct {
            PVOID ConnectionContext; // Context information from IoConnectInterruptEx
        } DisconnectParameters;
    };
} IO_DISCONNECT_DISCONNECT_PARAMETERS, * PIO_DISCONNECT_INTERRUPT_PARAMETERS;

typedef enum {
    KernelMode,
    UserMode,
}KPROCESSOR_MODE;

typedef UCHAR KIRQL;

//TODO: Find the Definitions of these in the kit
//  and replace these with the actual definition

//Filler Types Until Found
typedef void* PETHREAD;
typedef void* PFILE_OBJECT;
typedef void* KAPC;
typedef void* ACCESS_MASK;
typedef void* FILE_INTERNAL_INFORMATION;
typedef void* FILE_POSITION_INFORMATION;
typedef void* PMEM_EXTENDED_PARAMETER;
typedef void* USN;
typedef void* PREPARSE_DATA_BUFFER;
typedef void* PFILE_TIMESTAMPS;
typedef void* POBJECT_ATTRIBUTES;
typedef void* PHANDLE;
typedef void* PIO_APC_ROUTINE;
typedef void* TOKEN_TYPE;
typedef void* PPRIVILEGE_SET;
typedef void* PBOOLEAN;
typedef void* FILE_INFORMATION_CLASS;
typedef void* OBJECT_INFORMATION_CLASS;
typedef void* SECURITY_INFORMATION;
typedef void* MEMORY_INFORMATION_CLASS;
typedef void* FS_INFORMATION_CLASS;
typedef void* THREADINFOCLASS;
typedef void* TOKEN_INFORMATION_CLASS;
typedef void* PPOWER_SETTING_CALLBACK;
typedef void* EXECUTION_STATE;
typedef void* PSTRING;
typedef void* PCWCH;
typedef void* PCCH;
typedef void* EVENT_TYPE;
typedef void* VIRTUAL_MEMORY_INFORMATION_CLASS;
typedef void* PMEMORY_RANGE_ENTRY;
typedef void* PCSZ;
typedef void* PSYSCTL_IRP_DISPOSITION;
typedef void* PWMI_QUERY_REGINFO;
typedef void* PWMI_QUERY_DATABLOCK;
typedef void* PWMI_SET_DATABLOCK;
typedef void* PWMI_SET_DATAITEM;
typedef void* PWMI_FUNCTION_CONTROL;
typedef void* PWMI_EXECUTE_METHOD;
typedef void* PCI_CAPABILITIES_HEADER;
typedef void* PINTERFACE_REFERENCE;
typedef void* EMULATOR_PORT_ACCESS_TYPE;
typedef void* PINTERFACE_DEREFERENCE;
typedef void* EISA_MEMORY_TYPE;
typedef void* EISA_IRQ_DESCRIPTOR;
typedef void* DMA_CONFIGURATION_BYTE0;
typedef void* DMA_CONFIGURATION_BYTE1;
typedef void* EISA_PORT_DESCRIPTOR;
typedef void* NTSTRSAFE_PSTR;
typedef void* NTSTRSAFE_PCSTR;
typedef void* NTSTRSAFE_PWSTR;
typedef void* NTSTRSAFE_PCWSTR;
typedef void* STRSAFE_PCNZCH;
typedef void* STRSAFE_PCNZWCH;
typedef void* STRSAFE_PCUNZWCH;
typedef void* PEPHANDLE;
typedef void* PACPI_METHOD_ARGUMENT;
typedef void* POHANDLE;
typedef void* PPO_FX_COMPONENT_IDLE_STATE;
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
typedef void* PIO_CONNECT_INTERRUPT_PARAMETERS;
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
typedef void* PHANDLE;
typedef void* PGENERIC_MAPPING;
typedef void* IO_PAGING_PRIORITY;
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
typedef void* POOL_TYPE;
typedef void* PEJOB;
typedef void* PSILO_MONITOR;
typedef void* PCREATE_THREAD_NOTIFY_ROUTINE;
typedef void* PLOAD_IMAGE_NOTIFY_ROUTINE;
typedef void* PCREATE_PROCESS_NOTIFY_ROUTINE;
typedef void* PCREATE_PROCESS_NOTIFY_ROUTINE_EX;
typedef void* PRTL_RUN_ONCE;
typedef void* STRING;
typedef void* PCORRELATION_VECTOR;
typedef void* PACCESS_MASK;
typedef void* GENERIC_MAPPING;
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
typedef void* PINTERFACE_REFERENCE;
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
typedef void* POOL_CREATE_EXTENDED_PARAMS;
//typedef void* PEXT_DELETE_PARAMETERS;
typedef void* FIRMWARE_TYPE;
//typedef void* PEXT_DELETE_PARAMETERS;
typedef void* PALLOCATE_FUNCTION_EX;
typedef void* PFREE_FUNCTION_EX;
typedef void* PEX_PUSH_LOCK;
//typedef void* PEXT_SET_PARAMETERS;
typedef void* PSLIST_ENTRY;
typedef void* PSLIST_HEADER;
typedef void* PCALLBACK_FUNCTION;
typedef void* ERESOURCE_THREAD;
typedef void* PEXT_DELETE_CALLBACK;

//typedef void* DEVICE_BUS_SPECIFIC_RESET_TYPE;
//typedef void* CLS_IO_STATISTICS_HEADER;


//ENDOF: TODO LIST\n

typedef char* ANSI_STRING;
typedef uintptr_t PHYSICAL_ADDRESS;
#define NTHALAPI extern "C"
#define NTSYSCALLAPI extern "C"
#define NTSYSAPI extern "C"
#define CLFSUSER_API extern "C"
#define NTAPI_INLINE inline
#define NTKERNELAPI extern "C"
typedef size_t SIZE_T, * PSIZE_T;


VOID RtlCopyUnicodeString(_Inout_ PUNICODE_STRING DestinationString, _In_opt_ PUNICODE_STRING SourceString);
ULONG DbgPrint(_In_z_ _Printf_format_string_ PCSTR Format, ...);
ULONG DbgPrintEx ( _In_ ULONG ComponentId, _In_ ULONG Level, _In_z_ _Printf_format_string_ PCSTR Format, ...);


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


#endif
