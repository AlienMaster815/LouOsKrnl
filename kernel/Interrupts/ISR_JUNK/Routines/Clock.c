
#include <LouAPI.h>

void UpdateThreadManager();

bool GetAPICStatus();



void Clock() {

	LOUSTATUS Status = LOUSTATUS_GOOD;

	//Later We Will Find The Clock Caller
	UpdateThreadManager();
	//LouPrint("Clock Was Used\n");
	return;
}