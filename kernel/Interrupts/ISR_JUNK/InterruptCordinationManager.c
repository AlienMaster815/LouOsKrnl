#include <LouAPI.h>
/*
-- Tyler Grenier 1-16-24 7:55 PM
-- Well were back in action to do some damage
-- in this case the operating system did more
-- damage to me due to the fact i came back 
-- to a page fault cause by memory leaking 
-- into kernel space 
*/

//we are going to define variables in this file and change them through
// functions in this file because having everything in headers might be
// one of the memory leak issues GOD I LOVE C!!!

UMAXBITRATE Registered_Devices = 0;

// here we define a struct for an object for looking up cordination
typedef struct __attribute__((packed)) {
	UMAXBITRATE Device_Number;
	UMAXBITRATE Device_Type;
	void* Interrupt_Handler;
}Interrupt_Object;


//here we create a function to register a device to an interrupt
// we also return a status value to make sure there are no errors
LOUSTATUS Register_Device_To_Interrupt(UMAXBITRATE Device_Type, void* Interrupt_Handler) {
	Registered_Devices++;

	return LOUSTATUS_GOOD;
}

//here we create a function to unregister a device from an interrupt
// we also return a status value to make sure there are no errors
LOUSTATUS UnRegister_Device_To_Interrupt(UMAXBITRATE Device_Type, void* Interrupt_Handler) {

	Registered_Devices--;
	return LOUSTATUS_GOOD;
}


//Here We Define Our Cordination algorithim to send 
//the data where it needs to go, do to the vast different
//types of hardware and their asshole companies that fight 
//over hardware resources and the fact were going to be re-
//writing the whole fucking interrupt handleing system i 
// guess we should put in dynamic interrupt handleing earlyer... :( 
// It is also type void because we will be doing kernel checks 
// in the interrupt handlers themselves
void InteruptCordinationManager(uint8_t Interrupt_Num) {

}