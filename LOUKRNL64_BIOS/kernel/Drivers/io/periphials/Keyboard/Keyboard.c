/*
-- Tyler Grenier 11/14/23 12:57 PM
-- This Is Going To Be a software driver for that reason
-- I am writing it in c because and inside the actual kernel
-- because when the way the keyboard works is in ps2 keyboards
-- the keyboards utalize strait interrupts which is cool because
-- we dont actually need to write a driver for them because we can
-- actually scan the ps2 device with inb and do what we want with
-- the handler The Only problem we have is if the keyboard is not
-- from the ps2 device we will then need to Write a hardware Driver
-- For that but i plan on using windows drivers for that crap In this
-- file We are going to get what key from the device has been pressed
-- and put it in a address that will be available in usermode
*/


#include <drivers/Lou_drivers/keyboards.h>
#include <stdint.h>
#include <kernel/ports.h>
#include <USRSPC/USRSPC.h>
#include <stdio.h>

void WaitForKeyboardReadiness(uint8_t devtype){
    uint8_t readyornot;
    switch(devtype){
        case PS2: {
            do{
                readyornot = inb(KBD_STATUS);
            } while (readyornot & 0x01);
            break;
        }
        case USB:{
            break;
        }
    }
}

char GetPS2CharecterData(uint8_t KBL,uint8_t keyData){
    
    switch (KBL){
        
        case QWERTY:{
         
            switch(keyData){
             
                default:{
                    LouPrint("QWERTY Keyboard Hex: %h \n", keyData);
                    break;
                }
            }
            break;
        }
        default:{
            LouPrint("UnKnown PS2 Keyboard Language Format\n", keyData);
            break;
        }
    }
    
    
    
    return 'a';
}

void PS2KeyboardHandler(){
    //WaitForKeyboardReadiness(PS2);
    uint8_t keyData = inb(0x60);
    
    char Charecter = GetPS2CharecterData(KBDLNG,keyData);
    
    SendCharecterToUserSpace(Charecter);
}

void USBKeyboardHandler(){

}
