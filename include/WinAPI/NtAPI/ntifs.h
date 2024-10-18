#ifndef _NTIFS_H
#define _NTIFS_H

#include <NtAPI.h>
#include <LouDDK.h>
#include "ntoapi.h"
#include "irp.h"
#include "Misc/undocumentedTypes.h"
typedef struct _ACE_HEADER {
	UCHAR  AceType;
	UCHAR  AceFlags;
	USHORT AceSize;
} ACE_HEADER;

typedef struct _ACCESS_ALLOWED_ACE {
	ACE_HEADER  Header;
	ACCESS_MASK Mask;
	ULONG       SidStart;
} ACCESS_ALLOWED_ACE;

typedef struct _ACCESS_DENIED_ACE {
	ACE_HEADER  Header;
	ACCESS_MASK Mask;
	ULONG       SidStart;
} ACCESS_DENIED_ACE;

NTSTATUS AllocateVirtualMemoryExCallback(
	HANDLE CallbackContext,
	HANDLE ProcessHandle,
	PVOID* BaseAddress,
	PSIZE_T RegionSize,
	ULONG AllocationType,
	ULONG PageProtection,
	PMEM_EXTENDED_PARAMETER ExtendedParameters,
	ULONG ExtendedParameterCount
);

typedef struct _ATOMIC_CREATE_ECP_CONTEXT {
	USHORT               Size;
	USHORT               InFlags;
	USHORT               OutFlags;
	USHORT               ReparseBufferLength;
	PREPARSE_DATA_BUFFER ReparseBuffer;
	LONGLONG             FileSize;
	LONGLONG             ValidDataLength;
	PFILE_TIMESTAMPS     FileTimestamps;
	ULONG                FileAttributes;
	ULONG                UsnSourceInfo;
	USN                  Usn;
	ULONG                SuppressFileAttributeInheritanceMask;
	ULONG                InOpFlags;
	ULONG                OutOpFlags;
	ULONG                InGenFlags;
	ULONG                OutGenFlags;
	ULONG                CaseSensitiveFlagsMask;
	ULONG                InCaseSensitiveFlags;
	ULONG                OutCaseSensitiveFlags;
} ATOMIC_CREATE_ECP_CONTEXT, * PATOMIC_CREATE_ECP_CONTEXT;

typedef struct _BOOT_AREA_INFO {
	ULONG                    BootSectorCount;
	typedef struct {
		LARGE_INTEGER Offset;
	}__unnamed_struct_15fe_70;
	__unnamed_struct_15fe_70 BootSectors[2];
} BOOT_AREA_INFO, * PBOOT_AREA_INFO;

typedef struct _CC_FILE_SIZES {
	LARGE_INTEGER AllocationSize;
	LARGE_INTEGER FileSize;
	LARGE_INTEGER ValidDataLength;
} CC_FILE_SIZES, * PCC_FILE_SIZES;

BOOLEAN CcCanIWrite(
	_In_ PFILE_OBJECT FileObject,
	_In_ ULONG        BytesToWrite,
	_In_ BOOLEAN      Wait,
	_In_ UCHAR        Retrying
);

typedef struct _COPY_INFORMATION {
	PFILE_OBJECT SourceFileObject;
	LONGLONG     SourceFileOffset;
} COPY_INFORMATION, * PCOPY_INFORMATION;

typedef struct _FILE_ACCESS_INFORMATION {
  ACCESS_MASK AccessFlags;
} FILE_ACCESS_INFORMATION, *PFILE_ACCESS_INFORMATION;

typedef struct _FILE_EA_INFORMATION {
	ULONG EaSize;
} FILE_EA_INFORMATION, * PFILE_EA_INFORMATION;

typedef struct _FILE_MODE_INFORMATION {
	ULONG Mode;
} FILE_MODE_INFORMATION, * PFILE_MODE_INFORMATION;

