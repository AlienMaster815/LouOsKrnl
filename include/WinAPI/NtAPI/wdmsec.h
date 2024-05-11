#ifndef WDMSEC_H
#define WDMSEC_H

#include <NtAPI.h>
#include "../WinAPITypes/CommonTypes.h"

NTSTATUS WdmlibIoCreateDeviceSecure(
  _In_           PDRIVER_OBJECT   DriverObject,
  _In_           ULONG            DeviceExtensionSize,
  _In_opt_ PUNICODE_STRING  DeviceName,
  _In_           DEVICE_TYPE      DeviceType,
  _In_           ULONG            DeviceCharacteristics,
  _In_           BOOLEAN          Exclusive,
  _In_           PCUNICODE_STRING DefaultSDDLString,
  _In_opt_ LPCGUID          DeviceClassGuid,
                 PDEVICE_OBJECT   *DeviceObject
);

NTSTATUS WdmlibIoValidateDeviceIoControlAccess(
  _In_ PIRP  Irp,
  _In_ ULONG RequiredAccess
);

NTSTATUS WdmlibRtlInitUnicodeStringEx(
  _Out_          PUNICODE_STRING DestinationString,
  _In_opt_ PCWSTR          SourceString
);

#ifndef _WMI_CHANGER_PROBLEM_DEVICE_ERROR
#define _WMI_CHANGER_PROBLEM_DEVICE_ERROR
typedef struct _WMI_CHANGER_PROBLEM_DEVICE_ERROR {
  ULONG ChangerProblemType;
} WMI_CHANGER_PROBLEM_DEVICE_ERROR, *PWMI_CHANGER_PROBLEM_DEVICE_ERROR;
#endif




#endif 