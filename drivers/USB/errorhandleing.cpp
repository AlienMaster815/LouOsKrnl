#include <LouDDK.h>
#include <NtAPI.h>


//Controll Transfer Errors

//Implement BufferOverflow

/*
When transferring from host to device, if the host sends more data than negotiated during the SETUP transaction (i.e., the device receives more data than it expects; specifically, the host does not advance to the STATUS stage when the device expects), the device endpoint halts the pipe.
When transferring from device to host, if the device sends more data than negotiated during the SETUP transaction (i.e., the host receives an extra data payload, or the final data payload is larger than it should be), the host considers it an error and aborts the transfer.
*/

//Implement BusErrors
/*
In the event of a bus error or anomaly, an endpoint may receive a SETUP packet in the middle of a control transfer. In such a case, the endpoint must abort the current transfer and handle the unexpected SETUP packet. This behavior should be completely transparent to the host; the host should neither expect nor take advantage of this behavior.
*/

//Halt Conditions
/*
A control endpoint may recover from a halt condition upon receiving a SETUP packet. If the endpoint does not recover from a SETUP packet, it may need to be recovered via a different pipe. If an endpoint with the endpoint number 0 does not recover with a SETUP packet, the host should issue a device reset.
*/

