
// ATA.cpp Version 1.03 Stable Release

/*
-- Tyler Grenier 10-9-23 7:05
-- This is my first c++ file other than the
-- System i imported for writing code for
-- windows sytem drivers we will be doing a 
-- lot of c++ when it comes to running drivers
-- and doing usermode systems so in out kernel
-- we will need to have our c++ files able 
-- to handle functions and classes that are 
-- out of are kernel to either 1. translate the
-- code to the kernels c files or jump to c files
-- from c++ or handle the systems entirely 
-- depending on what the fuck were doing wich is 
-- an important milestone because now im programing 
-- for drivers
*/

/*
-- Tyler Grenier 10/26/23 12:48 AM
-- This Is Almost Completly Finnished The Last Thing I
-- Need To Do but Is Not Required Is Add Support To ATAPI
-- Advanced System Services Like Streaming And Fast Data
-- Transfer Support I Am Officialy Releaseing This file as
-- a Stable Release
*/

#include <LouDDK.h>

uint8_t pata[4];
static char* atabuffer;
bool init;

void PATA::pata_device_scan(){
    

    LouPrint("scaning ATA devices\n");
    init = true;
    determine_device_type(0);
    determine_device_type(1);
    determine_device_type(2);
    determine_device_type(3);
    init = false;
    return;
}


PATA::PATA(){

}
PATA::~PATA(){

}



void PATA::Read28PATA(uint16_t drive,bool Master, uint32_t Sector_Num, int BufferSize){
    


    Port32Bit DataPort(drive);
    Port8Bit errorPort(drive + 0x1);
    Port8Bit sectorCountPort(drive + 0x2);
    Port8Bit lbaLowPort(drive + 0x3);
    Port8Bit lbaMidPort(drive + 0x4);
    Port8Bit lbaHiPort(drive + 0x5);
    Port8Bit devicePort(drive + 0x6);
    Port8Bit commandPort(drive + 0x7);
    Port8Bit controlPort(drive + 0x206);
    
    uint8_t sectorCount = BufferSize/512;
    if((sectorCount * 512) < BufferSize) sectorCount++;

    devicePort.Write( (Master ? 0xE0 : 0xF0) | ((Sector_Num & 0x0F000000) >> 24) );
    errorPort.Write(0);
    sectorCountPort.Write(sectorCount);
    lbaMidPort.Write((Sector_Num & 0x0000FF00) >> 8);
    lbaHiPort.Write((Sector_Num & 0x00FF0000) >> 16);
    
    

    commandPort.Write(0x20);

    uint8_t status = commandPort.Read();

    while ((status & 0x80) == 0x80){
        status = commandPort.Read();
    }
    while (1);
    if(status == 0x00){
        LouPrint("No Device On ");

        if     ((drive == 0x1F0) && (Master)){
               LouPrint("Primary Master\n");
               pata[0] = 0;
        }       
        else if((drive == 0x1F0) && (!Master)){ 
                LouPrint("Primary Slave\n");
                pata[1] = 0;
        }
        else if((drive == 0x170) && (Master)){
              LouPrint("Secondary Master\n");
              pata[2] = 0;
        }
        else if((drive == 0x170) && (!Master)){
              LouPrint("Secondary Slave\n");
              pata[3] = 0;
        }
        return; //atabuffer;
    }

    if(status & 0x01)
    {
            uint8_t error = errorPort.Read();
        if(init != true){
            LouPrint("ERROR Reading From Drive ");
            if     ((drive == 0x1F0) && (Master))  LouPrint("Primary Master\n");
            else if((drive == 0x1F0) && (!Master)) LouPrint("Primary Slave\n");
            else if((drive == 0x170) && (Master))  LouPrint("Secondary Master\n");
            else if((drive == 0x170) && (!Master)) LouPrint("Secondary Slave\n");
            LouPrint("Error Num: %d \n", error);
            return;
        }
        if((error == 4) && (init == true)){
            
            if((drive == 0x1F0) && (Master)){
               pata[0] = 2;
            }       
            else if((drive == 0x1F0) && (!Master)){ 
                pata[1] = 2;
            }
            else if((drive == 0x170) && (Master)){
                pata[2] = 2;
            }
            else if((drive == 0x170) && (!Master)){
                pata[3] = 2;
            }

            Read28PATAPI(drive,Master,0, 0x1FF);
            

            return;
        }

        return; //atabuffer;
    }

    
    LouPrint("Reading ATA Drive: ");
    
    
    
    if     ((drive == 0x1F0) && (Master))  LouPrint("Primary Master\n");
    else if((drive == 0x1F0) && (!Master)) LouPrint("Primary Slave\n");
    else if((drive == 0x170) && (Master))  LouPrint("Secondary Master\n");
    else if((drive == 0x170) && (!Master)) LouPrint("Secondary Slave\n");
        
    
    
    int j = 0;
    //char *text = "  \0";

    for(int i = 0; i < BufferSize; i += 2)
    {
        uint16_t wdata = DataPort.Read();
        
        atabuffer[j] = wdata;

        /*text[0] = wdata & 0xFF;
        
        if(i+1 < BufferSize){
            text[1] = (wdata >> 8) & 0xFF;
        }
        else{
            text[1] = '\0';
        }*/
        //LouPrint(text);
        j++;
    }

    //LouPrint("\n");    

    for(int i = BufferSize + (BufferSize%2); i < (512 * sectorCount); i += 2)
        DataPort.Read();
}

