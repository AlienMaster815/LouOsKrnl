#ifndef WMILIB_H
#define WMILIB_H

/*

NTSTATUS WmiCompleteRequest(
  [in]      PDEVICE_OBJECT DeviceObject,
  [in, out] PIRP           Irp,
  [in]      NTSTATUS       Status,
  [in]      ULONG          BufferUsed,
  [in]      CCHAR          PriorityBoost
);

NTSTATUS WmiFireEvent(
  [in]           PDEVICE_OBJECT DeviceObject,
  [in]           LPCGUID        Guid,
  [in]           ULONG          InstanceIndex,
  [in]           ULONG          EventDataSize,
  [in, optional] PVOID          EventData
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
  [in]      PWMILIB_CONTEXT         WmiLibInfo,
  [in]      PDEVICE_OBJECT          DeviceObject,
  [in, out] PIRP                    Irp,
  [out]     PSYSCTL_IRP_DISPOSITION IrpDisposition
);



*/

#endif
