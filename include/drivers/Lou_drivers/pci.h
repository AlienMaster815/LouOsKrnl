/*
-- Tyler Grenier 2/6/24 11:14:45 AM
-- Great Im in a fucking mood now the cunt
-- accross from me that I liked and thought 
-- I had somthing going on said I was aa creep
-- and that she said she had a boyfreind so...
-- Rather than blow my brains out im doing this to
-- calm me down yet this dosent FUCKING CALM ME 
-- DOWN!!!!!
*/


//Define the Lou Driver Kit For Our Constants

#ifndef _PCI_H
#define _PCI_H

//Define World Wide Constant

typedef struct _PCIDev {

}PCIDev, * P_PCIDEV;

typedef struct _PCIBuffer {

}PCIBuffer, * P_PCIBuffer;



#ifdef __cplusplus

extern "C" P_PCIBuffer PCI_Read(P_PCIDEV Device);
extern "C" void PCI_Write(P_PCIDEV Device, P_PCIBuffer buffer);

class PCI{

	public:
		P_PCIBuffer PCI_Read(P_PCIDEV Device);
		void PCI_Write(P_PCIDEV Device, P_PCIBuffer buffer);

	private:

};



#else

//Is C Land
P_PCIBuffer PCI_Read(P_PCIDEV Device);
void PCI_Write(P_PCIDEV Device, P_PCIBuffer buffer);
void PCI_Setup();


#endif

#endif