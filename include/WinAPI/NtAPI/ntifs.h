#ifndef _NTIFS_H
#define _NTIFS_H

#include <NtAPI.h>

typedef struct _ACE_HEADER {
	UCHAR  AceType;
	UCHAR  AceFlags;
	USHORT AceSize;
} ACE_HEADER;

typedef struct _ACCESS_ALLOWED_ACE {
	ACE_HEADER  Header;
	//ACCESS_MASK Mask;
	ULONG       SidStart;
} ACCESS_ALLOWED_ACE;

typedef struct _ACCESS_DENIED_ACE {
	ACE_HEADER  Header;
	//ACCESS_MASK Mask;
	ULONG       SidStart;
} ACCESS_DENIED_ACE;

NTSTATUS AllocateVirtualMemoryExCallback(
	//HANDLE CallbackContext,
	//HANDLE ProcessHandle,
	PVOID* BaseAddress,
	//PSIZE_T RegionSize,
	ULONG AllocationType,
	ULONG PageProtection,
	//PMEM_EXTENDED_PARAMETER ExtendedParameters,
	ULONG ExtendedParameterCount
);

typedef struct _ATOMIC_CREATE_ECP_CONTEXT {
	USHORT               Size;
	USHORT               InFlags;
	USHORT               OutFlags;
	USHORT               ReparseBufferLength;
	//PREPARSE_DATA_BUFFER ReparseBuffer;
	LONGLONG             FileSize;
	LONGLONG             ValidDataLength;
	//PFILE_TIMESTAMPS     FileTimestamps;
	ULONG                FileAttributes;
	ULONG                UsnSourceInfo;
	//USN                  Usn;
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
	//_In_ PFILE_OBJECT FileObject,
	_In_ ULONG        BytesToWrite,
	_In_ BOOLEAN      Wait,
	_In_ UCHAR        Retrying
);
/*
typedef struct _COPY_INFORMATION {
	PFILE_OBJECT SourceFileObject;
	LONGLONG     SourceFileOffset;
} COPY_INFORMATION, * PCOPY_INFORMATION;

typedef struct _FILE_ACCESS_INFORMATION {
  ACCESS_MASK AccessFlags;
} FILE_ACCESS_INFORMATION, *PFILE_ACCESS_INFORMATION;

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

typedef struct _FILE_EA_INFORMATION {
  ULONG EaSize;
} FILE_EA_INFORMATION, *PFILE_EA_INFORMATION;

typedef struct _FILE_MODE_INFORMATION {
  ULONG Mode;
} FILE_MODE_INFORMATION, *PFILE_MODE_INFORMATION;

BOOLEAN IoCheckFileObjectOpenedAsCopyDestination(
  [in] PFILE_OBJECT FileObject
);

BOOLEAN IoCheckFileObjectOpenedAsCopySource(
  [in] PFILE_OBJECT FileObject
);

PDEVICE_OBJECT IoGetAttachedDeviceReference(
  [in] PDEVICE_OBJECT DeviceObject
);

PCONFIGURATION_INFORMATION IoGetConfigurationInformation();

void IoSetStartIoAttributes(
  [in] PDEVICE_OBJECT DeviceObject,
  [in] BOOLEAN        DeferredStartIo,
  [in] BOOLEAN        NonCancelable
);

void IoSizeOfIrp(
   StackSize
);

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

void IoWriteErrorLogEntry(
  [in] PVOID ElEntry
);

ULONG KeGetProcessorIndexFromNumber(
  [in] PPROCESSOR_NUMBER ProcNumber
);

NTSTATUS KeGetProcessorNumberFromIndex(
  [in]  ULONG             ProcIndex,
  [out] PPROCESSOR_NUMBER ProcNumber
);

BOOLEAN KeSetKernelStackSwapEnable(
  [in] BOOLEAN Enable
);

NTHALAPI VOID KeStallExecutionProcessor(
  [in] ULONG MicroSeconds
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

__kernel_entry NTSYSCALLAPI NTSTATUS NtAllocateVirtualMemory(
  [in]      HANDLE    ProcessHandle,
  [in, out] PVOID     *BaseAddress,
  [in]      ULONG_PTR ZeroBits,
  [in, out] PSIZE_T   RegionSize,
  [in]      ULONG     AllocationType,
  [in]      ULONG     Protect
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtClose(
  [in] HANDLE Handle
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtCopyFileChunk(
  [in]           HANDLE           SourceHandle,
  [in]           HANDLE           DestHandle,
  [in, optional] HANDLE           Event,
  [out]          PIO_STATUS_BLOCK IoStatusBlock,
  [in]           ULONG            Length,
  [in]           PLARGE_INTEGER   SourceOffset,
  [in]           PLARGE_INTEGER   DestOffset,
  [in, optional] PULONG           SourceKey,
  [in, optional] PULONG           DestKey,
  [in]           ULONG            Flags
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtCreateFile(
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

__kernel_entry NTSYSCALLAPI NTSTATUS NtCreateSection(
  [out]          PHANDLE            SectionHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes,
  [in, optional] PLARGE_INTEGER     MaximumSize,
  [in]           ULONG              SectionPageProtection,
  [in]           ULONG              AllocationAttributes,
  [in, optional] HANDLE             FileHandle
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtCreateSectionEx(
  [out]          PHANDLE                 SectionHandle,
  [out]          ACCESS_MASK             DesiredAccess,
  [in, optional] POBJECT_ATTRIBUTES      ObjectAttributes,
  [in, optional] PLARGE_INTEGER          MaximumSize,
  [in]           ULONG                   SectionPageProtection,
  [in]           ULONG                   AllocationAttributes,
  [in, optional] HANDLE                  FileHandle,
  [in/out]       PMEM_EXTENDED_PARAMETER ExtendedParameters,
				 ULONG                   ExtendedParameterCount
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtDeviceIoControlFile(
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

__kernel_entry NTSYSCALLAPI NTSTATUS NtDuplicateToken(
  [in]  HANDLE             ExistingTokenHandle,
  [in]  ACCESS_MASK        DesiredAccess,
  [in]  POBJECT_ATTRIBUTES ObjectAttributes,
  [in]  BOOLEAN            EffectiveOnly,
  [in]  TOKEN_TYPE         TokenType,
  [out] PHANDLE            NewTokenHandle
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtFlushBuffersFileEx(
  [in]  HANDLE           FileHandle,
  [in]  ULONG            Flags,
  [in]  PVOID            Parameters,
  [in]  ULONG            ParametersSize,
  [out] PIO_STATUS_BLOCK IoStatusBlock
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtFreeVirtualMemory(
  [in]      HANDLE  ProcessHandle,
  [in, out] PVOID   *BaseAddress,
  [in, out] PSIZE_T RegionSize,
  [in]      ULONG   FreeType
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtFsControlFile(
  [in]            HANDLE           FileHandle,
  [in, optional]  HANDLE           Event,
  [in, optional]  PIO_APC_ROUTINE  ApcRoutine,
  [in, optional]  PVOID            ApcContext,
  [out]           PIO_STATUS_BLOCK IoStatusBlock,
  [in]            ULONG            FsControlCode,
  [in, optional]  PVOID            InputBuffer,
  [in]            ULONG            InputBufferLength,
  [out, optional] PVOID            OutputBuffer,
  [in]            ULONG            OutputBufferLength
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtLockFile(
  [in]           HANDLE           FileHandle,
  [in, optional] HANDLE           Event,
  [in, optional] PIO_APC_ROUTINE  ApcRoutine,
  [in, optional] PVOID            ApcContext,
  [out]          PIO_STATUS_BLOCK IoStatusBlock,
  [in]           PLARGE_INTEGER   ByteOffset,
  [in]           PLARGE_INTEGER   Length,
  [in]           ULONG            Key,
  [in]           BOOLEAN          FailImmediately,
  [in]           BOOLEAN          ExclusiveLock
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtOpenFile(
  [out] PHANDLE            FileHandle,
  [in]  ACCESS_MASK        DesiredAccess,
  [in]  POBJECT_ATTRIBUTES ObjectAttributes,
  [out] PIO_STATUS_BLOCK   IoStatusBlock,
  [in]  ULONG              ShareAccess,
  [in]  ULONG              OpenOptions
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtOpenProcessToken(
  [in]  HANDLE      ProcessHandle,
  [in]  ACCESS_MASK DesiredAccess,
  [out] PHANDLE     TokenHandle
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtOpenProcessTokenEx(
  [in]  HANDLE      ProcessHandle,
  [in]  ACCESS_MASK DesiredAccess,
  [in]  ULONG       HandleAttributes,
  [out] PHANDLE     TokenHandle
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtOpenThreadToken(
  [in]  HANDLE      ThreadHandle,
  [in]  ACCESS_MASK DesiredAccess,
  [in]  BOOLEAN     OpenAsSelf,
  [out] PHANDLE     TokenHandle
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtOpenThreadTokenEx(
  [in]  HANDLE      ThreadHandle,
  [in]  ACCESS_MASK DesiredAccess,
  [in]  BOOLEAN     OpenAsSelf,
  [in]  ULONG       HandleAttributes,
  [out] PHANDLE     TokenHandle
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtPrivilegeCheck(
  [in]      HANDLE         ClientToken,
  [in, out] PPRIVILEGE_SET RequiredPrivileges,
  [out]     PBOOLEAN       Result
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtQueryDirectoryFile(
  [in]           HANDLE                 FileHandle,
  [in, optional] HANDLE                 Event,
  [in, optional] PIO_APC_ROUTINE        ApcRoutine,
  [in, optional] PVOID                  ApcContext,
  [out]          PIO_STATUS_BLOCK       IoStatusBlock,
  [out]          PVOID                  FileInformation,
  [in]           ULONG                  Length,
  [in]           FILE_INFORMATION_CLASS FileInformationClass,
  [in]           BOOLEAN                ReturnSingleEntry,
  [in, optional] PUNICODE_STRING        FileName,
  [in]           BOOLEAN                RestartScan
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtQueryDirectoryFileEx(
  [in]           HANDLE                 FileHandle,
  [in, optional] HANDLE                 Event,
  [in, optional] PIO_APC_ROUTINE        ApcRoutine,
  [in, optional] PVOID                  ApcContext,
  [out]          PIO_STATUS_BLOCK       IoStatusBlock,
  [out]          PVOID                  FileInformation,
  [in]           ULONG                  Length,
				 FILE_INFORMATION_CLASS FileInformationClass,
  [in]           ULONG                  QueryFlags,
  [in, optional] PUNICODE_STRING        FileName
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtQueryInformationFile(
  [in]  HANDLE                 FileHandle,
  [out] PIO_STATUS_BLOCK       IoStatusBlock,
  [out] PVOID                  FileInformation,
  [in]  ULONG                  Length,
  [in]  FILE_INFORMATION_CLASS FileInformationClass
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtQueryInformationToken(
  [in]  HANDLE                  TokenHandle,
  [in]  TOKEN_INFORMATION_CLASS TokenInformationClass,
  [out] PVOID                   TokenInformation,
  [in]  ULONG                   TokenInformationLength,
  [out] PULONG                  ReturnLength
);
__kernel_entry NTSYSCALLAPI NTSTATUS NtQueryObject(
  [in, optional]  HANDLE                   Handle,
  [in]            OBJECT_INFORMATION_CLASS ObjectInformationClass,
  [out, optional] PVOID                    ObjectInformation,
  [in]            ULONG                    ObjectInformationLength,
  [out, optional] PULONG                   ReturnLength
);
__kernel_entry NTSYSCALLAPI NTSTATUS NtQueryQuotaInformationFile(
  [in]           HANDLE           FileHandle,
  [out]          PIO_STATUS_BLOCK IoStatusBlock,
  [out]          PVOID            Buffer,
  [in]           ULONG            Length,
  [in]           BOOLEAN          ReturnSingleEntry,
  [in, optional] PVOID            SidList,
  [in]           ULONG            SidListLength,
  [in, optional] PSID             StartSid,
  [in]           BOOLEAN          RestartScan
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtQuerySecurityObject(
  [in]  HANDLE               Handle,
  [in]  SECURITY_INFORMATION SecurityInformation,
  [out] PSECURITY_DESCRIPTOR SecurityDescriptor,
  [in]  ULONG                Length,
  [out] PULONG               LengthNeeded
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtQueryVirtualMemory(
  [in]            HANDLE                   ProcessHandle,
  [in, optional]  PVOID                    BaseAddress,
  [in]            MEMORY_INFORMATION_CLASS MemoryInformationClass,
  [out]           PVOID                    MemoryInformation,
  [in]            SIZE_T                   MemoryInformationLength,
  [out, optional] PSIZE_T                  ReturnLength
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtQueryVolumeInformationFile(
  [in]  HANDLE               FileHandle,
  [out] PIO_STATUS_BLOCK     IoStatusBlock,
  [out] PVOID                FsInformation,
  [in]  ULONG                Length,
  [in]  FS_INFORMATION_CLASS FsInformationClass
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtReadFile(
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

__kernel_entry NTSYSCALLAPI NTSTATUS NtSetInformationFile(
  [in]  HANDLE                 FileHandle,
  [out] PIO_STATUS_BLOCK       IoStatusBlock,
  [in]  PVOID                  FileInformation,
  [in]  ULONG                  Length,
  [in]  FILE_INFORMATION_CLASS FileInformationClass
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtSetInformationThread(
  [in] HANDLE          ThreadHandle,
  [in] THREADINFOCLASS ThreadInformationClass,
  [in] PVOID           ThreadInformation,
  [in] ULONG           ThreadInformationLength
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtSetInformationToken(
  [in] HANDLE                  TokenHandle,
  [in] TOKEN_INFORMATION_CLASS TokenInformationClass,
  [in] PVOID                   TokenInformation,
  [in] ULONG                   TokenInformationLength
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtSetQuotaInformationFile(
  [in]  HANDLE           FileHandle,
  [out] PIO_STATUS_BLOCK IoStatusBlock,
  [in]  PVOID            Buffer,
  [in]  ULONG            Length
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtSetSecurityObject(
  [in] HANDLE               Handle,
  [in] SECURITY_INFORMATION SecurityInformation,
  [in] PSECURITY_DESCRIPTOR SecurityDescriptor
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtUnlockFile(
  [in]  HANDLE           FileHandle,
  [out] PIO_STATUS_BLOCK IoStatusBlock,
  [in]  PLARGE_INTEGER   ByteOffset,
  [in]  PLARGE_INTEGER   Length,
  [in]  ULONG            Key
);

__kernel_entry NTSYSCALLAPI NTSTATUS NtWriteFile(
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

PETHREAD PsGetCurrentThread();

BOOLEAN PsIsSystemThread(
  [in] PETHREAD Thread
);

NTSYSAPI NTSTATUS RtlInitStringEx(
  [out]          PSTRING               DestinationString,
  [in, optional] __drv_aliasesMem PCSZ SourceString
);

NTSYSAPI NTSTATUS RtlUnicodeToUTF8N(
  [out] PCHAR  UTF8StringDestination,
  [in]  ULONG  UTF8StringMaxByteCount,
  [out] PULONG UTF8StringActualByteCount,
  [in]  PCWCH  UnicodeStringSource,
  [in]  ULONG  UnicodeStringByteCount
);

NTSYSAPI NTSTATUS RtlUTF8ToUnicodeN(
  [out, optional] PWSTR  UnicodeStringDestination,
  [in]            ULONG  UnicodeStringMaxByteCount,
  [out]           PULONG UnicodeStringActualByteCount,
  [in]            PCCH   UTF8StringSource,
  [in]            ULONG  UTF8StringByteCount
);

void SeFreePrivileges(
  [in] PPRIVILEGE_SET Privileges
);

NTSYSAPI NTSTATUS ZwAllocateVirtualMemory(
  [in]      HANDLE    ProcessHandle,
  [in, out] PVOID     *BaseAddress,
  [in]      ULONG_PTR ZeroBits,
  [in, out] PSIZE_T   RegionSize,
  [in]      ULONG     AllocationType,
  [in]      ULONG     Protect
);

NTSYSAPI NTSTATUS ZwCreateEvent(
  [out]          PHANDLE            EventHandle,
  [in]           ACCESS_MASK        DesiredAccess,
  [in, optional] POBJECT_ATTRIBUTES ObjectAttributes,
  [in]           EVENT_TYPE         EventType,
  [in]           BOOLEAN            InitialState
);

NTSYSAPI NTSTATUS ZwDeleteFile(
  [in] POBJECT_ATTRIBUTES ObjectAttributes
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

NTSYSAPI NTSTATUS ZwDuplicateObject(
  [in]            HANDLE      SourceProcessHandle,
  [in]            HANDLE      SourceHandle,
  [in, optional]  HANDLE      TargetProcessHandle,
  [out, optional] PHANDLE     TargetHandle,
  [in]            ACCESS_MASK DesiredAccess,
  [in]            ULONG       HandleAttributes,
  [in]            ULONG       Options
);

NTSYSAPI NTSTATUS ZwDuplicateToken(
  [in]  HANDLE             ExistingTokenHandle,
  [in]  ACCESS_MASK        DesiredAccess,
  [in]  POBJECT_ATTRIBUTES ObjectAttributes,
  [in]  BOOLEAN            EffectiveOnly,
  [in]  TOKEN_TYPE         TokenType,
  [out] PHANDLE            NewTokenHandle
);

NTSYSAPI NTSTATUS ZwFlushBuffersFile(
  [in]  HANDLE           FileHandle,
  [out] PIO_STATUS_BLOCK IoStatusBlock
);

NTSYSAPI NTSTATUS ZwFlushBuffersFileEx(
  [in]  HANDLE           FileHandle,
		ULONG            FLags,
		PVOID            Parameters,
		ULONG            ParametersSize,
  [out] PIO_STATUS_BLOCK IoStatusBlock
);

NTSYSAPI NTSTATUS ZwFlushVirtualMemory(
  [in]      HANDLE           ProcessHandle,
  [in, out] PVOID            *BaseAddress,
  [in, out] PSIZE_T          RegionSize,
  [out]     PIO_STATUS_BLOCK IoStatus
);


NTSYSAPI NTSTATUS ZwFreeVirtualMemory(
  [in]      HANDLE  ProcessHandle,
  [in, out] PVOID   *BaseAddress,
  [in, out] PSIZE_T RegionSize,
  [in]      ULONG   FreeType
);

NTSYSAPI NTSTATUS ZwFsControlFile(
  [in]            HANDLE           FileHandle,
  [in, optional]  HANDLE           Event,
  [in, optional]  PIO_APC_ROUTINE  ApcRoutine,
  [in, optional]  PVOID            ApcContext,
  [out]           PIO_STATUS_BLOCK IoStatusBlock,
  [in]            ULONG            FsControlCode,
  [in, optional]  PVOID            InputBuffer,
  [in]            ULONG            InputBufferLength,
  [out, optional] PVOID            OutputBuffer,
  [in]            ULONG            OutputBufferLength
);

NTSYSAPI NTSTATUS ZwLockFile(
  [in]           HANDLE           FileHandle,
  [in, optional] HANDLE           Event,
  [in, optional] PIO_APC_ROUTINE  ApcRoutine,
  [in, optional] PVOID            ApcContext,
  [out]          PIO_STATUS_BLOCK IoStatusBlock,
  [in]           PLARGE_INTEGER   ByteOffset,
  [in]           PLARGE_INTEGER   Length,
  [in]           ULONG            Key,
  [in]           BOOLEAN          FailImmediately,
  [in]           BOOLEAN          ExclusiveLock
);

NTSYSAPI NTSTATUS ZwNotifyChangeKey(
  [in]            HANDLE           KeyHandle,
  [in, optional]  HANDLE           Event,
  [in, optional]  PIO_APC_ROUTINE  ApcRoutine,
  [in, optional]  PVOID            ApcContext,
  [out]           PIO_STATUS_BLOCK IoStatusBlock,
  [in]            ULONG            CompletionFilter,
  [in]            BOOLEAN          WatchTree,
  [out, optional] PVOID            Buffer,
  [in]            ULONG            BufferSize,
  [in]            BOOLEAN          Asynchronous
);

NTSYSAPI NTSTATUS ZwOpenDirectoryObject(
  [out] PHANDLE            DirectoryHandle,
  [in]  ACCESS_MASK        DesiredAccess,
  [in]  POBJECT_ATTRIBUTES ObjectAttributes
);

NTSYSAPI NTSTATUS ZwOpenProcessTokenEx(
  [in]  HANDLE      ProcessHandle,
  [in]  ACCESS_MASK DesiredAccess,
  [in]  ULONG       HandleAttributes,
  [out] PHANDLE     TokenHandle
);

NTSYSAPI NTSTATUS ZwOpenThreadTokenEx(
  [in]  HANDLE      ThreadHandle,
  [in]  ACCESS_MASK DesiredAccess,
  [in]  BOOLEAN     OpenAsSelf,
  [in]  ULONG       HandleAttributes,
  [out] PHANDLE     TokenHandle
);

NTSYSAPI NTSTATUS ZwQueryDirectoryFile(
  [in]           HANDLE                 FileHandle,
  [in, optional] HANDLE                 Event,
  [in, optional] PIO_APC_ROUTINE        ApcRoutine,
  [in, optional] PVOID                  ApcContext,
  [out]          PIO_STATUS_BLOCK       IoStatusBlock,
  [out]          PVOID                  FileInformation,
  [in]           ULONG                  Length,
  [in]           FILE_INFORMATION_CLASS FileInformationClass,
  [in]           BOOLEAN                ReturnSingleEntry,
  [in, optional] PUNICODE_STRING        FileName,
  [in]           BOOLEAN                RestartScan
);

NTSYSAPI NTSTATUS ZwQueryDirectoryFileEx(
  [in]           HANDLE                 FileHandle,
  [in, optional] HANDLE                 Event,
  [in, optional] PIO_APC_ROUTINE        ApcRoutine,
  [in, optional] PVOID                  ApcContext,
  [out]          PIO_STATUS_BLOCK       IoStatusBlock,
  [out]          PVOID                  FileInformation,
  [in]           ULONG                  Length,
  [in]           FILE_INFORMATION_CLASS FileInformationClass,
  [in]           ULONG                  QueryFlags,
  [in, optional] PUNICODE_STRING        FileName
);

NTSTATUS ZwQueryEaFile(
  [in]           HANDLE           FileHandle,
  [out]          PIO_STATUS_BLOCK IoStatusBlock,
  [out]          PVOID            Buffer,
  [in]           ULONG            Length,
  [in]           BOOLEAN          ReturnSingleEntry,
  [in, optional] PVOID            EaList,
  [in]           ULONG            EaListLength,
  [in, optional] PULONG           EaIndex,
  [in]           BOOLEAN          RestartScan
);

NTSYSAPI NTSTATUS ZwQueryInformationToken(
  [in]  HANDLE                  TokenHandle,
  [in]  TOKEN_INFORMATION_CLASS TokenInformationClass,
  [out] PVOID                   TokenInformation,
  [in]  ULONG                   TokenInformationLength,
  [out] PULONG                  ReturnLength
);

NTSYSAPI NTSTATUS ZwQueryObject(
  [in, optional]  HANDLE                   Handle,
  [in]            OBJECT_INFORMATION_CLASS ObjectInformationClass,
  [out, optional] PVOID                    ObjectInformation,
  [in]            ULONG                    ObjectInformationLength,
  [out, optional] PULONG                   ReturnLength
);

NTSYSAPI NTSTATUS ZwQueryQuotaInformationFile(
  [in]           HANDLE           FileHandle,
  [out]          PIO_STATUS_BLOCK IoStatusBlock,
  [out]          PVOID            Buffer,
  [in]           ULONG            Length,
  [in]           BOOLEAN          ReturnSingleEntry,
  [in, optional] PVOID            SidList,
  [in]           ULONG            SidListLength,
  [in, optional] PSID             StartSid,
  [in]           BOOLEAN          RestartScan
);

NTSYSAPI NTSTATUS ZwQuerySecurityObject(
  [in]  HANDLE               Handle,
  [in]  SECURITY_INFORMATION SecurityInformation,
  [out] PSECURITY_DESCRIPTOR SecurityDescriptor,
  [in]  ULONG                Length,
  [out] PULONG               LengthNeeded
);

NTSYSAPI NTSTATUS ZwQueryVirtualMemory(
  [in]            HANDLE                   ProcessHandle,
  [in, optional]  PVOID                    BaseAddress,
  [in]            MEMORY_INFORMATION_CLASS MemoryInformationClass,
  [out]           PVOID                    MemoryInformation,
  [in]            SIZE_T                   MemoryInformationLength,
  [out, optional] PSIZE_T                  ReturnLength
);

NTSYSAPI NTSTATUS ZwQueryVolumeInformationFile(
  [in]  HANDLE               FileHandle,
  [out] PIO_STATUS_BLOCK     IoStatusBlock,
  [out] PVOID                FsInformation,
  [in]  ULONG                Length,
  [in]  FS_INFORMATION_CLASS FsInformationClass
);

NTSTATUS ZwSetEaFile(
  [in]  HANDLE           FileHandle,
  [out] PIO_STATUS_BLOCK IoStatusBlock,
  [in]  PVOID            Buffer,
  [in]  ULONG            Length
);

NTSYSAPI NTSTATUS ZwSetEvent(
  [in]            HANDLE EventHandle,
  [out, optional] PLONG  PreviousState
);

NTSYSAPI NTSTATUS ZwSetInformationToken(
  [in] HANDLE                  TokenHandle,
  [in] TOKEN_INFORMATION_CLASS TokenInformationClass,
  [in] PVOID                   TokenInformation,
  [in] ULONG                   TokenInformationLength
);

NTSYSAPI NTSTATUS ZwSetInformationVirtualMemory(
  [in] HANDLE                           ProcessHandle,
  [in] VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
  [in] ULONG_PTR                        NumberOfEntries,
  [in] PMEMORY_RANGE_ENTRY              VirtualAddresses,
  [in] PVOID                            VmInformation,
  [in] ULONG                            VmInformationLength
);

NTSYSAPI NTSTATUS ZwSetQuotaInformationFile(
  [in]  HANDLE           FileHandle,
  [out] PIO_STATUS_BLOCK IoStatusBlock,
  [in]  PVOID            Buffer,
  [in]  ULONG            Length
);

NTSYSAPI NTSTATUS ZwSetSecurityObject(
  [in] HANDLE               Handle,
  [in] SECURITY_INFORMATION SecurityInformation,
  [in] PSECURITY_DESCRIPTOR SecurityDescriptor
);

NTSYSAPI NTSTATUS ZwSetVolumeInformationFile(
  [in]  HANDLE               FileHandle,
  [out] PIO_STATUS_BLOCK     IoStatusBlock,
  [in]  PVOID                FsInformation,
  [in]  ULONG                Length,
  [in]  FS_INFORMATION_CLASS FsInformationClass
);

NTSYSAPI NTSTATUS ZwUnlockFile(
  [in]  HANDLE           FileHandle,
  [out] PIO_STATUS_BLOCK IoStatusBlock,
  [in]  PLARGE_INTEGER   ByteOffset,
  [in]  PLARGE_INTEGER   Length,
  [in]  ULONG            Key
);

NTSYSAPI NTSTATUS ZwWaitForSingleObject(
  [in]           HANDLE         Handle,
  [in]           BOOLEAN        Alertable,
  [in, optional] PLARGE_INTEGER Timeout
);

*/
#endif