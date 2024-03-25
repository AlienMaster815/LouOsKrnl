#include <NtAPI.h>

UCHAR READ_PORT_UCHAR(
	_In_ PVOID Port
) {
	uint64_t address = (uint64_t)Port;
	return inb(address);
}

ULONG READ_PORT_ULONG(
	_In_ PVOID Port
) {
	uint64_t address = (uint64_t)Port;
	return inl(address);
}


USHORT READ_PORT_USHORT(
	_In_ PVOID Port
) {
	uint64_t address = (uint64_t)Port;
	return inw(address);
}

UCHAR READ_REGISTER_UCHAR(
	_In_ PUCHAR Register
) {
	return *Register;
}

ULONG READ_REGISTER_ULONG(
	_In_ PULONG Register
) {
	return *Register;
}

USHORT READ_REGISTER_USHORT(
	_In_ PUSHORT Register
) {

	return *Register;
}

void WRITE_PORT_UCHAR(
	_In_ PVOID Port,
	_In_ ULONG Value
) {
	uint64_t address = (uint64_t)Port;
	outb(address, Value);
}

void WRITE_PORT_ULONG(
	_In_ PVOID Port,
	_In_ ULONG Value
) {
	uint64_t address = (uint64_t)Port;
	outl(address, Value);
}

void WRITE_PORT_USHORT(
	_In_ PVOID Port,
	_In_ ULONG Value
) {
	uint64_t address = (uint64_t)Port;
	outw(address,Value);
}

VOID WRITE_REGISTER_UCHAR(
	_In_ PUCHAR Register,
	_In_ UCHAR Value
) {
	*Register = Value;
}

VOID WRITE_REGISTER_ULONG(
	_In_ PULONG Register,
	_In_ ULONG Value
) {
	*Register = Value;
}

VOID WRITE_REGISTER_USHORT(
	_In_ PUSHORT Register,
	_In_ USHORT Value
) {
	*Register = Value;
}