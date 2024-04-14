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

#endif