typedef struct _FILE_ALL_INFORMATION {
  FILE_BASIC_INFORMATION     BasicInformation;
  FILE_STANDARD_INFORMATION  StandardInformation;
  FILE_INTERNAL_INFORMATION  InternalInformation;
  FILE_EA_INFORMATION        EaInformation;
  FILE_ACCESS_INFORMATION    AccessInformation;
  FILE_POSITION_INFORMATION  PositionInformation;
  FILE_MODE_INFORMATION      ModeInformation;
  FILE_ALIGNMENT_INFORMATION AlignmentInformation;
  FILE_NAME_INFORMATION      NameInformation;
} FILE_ALL_INFORMATION, *PFILE_ALL_INFORMATION;



BOOLEAN IoCheckFileObjectOpenedAsCopyDestination(
  _In_ PFILE_OBJECT FileObject
);

BOOLEAN IoCheckFileObjectOpenedAsCopySource(
  _In_ PFILE_OBJECT FileObject
);

PDEVICE_OBJECT IoGetAttachedDeviceReference(
  _In_ PDEVICE_OBJECT DeviceObject
);

PCONFIGURATION_INFORMATION IoGetConfigurationInformation();

void IoSetStartIoAttributes(
  _In_ PDEVICE_OBJECT DeviceObject,
  _In_ BOOLEAN        DeferredStartIo,
  _In_ BOOLEAN        NonCancelable
);

void IoSizeOfIrp(
   uint64_t StackSize
);

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

void IoWriteErrorLogEntry(
  _In_ PVOID ElEntry
);

ULONG KeGetProcessorIndexFromNumber(
  _In_ PPROCESSOR_NUMBER ProcNumber
);

NTSTATUS KeGetProcessorNumberFromIndex(
  _In_  ULONG             ProcIndex,
  _Out_ PPROCESSOR_NUMBER ProcNumber
);

BOOLEAN KeSetKernelStackSwapEnable(
  _In_ BOOLEAN Enable
);

NTHALAPI VOID KeStallExecutionProcessor(
  _In_ ULONG MicroSeconds
);

