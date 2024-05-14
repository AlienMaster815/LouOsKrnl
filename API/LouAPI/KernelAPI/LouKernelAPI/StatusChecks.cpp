#include <LouDDK.h>
#include <NtAPI.h>



NTSTATUS TRANSLATE_STATUS(LOUSTATUS Status) {

	switch (Status) {
	
	case LOUSTATUS_GOOD:
		return STATUS_SUCCESS;
		
	default:
		return STATUS_UNSUCCESSFUL;
	}

}