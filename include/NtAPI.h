#pragma once

#ifndef _NTAPI_H
#define _NTAPI_H

#ifndef _KERNEL_ENTRY_
#define _KERNEL_ENTRY_
#define KERNEL_ENTRY extern "C"
#endif

#ifdef _KERNEL_MODULE_
#pragma warning(push)
#pragma warning(disable: 4083) // Disable specific warning
#pragma warning(disable: 4005) // Disable macro redefinition warning
#pragma warning(push)
#pragma warning(disable: 5051) // Disable C5051 warning
#endif

#include <WDKSubsystem/Debuging/debuging.h>
#include <WDKSubsystem/Types/DebugTypes.h>
#include <WDKSubsystem/Types/SALTypes.h>
#include <WinAPI/WinAPITypes/CommonTypes.h>
#include <WinAPI/WinAPITypes/WDFLDRTypes.h>
#include <KernelAPI/WDFLDR.h>
#include <WinAPI/NtAPI/NtAPIFunc.h>

#define ACPI 1094930505
#define SMBIOS 837766737983
#define APM 658077

#ifndef _KERNEL_MODULE_
KERNEL_IMPORT void GetPciConfiguration(ULONG SystemIoBusNumber,ULONG SlotNumber, ULONG Function ,PPCI_COMMON_CONFIG ConfigBuffer);
#else
KERNEL_EXPORT void GetPciConfiguration(ULONG SystemIoBusNumber,ULONG SlotNumber, ULONG Function ,PPCI_COMMON_CONFIG ConfigBuffer);


#endif

#endif
