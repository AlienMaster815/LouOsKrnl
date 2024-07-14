/*++

Module Name:

    driver.h

Abstract:

    This file contains the driver definitions.

Environment:

    Kernel-mode Driver Framework

--*/

#include <ntddk.h>
#include <wdf.h>
#include <initguid.h>

#include "device.h"
#include "queue.h"
#include "trace.h"

EXTERN_C_START

//
// WDFDRIVER Events
//

DRIVER_INITIALIZE DriverEntry;
EVT_WDF_DRIVER_DEVICE_ADD KMDFDriver1EvtDeviceAdd;
EVT_WDF_OBJECT_CONTEXT_CLEANUP KMDFDriver1EvtDriverContextCleanup;


#define DEBUG 1
#if defined(_MSC_VER)
#pragma warning(disable:4214) // bit field types other than int
#pragma warning(disable:4201) // nameless struct/union
#endif

#include <ntddk.h>
#include <wdf.h>
#include <storport.h>



EXTERN_C_END