void PATA::Read28PATAPI(uint16_t drive,bool Master, uint32_t Sector_Num, int BufferSize){


    // This Is A Poor Translation For OSDEV.WIKI Because I Cant
    // Get This To Work With Pre Define Kernel Functions arround
    // Release of 0.0.1 I Will Clean This Up More And Make It 
    // Readable I Just Cant Get It To Fucking Work Because Theres
    // Virtually No Documentation That Is HelpFull For C++ And C++
    // Is Picky With Code And Warnings And This Hardware Is Poorly
    // Designed In The First Place And I Dont Fucking Care This Was 
    // Made 20 Years Ago This is Almost As Bad As VGA Programming
    // But At Least I Have Some Fucking Documentation

    uint8_t sectorCount = BufferSize/2352;
    if((sectorCount * 2352) < BufferSize) sectorCount++;

        // The command
    uint8_t read_cmd[12] = {0xA8, 0,
                        static_cast<uint8_t>((Sector_Num >> 0x18) & 0xFF),
                        static_cast<uint8_t>((Sector_Num >> 0x10) & 0xFF),
                        static_cast<uint8_t>((Sector_Num >> 0x08) & 0xFF),
                        static_cast<uint8_t>((Sector_Num >> 0x00) & 0xFF),
                        static_cast<uint8_t>((sectorCount >> 0x18) & 0xFF),
                        static_cast<uint8_t>((sectorCount >> 0x10) & 0xFF),
                        static_cast<uint8_t>((sectorCount >> 0x08) & 0xFF),
                        static_cast<uint8_t>((sectorCount >> 0x00) & 0xFF),
                        0, 0};



    Port32Bit DataPort(drive);
    Port8Bit errorPort(drive + 0x1);
    Port8Bit sectorCountPort(drive + 0x2);
    Port8Bit lbaLowPort(drive + 0x3);
    Port8Bit lbaMidPort(drive + 0x4);
    Port8Bit lbaHiPort(drive + 0x5);
    Port8Bit devicePort(drive + 0x6);
    Port8Bit commandPort(drive + 0x7);
    Port8Bit controlPort(drive + 0x206);
    


    devicePort.Write((Master ? 0xA0 : 0xB0));
    errorPort.Write(0);
    lbaMidPort.Write(2048 & 0xFF);
    lbaHiPort.Write(2048 >> 8);

    commandPort.Write(0xA0);

    //Just Hard Code It At This Point I Dont Fucking Care


    uint8_t status = commandPort.Read();

    while ((status & 0x80) == 0x80) {
        status = commandPort.Read();
    }

    outsw(drive, (uint16_t *) read_cmd, 6);

    while ((status & 0x80) == 0x80) {
        status = commandPort.Read();
    }

    if(status == 0x00){
        LouPrint("No Device On ");

        if     ((drive == 0x1F0) && (Master)){
               LouPrint("Primary Master\n");
               pata[0] = 0;
        }       
        else if((drive == 0x1F0) && (!Master)){ 
                LouPrint("Primary Slave\n");
                pata[1] = 0;
        }
        else if((drive == 0x170) && (Master)){
              LouPrint("Secondary Master\n");
              pata[2] = 0;
        }
        else if((drive == 0x170) && (!Master)){
              LouPrint("Secondary Slave\n");
              pata[3] = 0;
        }
        return; //atabuffer;
    }

    if(status & 0x01)
    {
            uint8_t error = errorPort.Read();
        if(init != true){
            LouPrint("ERROR Reading From Drive ");
            if     ((drive == 0x1F0) && (Master))  LouPrint("Primary Master\n");
            else if((drive == 0x1F0) && (!Master)) LouPrint("Primary Slave\n");
            else if((drive == 0x170) && (Master))  LouPrint("Secondary Master\n");
            else if((drive == 0x170) && (!Master)) LouPrint("Secondary Slave\n");
            LouPrint("Error Num: %d \n", error);
            return;
        }
        if((error == 4) && (init == true)){
            
            if((drive == 0x1F0) && (Master)){
               pata[0] = 2;
            }       
            else if((drive == 0x1F0) && (!Master)){ 
                pata[1] = 2;
            }
            else if((drive == 0x170) && (Master)){
                pata[2] = 2;
            }
            else if((drive == 0x170) && (!Master)){
                pata[3] = 2;
            }

            Read28PATAPI(drive,Master,Sector_Num, BufferSize);
            return;
        }

        return; //atabuffer;
    }


    
    LouPrint("Reading ATAPI Drive: ");
    
    
    
    if     ((drive == 0x1F0) && (Master))  LouPrint("Primary Master\n");
    else if((drive == 0x1F0) && (!Master)) LouPrint("Primary Slave\n");
    else if((drive == 0x170) && (Master))  LouPrint("Secondary Master\n");
    else if((drive == 0x170) && (!Master)) LouPrint("Secondary Slave\n");



    for(uint32_t i = 0; i < sectorCount; i++){
        status = commandPort.Read();
        while (1) {
            status = commandPort.Read();
            if(status & 0x01) return;
            if (!(status & 0x80) && (status & 0x08)) break; 
        }
        int size = lbaHiPort.Read() << 8;
        
        insw(drive, (uint16_t *) ((uint8_t *) &atabuffer + i * 0x800), size / 2);

        
    }

    char *text = "  \0";
    uint32_t i = 0;
    for(int j = 0; j < BufferSize; j+=2 ){
        uint16_t wdata = atabuffer[i];
        
        text[0] = wdata & 0xFF;
        if(j+1 < BufferSize){
            text[1] = (wdata >> 8) & 0xFF;
        }
        else{
            text[1] = '\0';
        }
        //if((text[1] != '\0') /*&& ((i == 0x1FE) || (i == 0x1FF))*/)LouPrint(" %h %h ", text[0], text[1] );
        i++;
    }
 
    if(init == true){
        for (int i = 0; i < 0x200/2; ++i) {
            //LouPrint(" %h ", atabuffer[i]);
            //LouPrint("hello World %d\n",i);
            //char* hex = "0x00";
            //uintToHexString(atabuffer[i],hex);
            if(atabuffer[i] == 0xAA55){
                LouPrint("Bootable CD ROM\n");
                return;
            }    
        }
  
    }

}

