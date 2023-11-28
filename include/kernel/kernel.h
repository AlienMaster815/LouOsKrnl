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

#ifdef __x86_64__


#define KernelCodeSegment 0x08


#endif

#ifdef __i386__

#define KernelCodeSegment 0x08

#endif

#endif
