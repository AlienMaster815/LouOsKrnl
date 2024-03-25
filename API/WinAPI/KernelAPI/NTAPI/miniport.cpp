#include <NtAPI.h>


unsigned char _BitTest64(
	__int64 const* Base,
	__int64       Index
) {

	return 0;
}

unsigned char _BitTestAndComplement64(
	__int64* Base,
	__int64 Index
) {

	return 0;
}

unsigned char _BitTestAndReset64(
	__int64* Base,
	__int64 Index
) {

	return 0;
}

unsigned char _BitTestAndSet64(
	__int64* Base,
	__int64 Index
) {

	return 0;
}

void _ReadWriteBarrier() {

}

void BarrierAfterRead() {

}

void BarrierAfterReadR1() {

}

void BarrierAfterReadR2() {

}

LONG InterlockedAnd(
	_In_ _Out_ LONG volatile* Destination,
	_In_      LONG          Value
) {

	return 0;
}


LONG InterlockedCompareExchange(
	_In_ _Out_ LONG volatile* Destination,
	LONG          ExChange,
	LONG          Comperand
) {

	return 0;
}

PVOID InterlockedCompareExchangePointer(
	_In_ _Out_ PVOID volatile* Destination,
	_In_      PVOID          Exchange,
	PVOID          Comperand
) {

	return 0;
}

LONG InterlockedDecrement(
	_In_ _Out_ LONG volatile* Addend
) {

	return 0;
}


LONG InterlockedExchange(
	_In_ _Out_ LONG volatile* Target,
	_In_      LONG          Value
) {

	return 0;
}

LONG InterlockedExchangeAdd(
	_In_ _Out_ LONG volatile* Addend,
	_In_      LONG          Value
) {

	return 0;
}

PVOID InterlockedExchangePointer(
	_In_ _Out_      PVOID volatile* Target,
	_In_opt_ PVOID          Value
) {

	return 0;
}

LONG InterlockedIncrement(
	_In_ _Out_ LONG volatile* Addend
) {

	return 0;
}

LONG InterlockedOr(
	_In_ _Out_ LONG volatile* Destination,
	_In_      LONG          Value
) {
	return 0;
}

LONG InterlockedXor(
	_In_ _Out_ LONG volatile* Destination,
	_In_      LONG          Value
) {

	return 0;
}

//PINTERFACE_DEREFERENCE PinterfaceDereference;

void PinterfaceDereference(
	_In_ PVOID Context
) {


}

void PinterfaceReference(
	_In_ PVOID Context
) {


}

void READ_PORT_BUFFER_UCHAR(
	_In_  PUCHAR Port,
	_Out_ PUCHAR Buffer,
	_In_  ULONG  Count
) {


}

void READ_PORT_BUFFER_ULONG(
	_In_  PULONG Port,
	_Out_ PULONG Buffer,
	_In_  ULONG  Count
) {


}

void READ_PORT_BUFFER_USHORT(
	_In_  PUSHORT Port,
	_Out_ PUSHORT Buffer,
	_In_  ULONG   Count
) {


}

UCHAR READ_PORT_UCHAR(
	_In_ PUCHAR Port
) {

	return 0;
}

ULONG READ_PORT_ULONG(
	_In_ PULONG Port
) {

	return 0;
}

USHORT READ_PORT_USHORT(
	_In_ PUSHORT Port
) {

	return 0;
}

void READ_REGISTER_BUFFER_UCHAR(
	_In_  volatile UCHAR* Register,
	_Out_ PUCHAR         Buffer,
	_In_  ULONG          Count
) {


}

void READ_REGISTER_BUFFER_ULONG(
	_In_  volatile ULONG* Register,
	_Out_ PULONG         Buffer,
	_In_  ULONG          Count
) {

	
}

void READ_REGISTER_BUFFER_USHORT(
	_In_  volatile USHORT* Register,
	_Out_ PUSHORT         Buffer,
	_In_  ULONG           Count
) {


}

