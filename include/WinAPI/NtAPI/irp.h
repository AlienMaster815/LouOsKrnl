#ifndef IRP_H
#define IRP_H

#include <NtAPI.h>

typedef
VOID
(*PDRIVER_CANCEL) (
    _In_ struct _DEVICE_OBJECT* DeviceObject,
    _In_ struct _IRP* Irp
    );



typedef struct _IRP {
    CSHORT Type;
    USHORT Size;
    PVOID MdlAddress;
    ULONG Flags;
    union {
        struct _IRP* MasterIrp;
        LONG IrpCount;
        PVOID SystemBuffer;
    } AssociatedIrp;
    LIST_ENTRY ThreadListEntry;
    IO_STATUS_BLOCK IoStatus;
    KPROCESSOR_MODE RequestorMode;
    BOOLEAN PendingReturned;
    BOOLEAN Cancel;
    KIRQL CancelIrql;
    PDRIVER_CANCEL CancelRoutine;
    PVOID UserBuffer;
    union {
        struct {
            union {
                KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
                struct {
                    PVOID DriverContext[4];
                };
            };
            PETHREAD Thread;
            PCHAR AuxiliaryBuffer;
            struct {
                LIST_ENTRY ListEntry;
                union {
                    struct _IO_STACK_LOCATION* CurrentStackLocation;
                    ULONG PacketType;
                };
            };
            PFILE_OBJECT OriginalFileObject;
        } Overlay;
        KAPC Apc;
        PVOID CompletionKey;
    } Tail;
} IRP, * PIRP;



#endif