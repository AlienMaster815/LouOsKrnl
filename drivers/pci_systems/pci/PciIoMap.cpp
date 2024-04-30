#include <LouDDK.h>
#include <NtAPI.h>






BaseAddressRegister GetAllIoSpaces(P_PCI_DEVICE_OBJECT PDEV) {
	BaseAddressRegister Foo(PDEV);

	return Foo;
}