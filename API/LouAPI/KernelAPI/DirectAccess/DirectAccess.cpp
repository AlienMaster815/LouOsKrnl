#include <LouDDK.h>
#include <NtAPI.h>

/*
-- Tyler Grenier 6/22/24
-- 
-- Welcome to the DirectAcces System. this system both emulates 
-- and give extra functionality to the windows directX system
-- here we will allow code to directly access hardware in a 
-- safe manner for bothe usermode and kernelmode there will be several
-- files in the system but the highest functions will be here
-- Right now i am going to focus on the lower files starting wit drives
-- so that i can acces a drive whenever i want without dealing with 
-- having to know everything about the drive
*/

LOUSTATUS InitializeDirecAccessDrives();

LOUDDK_API_ENTRY LOUSTATUS InitializeDirecAccess(){
    LOUSTATUS Status = STATUS_SUCCESS;

    LouPrint("Initializing DirectAccess Systems\n");

    //Status = InitializeDirecAccessDrives();

    LouPrint("Initializing DirectAccess Systems:Complete\n");

    return Status;
}