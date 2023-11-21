#include <drivers/Lou_drivers/hardrive.h>

/*
 * Tyler Grenier 10-10-23
 * This is an important table file because
 * the table here in this cpp file will
 * allow our kernel to talk to drivers from
 * the cpp universe without having serious
 * effect on how usermode and or other drivers
 * also in cpp interacts
 * with drivers we can either jump from cpp to c
 * and back to cpp or with this design determine
 * the fastest route and if determined just jump
 * from cpp to cpp without having to do translation
 * that also takes too long
*/

#include <drivers/lou_drv_api.h>
#include <drivers/Lou_drivers/hardrive.h>
#include <WDKSubsystem/WDKSubsystem.h>



PATA* pataobj = (PATA*)Lou_Alloc_Mem(sizeof(PATA));

extern "C" void pata_device_scanc(){

    pataobj->pata_device_scan();

}



PATA* RetrievePATAP(){
    return pataobj;
}


extern "C" void SetVideoMode(uint64_t Height,uint64_t Widthe, uint8_t  ColorDepth){
    
}

int32_t FatDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath);

extern "C" void FileSystemScan(){
    
    PUNICODE_STRING FatRegistryEntry = 0;
    PDRIVER_OBJECT DriverObj = 0;
    
    FatDriverEntry(DriverObj, FatRegistryEntry);
}
