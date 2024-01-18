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
UMAXBITRATE ActualDeviceNumber = 0;

// here we define a struct for an object for looking up cordination
typedef struct __attribute__((packed)) {
	UMAXBITRATE Device_Number;
	UMAXBITRATE Device_Type;
	uint16_t Device_ID;
	uint8_t Interrupt_Number;
	void (*Interrupt_Handler)();
}Interrupt_Object;

Interrupt_Object *deviceTable[1000];

//here we create a function to register a device to an interrupt
// we also return a status value to make sure there are no errors
LOUSTATUS Register_Device_To_Interrupt(UMAXBITRATE Device_Number,UMAXBITRATE Device_Type,uint16_t Device_ID,uint8_t Interrupt_Number, void (*Interrupt_Handler)()) {
	uint8_t i;
	for (i = 0; i < Registered_Devices; i++) {
		if ((i < Registered_Devices) ||
			   ((deviceTable[i]->Device_Number == 0) &&
				(deviceTable[i]->Device_Type == 0) &&
				(deviceTable[i]->Device_ID == 0) &&
				(deviceTable[i]->Interrupt_Number == 0))) {
			deviceTable[i]->Device_Number = Device_Number;
			deviceTable[i]->Device_Type = Device_Type;
			deviceTable[i]->Device_ID = Device_ID;
			deviceTable[i]->Interrupt_Number = Interrupt_Number;
			deviceTable[i]->Interrupt_Handler = Interrupt_Handler;
			break;
		}
		else {
			i++;
			if (i >= Registered_Devices) {
				Registered_Devices++;
				deviceTable[Registered_Devices]->Device_Number = Device_Number;
				deviceTable[Registered_Devices]->Device_Type = Device_Type;
				deviceTable[Registered_Devices]->Device_ID = Device_ID;
				deviceTable[Registered_Devices]->Interrupt_Number = Interrupt_Number;
				deviceTable[Registered_Devices]->Interrupt_Handler = Interrupt_Handler;
			}
			break;
		}
	}
	ActualDeviceNumber++;
	return LOUSTATUS_GOOD;
}

//here we create a function to unregister a device from an interrupt
// we also return a status value to make sure there are no errors
LOUSTATUS UnRegister_Device_To_Interrupt(UMAXBITRATE Device_Number, UMAXBITRATE Device_Type, uint16_t Device_ID, uint8_t Interrupt_Number, void (*Interrupt_Handler)()) {

	uint8_t i;
	for (i = 0; i < Registered_Devices; i++) {
		if ((deviceTable[i]->Device_Number == Device_Number) &&
			(deviceTable[i]->Device_Type == Device_Type) &&
			(deviceTable[i]->Device_ID == Device_ID) &&
			(deviceTable[i]->Interrupt_Number == Interrupt_Number) &&
			(deviceTable[i]->Interrupt_Handler == Interrupt_Handler)) {
			deviceTable[i]->Device_Number = 0;
			deviceTable[i]->Device_Type = 0;
			deviceTable[i]->Device_ID = 0;
			deviceTable[i]->Interrupt_Number = 0;
			deviceTable[i]->Interrupt_Handler = 0;
			break;
		}
		else continue;
	}
	ActualDeviceNumber--;
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
void InteruptCordinationManager(uint8_t Interrupt_Num,UMAXBITRATE Device_Number,uint16_t Device_Type,uint16_t Device_ID) {
	uint16_t i;
	for (i = 0; i < 1001; i++) {
		if ((deviceTable[i]->Device_Number == Device_Number) &&
			(deviceTable[i]->Device_Type == Device_Type) &&
			(deviceTable[i]->Device_ID == Device_ID) &&
			(deviceTable[i]->Interrupt_Number == Interrupt_Num)) {
				deviceTable[i]->Interrupt_Handler;
				return;
		}
	}
	// If we are here we ignore the interrupt handleing and give off a device is not
	// being managed or is unknown and shut it down
	Turn_Off_Device(Interrupt_Num,Device_Number,Device_Type,Device_ID);
}