void PATA::Write28PATA(uint16_t device,bool Master, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize){
    
    Port32Bit DataPort(device);
    Port8Bit errorPort(device + 0x1);
    Port8Bit sectorCountPort(device + 0x2);
    Port8Bit lbaLowPort(device + 0x3);
    Port8Bit lbaMidPort(device + 0x4);
    Port8Bit lbaHiPort(device + 0x5);
    Port8Bit devicePort(device + 0x6);
    Port8Bit commandPort(device + 0x7);
    Port8Bit controlPort(device + 0x206);
    
    uint8_t sectorCount = BufferSize/512;
    if((sectorCount * 512) < BufferSize) sectorCount++;

    devicePort.Write( (Master ? 0xE0 : 0xF0) | ((Sector_Num & 0x0F000000) >> 24) );
    errorPort.Write(0);
    sectorCountPort.Write(sectorCount);
    lbaLowPort.Write(  Sector_Num & 0x000000FF );
    lbaMidPort.Write( (Sector_Num & 0x0000FF00) >> 8);
    lbaHiPort.Write( (Sector_Num & 0x00FF0000) >> 16 );
    commandPort.Write(0x30);
    
    LouPrint("Writing to ATA Drive: ");
    
    if     ((device == 0x1F0) && (Master))  LouPrint("Primary Master\n");
    else if((device == 0x1F0) && (!Master)) LouPrint("Primary Slave\n");
    else if((device == 0x170) && (Master))  LouPrint("Secondary Master\n");
    else if((device == 0x170) && (!Master)) LouPrint("Secondary Slave\n");



    for(uint32_t i = 0; i < BufferSize; i += 2)
    {
        uint16_t wdata = Data[i];
        if(i+1 < BufferSize)
            wdata |= ((uint16_t)Data[i+1]) << 8;
        DataPort.Write(wdata);
        
        char *text = "  \0";
        text[1] = (wdata >> 8) & 0xFF;
        text[0] = wdata & 0xFF;
        LouPrint(text);
    }
    
    //LouPrint("\n");    


    for(uint32_t i = BufferSize + (BufferSize%2); i < (512 * sectorCount); i += 2)
        DataPort.Write(0x0000);
    
}

