
#ifndef LOUAPI_H
#define LOUAPI_H

//Include API Headers

#include <stdlib.h>

#include <stdint.h>
#include <stat.h>
#include <stdio.h>
#include <string.h>
#include <Time.h>
#include <fstream.h>
#include <KernelAPI/KernelAPI.h>
#include <Kernel/kernel.h>
#include <drivers/drivers.h>
#include <bootloader/grub/multiboot.h>
#include <CPUInstructionSet/CPURegisters.h>

#include "WinAPI/NtAPI/ntstatus.h"

#include <Random.h>

#include <windows.h>
#include <geometry.h>
#include <SharedTypes.h>


#define ACPIBUFFER 512
#define ERRMAPPINGIO -1

typedef void* FILE;

#endif
