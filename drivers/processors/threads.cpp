#include <LouDDK.h>
#include <NtAPI.h>
#include "Processors.h"

typedef struct _GPRs{
	uint64_t RAX;
	uint64_t RBX;
	uint64_t RCX;
	uint64_t RDX;
	uint64_t RSI;
	uint64_t RDI;
	uint64_t RBP;
	uint64_t RSP;
	uint64_t R8;
	uint64_t R9;
	uint64_t R10;
	uint64_t R11;
	uint64_t R12;
	uint64_t R13;
	uint64_t R14;
	uint64_t R15;
}GPRs;

typedef struct _FPRs{
	uint64_t XMM0;
	uint64_t XMM1;
	uint64_t XMM2;
	uint64_t XMM3;
	uint64_t XMM4;
	uint64_t XMM5;
	uint64_t XMM6;
	uint64_t XMM7;
	uint64_t XMM8;
	uint64_t XMM9;
	uint64_t XMM10;
	uint64_t XMM11;
	uint64_t XMM12;
	uint64_t XMM13;
	uint64_t XMM14;
	uint64_t XMM15;
}FPRs;

typedef struct _VRs {
	uint64_t YMM0;
	uint64_t YMM1;
	uint64_t YMM2;
	uint64_t YMM3;
	uint64_t YMM4;
	uint64_t YMM5;
	uint64_t YMM6;
	uint64_t YMM7;
	uint64_t YMM8;
	uint64_t YMM9;
	uint64_t YMM10;
	uint64_t YMM11;
	uint64_t YMM12;
	uint64_t YMM13;
	uint64_t YMM14;
	uint64_t YMM15;
}VRs;

typedef struct _SRs {
	uint16_t CS;
	uint16_t DS;
	uint16_t ES;
	uint16_t FS;
	uint16_t GS;
}SRs;

typedef struct _CRs{
	uint64_t CR0;
	uint64_t CR2;
	uint64_t CR3;
	uint64_t CR4;
}CRs;

typedef struct _DRs {
	uint64_t DR0;
	uint64_t DR1;
	uint64_t DR2;
	uint64_t DR3;
	uint64_t DR4;
	uint64_t DR5;
	uint64_t DR6;
	uint64_t DR7;
}DRs;

typedef struct _RegisterTrace {
	GPRs GeneralPurpose;
	FPRs FloatingPoints;
	VRs VectorRegisters;
	uint64_t IP;
	SRs Segments;
	CRs Controls;
	DRs Debug;
}RegisterTrace, * PRegisterTrace;

typedef struct _ThreadStackEntry {
	uint8_t ThreadPresent : 1; //defines if a thread is attached
	uint8_t ProcesTmeLimitMS : 7;
	uint8_t ProcesTmeLimitUsedMS;
	uint8_t Priority;
	uint64_t StackSize;
	uint8_t PRIVLAGE;
	uint16_t ProcessorNumber;
	uint16_t ProcessID;
	PVOID ReturnValue;
	PVOID Arguments;
	RegisterTrace Registers;
	Stack stack;
}ThreadStackEntry, * PThreadStackEntry;

#define TSTACKLENGTH 0xFFFF
#define STACKENTRY sizeof(ThreadStackEntry)

PThreadStackEntry TStack[TSTACKLENGTH] = {0};

#define PRIRT 0
#define PRIHI 1
#define PRIMI 2
#define PRILO 3
#define BLOCKEDwasent it actually telling the cpu core/ 4

#define PRIKRNL 0
#define PRIUSER 1

#define THREADNOTPRESENT 0
#define THREADPRESENT 1

//static uint16_t TotalProcessors;

KERNEL_IMPORT uint64_t LouKeGetStackSize();
KERNEL_IMPORT LOUSTATUS LouKeCreateStack(Stack* Stack, uint64_t StackSize);

int ExecuteThread(uint16_t ThreadNumber) {

	return 0;
}


uint64_t GetThreadStackSize(uint16_t ThreadNumber) {

	return 0;
}

void SaveThreadInstance(uint16_t JumpingThread) {
	TStack[JumpingThread]->ThreadPresent = THREADNOTPRESENT;
	TStack[JumpingThread]->StackSize = GetThreadStackSize(JumpingThread);
}

void StartNextThread(uint16_t JumpingThread) {
	for (uint16_t Priority = 0; Priority <= PRILO; Priority++) {
		for (uint16_t i = 0; i < TSTACKLENGTH; i++) {
			if (TStack[i] == 0x0000)break;
			else if ((TStack[i]->ThreadPresent == THREADNOTPRESENT) 
				&& (TStack[i]->Priority == Priority)
				){
				//Save Registers and shit
				SaveThreadInstance(JumpingThread);
			}
		}
	}
}

LOUDDK_API_ENTRY VOID UpdateThreadManager() {

	//LouPrint("ThreadManager Recieved A CLock\n");
	for (uint16_t i = 0; i < TSTACKLENGTH; i++) {
		if (TStack[i] == 0x0000)return;
		else if((TStack[i]->ThreadPresent == THREADPRESENT) 
			&& (TStack[i]->Priority != PRIRT)) { 
			TStack[i]->ProcesTmeLimitUsedMS++;
			if (TStack[i]->ProcesTmeLimitUsedMS >= TStack[i]->ProcesTmeLimitMS) {
				StartNextThread(i);
			}
		}
	}

}

LOUDDK_API_ENTRY LOUSTATUS InitThreadManager() {
	LOUSTATUS Status = LOUSTATUS_GOOD;
	
	TStack[0] = (PThreadStackEntry)LouMalloc(STACKENTRY);

	if (!GetNPROC())return STATUS_UNSUCCESSFUL;

	TStack[0]->Priority = PRIRT; TStack[0]->ProcessorNumber = 1;
	TStack[0]->StackSize = LouKeGetStackSize(); TStack[0]->ThreadPresent = THREADPRESENT;

	LouPrint("Thread Manager Starting\nNumber Of Processors:%d\n",GetNPROC());

	return Status;
}

LOUDDK_API_ENTRY LOUSTATUS LouKeCreateThread(uint16_t ThreadNumber,ThreadStackEntry TSEntry, PVOID Function) {
	LOUSTATUS Status = LOUSTATUS_GOOD;
	uint16_t i;
	for (i = 0; i < TSTACKLENGTH; i++) {
		if (TStack[i] == 0x0000)break;
	}
	
	TStack[i] = (PThreadStackEntry)LouMalloc(STACKENTRY);

	if(LouKeCreateStack(&TStack[i]->stack, 2 * MEGABYTE) != LOUSTATUS_GOOD)return STATUS_UNSUCCESSFUL;

	//TODO Finish creating Threads

	return Status;
}

LOUDDK_API_ENTRY VOID LouKeDestroyThread(uint16_t ThreadNumber) {


}


void TestLoop1() {
	while (1) {
		LouPrint("Thread 1 Execution\n");
	}
}

void TestLoop2() {
	while (1) {
		LouPrint("Thread  Execution\n");
	}
}