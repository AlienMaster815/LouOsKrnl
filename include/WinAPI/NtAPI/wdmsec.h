#ifndef WDMSEC_H
#define WDMSEC_H

/*

NTSTATUS WdmlibIoCreateDeviceSecure(
  [in]           PDRIVER_OBJECT   DriverObject,
  [in]           ULONG            DeviceExtensionSize,
  [in, optional] PUNICODE_STRING  DeviceName,
  [in]           DEVICE_TYPE      DeviceType,
  [in]           ULONG            DeviceCharacteristics,
  [in]           BOOLEAN          Exclusive,
  [in]           PCUNICODE_STRING DefaultSDDLString,
  [in, optional] LPCGUID          DeviceClassGuid,
                 PDEVICE_OBJECT   *DeviceObject
);

NTSTATUS WdmlibIoValidateDeviceIoControlAccess(
  [in] PIRP  Irp,
  [in] ULONG RequiredAccess
);

NTSTATUS WdmlibRtlInitUnicodeStringEx(
  [out]          PUNICODE_STRING DestinationString,
  [in, optional] PCWSTR          SourceString
);


typedef struct _WMI_CHANGER_PROBLEM_DEVICE_ERROR {
  ULONG ChangerProblemType;
} WMI_CHANGER_PROBLEM_DEVICE_ERROR, *PWMI_CHANGER_PROBLEM_DEVICE_ERROR;



*/

#endif 