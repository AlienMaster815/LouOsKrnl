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

PATA* pataobj = (PATA*)Lou_Alloc_Mem(sizeof(PATA));

extern "C" void pata_device_scanc(){

    pataobj->pata_device_scan();

}

PATA* RetrievePATAP(){
    return pataobj;
}
