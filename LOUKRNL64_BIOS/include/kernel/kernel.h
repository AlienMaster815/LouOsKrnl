#ifndef KERNEL_H
#define KERNEL_H
/* Tyler Grenier 9/21/23 10:00 PM
-- This is Where the API For Our Kernel
-- is started with Kernel entry data Type 
-- Being defined as a no return void
-- Later on might be designated as no ssp 
-- as well... 
*/

#include <stdint.h>
#include <stdnoreturn.h>
#include <kernel/memmory.h>
#include <kernel/acpi.h>
#include <kernel/gdt.h>


#define KERNEL_ENTRY extern void

#define KernelCodeSegment 0x08//(sizeof(GDT_ENTRY) * 1)
#define KernelDataSegment (sizeof(GDT_ENTRY) * 2)

#define UserCodeSegment (sizeof(GDT_ENTRY) * 3)
#define UserDataSegment (sizeof(GDT_ENTRY) * 4)

#define SystemSecurityCodeSegment (sizeof(GDT_ENTRY) * 5)
#define SystemSecurityDataSegment (sizeof(GDT_ENTRY) * 6)

#define UserSecurityCodeSegment (sizeof(GDT_ENTRY) * 7)
#define UserSecurityDataSegment (sizeof(GDT_ENTRY) * 8)

#define IdtCodeSegment (sizeof(GDT_ENTRY) * 9)
#define IdtDataSegment (sizeof(GDT_ENTRY) * 10)

#define LdtCodeSegment (sizeof(GDT_ENTRY * 11)
#define LdtDataSegment (sizeof(GDT_ENTRY) * 12)

#define GdtCodeSegment (sizeof(GDT_ENTRY) * 13)
#define GdtDataSegment (sizeof(GDT_ENTRY) * 14)

#define CallGateCodeSegment (sizeof(GDT_ENTRY) * 15)
#define CallGateDataSegment (sizeof(GDT_ENTRY) * 16)

#define TaskGateCodeSegment (sizeof(GDT_ENTRY) * 17)
#define TaskGateDataSegment (sizeof(GDT_ENTRY) * 18)

#define InterruptGateCodeSegment (sizeof(GDT_ENTRY) * 19)
#define InterruptGateDataSegment (sizeof(GDT_ENTRY) * 20)

#define TrapGateCodeSegment (sizeof(GDT_ENTRY) * 21)
#define TrapGateDataSegment (sizeof(GDT_ENTRY) * 22)

#define StackCodeSegment (sizeof(GDT_ENTRY) * 23)
#define StackDataSegment (sizeof(GDT_ENTRY) * 24)

#endif
