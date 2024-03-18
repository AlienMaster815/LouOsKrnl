/*
-- Tyler Grenier 11/21/23 6:53 PM
-- This Defines The Basic Types For The Windows WDK Kit
-- This Is Needed In Order To Jump Into A Driver The Idea
-- Is Is To Handle Everything in the kernel My Own Way While
-- I use Window WDK Kernel Drivers And User Mode Drivers To
-- Make Propitary HardWare Work For The System So The System
-- Can Be More Than Just A Hobby OS Fair Warning This File Is
-- Messy But Its A Tradeoff For Things I Need In My OS For Doing
-- Important Work In My Kernel P.S. Some Of This Is From The WDK
-- Kit where The Copyright Says To Do Whatever With It Anything 
-- That Says In The Kit Im Using That Its Legaly Punishable Is
-- Not Used And I Make An Alternative From Scratch And All Code
-- Is Headily Modified Later On I Will Try And Make This Code Clean
*/

#ifndef _COMMON_TYPES_H
#define _COMMON_TYPES_H

#include <stdint.h>

//Fixed Percision Integers


typedef uint32_t DWORD32, UINT32, ULONG32,DWORD;
typedef uint64_t DWORD64, UINT64, ULONG64,QWORD;
typedef int32_t INT32, LONG32, NTSTATUS;
typedef int64_t INT64, LONG64;
typedef uint8_t BYTE;


typedef unsigned long* PULONG,PQWORD;
typedef unsigned char* PUCHAR,PBYTE;
typedef unsigned short* PUWORD,PUSHORT;
typedef long* PLONG;
typedef short* PWORD;
typedef char* PCHAR;

//Pointer Percision Integers
typedef unsigned long *DWORD_PTR;

typedef int32_t HALF_PTR;//16 bit int 32 bit systems
typedef int INT_PTR; //32 bit for 32 bit systems
typedef long LONG_PTR;
typedef uint64_t SIZE_T;
typedef int64_t SSIZE_T;
typedef uint32_t UHALF_PTR;
typedef unsigned int UINT_PTR;
typedef unsigned long ULONG_PTR;

//FIXED PRECISION POINTER TYPES
//#ifdef __x86_64__
typedef int64_t POINTER_64; // 32 in 32 bit

#define ULONGLONG unsigned long long
#define LONGLONG long long


//#endif
typedef int32_t POINTER_32;

#define CONST const
#define IRP_MJ_MAXIMUM_FUNCTION         0x1b
typedef short SHORT;
typedef unsigned long ULONG;
typedef long LONG;
typedef void* PVOID;
#define VOID void
typedef char CHAR;
typedef unsigned short USHORT;
typedef wchar_t WCHAR;
typedef unsigned char UCHAR;

typedef bool BOOLEAN;

#define RESTRICTED_POINTER __restrict

#define DEVICE_TYPE ULONG

#define _IRQL_requires_same_                                              \
    _SAL2_Source_(_IRQL_requires_same_, (), _Post_ _SA_annotes0(SAL_sameIRQL))

#define MAXIMUM_VOLUME_LABEL_LENGTH  (32 * sizeof(WCHAR)) // 32 characters


typedef ULONG_PTR KSPIN_LOCK;
typedef KSPIN_LOCK *PKSPIN_LOCK;

typedef ULONG_PTR KAFFINITY;
typedef KAFFINITY *PKAFFINITY;

typedef wchar_t* PWSTR;


typedef int32_t NTSTATUS;

#define STATUS_SUCCESS ((NTSTATUS)0x00000000L)

typedef USHORT SECURITY_DESCRIPTOR_CONTROL;

typedef PVOID PSID;




typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
} LIST_ENTRY, *PLIST_ENTRY, *RESTRICTED_POINTER PRLIST_ENTRY;






#if defined(_X86_)

#define KENCODED_TIMER_PROCESSOR        1       // Timer processor is encoded in header

#endif

#define TIMER_TOLERABLE_DELAY_BITS      6
#define TIMER_EXPIRED_INDEX_BITS        6
#define TIMER_PROCESSOR_INDEX_BITS      5

