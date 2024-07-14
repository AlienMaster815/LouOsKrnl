#include <LouAPI.h>

//we are going to ignore most of the fancy modes for noww,
//we are only concerned with Kernel, Driver, System,and User

/*
gdt64:
    dq 0 ; Null segment
.code_segment: equ $ - gdt64 ;8
    dq 0x00AF9A000000FFFF ; 64-bit Code segment (CS)
.data_segment: equ $ - gdt64 ; 10
    dq 0x00AF92000000FFFF ; 64-bit Data segment (DS)
.user_code_segment: equ $ - gdt64 ; 18
    dq 0x00AFFA000000FFFF ; 64-bit User mode Code segment (CS)
.user_data_segment: equ $ - gdt64 ; 20
    dq 0x00AFF20000000FFFF ; 64-bit User mode Data segment (DS)
.system_code_segment: equ $ - gdt64 ; 28
    dq 0x00AF92000000FFFF ; 64-bit System mode Code segment (CS)
.system_data_segment: equ $ - gdt64 ; 30
    dq 0x00AF92000000FFFF ; 64-bit System mode Data segment (DS)
.interrupt_code_segment: equ $ - gdt64 ; 38
    dq 0x00AF9A000000FFFF ; 64-bit Interrupt Code segment (CS)
.interrupt_data_segment: equ $ - gdt64 ; 40
    dq 0x00AF92000000FFFF ; 64-bit Interrupt Data segment (DS)
.syscall_code_segment: equ $ - gdt64 ; 48
    dq 0x00AF9A000000FFFF ; 64-bit Syscall Code segment (CS)
.syscall_data_segment: equ $ - gdt64 ; 50
    dq 0x00AF92000000FFFF ; 64-bit Syscall Data segment (DS)


*/

static inline 
uint16_t GetCodeSegment(){
    uint16_t cs;
    asm("mov %%cs, %0" : "=r" (cs));
    return cs;
}

OperatingMode LouKeCheckOperatingMode(){

    uint16_t cs = GetCodeSegment();

    //LouPrint("Cs Is:%h\n", cs);

    if(cs == 0x08){
        LouPrint("Lousine Kernel Is Requesting Somthing\n");
        return Kernel;
    }
    else if(cs == 0x38){
        LouPrint("A Interrupt Event Is Requesting Somthing\n");
        return System;
    }
    else if(cs == 0x18){
        LouPrint("User Mode Is Requesting Somthing\n");
        return User;
    }
    else if((cs == 0x48) || (cs == 0x28)){
        LouPrint("A System Event Is Requesting Somthing\n");
        return System;
    }

    //this will never execute but just god forbid we will get the 
    //antivirus version of the requesting service for safety
    return LousineInternalAntivirus;

}