#include <kernel/acpi.h>
#include <kernel/memmory.h>
#include <stat.h>
#include <stdint.h>
#include <stdio.h>





STATUS ACPI_PARSE(RSDP* rsdp){
	 //FIND_ACPI_VERSION(rsdp);
	uint8_t version = rsdp->revision;

	if(version == 1){
		RSDP1* rsdp1 = (RSDP1*)rsdp;
		
		 
		if (((uintptr_t)rsdp1 & 0xF) == 0) {
			LouPrint("version 1 at address: %d \n", rsdp1->rsdt_address);
			return GOOD;
		}
		else {
			LouPrint("RSDP 1 Not Aligned");
			return BAD;
		}
	}	
	else if(version >= 2){
		RSDP2* rsdp2 = (RSDP2*)rsdp;

		if (((uintptr_t)rsdp2 & 0xF) == 0) {
			LouPrint("version 2 or above at address: %d \n", rsdp2->rsdt_address);
			return GOOD;
		}
		else {
			LouPrint("RSDP 2 Not Aligned");
			return BAD;
		}
	}
	return BAD;
}
//if no valid ACPI is found
//panic occours because the
//kernel requires ACPI 
//to function later we can
//add apm or some other crap
//but i dont think 
//we will find any apm devices