void PATA::Write28PATAPI(uint16_t device,bool Master, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize){
    
    
}
    

void PATA::pata_Read(uint8_t device,uint32_t Sector_Num, int BufferSize){
    
    if(Sector_Num > 0x0FFFFFFF){
        return; //"ERROR";
        for(uint16_t i = 0 ; i < 2351 ; i++){
            atabuffer[i] = 0x0000;
        }
    }
    
    //har* BuffAdd = 0x00;
    
    if(device == 1){
        if     (pata[0] == 1) Read28PATA(0x1F0,true,Sector_Num,BufferSize);
        else if(pata[0] == 2) Read28PATAPI(0x1F0,true, Sector_Num,BufferSize);
        else {
            LouPrint("No Drive Present\n");
            for(uint16_t i = 0 ; i < 2351 ; i++){
                atabuffer[i] = 0x0000;
            }
        }
    }
    else if(device == 2){
        if     (pata[1] == 1) Read28PATA(0x1F0,false, Sector_Num, BufferSize);
        else if(pata[1] == 2) Read28PATAPI(0x1F0,false,Sector_Num, BufferSize);
        else {
            LouPrint("No Drive Present\n");
            for(uint16_t i = 0 ; i < 2351 ; i++){
                atabuffer[i] = 0x0000;
            }
        }
    }
    else if(device == 3){
        if     (pata[2] == 1) Read28PATA(0x170,true, Sector_Num, BufferSize);
        else if(pata[2] == 2) Read28PATAPI(0x170,true, Sector_Num, BufferSize);
        else {
            LouPrint("No Drive Present\n");
            for(uint16_t i = 0 ; i < 2351 ; i++){
                atabuffer[i] = 0x0000;
            }
        }
    }
    else if(device == 4){
        if     (pata[3] == 1) Read28PATA(0x170,false, Sector_Num, BufferSize);
        else if(pata[3] == 2) Read28PATAPI(0x170,false, Sector_Num, BufferSize);
        else { 
            LouPrint("No Drive Present\n");
            for(uint16_t i = 0 ; i < 2351 ; i++){
                atabuffer[i] = 0x0000;
            }
        }
    }
    else {
        LouPrint("Error Selecting Drive\n");
        for(uint16_t i = 0 ; i < 2351 ; i++){
            atabuffer[i] = 0x0000;
        }
    }
    


    //return BuffAdd;
}


void PATA::pata_Write(uint8_t device, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize){
    
    if(Sector_Num > 0x0FFFFFFF)
        return;

    
    if(device == 1){
        if     (pata[0] == 1) Write28PATA(0x1F0,true,Sector_Num,Data ,BufferSize);
        else if(pata[0] == 2) Write28PATAPI(0x1F0,true, Sector_Num,Data,BufferSize);
        else{
            LouPrint("No Drive Present\n");
        }
    }
    else if(device == 2){
        if     (pata[1] == 1) Write28PATA(0x1F0,false, Sector_Num, Data, BufferSize);
        else if(pata[1] == 2) Write28PATAPI(0x1F0,false,Sector_Num, Data, BufferSize);
        else {
            LouPrint("No Drive Present\n");
        }
    }
    else if(device == 3){
        if     (pata[2] == 1) Write28PATA(0x170,true, Sector_Num, Data, BufferSize);
        else if(pata[2] == 2) Write28PATAPI(0x170,true,Sector_Num, Data, BufferSize);
        else{
            LouPrint("No Drive Present\n");
        }
    }
    else if(device == 4){
        if     (pata[3] == 1) Write28PATA(0x170,false, Sector_Num, Data, BufferSize);
        else if(pata[3] == 2) Write28PATAPI(0x170,false, Sector_Num, Data, BufferSize);
        else{
            LouPrint("No Drive Present\n");
        }
    }
    else{
        LouPrint("Error Selecting Drive\n");
    }
    
}




