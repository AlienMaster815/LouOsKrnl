/*
-- Tyler Grenier 10/6/23 6:13
-- Today im starting to write the code for
-- making my kernel compatible with windows
-- system files and well be in buisness as
-- for drivers then i finnish my kernel and
-- winapi compatibility
*/


// this will be in our kernel.h but its here
// while we build this being this is a seperate
// project so far

#include <stdint.h>
#include <stddef.h>

#include <wdm.h>

typedef LOUSTATUS uint64_t

//extern LOUSTATUS Driver_Entry(DriverObject* objpointer, char* Registry_entry);


LOUSTATUS LouLoadDriver(char* driver,
char* Registry_entry) {
	// later we will implement a registry system 
	// and a system to create unkown registry entries

	uintptr_t driver_location_on_disk; //= Get_Files_Disk_Location(driver);

	uint64_t Buffer_size; //= File_Buffer_size(driver);

	uintptr_t allocated_driver_addr = Lou_Allocate_Mem(buffer_size);

	DriverObject* allocated_pdriver_obj_addr = Lou_Allocate_Mem(Driver_Object);

	Load_File_To_Memorry_addr(driver_location_on_disk ,allocated_driver_addr);
	
	Get_Driver_Entry_Point(allocated_driver_addr);

	// later well try and find entry points and such and properly
	
	// Driver_Entry(allocated_pdriver_obj_addr, Registry_entry);

	return LOUSTATUS_GOOD;
}