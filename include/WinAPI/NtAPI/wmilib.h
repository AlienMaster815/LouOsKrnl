#ifndef WMILIB_H
#define WMILIB_H

#include <NtAPI.h>
#include "irp.h"


NTSTATUS WmiCompleteRequest(
  _In_       PDEVICE_OBJECT DeviceObject,
  _In_ _Out_ PIRP           Irp,
  _In_       NTSTATUS       Status,
  _In_       ULONG          BufferUsed,
  _In_       CCHAR          PriorityBoost
);



NTSTATUS WmiFireEvent(
  _In_           PDEVICE_OBJECT DeviceObject,
  _In_           LPCGUID        Guid,
  _In_           ULONG          InstanceIndex,
  _In_           ULONG          EventDataSize,
  _In_opt_		 PVOID          EventData
);

typedef struct _WMIGUIDREGINFO {
  LPCGUID Guid;
  ULONG   InstanceCount;
  ULONG   Flags;
} WMIGUIDREGINFO, *PWMIGUIDREGINFO;

typedef struct _WMILIB_CONTEXT {
  ULONG                 GuidCount;
  PWMIGUIDREGINFO       GuidList;
  PWMI_QUERY_REGINFO    QueryWmiRegInfo;
  PWMI_QUERY_DATABLOCK  QueryWmiDataBlock;
  PWMI_SET_DATABLOCK    SetWmiDataBlock;
  PWMI_SET_DATAITEM     SetWmiDataItem;
  PWMI_EXECUTE_METHOD   ExecuteWmiMethod;
  PWMI_FUNCTION_CONTROL WmiFunctionControl;
} WMILIB_CONTEXT, *PWMILIB_CONTEXT;

NTSTATUS WmiSystemControl(
  _In_      PWMILIB_CONTEXT         WmiLibInfo,
  _In_      PDEVICE_OBJECT          DeviceObject,
  _In_ _Out_ PIRP                    Irp,
  _Out_     PSYSCTL_IRP_DISPOSITION IrpDisposition
);



#endif