void PATA::determine_device_type(uint8_t drive){

    if(drive == 0){ //Primary Master
        WakeAndIdentifyPata(0x1F0,0xA0);
        return;
    }
    else if(drive == 1){ //Primary Slave

        WakeAndIdentifyPata(0x1F0,0xB0);
        return;
    }
    else if(drive == 2){ //Secondary Master

        WakeAndIdentifyPata(0x170,0xA0);
        return;
    }
    else if(drive == 3){ //Secondary Slave
        WakeAndIdentifyPata(0x170,0xB0);
        return;
    }
    
}


void PATA::initialize_pata(uint16_t drive,bool Master){

    
    //bool FileSystemCD = false;
    //bool WriteAble = false;
    //bool FileSystemExist = false;



    if((drive == 0x1F0) && (Master)){
        pata[0] = 1;
        //char* atabuff = "Hello World!!!";
        //pata_Write28(1, 0, (uint8_t*)atabuff, 14);
        //Flush(1);
        pata_Read(1, 0, 512);
        
        
        return;
    }
    else if((drive == 0x1F0) && (!Master)){
        pata[1] = 1;

        //char* atabuff = "Hello World!!!";
        //pata_Write28(2, 0,(uint8_t*)atabuff, 14);
        //Flush(2);
        pata_Read(2, 0, 512);
        

        return;
    }
    else if((drive == 0x170) &&  (Master)){
        pata[2] = 1;
        //char* atabuff = "Hello World!!!";
        //pata_Write28(3, 0,(uint8_t*)atabuff, 14);
        //Flush(3);
        pata_Read(3, 0, 512);

        return;
    }
    else if((drive == 0x170) && (!Master)){
        pata[3] = 1;
        //char* atabuff = "Hello World!!!";
        //pata_Write28(4, 0,(uint8_t*)atabuff, 14);
        //Flush(4);
        pata_Read(4, 0, 512);

        return;
        
    }
    

}

void PATA::WakeAndIdentifyPata(uint16_t Device ,uint8_t head){

    Port32Bit DataPort(Device);
    Port8Bit errorPort(Device + 0x1);
    Port8Bit sectorCountPort(Device + 0x2);
    Port8Bit lbaLowPort(Device + 0x3);
    Port8Bit lbaMidPort(Device + 0x4);
    Port8Bit lbaHiPort(Device + 0x5);
    Port8Bit devicePort(Device + 0x6);
    Port8Bit commandPort(Device + 0x7);
    Port8Bit controlPort(Device + 0x206);

    
    
    devicePort.Write(head);
    controlPort.Write(0);
    
    devicePort.Write(0xA0);

    uint8_t status = commandPort.Read();
    if(status == 0xFF){
        LouPrint("No Device On \n");
        if     ((Device == 0x1F0) && (head == 0xA0))LouPrint("Primary Master\n");
        else if((Device == 0x1F0) && (head == 0xB0))LouPrint("Primary Slave\n");
        else if((Device == 0x170) && (head == 0xA0))LouPrint("Secondary Master\n");
        else if((Device == 0x170) && (head == 0xB0))LouPrint("Secondary Slave\n");
        return;
    }

    devicePort.Write(head);
    sectorCountPort.Write(0);
    lbaLowPort.Write(0);
    lbaMidPort.Write(0);
    lbaHiPort.Write(0);
    commandPort.Write(0xEC);

    if(status == 0x00){
        LouPrint("No Device On \n");
        if     ((Device == 0x1F0) && (head == 0xA0))LouPrint("Primary Master\n");
        else if((Device == 0x1F0) && (head == 0xB0))LouPrint("Primary Slave\n");
        else if((Device == 0x170) && (head == 0xA0))LouPrint("Secondary Master\n");
        else if((Device == 0x170) && (head == 0xB0))LouPrint("Secondary Slave\n");
        return;
    }


    while((status & 0x80) == 0x80){
        status = commandPort.Read();
    }
        

    if(status & 0x01){
        uint8_t error = errorPort.Read();
        if(error == 127){
            LouPrint("No Device On ");
            if     ((Device == 0x1F0) && (head == 0xA0))LouPrint("Primary Master\n");
            else if((Device == 0x1F0) && (head == 0xB0))LouPrint("Primary Slave\n");
            else if((Device == 0x170) && (head == 0xA0))LouPrint("Secondary Master\n");
            else if((Device == 0x170) && (head == 0xB0))LouPrint("Secondary Slave\n");
            return;
        }
        if((error != 0) && (error != 4)){
            LouPrint("ERROR Could Not Determine Device: Error Code: %d\n", error);
            return;
        }
    }
    


    LouPrint("Found A Device On: ");
    if     ((Device == 0x1F0) && (head == 0xA0))LouPrint("Primary Master\n");
    else if((Device == 0x1F0) && (head == 0xB0))LouPrint("Primary Slave\n");
    else if((Device == 0x170) && (head == 0xA0))LouPrint("Secondary Master\n");
    else if((Device == 0x170) && (head == 0xB0))LouPrint("Secondary Slave\n");
    


    if(head == 0xA0){

        initialize_pata(Device,true);
    }    
    else if(head == 0xB0){

        initialize_pata(Device,false);
    }
    else{

        LouPrint("ERROR Selecting Controller\n");
    }
    return;
}

