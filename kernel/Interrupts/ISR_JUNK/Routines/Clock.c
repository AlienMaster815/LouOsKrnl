
#include <LouAPI.h>

void UpdateThreadManager(uint64_t Rsp);

bool GetAPICStatus();

void ChangeBasePointer(uint64_t NewBase){

}
void ChangerStackPointer(uint64_t BasePointer){

}

void local_apic_send_eoi();

void Clock(uint64_t Rsp) {


	//LOUSTATUS Status = LOUSTATUS_GOOD;

	//UpdateThreadManager(Rsp);
	//LouPrint("Clock Was Used\n");
	//local_apic_send_eoi();
	return;// Rsp;
}