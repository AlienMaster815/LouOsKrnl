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
#include <stdbool.h>


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

static bool CAPSLOCK = false;
static bool SHIFT = false;

char GetPS2CharecterData(uint8_t KBL,uint8_t keyData){
    
    switch (KBL){
        
        case QWERTY:
            
            switch(keyData){
                
                //SHIFT
                case 42:
                SHIFT = true;
                return -1;
                break;
                
                case 170:
                SHIFT = false;
                return -1;
                break;                
                
                // CapsLock
                case 58:
                if(CAPSLOCK)CAPSLOCK = false;
                if(!CAPSLOCK)CAPSLOCK = true;
                return -1;
                break;
                case 186:
                    return -1;
                    break;
                //First Row

                case 16:
                    return 'q';
                    break;
                case 17:
                    return 'w';
                    break;
                case 18:
                    return 'e';
                    break;
                case 19:
                    return 'r';
                    break;
                case 20:
                    return 't';
                    break;
                case 21:
                    return 'y';
                    break;
                case 22:
                    return 'u';
                    break;
                case 23:
                    return 'i';
                    break;
                case 24:
                    return 'o';
                    break;
                case 25:
                    return 'p';
                    break;


                case 144:
                    return -1;
                    break;
                case 145:
                    return -1; 
                    break;
                case 146:
                    return -1;
                    break;
                case 147:
                    return -1;
                    break;
                case 148: 
                    return -1;
                    break;
                case 149:
                    return -1;
                    break;
                case 150:
                    return -1;
                    break;
                case 151:
                    return -1;
                    break;
                case 152:
                    return -1;
                    break;
                case 153:
                    return -1;
                    break;

                //Second Row

                default:
                    LouPrint("QWERTY Keyboard Decimal: %d\n", keyData);
                    break;
            }   
            break;
        
        default:
            LouPrint("UnKnown PS2 Keyboard Language Format\n", keyData);
            return -1;                
            break;
        
    }
    
}

void PS2KeyboardHandler(){
    //WaitForKeyboardReadiness(PS2);
    uint8_t keyData = inb(0x60);
    
    char Charecter = GetPS2CharecterData(KBDLNG,keyData);
    if(Charecter != -1)SendCharecterToUserSpace(Charecter);
}

void USBKeyboardHandler(){

}