void PATA::Flush(uint8_t Device){
    uint16_t drive = 0; bool Master;
    if     (Device == 1){ drive = 0x1F0; Master = true;}
    else if(Device == 2){ drive = 0x1F0; Master = false;}
    else if(Device == 3){ drive = 0x170; Master = true;}
    else if(Device == 4){ drive = 0x170; Master = false;}
    
    if(drive == 0){
        LouPrint("ERROR Selecting Controller\n");
        return;
    }; //later we will change this for error handleing
    
    Port32Bit DataPort(drive);
    Port8Bit errorPort(drive + 0x1);
    Port8Bit sectorCountPort(drive + 0x2);
    Port8Bit lbaLowPort(drive + 0x3);
    Port8Bit lbaMidPort(drive + 0x4);
    Port8Bit lbaHiPort(drive + 0x5);
    Port8Bit devicePort(drive + 0x6);
    Port8Bit commandPort(drive + 0x7);
    Port8Bit controlPort(drive + 0x206);

    devicePort.Write(Master ? 0xE0 : 0xF0);
    commandPort.Write(0xE7);
    
    uint8_t status = commandPort.Read();
    if(status == 0x00){
        LouPrint("No Drive\n");

        if     ((drive == 0x1F0) && (Master)){
               LouPrint("Primary Master\n");
               pata[0] = 0;
        }       
        else if((drive == 0x1F0) && (!Master)){ 
                LouPrint("Primary Slave\n");
                pata[1] = 0;
        }
        else if((drive == 0x170) && (Master)){
              LouPrint("Secondary Master\n");
              pata[2] = 0;
        }
        else if((drive == 0x170) && (!Master)){
              LouPrint("Secondary Slave\n");
              pata[3] = 0;
        }

        return;
    }
    while(((status & 0x80) == 0x80)
       && ((status & 0x01) != 0x01))
        status = commandPort.Read();
    
    if(status & 0x01)
    {
        LouPrint("ERROR Could Not Flush Device: ");
        
        if     (Device == 1)LouPrint("Primary Master\n");
        else if(Device == 2)LouPrint("Primary Slave\n");
        else if(Device == 3)LouPrint("Secondary Master\n");
        else if(Device == 4)LouPrint("Secondary Slave\n");
        
        return;
    }
    LouPrint("ATA Flush Complete for ");
     if     (Device == 1)LouPrint("Primary Master\n");
     else if(Device == 2)LouPrint("Primary Slave\n");
     else if(Device == 3)LouPrint("Secondary Master\n");
     else if(Device == 4)LouPrint("Secondary Slave\n");
}

bool PATA::AtaReadSuccess(){
    for(uint16_t i = 0 ; i < 2351 ; i++){
        if(atabuffer[i] != 0x0000) return true;
    }
    return false;
}

