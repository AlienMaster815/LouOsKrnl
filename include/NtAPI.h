#pragma once

#ifndef _NTAPI_H
#define _NTAPI_H

#define KERNEL_ENTRY extern "C"

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

void GetPciConfiguration(ULONG SystemIoBusNumber,ULONG SlotNumber, ULONG Function ,PPCI_COMMON_CONFIG ConfigBuffer);

#endif