typedef struct _DISPATCHER_HEADER {
    union {
        union {
            volatile LONG Lock;
            LONG LockNV;
        } DUMMYUNIONNAME;

        struct {                            // Events, Semaphores, Gates, etc.
            UCHAR Type;                     // All (accessible via KOBJECT_TYPE)
            UCHAR Signalling;
            UCHAR Size;
            UCHAR Reserved1;
        } DUMMYSTRUCTNAME;

        struct {                            // Timer
            UCHAR TimerType;
            union {
                UCHAR TimerControlFlags;
                struct {
                    UCHAR Absolute : 1;
                    UCHAR Wake : 1;
                    UCHAR EncodedTolerableDelay : TIMER_TOLERABLE_DELAY_BITS;
                } DUMMYSTRUCTNAME;
            };

            UCHAR Hand;
            union {
                UCHAR TimerMiscFlags;
                struct {

#if !defined(KENCODED_TIMER_PROCESSOR)

                    UCHAR Index : TIMER_EXPIRED_INDEX_BITS;

#else

                    UCHAR Index : 1;
                    UCHAR Processor : TIMER_PROCESSOR_INDEX_BITS;

#endif

                    UCHAR Inserted : 1;
                    volatile UCHAR Expired : 1;
                } DUMMYSTRUCTNAME;
            } DUMMYUNIONNAME;
        } DUMMYSTRUCTNAME2;

        struct {                            // Timer2
            UCHAR Timer2Type;
            union {
                UCHAR Timer2Flags;
                struct {
                    UCHAR Timer2Inserted : 1;
                    UCHAR Timer2Expiring : 1;
                    UCHAR Timer2CancelPending : 1;
                    UCHAR Timer2SetPending : 1;
                    UCHAR Timer2Running : 1;
                    UCHAR Timer2Disabled : 1;
                    UCHAR Timer2ReservedFlags : 2;
                } DUMMYSTRUCTNAME;
            } DUMMYUNIONNAME;

            UCHAR Timer2ComponentId;
            UCHAR Timer2RelativeId;
        } DUMMYSTRUCTNAME3;

        struct {                            // Queue
            UCHAR QueueType;
            union {
                UCHAR QueueControlFlags;
                struct {
                    UCHAR Abandoned : 1;
                    UCHAR DisableIncrement : 1;
                    UCHAR QueueReservedControlFlags : 6;
                } DUMMYSTRUCTNAME;
            } DUMMYUNIONNAME;

            UCHAR QueueSize;
            UCHAR QueueReserved;
        } DUMMYSTRUCTNAME4;

        struct {                            // Thread
            UCHAR ThreadType;
            UCHAR ThreadReserved;

            union {
                UCHAR ThreadControlFlags;
                struct {
                    UCHAR CycleProfiling : 1;
                    UCHAR CounterProfiling : 1;
                    UCHAR GroupScheduling : 1;
                    UCHAR AffinitySet : 1;
                    UCHAR Tagged : 1;
                    UCHAR EnergyProfiling: 1;
                    UCHAR SchedulerAssist: 1;

#if !defined(_X86_)

                    UCHAR ThreadReservedControlFlags : 1;

#else

                    UCHAR Instrumented : 1;

#endif

                } DUMMYSTRUCTNAME;
            } DUMMYUNIONNAME;

            union {
                UCHAR DebugActive;

#if !defined(_X86_)

                struct {
                    BOOLEAN ActiveDR7 : 1;
                    BOOLEAN Instrumented : 1;
                    BOOLEAN Minimal : 1;
                    BOOLEAN Reserved4 : 2;
                    BOOLEAN AltSyscall : 1;
                    BOOLEAN Emulation : 1;
                    BOOLEAN Reserved5 : 1;
                } DUMMYSTRUCTNAME;

#endif

            } DUMMYUNIONNAME2;
        } DUMMYSTRUCTNAME5;

        struct {                         // Mutant
            UCHAR MutantType;
            UCHAR MutantSize;
            BOOLEAN DpcActive;
            UCHAR MutantReserved;
        } DUMMYSTRUCTNAME6;
    } DUMMYUNIONNAME;

    LONG SignalState;                   // Object lock
    LIST_ENTRY WaitListHead;            // Object lock
} DISPATCHER_HEADER, *PDISPATCHER_HEADER;