typedef struct _MEMORY_BASIC_INFORMATION {
  PVOID  BaseAddress;
  PVOID  AllocationBase;
  ULONG  AllocationProtect;
  USHORT PartitionId;
  SIZE_T RegionSize;
  ULONG  State;
  ULONG  Protect;
  ULONG  Type;
} MEMORY_BASIC_INFORMATION, *PMEMORY_BASIC_INFORMATION;

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtAllocateVirtualMemory(
  _In_       HANDLE    ProcessHandle,
  _In_ _Out_ PVOID     *BaseAddress,
  _In_       ULONG_PTR ZeroBits,
  _In_ _Out_ PSIZE_T   RegionSize,
  _In_       ULONG     AllocationType,
  _In_       ULONG     Protect
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtClose(
  _In_ HANDLE Handle
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtCopyFileChunk(
  _In_           HANDLE           SourceHandle,
  _In_           HANDLE           DestHandle,
  _In_opt_		 HANDLE           Event,
  _Out_          PIO_STATUS_BLOCK IoStatusBlock,
  _In_           ULONG            Length,
  _In_           PLARGE_INTEGER   SourceOffset,
  _In_           PLARGE_INTEGER   DestOffset,
  _In_opt_		 PULONG           SourceKey,
  _In_opt_		 PULONG           DestKey,
  _In_           ULONG            Flags
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtCreateFile(
  _Out_          PHANDLE            FileHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_           POBJECT_ATTRIBUTES ObjectAttributes,
  _Out_          PIO_STATUS_BLOCK   IoStatusBlock,
  _In_opt_		 PLARGE_INTEGER     AllocationSize,
  _In_           ULONG              FileAttributes,
  _In_           ULONG              ShareAccess,
  _In_           ULONG              CreateDisposition,
  _In_           ULONG              CreateOptions,
  _In_opt_		 PVOID              EaBuffer,
  _In_           ULONG              EaLength
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtCreateSection(
  _Out_          PHANDLE            SectionHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
  _In_opt_ PLARGE_INTEGER     MaximumSize,
  _In_           ULONG              SectionPageProtection,
  _In_           ULONG              AllocationAttributes,
  _In_opt_ HANDLE             FileHandle
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtCreateSectionEx(
  _Out_          PHANDLE                 SectionHandle,
  _Out_          ACCESS_MASK             DesiredAccess,
  _In_opt_ POBJECT_ATTRIBUTES      ObjectAttributes,
  _In_opt_ PLARGE_INTEGER          MaximumSize,
  _In_           ULONG                   SectionPageProtection,
  _In_           ULONG                   AllocationAttributes,
  _In_opt_ HANDLE                  FileHandle,
  _In_ _Out_       PMEM_EXTENDED_PARAMETER ExtendedParameters,
				 ULONG                   ExtendedParameterCount
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtDeviceIoControlFile(
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

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtDuplicateToken(
  _In_  HANDLE             ExistingTokenHandle,
  _In_  ACCESS_MASK        DesiredAccess,
  _In_  POBJECT_ATTRIBUTES ObjectAttributes,
  _In_  BOOLEAN            EffectiveOnly,
  _In_  TOKEN_TYPE         TokenType,
  _Out_ PHANDLE            NewTokenHandle
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtFlushBuffersFileEx(
  _In_  HANDLE           FileHandle,
  _In_  ULONG            Flags,
  _In_  PVOID            Parameters,
  _In_  ULONG            ParametersSize,
  _Out_ PIO_STATUS_BLOCK IoStatusBlock
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtFreeVirtualMemory(
  _In_      HANDLE  ProcessHandle,
  _In_ _Out_ PVOID   *BaseAddress,
  _In_ _Out_ PSIZE_T RegionSize,
  _In_      ULONG   FreeType
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtFsControlFile(
  _In_            HANDLE           FileHandle,
  _In_opt_  HANDLE           Event,
  _In_opt_  PIO_APC_ROUTINE  ApcRoutine,
  _In_opt_  PVOID            ApcContext,
  _Out_           PIO_STATUS_BLOCK IoStatusBlock,
  _In_            ULONG            FsControlCode,
  _In_opt_  PVOID            InputBuffer,
  _In_            ULONG            InputBufferLength,
  _Out_ PVOID            OutputBuffer,
  _In_            ULONG            OutputBufferLength
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtLockFile(
  _In_           HANDLE           FileHandle,
  _In_opt_ HANDLE           Event,
  _In_opt_ PIO_APC_ROUTINE  ApcRoutine,
  _In_opt_ PVOID            ApcContext,
  _Out_          PIO_STATUS_BLOCK IoStatusBlock,
  _In_           PLARGE_INTEGER   ByteOffset,
  _In_           PLARGE_INTEGER   Length,
  _In_           ULONG            Key,
  _In_           BOOLEAN          FailImmediately,
  _In_           BOOLEAN          ExclusiveLock
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtOpenFile(
  _Out_ PHANDLE            FileHandle,
  _In_  ACCESS_MASK        DesiredAccess,
  _In_  POBJECT_ATTRIBUTES ObjectAttributes,
  _Out_ PIO_STATUS_BLOCK   IoStatusBlock,
  _In_  ULONG              ShareAccess,
  _In_  ULONG              OpenOptions
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtOpenProcessToken(
  _In_  HANDLE      ProcessHandle,
  _In_  ACCESS_MASK DesiredAccess,
  _Out_ PHANDLE     TokenHandle
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtOpenProcessTokenEx(
  _In_  HANDLE      ProcessHandle,
  _In_  ACCESS_MASK DesiredAccess,
  _In_  ULONG       HandleAttributes,
  _Out_ PHANDLE     TokenHandle
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtOpenThreadToken(
  _In_  HANDLE      ThreadHandle,
  _In_  ACCESS_MASK DesiredAccess,
  _In_  BOOLEAN     OpenAsSelf,
  _Out_ PHANDLE     TokenHandle
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtOpenThreadTokenEx(
  _In_  HANDLE      ThreadHandle,
  _In_  ACCESS_MASK DesiredAccess,
  _In_  BOOLEAN     OpenAsSelf,
  _In_  ULONG       HandleAttributes,
  _Out_ PHANDLE     TokenHandle
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtPrivilegeCheck(
  _In_      HANDLE         ClientToken,
  _In_ _Out_ PPRIVILEGE_SET RequiredPrivileges,
  _Out_     PBOOLEAN       Result
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtQueryDirectoryFile(
  _In_           HANDLE                 FileHandle,
  _In_opt_ HANDLE                 Event,
  _In_opt_ PIO_APC_ROUTINE        ApcRoutine,
  _In_opt_ PVOID                  ApcContext,
  _Out_          PIO_STATUS_BLOCK       IoStatusBlock,
  _Out_          PVOID                  FileInformation,
  _In_           ULONG                  Length,
  _In_           FILE_INFORMATION_CLASS FileInformationClass,
  _In_           BOOLEAN                ReturnSingleEntry,
  _In_opt_ PUNICODE_STRING        FileName,
  _In_           BOOLEAN                RestartScan
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtQueryDirectoryFileEx(
  _In_           HANDLE                 FileHandle,
  _In_opt_ HANDLE                 Event,
  _In_opt_ PIO_APC_ROUTINE        ApcRoutine,
  _In_opt_ PVOID                  ApcContext,
  _Out_          PIO_STATUS_BLOCK       IoStatusBlock,
  _Out_          PVOID                  FileInformation,
  _In_           ULONG                  Length,
				 FILE_INFORMATION_CLASS FileInformationClass,
  _In_           ULONG                  QueryFlags,
  _In_opt_ PUNICODE_STRING        FileName
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtQueryInformationFile(
  _In_  HANDLE                 FileHandle,
  _Out_ PIO_STATUS_BLOCK       IoStatusBlock,
  _Out_ PVOID                  FileInformation,
  _In_  ULONG                  Length,
  _In_  FILE_INFORMATION_CLASS FileInformationClass
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtQueryInformationToken(
  _In_  HANDLE                  TokenHandle,
  _In_  TOKEN_INFORMATION_CLASS TokenInformationClass,
  _Out_ PVOID                   TokenInformation,
  _In_  ULONG                   TokenInformationLength,
  _Out_ PULONG                  ReturnLength
);
KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtQueryObject(
  _In_opt_  HANDLE                   Handle,
  _In_            OBJECT_INFORMATION_CLASS ObjectInformationClass,
  _Out_ PVOID                    ObjectInformation,
  _In_            ULONG                    ObjectInformationLength,
  _Out_ PULONG                   ReturnLength
);
KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtQueryQuotaInformationFile(
  _In_           HANDLE           FileHandle,
  _Out_          PIO_STATUS_BLOCK IoStatusBlock,
  _Out_          PVOID            Buffer,
  _In_           ULONG            Length,
  _In_           BOOLEAN          ReturnSingleEntry,
  _In_opt_ PVOID            SidList,
  _In_           ULONG            SidListLength,
  _In_opt_ PSID             StartSid,
  _In_           BOOLEAN          RestartScan
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtQuerySecurityObject(
  _In_  HANDLE               Handle,
  _In_  SECURITY_INFORMATION SecurityInformation,
  _Out_ PSECURITY_DESCRIPTOR SecurityDescriptor,
  _In_  ULONG                Length,
  _Out_ PULONG               LengthNeeded
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtQueryVirtualMemory(
  _In_            HANDLE                   ProcessHandle,
  _In_opt_  PVOID                    BaseAddress,
  _In_            MEMORY_INFORMATION_CLASS MemoryInformationClass,
  _Out_           PVOID                    MemoryInformation,
  _In_            SIZE_T                   MemoryInformationLength,
  _Out_ PSIZE_T                  ReturnLength
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtQueryVolumeInformationFile(
  _In_  HANDLE               FileHandle,
  _Out_ PIO_STATUS_BLOCK     IoStatusBlock,
  _Out_ PVOID                FsInformation,
  _In_  ULONG                Length,
  _In_  FS_INFORMATION_CLASS FsInformationClass
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtReadFile(
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

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtSetInformationFile(
  _In_  HANDLE                 FileHandle,
  _Out_ PIO_STATUS_BLOCK       IoStatusBlock,
  _In_  PVOID                  FileInformation,
  _In_  ULONG                  Length,
  _In_  FILE_INFORMATION_CLASS FileInformationClass
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtSetInformationThread(
  _In_ HANDLE          ThreadHandle,
  _In_ THREADINFOCLASS ThreadInformationClass,
  _In_ PVOID           ThreadInformation,
  _In_ ULONG           ThreadInformationLength
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtSetInformationToken(
  _In_ HANDLE                  TokenHandle,
  _In_ TOKEN_INFORMATION_CLASS TokenInformationClass,
  _In_ PVOID                   TokenInformation,
  _In_ ULONG                   TokenInformationLength
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtSetQuotaInformationFile(
  _In_  HANDLE           FileHandle,
  _Out_ PIO_STATUS_BLOCK IoStatusBlock,
  _In_  PVOID            Buffer,
  _In_  ULONG            Length
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtSetSecurityObject(
  _In_ HANDLE               Handle,
  _In_ SECURITY_INFORMATION SecurityInformation,
  _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtUnlockFile(
  _In_  HANDLE           FileHandle,
  _Out_ PIO_STATUS_BLOCK IoStatusBlock,
  _In_  PLARGE_INTEGER   ByteOffset,
  _In_  PLARGE_INTEGER   Length,
  _In_  ULONG            Key
);

KERNEL_ENTRY NTSYSCALLAPI NTSTATUS NtWriteFile(
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

NTSTATUS PoCallDriver(
  _In_      PDEVICE_OBJECT        DeviceObject,
  _In_ _Out_ PIRP Irp
);

NTSTATUS PoClearPowerRequest(
  _In_ _Out_ PVOID              PowerRequest,
  _In_      POWER_REQUEST_TYPE Type
);

NTSTATUS PoCreatePowerRequest(
  _Out_ PVOID                   *PowerRequest,
  _In_  PDEVICE_OBJECT          DeviceObject,
  _In_  PCOUNTED_REASON_CONTEXT Context
);

void PoDeletePowerRequest(
  _In_ _Out_ PVOID PowerRequest
);

void PoEndDeviceBusy(
  _In_ _Out_ PULONG IdlePointer
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
  _In_ _Out_ PVOID           StateHandle,
  _In_       EXECUTION_STATE Flags
);

void PoSetDeviceBusyEx(
  _In_ _Out_ PULONG IdlePointer
);

NTSTATUS PoSetPowerRequest(
  _In_ _Out_ PVOID              PowerRequest,
  _In_      POWER_REQUEST_TYPE Type
);

POWER_STATE PoSetPowerState(
  _In_ PDEVICE_OBJECT   DeviceObject,
  _In_ POWER_STATE_TYPE Type,
  _In_ POWER_STATE      State
);

void PoStartDeviceBusy(
  _In_ _Out_ PULONG IdlePointer
);

void PoStartNextPowerIrp(
  _In_ _Out_ PIRP Irp
);

NTSTATUS PoUnregisterPowerSettingCallback(
  _In_ _Out_ PVOID Handle
);

void PoUnregisterSystemState(
  _In_ _Out_ PVOID StateHandle
);

PETHREAD PsGetCurrentThread();

BOOLEAN PsIsSystemThread(
  _In_ PETHREAD Thread
);

NTSYSAPI NTSTATUS RtlInitStringEx(
  _Out_          PSTRING               DestinationString,
  _In_opt_  PCSZ SourceString
);

NTSYSAPI NTSTATUS RtlUTF8ToUnicodeN(
  _Out_ PWSTR  UnicodeStringDestination,
  _In_            ULONG  UnicodeStringMaxByteCount,
  _Out_           PULONG UnicodeStringActualByteCount,
  _In_            PCCH   UTF8StringSource,
  _In_            ULONG  UTF8StringByteCount
);

void SeFreePrivileges(
  _In_ PPRIVILEGE_SET Privileges
);

NTSYSAPI NTSTATUS ZwAllocateVirtualMemory(
  _In_      HANDLE    ProcessHandle,
  _In_ _Out_ PVOID     *BaseAddress,
  _In_      ULONG_PTR ZeroBits,
  _In_ _Out_ PSIZE_T   RegionSize,
  _In_      ULONG     AllocationType,
  _In_      ULONG     Protect
);

NTSYSAPI NTSTATUS ZwCreateEvent(
  _Out_          PHANDLE            EventHandle,
  _In_           ACCESS_MASK        DesiredAccess,
  _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
  _In_           EVENT_TYPE         EventType,
  _In_           BOOLEAN            InitialState
);

NTSYSAPI NTSTATUS ZwDeleteFile(
  _In_ POBJECT_ATTRIBUTES ObjectAttributes
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

NTSYSAPI NTSTATUS ZwDuplicateObject(
  _In_            HANDLE      SourceProcessHandle,
  _In_            HANDLE      SourceHandle,
  _In_opt_  HANDLE      TargetProcessHandle,
  _Out_ PHANDLE     TargetHandle,
  _In_            ACCESS_MASK DesiredAccess,
  _In_            ULONG       HandleAttributes,
  _In_            ULONG       Options
);

NTSYSAPI NTSTATUS ZwDuplicateToken(
  _In_  HANDLE             ExistingTokenHandle,
  _In_  ACCESS_MASK        DesiredAccess,
  _In_  POBJECT_ATTRIBUTES ObjectAttributes,
  _In_  BOOLEAN            EffectiveOnly,
  _In_  TOKEN_TYPE         TokenType,
  _Out_ PHANDLE            NewTokenHandle
);

NTSYSAPI NTSTATUS ZwFlushBuffersFile(
  _In_  HANDLE           FileHandle,
  _Out_ PIO_STATUS_BLOCK IoStatusBlock
);

NTSYSAPI NTSTATUS ZwFlushBuffersFileEx(
  _In_  HANDLE           FileHandle,
		ULONG            FLags,
		PVOID            Parameters,
		ULONG            ParametersSize,
  _Out_ PIO_STATUS_BLOCK IoStatusBlock
);

NTSYSAPI NTSTATUS ZwFlushVirtualMemory(
  _In_      HANDLE           ProcessHandle,
  _In_ _Out_ PVOID            *BaseAddress,
  _In_ _Out_ PSIZE_T          RegionSize,
  _Out_     PIO_STATUS_BLOCK IoStatus
);


NTSYSAPI NTSTATUS ZwFreeVirtualMemory(
  _In_      HANDLE  ProcessHandle,
  _In_ _Out_ PVOID   *BaseAddress,
  _In_ _Out_ PSIZE_T RegionSize,
  _In_      ULONG   FreeType
);

NTSYSAPI NTSTATUS ZwFsControlFile(
  _In_            HANDLE           FileHandle,
  _In_opt_  HANDLE           Event,
  _In_opt_  PIO_APC_ROUTINE  ApcRoutine,
  _In_opt_  PVOID            ApcContext,
  _Out_           PIO_STATUS_BLOCK IoStatusBlock,
  _In_            ULONG            FsControlCode,
  _In_opt_  PVOID            InputBuffer,
  _In_            ULONG            InputBufferLength,
  _Out_ PVOID            OutputBuffer,
  _In_            ULONG            OutputBufferLength
);

NTSYSAPI NTSTATUS ZwLockFile(
  _In_           HANDLE           FileHandle,
  _In_opt_ HANDLE           Event,
  _In_opt_ PIO_APC_ROUTINE  ApcRoutine,
  _In_opt_ PVOID            ApcContext,
  _Out_          PIO_STATUS_BLOCK IoStatusBlock,
  _In_           PLARGE_INTEGER   ByteOffset,
  _In_           PLARGE_INTEGER   Length,
  _In_           ULONG            Key,
  _In_           BOOLEAN          FailImmediately,
  _In_           BOOLEAN          ExclusiveLock
);

NTSYSAPI NTSTATUS ZwNotifyChangeKey(
  _In_            HANDLE           KeyHandle,
  _In_opt_  HANDLE           Event,
  _In_opt_  PIO_APC_ROUTINE  ApcRoutine,
  _In_opt_  PVOID            ApcContext,
  _Out_           PIO_STATUS_BLOCK IoStatusBlock,
  _In_            ULONG            CompletionFilter,
  _In_            BOOLEAN          WatchTree,
  _Out_ PVOID            Buffer,
  _In_            ULONG            BufferSize,
  _In_            BOOLEAN          Asynchronous
);

NTSYSAPI NTSTATUS ZwOpenDirectoryObject(
  _Out_ PHANDLE            DirectoryHandle,
  _In_  ACCESS_MASK        DesiredAccess,
  _In_  POBJECT_ATTRIBUTES ObjectAttributes
);

NTSYSAPI NTSTATUS ZwOpenProcessTokenEx(
  _In_  HANDLE      ProcessHandle,
  _In_  ACCESS_MASK DesiredAccess,
  _In_  ULONG       HandleAttributes,
  _Out_ PHANDLE     TokenHandle
);

NTSYSAPI NTSTATUS ZwOpenThreadTokenEx(
  _In_  HANDLE      ThreadHandle,
  _In_  ACCESS_MASK DesiredAccess,
  _In_  BOOLEAN     OpenAsSelf,
  _In_  ULONG       HandleAttributes,
  _Out_ PHANDLE     TokenHandle
);

NTSYSAPI NTSTATUS ZwQueryDirectoryFile(
  _In_           HANDLE                 FileHandle,
  _In_opt_ HANDLE                 Event,
  _In_opt_ PIO_APC_ROUTINE        ApcRoutine,
  _In_opt_ PVOID                  ApcContext,
  _Out_          PIO_STATUS_BLOCK       IoStatusBlock,
  _Out_          PVOID                  FileInformation,
  _In_           ULONG                  Length,
  _In_           FILE_INFORMATION_CLASS FileInformationClass,
  _In_           BOOLEAN                ReturnSingleEntry,
  _In_opt_ PUNICODE_STRING        FileName,
  _In_           BOOLEAN                RestartScan
);

NTSYSAPI NTSTATUS ZwQueryDirectoryFileEx(
  _In_           HANDLE                 FileHandle,
  _In_opt_ HANDLE                 Event,
  _In_opt_ PIO_APC_ROUTINE        ApcRoutine,
  _In_opt_ PVOID                  ApcContext,
  _Out_          PIO_STATUS_BLOCK       IoStatusBlock,
  _Out_          PVOID                  FileInformation,
  _In_           ULONG                  Length,
  _In_           FILE_INFORMATION_CLASS FileInformationClass,
  _In_           ULONG                  QueryFlags,
  _In_opt_ PUNICODE_STRING        FileName
);

NTSTATUS ZwQueryEaFile(
  _In_           HANDLE           FileHandle,
  _Out_          PIO_STATUS_BLOCK IoStatusBlock,
  _Out_          PVOID            Buffer,
  _In_           ULONG            Length,
  _In_           BOOLEAN          ReturnSingleEntry,
  _In_opt_ PVOID            EaList,
  _In_           ULONG            EaListLength,
  _In_opt_ PULONG           EaIndex,
  _In_           BOOLEAN          RestartScan
);

NTSYSAPI NTSTATUS ZwQueryInformationToken(
  _In_  HANDLE                  TokenHandle,
  _In_  TOKEN_INFORMATION_CLASS TokenInformationClass,
  _Out_ PVOID                   TokenInformation,
  _In_  ULONG                   TokenInformationLength,
  _Out_ PULONG                  ReturnLength
);

NTSYSAPI NTSTATUS ZwQueryObject(
  _In_opt_  HANDLE                   Handle,
  _In_            OBJECT_INFORMATION_CLASS ObjectInformationClass,
  _Out_ PVOID                    ObjectInformation,
  _In_            ULONG                    ObjectInformationLength,
  _Out_ PULONG                   ReturnLength
);

NTSYSAPI NTSTATUS ZwQueryQuotaInformationFile(
  _In_           HANDLE           FileHandle,
  _Out_          PIO_STATUS_BLOCK IoStatusBlock,
  _Out_          PVOID            Buffer,
  _In_           ULONG            Length,
  _In_           BOOLEAN          ReturnSingleEntry,
  _In_opt_ PVOID            SidList,
  _In_           ULONG            SidListLength,
  _In_opt_ PSID             StartSid,
  _In_           BOOLEAN          RestartScan
);

NTSYSAPI NTSTATUS ZwQuerySecurityObject(
  _In_  HANDLE               Handle,
  _In_  SECURITY_INFORMATION SecurityInformation,
  _Out_ PSECURITY_DESCRIPTOR SecurityDescriptor,
  _In_  ULONG                Length,
  _Out_ PULONG               LengthNeeded
);

NTSYSAPI NTSTATUS ZwQueryVirtualMemory(
  _In_            HANDLE                   ProcessHandle,
  _In_opt_  PVOID                    BaseAddress,
  _In_            MEMORY_INFORMATION_CLASS MemoryInformationClass,
  _Out_           PVOID                    MemoryInformation,
  _In_            SIZE_T                   MemoryInformationLength,
  _Out_ PSIZE_T                  ReturnLength
);

NTSYSAPI NTSTATUS ZwQueryVolumeInformationFile(
  _In_  HANDLE               FileHandle,
  _Out_ PIO_STATUS_BLOCK     IoStatusBlock,
  _Out_ PVOID                FsInformation,
  _In_  ULONG                Length,
  _In_  FS_INFORMATION_CLASS FsInformationClass
);

NTSTATUS ZwSetEaFile(
  _In_  HANDLE           FileHandle,
  _Out_ PIO_STATUS_BLOCK IoStatusBlock,
  _In_  PVOID            Buffer,
  _In_  ULONG            Length
);

NTSYSAPI NTSTATUS ZwSetEvent(
  _In_            HANDLE EventHandle,
  _Out_ PLONG  PreviousState
);

NTSYSAPI NTSTATUS ZwSetInformationToken(
  _In_ HANDLE                  TokenHandle,
  _In_ TOKEN_INFORMATION_CLASS TokenInformationClass,
  _In_ PVOID                   TokenInformation,
  _In_ ULONG                   TokenInformationLength
);

NTSYSAPI NTSTATUS ZwSetInformationVirtualMemory(
  _In_ HANDLE                           ProcessHandle,
  _In_ VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
  _In_ ULONG_PTR                        NumberOfEntries,
  _In_ PMEMORY_RANGE_ENTRY              VirtualAddresses,
  _In_ PVOID                            VmInformation,
  _In_ ULONG                            VmInformationLength
);

NTSYSAPI NTSTATUS ZwSetQuotaInformationFile(
  _In_  HANDLE           FileHandle,
  _Out_ PIO_STATUS_BLOCK IoStatusBlock,
  _In_  PVOID            Buffer,
  _In_  ULONG            Length
);

NTSYSAPI NTSTATUS ZwSetSecurityObject(
  _In_ HANDLE               Handle,
  _In_ SECURITY_INFORMATION SecurityInformation,
  _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
);

NTSYSAPI NTSTATUS ZwSetVolumeInformationFile(
  _In_  HANDLE               FileHandle,
  _Out_ PIO_STATUS_BLOCK     IoStatusBlock,
  _In_  PVOID                FsInformation,
  _In_  ULONG                Length,
  _In_  FS_INFORMATION_CLASS FsInformationClass
);

NTSYSAPI NTSTATUS ZwUnlockFile(
  _In_  HANDLE           FileHandle,
  _Out_ PIO_STATUS_BLOCK IoStatusBlock,
  _In_  PLARGE_INTEGER   ByteOffset,
  _In_  PLARGE_INTEGER   Length,
  _In_  ULONG            Key
);

NTSYSAPI NTSTATUS ZwWaitForSingleObject(
  _In_           HANDLE         Handle,
  _In_           BOOLEAN        Alertable,
  _In_opt_ PLARGE_INTEGER Timeout
);


#endif