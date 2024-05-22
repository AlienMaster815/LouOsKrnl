#include <NtAPI.h>
#include <LouDDK.h>

LONG InterlockedAnd(
	_In_ _Out_ LONG volatile* Destination,
	_In_      LONG          Value
) {
	//AND WRAPPER
	return LouKeAndOperationLong((int32_t volatile*)Destination,(int32_t)Value);
}


LONG 
InterlockedCompareExchange(
	_In_ _Out_ LONG volatile* Destination,
	LONG          ExChange,
	LONG          Comperand
) {

	return LouKeCompareAtomicLongValue(
		(int32_t volatile*)Destination,
		(int32_t)		   ExChange,
		(int32_t)          Comperand
	);
}



PVOID 
InterlockedCompareExchangePointer(
	_In_ _Out_ PVOID volatile* Destination,
	_In_      PVOID          Exchange,
	PVOID          Comperand
) {
	return LouKeComparePointer(Destination, Exchange, Comperand);
}



LONG
InterlockedOr(
	_In_ _Out_ LONG volatile* Destination,
	_In_      LONG          Value
) {
	return LouKeOrOperationLong((int32_t volatile*)Destination,(int32_t)Value);
}



LONG 
InterlockedXor(
	_In_ _Out_ LONG volatile* Destination,
	_In_      LONG          Value
) {
	return LouKeXorOperationLong((int32_t volatile*)Destination, (int32_t)Value);
}