typedef
VOID
KDEFERRED_ROUTINE (
    _In_ struct _KDPC *Dpc,
    _In_opt_ PVOID DeferredContext,
    _In_opt_ PVOID SystemArgument1,
    _In_opt_ PVOID SystemArgument2
    );

typedef KDEFERRED_ROUTINE *PKDEFERRED_ROUTINE;


typedef struct _ACL
    {
    UCHAR AclRevision;
    UCHAR Sbz1;
    USHORT AclSize;
    USHORT AceCount;
    USHORT Sbz2;
    }     ACL;

typedef ACL *PACL;

typedef struct _SECURITY_DESCRIPTOR {
    UCHAR Revision;
    UCHAR Sbz1;
    //TODO: 
    SECURITY_DESCRIPTOR_CONTROL Control;
    PSID Owner;
    PSID Group;
    PACL Sacl;
    PACL Dacl;
} SECURITY_DESCRIPTOR, *PSECURITY_DESCRIPTOR;

typedef struct _KEVENT {
    DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT, *RESTRICTED_POINTER PRKEVENT;

typedef struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY;

typedef CONST CHAR *PCSTR, *LPCSTR;

typedef struct _KDPC {
    union {
        ULONG TargetInfoAsUlong;
        struct {
            UCHAR Type;
            UCHAR Importance;
            volatile USHORT Number;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
    //TODO:
    SINGLE_LIST_ENTRY DpcListEntry;
    KAFFINITY ProcessorHistory;
    PKDEFERRED_ROUTINE DeferredRoutine;
    PVOID DeferredContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
    __volatile PVOID DpcData;
} KDPC, *PKDPC, *PRKDPC;



typedef
NTSTATUS
DRIVER_ADD_DEVICE (
    _In_ struct _DRIVER_OBJECT *DriverObject,
    _In_ struct _DEVICE_OBJECT *PhysicalDeviceObject
    );

typedef DRIVER_ADD_DEVICE *PDRIVER_ADD_DEVICE;

typedef struct _UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;
    PWSTR  Buffer;
} UNICODE_STRING, *PUNICODE_STRING;


typedef
NTSTATUS
DRIVER_INITIALIZE (
    _In_ struct _DRIVER_OBJECT *DriverObject,
    _In_ PUNICODE_STRING RegistryPath
    );

typedef
VOID
DRIVER_UNLOAD (
    _In_ struct _DRIVER_OBJECT *DriverObject
    );

typedef DRIVER_UNLOAD *PDRIVER_UNLOAD;

typedef
NTSTATUS
DRIVER_DISPATCH (
    _In_ struct _DEVICE_OBJECT *DeviceObject,
    _Inout_ struct _IRP *Irp
    );

typedef DRIVER_DISPATCH *PDRIVER_DISPATCH;

typedef DRIVER_INITIALIZE *PDRIVER_INITIALIZE;

typedef
VOID
DRIVER_STARTIO (
    _Inout_ struct _DEVICE_OBJECT *DeviceObject,
    _Inout_ struct _IRP *Irp
    );

typedef DRIVER_STARTIO *PDRIVER_STARTIO;




typedef struct _KDEVICE_QUEUE_ENTRY {
    LIST_ENTRY DeviceListEntry;
    ULONG SortKey;
    BOOLEAN Inserted;
} KDEVICE_QUEUE_ENTRY, *PKDEVICE_QUEUE_ENTRY, *PRKDEVICE_QUEUE_ENTRY;

typedef struct _KDEVICE_QUEUE {
    SHORT Type;
    SHORT Size;
    LIST_ENTRY DeviceListHead;
    KSPIN_LOCK Lock;

#if defined(_AMD64_)

    union {
        bool Busy;
        struct {
            LONG64 Reserved : 8;
            LONG64 Hint : 56;
        };
    };

#else

     bool Busy;

#endif
    
} KDEVICE_QUEUE, *PKDEVICE_QUEUE, *PRKDEVICE_QUEUE;



typedef struct _IO_STATUS_BLOCK {
    union {
        NTSTATUS Status;
        PVOID Pointer;
    } DUMMYUNIONNAME;

    ULONG_PTR Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK;



#if defined(MIDL_PASS)
typedef struct _LARGE_INTEGER {
    LONGLONG QuadPart;
} LARGE_INTEGER;
#else // MIDL_PASS
typedef union _LARGE_INTEGER {
    struct {
        ULONG LowPart;
        LONG HighPart;
    } DUMMYSTRUCTNAME;
    struct {
        ULONG LowPart;
        LONG HighPart;
    } u;
    LONGLONG QuadPart;
} LARGE_INTEGER;
#endif //MIDL_PASS

typedef LARGE_INTEGER *PLARGE_INTEGER;


typedef
BOOLEAN
FAST_IO_READ (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _In_ ULONG LockKey,
    _Out_ PVOID Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_READ *PFAST_IO_READ;



typedef enum _IO_ALLOCATION_ACTION {
    KeepObject = 1,
    DeallocateObject,
    DeallocateObjectKeepRegisters
} IO_ALLOCATION_ACTION, *PIO_ALLOCATION_ACTION;

typedef
_Function_class_(DRIVER_CONTROL)
_IRQL_requires_same_
IO_ALLOCATION_ACTION
DRIVER_CONTROL (
    _In_ struct _DEVICE_OBJECT *DeviceObject,
    _Inout_ struct _IRP *Irp,
    _In_ PVOID MapRegisterBase,
    _In_ PVOID Context
    );
typedef DRIVER_CONTROL *PDRIVER_CONTROL;

typedef
BOOLEAN
FAST_IO_CHECK_IF_POSSIBLE (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _In_ ULONG LockKey,
    _In_ BOOLEAN CheckForReadOperation,
    _Pre_notnull_
    _When_(return != FALSE, _Post_equal_to_(_Old_(IoStatus)))
    _When_(return == FALSE, _Post_valid_)
    PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_CHECK_IF_POSSIBLE *PFAST_IO_CHECK_IF_POSSIBLE;

typedef struct _WAIT_CONTEXT_BLOCK {
    union {
        KDEVICE_QUEUE_ENTRY WaitQueueEntry;
        struct {
            LIST_ENTRY DmaWaitEntry;
            ULONG NumberOfChannels;
            ULONG SyncCallback : 1;
            ULONG DmaContext : 1;
            ULONG ZeroMapRegisters : 1;
            ULONG Reserved : 9;
            ULONG NumberOfRemapPages : 20;
        };
    };
    PDRIVER_CONTROL DeviceRoutine;
    PVOID DeviceContext;
    ULONG NumberOfMapRegisters;
    PVOID DeviceObject;
    PVOID CurrentIrp;
    PKDPC BufferChainingDpc;
} WAIT_CONTEXT_BLOCK, *PWAIT_CONTEXT_BLOCK;


typedef
BOOLEAN
FAST_IO_WRITE (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _In_ ULONG LockKey,
    _In_ PVOID Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_WRITE *PFAST_IO_WRITE;

typedef struct _FILE_BASIC_INFORMATION {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    ULONG FileAttributes;
} FILE_BASIC_INFORMATION, *PFILE_BASIC_INFORMATION;


typedef
BOOLEAN
FAST_IO_QUERY_BASIC_INFO (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ BOOLEAN Wait,
    _Out_ PFILE_BASIC_INFORMATION Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_QUERY_BASIC_INFO *PFAST_IO_QUERY_BASIC_INFO;


typedef struct _FILE_STANDARD_INFORMATION {
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG NumberOfLinks;
    BOOLEAN DeletePending;
    BOOLEAN Directory;
} FILE_STANDARD_INFORMATION, *PFILE_STANDARD_INFORMATION;

typedef struct _KPROCESS *PEPROCESS;

typedef
BOOLEAN
FAST_IO_LOCK (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ PEPROCESS ProcessId,
    _In_ ULONG Key,
    _In_ BOOLEAN FailImmediately,
    _In_ BOOLEAN ExclusiveLock,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_LOCK *PFAST_IO_LOCK;

typedef
BOOLEAN
FAST_IO_QUERY_STANDARD_INFO (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ BOOLEAN Wait,
    _Out_ PFILE_STANDARD_INFORMATION Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_QUERY_STANDARD_INFO *PFAST_IO_QUERY_STANDARD_INFO;

typedef
BOOLEAN
FAST_IO_UNLOCK_ALL (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PEPROCESS ProcessId,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_UNLOCK_ALL *PFAST_IO_UNLOCK_ALL;


typedef
BOOLEAN
FAST_IO_UNLOCK_SINGLE (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ PEPROCESS ProcessId,
    _In_ ULONG Key,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_UNLOCK_SINGLE *PFAST_IO_UNLOCK_SINGLE;

typedef
BOOLEAN
FAST_IO_UNLOCK_ALL_BY_KEY (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PVOID ProcessId,
    _In_ ULONG Key,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_UNLOCK_ALL_BY_KEY *PFAST_IO_UNLOCK_ALL_BY_KEY;

typedef
BOOLEAN
FAST_IO_DEVICE_CONTROL (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ BOOLEAN Wait,
    _In_opt_ PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_opt_ PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength,
    _In_ ULONG IoControlCode,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_DEVICE_CONTROL *PFAST_IO_DEVICE_CONTROL;

typedef
VOID
FAST_IO_RELEASE_FILE (
    _In_ struct _FILE_OBJECT *FileObject
    );

typedef FAST_IO_RELEASE_FILE *PFAST_IO_RELEASE_FILE;

typedef
VOID
FAST_IO_ACQUIRE_FILE (
    _In_ struct _FILE_OBJECT *FileObject
    );

typedef FAST_IO_ACQUIRE_FILE *PFAST_IO_ACQUIRE_FILE;


typedef
VOID
FAST_IO_DETACH_DEVICE (
    _In_ struct _DEVICE_OBJECT *SourceDevice,
    _In_ struct _DEVICE_OBJECT *TargetDevice
    );

typedef FAST_IO_DETACH_DEVICE *PFAST_IO_DETACH_DEVICE;

typedef
BOOLEAN
FAST_IO_QUERY_NETWORK_OPEN_INFO (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ BOOLEAN Wait,
    _Out_ struct _FILE_NETWORK_OPEN_INFORMATION *Buffer,
    _Out_ struct _IO_STATUS_BLOCK *IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_QUERY_NETWORK_OPEN_INFO *PFAST_IO_QUERY_NETWORK_OPEN_INFO;

typedef
NTSTATUS
FAST_IO_ACQUIRE_FOR_MOD_WRITE (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER EndingOffset,
    _Out_ struct _ERESOURCE **ResourceToRelease,
    _In_ struct _DEVICE_OBJECT *DeviceObject
             );

typedef FAST_IO_ACQUIRE_FOR_MOD_WRITE *PFAST_IO_ACQUIRE_FOR_MOD_WRITE;

typedef struct _MDL {
    struct _MDL *MdlNext;
    short MdlSize;
    short MdlFlags;
    struct _EPROCESS *Process;
    ULONG *lpMappedSystemVa;
    ULONG *lpStartVa;
    ULONG ByteCount;
    ULONG ByteOffset;
} MDL;
typedef MDL *PMDL;

typedef
BOOLEAN
FAST_IO_MDL_READ (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _Out_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_MDL_READ *PFAST_IO_MDL_READ;

_Function_class_(FAST_IO_MDL_READ_COMPLETE)
_IRQL_requires_same_
typedef
BOOLEAN
FAST_IO_MDL_READ_COMPLETE (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PMDL MdlChain,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_MDL_READ_COMPLETE *PFAST_IO_MDL_READ_COMPLETE;

typedef
BOOLEAN
FAST_IO_PREPARE_MDL_WRITE (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _Out_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_PREPARE_MDL_WRITE *PFAST_IO_PREPARE_MDL_WRITE;

typedef
BOOLEAN
FAST_IO_MDL_WRITE_COMPLETE (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ PMDL MdlChain,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_MDL_WRITE_COMPLETE *PFAST_IO_MDL_WRITE_COMPLETE;

typedef
BOOLEAN
FAST_IO_READ_COMPRESSED (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _Out_ PVOID Buffer,
    _Out_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _Out_writes_bytes_(CompressedDataInfoLength) struct _COMPRESSED_DATA_INFO *CompressedDataInfo,
    _In_ ULONG CompressedDataInfoLength,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_READ_COMPRESSED *PFAST_IO_READ_COMPRESSED;

typedef
BOOLEAN
FAST_IO_WRITE_COMPRESSED (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _In_ PVOID Buffer,
    _Out_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_reads_bytes_(CompressedDataInfoLength) struct _COMPRESSED_DATA_INFO *CompressedDataInfo,
    _In_ ULONG CompressedDataInfoLength,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_WRITE_COMPRESSED *PFAST_IO_WRITE_COMPRESSED;

typedef
BOOLEAN
FAST_IO_MDL_READ_COMPLETE_COMPRESSED (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PMDL MdlChain,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_MDL_READ_COMPLETE_COMPRESSED *PFAST_IO_MDL_READ_COMPLETE_COMPRESSED;

typedef
BOOLEAN
FAST_IO_MDL_WRITE_COMPLETE_COMPRESSED (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ PMDL MdlChain,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_MDL_WRITE_COMPLETE_COMPRESSED *PFAST_IO_MDL_WRITE_COMPLETE_COMPRESSED;


typedef struct _FILE_NETWORK_OPEN_INFORMATION {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG FileAttributes;
} FILE_NETWORK_OPEN_INFORMATION, *PFILE_NETWORK_OPEN_INFORMATION;



typedef
BOOLEAN
FAST_IO_QUERY_OPEN (
    _Inout_ struct _IRP *Irp,
    _Out_ PFILE_NETWORK_OPEN_INFORMATION NetworkInformation,
    _In_ struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_QUERY_OPEN *PFAST_IO_QUERY_OPEN;

typedef
NTSTATUS
FAST_IO_RELEASE_FOR_MOD_WRITE (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ struct _ERESOURCE *ResourceToRelease,
    _In_ struct _DEVICE_OBJECT *DeviceObject
             );

typedef FAST_IO_RELEASE_FOR_MOD_WRITE *PFAST_IO_RELEASE_FOR_MOD_WRITE;

typedef
NTSTATUS
FAST_IO_ACQUIRE_FOR_CCFLUSH (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ struct _DEVICE_OBJECT *DeviceObject
             );

typedef FAST_IO_ACQUIRE_FOR_CCFLUSH *PFAST_IO_ACQUIRE_FOR_CCFLUSH;

typedef
NTSTATUS
FAST_IO_RELEASE_FOR_CCFLUSH (
    _In_ struct _FILE_OBJECT *FileObject,
    _In_ struct _DEVICE_OBJECT *DeviceObject
             );

typedef FAST_IO_RELEASE_FOR_CCFLUSH *PFAST_IO_RELEASE_FOR_CCFLUSH;



typedef struct _FAST_IO_DISPATCH {
    ULONG SizeOfFastIoDispatch;
    PFAST_IO_CHECK_IF_POSSIBLE FastIoCheckIfPossible;
    PFAST_IO_READ FastIoRead;
    PFAST_IO_WRITE FastIoWrite;
    PFAST_IO_QUERY_BASIC_INFO FastIoQueryBasicInfo;
    PFAST_IO_QUERY_STANDARD_INFO FastIoQueryStandardInfo;
    PFAST_IO_LOCK FastIoLock;
    PFAST_IO_UNLOCK_SINGLE FastIoUnlockSingle;
    PFAST_IO_UNLOCK_ALL FastIoUnlockAll;
    PFAST_IO_UNLOCK_ALL_BY_KEY FastIoUnlockAllByKey;
    PFAST_IO_DEVICE_CONTROL FastIoDeviceControl;
    PFAST_IO_ACQUIRE_FILE AcquireFileForNtCreateSection;
    PFAST_IO_RELEASE_FILE ReleaseFileForNtCreateSection;
    PFAST_IO_DETACH_DEVICE FastIoDetachDevice;
    PFAST_IO_QUERY_NETWORK_OPEN_INFO FastIoQueryNetworkOpenInfo;
    PFAST_IO_ACQUIRE_FOR_MOD_WRITE AcquireForModWrite;
    PFAST_IO_MDL_READ MdlRead;
    PFAST_IO_MDL_READ_COMPLETE MdlReadComplete;
    PFAST_IO_PREPARE_MDL_WRITE PrepareMdlWrite;
    PFAST_IO_MDL_WRITE_COMPLETE MdlWriteComplete;
    PFAST_IO_READ_COMPRESSED FastIoReadCompressed;
    PFAST_IO_WRITE_COMPRESSED FastIoWriteCompressed;
    PFAST_IO_MDL_READ_COMPLETE_COMPRESSED MdlReadCompleteCompressed;
    PFAST_IO_MDL_WRITE_COMPLETE_COMPRESSED MdlWriteCompleteCompressed;
    PFAST_IO_QUERY_OPEN FastIoQueryOpen;
    PFAST_IO_RELEASE_FOR_MOD_WRITE ReleaseForModWrite;
    PFAST_IO_ACQUIRE_FOR_CCFLUSH AcquireForCcFlush;
    PFAST_IO_RELEASE_FOR_CCFLUSH ReleaseForCcFlush;
} FAST_IO_DISPATCH, *PFAST_IO_DISPATCH;

typedef struct _VPB {
    SHORT Type;
    SHORT Size;
    USHORT Flags;
    USHORT VolumeLabelLength;   // in bytes
    struct _DEVICE_OBJECT *DeviceObject;
    struct _DEVICE_OBJECT *RealDevice;
    ULONG SerialNumber;
    ULONG ReferenceCount;
    WCHAR VolumeLabel[MAXIMUM_VOLUME_LABEL_LENGTH / sizeof(WCHAR)];
} VPB, *PVPB;

typedef struct _VPB *PVPB;



typedef struct _DRIVER_EXTENSION {

    //
    // Back pointer to Driver Object
    //

    struct _DRIVER_OBJECT *DriverObject;

    //
    // The AddDevice entry point is called by the Plug & Play manager
    // to inform the driver when a new device instance arrives that this
    // driver must control.
    //

    PDRIVER_ADD_DEVICE AddDevice;

    //
    // The count field is used to count the number of times the driver has
    // had its registered reinitialization routine invoked.
    //

    ULONG Count;

    //
    // The service name field is used by the pnp manager to determine
    // where the driver related info is stored in the registry.
    //

    UNICODE_STRING ServiceKeyName;

    //
    // Note: any new shared fields get added here.
    //


} DRIVER_EXTENSION, *PDRIVER_EXTENSION;

typedef struct _IO_TIMER *PIO_TIMER;

typedef struct _DEVICE_OBJECT {
  SHORT                   Type;
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
  CHAR                    StackSize;
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


typedef struct _DEVOBJ_EXTENSION {

    SHORT          Type;
    USHORT          Size;

    PDEVICE_OBJECT  DeviceObject;               // owning device object

    //
    // The remaining fields are reserved for system use.
    //

    ULONG           PowerFlags;
    struct          _DEVICE_OBJECT_POWER_EXTENSION  *Dope;
    ULONG ExtensionFlags;
    PVOID           DeviceNode;
    PDEVICE_OBJECT  AttachedTo;
    __volatile LONG StartIoCount;
    LONG           StartIoKey;
    ULONG          StartIoFlags;
    PVPB           Vpb;
    PVOID DependencyNode;
    PVOID InterruptContext;
    __volatile LONG InterruptCount;

    __volatile PVOID VerifierContext;

} DEVOBJ_EXTENSION, *PDEVOBJ_EXTENSION;



typedef struct _DRIVER_OBJECT {
  SHORT             Type;
  SHORT             Size;
  PDEVICE_OBJECT     DeviceObject;
  ULONG              Flags;
  PVOID              DriverStart;
  ULONG              DriverSize;
  PVOID              DriverSection;
  PDRIVER_EXTENSION  DriverExtension; //Done
  UNICODE_STRING     DriverName;
  PUNICODE_STRING    HardwareDatabase;
  PFAST_IO_DISPATCH  FastIoDispatch;
  PDRIVER_INITIALIZE DriverInit;
  PDRIVER_STARTIO    DriverStartIo;
  PDRIVER_UNLOAD     DriverUnload;
  PDRIVER_DISPATCH   MajorFunction[IRP_MJ_MAXIMUM_FUNCTION + 1];
} DRIVER_OBJECT, *PDRIVER_OBJECT;


#endif
