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

void (*Handler[256])();

// here we define a struct for an object for looking up cordination

//here we create a function to register a device to an interrupt
// we also return a status value to make sure there are no errors
LOUSTATUS Register_Device_To_Interrupt(uint8_t Interrupt_Number, void (*Interrupt_Handler)()) {
	Handler[Interrupt_Number] = Interrupt_Handler;
	return LOUSTATUS_GOOD;
}

//here we create a function to unregister a device from an interrupt
// we also return a status value to make sure there are no errors
LOUSTATUS UnRegister_Device_To_Interrupt(uint8_t Interrupt_Number) {
	Handler[Interrupt_Number] = NULL;
	return LOUSTATUS_GOOD;
}


void Turn_Off_Device(uint8_t Interrupt_Num, UMAXBITRATE Device_Number, uint16_t Device_Type, uint16_t Device_ID) {
	//TODO: Implement An Algorithim to shut down the device
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
	
	if (Handler[Interrupt_Num] == NULL) {
		LouPanic("Interrupt Could Not Be Handled",GOOD);
	}
	else {
		Handler[Interrupt_Num]();
	}
}