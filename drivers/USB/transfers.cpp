
#include <LouDDK.h>
#include <NtAPI.h>
//todo:
//Handle Token Packets
//Handle Data Packets
//Handle Handshake Packets


//Implement Control Transfers
LOUSTATUS SendControlTransfer(
    //device //in
    uint32_t SetupPacket,
    uint32_t DataPacket    
){
    //establish details of the intended data transfer such as whether the host wishes to send or receive data.
    //Next, zero or more DATA transactions take place in the appropriate direction
    
        //retrieve max payload size of device and use if payload > speed && Payload < speed above use that speed
        //to detemine the time to check back with the device based on the
            //high speed 64
            //full speed:8:16:32:64
            //low speed:8
        //Setup Transaction is always 8 bytes 64bits
    
    //Finally, a STATUS transaction from the function to the host indicates whether the transfer was successful.
    return STATUS_SUCCESS;
}

//Bulk data transfers
LOUSTATUS SendBulkTransfer(
    //Device //in
    uint32_t DataPacket//data packet //in
){
    //establish details of the intended data transfer such as whether the host wishes to send or receive data.
    //Next, zero or more DATA transactions take place in the appropriate direction
    
        //retrieve max payload size of device and use if payload > speed && Payload < speed above use that speed
        //to detemine the time to check back with the device based on the
            //high speed 64
            //full speed:8:16:32:64
            //low speed:8
        //Setup Transaction is always 8 bytes 64bits


    return STATUS_SUCCESS;
}

//Interrupt Data Transfers
LOUSTATUS SendInterruptTransfer(
    //device //in
    uint32_t DataPacket,
    uint8_t Speed
){
    //establish details of the intended data transfer such as whether the host wishes to send or receive data.
    //Next, zero or more DATA transactions take place in the appropriate direction
    
        //retrieve max payload size of device and use whatever the hell you want speed above use that speed
        //to detemine the time to check back with the device based on the
            //high speed 64
            //full speed:8:16:32:64
            //low speed:8
        
    //Finally, a STATUS transaction from the function to the host indicates whether the transfer was successful.
    return STATUS_SUCCESS;
}

//Isochronous Data Transfers/ Streaming Real-time Transfers
//Interrupt Data Transfers
LOUSTATUS SendTealTimeTransfer(
    //device //in
    uint32_t DataPacket,
    uint8_t Speed,
    uint8_t Time
){
    //establish details of the intended data transfer such as whether the host wishes to send or receive data.
    //Next, zero or more DATA transactions take place in the appropriate direction
    
        //retrieve max payload size of device and use whatever the hell you want speed above use that speed
        //to detemine the time to check back with the device based on the
            //high speed 64
            //full speed:8:16:32:64
            //low speed:8
        
    //Finally, a STATUS transaction from the function to the host indicates whether the transfer was successful.
    return STATUS_SUCCESS;
}

