#include <kernel/acpi.h>
#include <kernel/errors.h>
#include <bootloader/grub/multiboot.h>
#include <kernel/memmory.h>

RSDP* Find_RSDP();
//handle our acpi tasks
VOID HANDLE_ACPI();
