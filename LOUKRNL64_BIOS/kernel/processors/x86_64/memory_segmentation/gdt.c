/*===========================================================
-- Tyler Grenier 10/25/2023 2:40 PM                        --
-- Ok This Is One of the Worst Parts Because In this file  --
-- We do a lot of security and memory management this will --
-- do things like segregate memory for this thus security  --
-- things...                                               --
===========================================================*/

#include <kernel/gdt.h>

LOUSTATUS Set_Kernel_Segment(bool Code_Seg, uint64_t Base, uint64_t Limit,GDT* gdt){
    if(Code_Seg){ // Code Segment
        
    }
    else{ //Data Segment
        
    }
}

LOUSTATUS Set_User_Segment(bool Code_Seg,uint8_t type, uint64_t Base,uint64_t Limit, GDT* gdt){
    if(Code_Seg){ // Code Segment
        
    }
    else{ //Data Segment
        
    }
}

LOUSTATUS Set_TSS_Segment(bool Code_Seg,uint64_t Base, uint64_t Limit, GDT* gdt){
    if(Code_Seg){ // Code Segment
        
    }
    else{ //Data Segment
        
    }
}

LOUSTATUS Set_System_Security_Segment(bool Code_Seg, uint64_t Base, uint64_t Limit, GDT* gdt){
    if(Code_Seg){ // Code Segment
        
    }
    else{ //Data Segment
        
    }
}

LOUSTATUS Set_User_Securtity_Segment(bool Code_Seg, uint64_t Base,uint64_t Limit, GDT* gdt){
    if(Code_Seg){ // Code Segment
        
    }
    else{ //Data Segment
        
    }
}

LOUSTATUS Set_Interrurpt_Descriptor_Table_Seg(bool Code_Seg, uint64_t Base, uint64_t Limit, GDT* gdt){
    if(Code_Seg){ // Code Segment
        
    }
    else{ //Data Segment
        
    }
}

LOUSTATUS Set_Local_Descriptor_Table_Segment(bool Code_Seg, uint64_t Base,uint64_t Limit, GDT* gdt){
    if(Code_Seg){ // Code Segment
        
    }
    else { //Data Segment
        
    }
}

LOUSTATUS Set_Global_Descriptor_Table_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit, GDT* gdt){
    if(Code_Seg){ // Code Segment
        
    }
    else{ //Data Segment

    }
}

LOUSTATUS Set_Null_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit, GDT* gdt){
    if(Code_Seg){ // Code Segment
        
    }
    else{ //Data Segment
        
    }
}

LOUSTATUS Set_Call_Gate_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit, GDT* gdt){
    if(Code_Seg){ // Code Segment
        
    }
    else{ //Data Segment
        
    }
}

LOUSTATUS Set_Task_Gate_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit, GDT* gdt){
    if(Code_Seg){ // Code Segment
        
    }
    else{ //Data Segment
        
    }
}

LOUSTATUS Set_Interrupt_Gate_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit, GDT* gdt){
    if(Code_Seg){ // Code Segment
        
    }
    else{ //Data Segment
        
    }
}

LOUSTATUS Set_Trap_Gate_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit, GDT* gdt){
    
    if(Code_Seg){ // Code Segment
        
    }
    else{ //Data Segment
        
    }
}

LOUSTATUS Set_Stack_Segment(bool Code_Seg,uint64_t Base, uint64_t Limit, GDT* gdt){
    if(Code_Seg){ // Code Segment
        
    }
    else{ //Data Segment
    
    }
}

LOUSTATUS Load_Gdt(GDTP gdtp){
    
}