UCHAR READ_REGISTER_UCHAR(
	_In_ volatile UCHAR* Register
) {

	return 0;
}

ULONG READ_REGISTER_ULONG(
	_In_ volatile ULONG* Register
) {

	return 0;
}

USHORT READ_REGISTER_USHORT(
	_In_ volatile USHORT* Register
) {

	return 0;
}

UCHAR ReadBooleanRaw(
	_In_ BOOLEAN const volatile* Source
) {

	return 0;
}

INT32 ReadInt32Acquire(
	_In_ INT32 const volatile* Source
) {

	return 0;
}

INT32 ReadInt32NoFence(
	_In_ INT32 const volatile* Source
) {

	return 0;
}

INT32 ReadInt32Raw(
	_In_ INT32 const volatile* Source
) {

	return 0;
}

UINT32 ReadUInt32Acquire(
	_In_ UINT32 const volatile* Source
) {

	return 0;
}

UINT32 ReadUInt32NoFence(
	_In_ UINT32 const volatile* Source
) {

	return 0;
}

UINT32 ReadUInt32Raw(
	_In_ UINT32 const volatile* Source
) {

	return 0;
}

void WRITE_PORT_BUFFER_UCHAR(
	_In_ PUCHAR Port,
	_In_ PUCHAR Buffer,
	_In_ ULONG  Count
) {


}
void WRITE_PORT_BUFFER_ULONG(
	_In_ PULONG Port,
	_In_ PULONG Buffer,
	_In_ ULONG  Count
) {


}
void WRITE_PORT_BUFFER_USHORT(
	_In_ PUSHORT Port,
	_In_ PUSHORT Buffer,
	_In_ ULONG   Count
) {


}

void WRITE_PORT_UCHAR(
	_In_ PUCHAR Port,
	_In_ UCHAR  Value
) {


}

void WRITE_PORT_ULONG(
	_In_ PULONG Port,
	_In_ ULONG  Value
) {


}

void WRITE_PORT_USHORT(
	_In_ PUSHORT Port,
	_In_ USHORT  Value
) {


}

void WRITE_REGISTER_BUFFER_UCHAR(
	_In_ volatile UCHAR* Register,
	_In_ PUCHAR         Buffer,
	_In_ ULONG          Count
) {


}

void WRITE_REGISTER_BUFFER_ULONG(
	_In_ volatile ULONG* Register,
	_In_ PULONG         Buffer,
	_In_ ULONG          Count
) {


}

void WRITE_REGISTER_BUFFER_USHORT(
	_In_ volatile USHORT* Register,
	_In_ PUSHORT         Buffer,
	_In_ ULONG           Count
) {


}

void WRITE_REGISTER_UCHAR(
	_In_ volatile UCHAR* Register,
	_In_ UCHAR          Value
) {


}

void WRITE_REGISTER_ULONG(
	_In_ volatile ULONG* Register,
	_In_ ULONG          Value
) {


}

void WRITE_REGISTER_USHORT(
	_In_ volatile USHORT* Register,
	_In_ USHORT          Value
) {


}

void WriteInt32NoFence(
	_Out_ INT32 volatile* Destination,
	_In_  INT32          Value
) {


}

void WriteInt32Raw(
	_Out_ INT32 volatile* Destination,
	_In_  INT32          Value
) {


}

void WriteInt32Release(
	_Out_ INT32 volatile* Destination,
	_In_  INT32          Value
) {


}

void WriteUInt32NoFence(
	_Out_ UINT32 volatile* Destination,
	_In_  UINT32          Value
) {


}

void WriteUInt32Raw(
	_Out_ UINT32 volatile* Destination,
	_In_  UINT32          Value
) {


}

void WriteUInt32Release(
	_Out_ UINT32 volatile* Destination,
	_In_  UINT32          Value
) {


}