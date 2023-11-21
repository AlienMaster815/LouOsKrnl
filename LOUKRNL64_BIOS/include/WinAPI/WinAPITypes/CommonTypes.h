#ifndef _COMMON_TYPES_H
#define _COMMON_TYPES_H

#include <stdint.h>

//Fixed Percision Integers

typedef uint32_t DWORD32, UINT32, ULONG32;
typedef uint64_t DWORD64, UINT64, ULONG64;
typedef int32_t INT32, LONG32;
typedef int64_t INT64, LONG64;

//Pointer Percision Integers
typedef unsigned long *DWORD_PTR;

typedef int32_t HALF_PTR;//16 bit int 32 bit systems
typedef int INT_PTR; //32 bit for 32 bit systems
typedef long LONG_PTR;
typedef uint64_t SIZE_T;
typedef int64_t SSIZE_T;
typedef uint32_t UHALF_PTR;
typedef unsigned int UINT_PTR;
typedef unsigned ULONG_PTR;

//FIXED PRECISION POINTER TYPES
typedef int64_t POINTER_64; // 32 in 32 bit



#define CONST const
#define IRP_MJ_MAXIMUM_FUNCTION         0x1b
#define SHORT short
#define ULONG unsigned long
#define LONG long
#define PVOID void*
#define VOID void
#define CHAR char
#define USHORT uint16_t
#define WCHAR wchar_t
#define UCHAR uint8_t


#define DEVICE_TYPE ULONG


#define MAXIMUM_VOLUME_LABEL_LENGTH  (32 * sizeof(WCHAR)) // 32 characters



typedef wchar_t* PWSTR;


typedef int32_t NTSTATUS;

#define STATUS_SUCCESS ((NTSTATUS)0x00000000L)


typedef struct _SECURITY_DESCRIPTOR {
    UCHAR Revision;
    UCHAR Sbz1;
    //TODO: 
    //SECURITY_DESCRIPTOR_CONTROL Control;
    //PSID Owner;
    //PSID Group;
    //PACL Sacl;
    //PACL Dacl;
} SECURITY_DESCRIPTOR, *PSECURITY_DESCRIPTOR;

typedef struct _KEVENT {
    //TODO: DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT;//, *RESTRICTED_POINTER PRKEVENT;


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
    //SINGLE_LIST_ENTRY DpcListEntry;
    //KAFFINITY ProcessorHistory;
    //PKDEFERRED_ROUTINE DeferredRoutine;
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


typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
} LIST_ENTRY, *PLIST_ENTRY; //TODO: , *RESTRICTED_POINTER PRLIST_ENTRY;  //Define This Later



typedef struct _KDEVICE_QUEUE {
    SHORT Type;
    SHORT Size;
    LIST_ENTRY DeviceListHead;
    //TODO: KSPIN_LOCK Lock;

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


typedef struct _WAIT_CONTEXT_BLOCK {
    union {
        //KDEVICE_QUEUE_ENTRY WaitQueueEntry;
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
    //PDRIVER_CONTROL DeviceRoutine;
    PVOID DeviceContext;
    ULONG NumberOfMapRegisters;
    PVOID DeviceObject;
    PVOID CurrentIrp;
    //PKDPC BufferChainingDpc;
} WAIT_CONTEXT_BLOCK, *PWAIT_CONTEXT_BLOCK;

typedef struct _FAST_IO_DISPATCH {
    ULONG SizeOfFastIoDispatch;
    //PFAST_IO_CHECK_IF_POSSIBLE FastIoCheckIfPossible;
    //PFAST_IO_READ FastIoRead;
    //PFAST_IO_WRITE FastIoWrite;
    //PFAST_IO_QUERY_BASIC_INFO FastIoQueryBasicInfo;
    //PFAST_IO_QUERY_STANDARD_INFO FastIoQueryStandardInfo;
    //PFAST_IO_LOCK FastIoLock;
    //PFAST_IO_UNLOCK_SINGLE FastIoUnlockSingle;
    //PFAST_IO_UNLOCK_ALL FastIoUnlockAll;
    //PFAST_IO_UNLOCK_ALL_BY_KEY FastIoUnlockAllByKey;
    //PFAST_IO_DEVICE_CONTROL FastIoDeviceControl;
    //PFAST_IO_ACQUIRE_FILE AcquireFileForNtCreateSection;
    //PFAST_IO_RELEASE_FILE ReleaseFileForNtCreateSection;
    //PFAST_IO_DETACH_DEVICE FastIoDetachDevice;
    //PFAST_IO_QUERY_NETWORK_OPEN_INFO FastIoQueryNetworkOpenInfo;
    //PFAST_IO_ACQUIRE_FOR_MOD_WRITE AcquireForModWrite;
    //PFAST_IO_MDL_READ MdlRead;
    //PFAST_IO_MDL_READ_COMPLETE MdlReadComplete;
    //PFAST_IO_PREPARE_MDL_WRITE PrepareMdlWrite;
    //PFAST_IO_MDL_WRITE_COMPLETE MdlWriteComplete;
    //PFAST_IO_READ_COMPRESSED FastIoReadCompressed;
    //PFAST_IO_WRITE_COMPRESSED FastIoWriteCompressed;
    //PFAST_IO_MDL_READ_COMPLETE_COMPRESSED MdlReadCompleteCompressed;
    //PFAST_IO_MDL_WRITE_COMPLETE_COMPRESSED MdlWriteCompleteCompressed;
    //PFAST_IO_QUERY_OPEN FastIoQueryOpen;
    //PFAST_IO_RELEASE_FOR_MOD_WRITE ReleaseForModWrite;
    //PFAST_IO_ACQUIRE_FOR_CCFLUSH AcquireForCcFlush;
    //PFAST_IO_RELEASE_FOR_CCFLUSH ReleaseForCcFlush;
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
