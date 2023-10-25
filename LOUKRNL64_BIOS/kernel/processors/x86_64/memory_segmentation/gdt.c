/*===========================================================
-- Tyler Grenier 10/25/2023 2:40 PM                        --
-- Ok This Is One of the Worst Parts Because In this file  --
-- We do a lot of security and memory management this will --
-- do things like segregate memory for this thus security  --
-- things...                                               --
===========================================================*/

#include <kernel/gdt.h>

LOUSTATUS Set_Kernel_Segment(bool Code_Seg, uint64_t Base, uint64_t Limit, GDT* gdt) {
    if (Code_Seg) { // Code Segment
        gdt->KERNEL_CODE.limit_low = (uint16_t)(Limit & 0xFFFF); // Lower 16 bits of the limit
        gdt->KERNEL_CODE.base_low = (uint16_t)(Base & 0xFFFF);    // Lower 16 bits of the base address
        gdt->KERNEL_CODE.base_middle = (uint8_t)((Base >> 16) & 0xFF); // Next 8 bits of the base address
        gdt->KERNEL_CODE.access = 0x9A; // Type: Code, Readable, Executable, Ring 0
        gdt->KERNEL_CODE.granularity = 0xCF; // 4 KB granularity, 32-bit protected mode
        gdt->KERNEL_CODE.base_high = (uint8_t)((Base >> 24) & 0xFF); // Upper 8 bits of the base address
    } else { // Data Segment
        gdt->KERNEL_DATA.limit_low = (uint16_t)(Limit & 0xFFFF); // Lower 16 bits of the limit
        gdt->KERNEL_DATA.base_low = (uint16_t)(Base & 0xFFFF); // Lower 16 bits of the base address
        gdt->KERNEL_DATA.base_middle = (uint8_t)((Base >> 16) & 0xFF); // Next 8 bits of the base address
        gdt->KERNEL_DATA.access = 0x92; // Type: Data, Readable, Ring 0
        gdt->KERNEL_DATA.granularity = 0xCF; // 4 KB granularity, 32-bit protected mode
        gdt->KERNEL_DATA.base_high = (uint8_t)((Base >> 24) & 0xFF); // Upper 8 bits of the base address
    }
}

LOUSTATUS Set_User_Segment(bool Code_Seg, uint8_t type, uint64_t Base, uint64_t Limit, GDT* gdt) {
    if (Code_Seg) { // User Code Segment
        gdt->USER_CODE.limit_low = (uint16_t)(Limit & 0xFFFF); // Lower 16 bits of the limit
        gdt->USER_CODE.base_low = (uint16_t)(Base & 0xFFFF);    // Lower 16 bits of the base address
        gdt->USER_CODE.base_middle = (uint8_t)((Base >> 16) & 0xFF); // Next 8 bits of the base address
        gdt->USER_CODE.access = type; // Type: User-defined type
        gdt->USER_CODE.granularity = 0xCF; // 4 KB granularity, 32-bit protected mode
        gdt->USER_CODE.base_high = (uint8_t)((Base >> 24) & 0xFF); // Upper 8 bits of the base address
    } else { // User Data Segment
        gdt->USER_DATA.limit_low = (uint16_t)(Limit & 0xFFFF); // Lower 16 bits of the limit
        gdt->USER_DATA.base_low = (uint16_t)(Base & 0xFFFF); // Lower 16 bits of the base address
        gdt->USER_DATA.base_middle = (uint8_t)((Base >> 16) & 0xFF); // Next 8 bits of the base address
        gdt->USER_DATA.access = type; // Type: User-defined type
        gdt->USER_DATA.granularity = 0xCF; // 4 KB granularity, 32-bit protected mode
        gdt->USER_DATA.base_high = (uint8_t)((Base >> 24) & 0xFF); // Upper 8 bits of the base address
    }
    // Return an appropriate status (LOUSTATUS) or error code
}


LOUSTATUS Set_TSS_Segment(bool Code_Seg,uint64_t Base, uint64_t Limit, GDT* gdt){
    if(Code_Seg){ // Code Segment
        
    }
    else{ //Data Segment
        
    }
}

LOUSTATUS Set_System_Security_Segment(bool Code_Seg, uint64_t Base, uint64_t Limit, GDT* gdt) {
    if (Code_Seg) { // System Security Code Segment
        gdt->SYSTEM_SECURITY_CODE.limit_low = (uint16_t)(Limit & 0xFFFF); // Lower 16 bits of the limit
        gdt->SYSTEM_SECURITY_CODE.base_low = (uint16_t)(Base & 0xFFFF);    // Lower 16 bits of the base address
        gdt->SYSTEM_SECURITY_CODE.base_middle = (uint8_t)((Base >> 16) & 0xFF); // Next 8 bits of the base address
        gdt->SYSTEM_SECURITY_CODE.access = 0x9A; // Type: Code, Readable, Executable, Ring 0
        gdt->SYSTEM_SECURITY_CODE.granularity = 0xCF; // 4 KB granularity, 32-bit protected mode
        gdt->SYSTEM_SECURITY_CODE.base_high = (uint8_t)((Base >> 24) & 0xFF); // Upper 8 bits of the base address
    } else { // System Security Data Segment
        gdt->SYSTEM_SECURITY_DATA.limit_low = (uint16_t)(Limit & 0xFFFF); // Lower 16 bits of the limit
        gdt->SYSTEM_SECURITY_DATA.base_low = (uint16_t)(Base & 0xFFFF); // Lower 16 bits of the base address
        gdt->SYSTEM_SECURITY_DATA.base_middle = (uint8_t)((Base >> 16) & 0xFF); // Next 8 bits of the base address
        gdt->SYSTEM_SECURITY_DATA.access = 0x92; // Type: Data, Readable, Ring 0
        gdt->SYSTEM_SECURITY_DATA.granularity = 0xCF; // 4 KB granularity, 32-bit protected mode
        gdt->SYSTEM_SECURITY_DATA.base_high = (uint8_t)((Base >> 24) & 0xFF); // Upper 8 bits of the base address
    }
    // Return an appropriate status (LOUSTATUS) or error code
}


LOUSTATUS Set_User_Security_Segment(bool Code_Seg, uint64_t Base, uint64_t Limit, GDT* gdt) {
    uint8_t access = 0x9A; // Default: Code, Readable, Executable, Ring 3
    if (!Code_Seg) {
        access = 0x92; // Default: Data, Readable, Ring 3
    }

    if (Code_Seg) { // User Security Code Segment
        gdt->USER_SECURITY_CODE.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->USER_SECURITY_CODE.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->USER_SECURITY_CODE.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->USER_SECURITY_CODE.access = access;
        gdt->USER_SECURITY_CODE.granularity = 0xCF;
        gdt->USER_SECURITY_CODE.base_high = (uint8_t)((Base >> 24) & 0xFF);
    } else { // User Security Data Segment
        gdt->USER_SECURITY_DATA.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->USER_SECURITY_DATA.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->USER_SECURITY_DATA.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->USER_SECURITY_DATA.access = access;
        gdt->USER_SECURITY_DATA.granularity = 0xCF;
        gdt->USER_SECURITY_DATA.base_high = (uint8_t)((Base >> 24) & 0xFF);
    }
    // Return an appropriate status (LOUSTATUS) or error code
}


LOUSTATUS Set_Interrupt_Descriptor_Table_Seg(bool Code_Seg, uint64_t Base, uint64_t Limit, GDT* gdt) {
    uint8_t access = 0x8E; // Default: Interrupt Gate, Ring 0
    if (!Code_Seg) {
        // Data segments in the IDT are not common. Adjust access rights as needed.
        access = 0x82; // Default: Data Segment, Ring 0
    }

    if (Code_Seg) { // IDT Code Segment
        gdt->IDT_CODE.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->IDT_CODE.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->IDT_CODE.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->IDT_CODE.access = access;
        gdt->IDT_CODE.granularity = 0;
        gdt->IDT_CODE.base_high = (uint8_t)((Base >> 24) & 0xFF);
    } else { // IDT Data Segment (if needed)
        gdt->IDT_DATA.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->IDT_DATA.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->IDT_DATA.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->IDT_DATA.access = access;
        gdt->IDT_DATA.granularity = 0;
        gdt->IDT_DATA.base_high = (uint8_t)((Base >> 24) & 0xFF);
    }
    // Return an appropriate status (LOUSTATUS) or error code
}


LOUSTATUS Set_Local_Descriptor_Table_Segment(bool Code_Seg, uint64_t Base, uint64_t Limit, GDT* gdt) {
    uint8_t access = 0x9A; // Default: Code, Readable, Executable, Ring 0
    if (!Code_Seg) {
        access = 0x92; // Default: Data, Readable, Ring 0
    }

    if (Code_Seg) { // LDT Code Segment
        gdt->LDT_CODE.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->LDT_CODE.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->LDT_CODE.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->LDT_CODE.access = access;
        gdt->LDT_CODE.granularity = 0xCF;
        gdt->LDT_CODE.base_high = (uint8_t)((Base >> 24) & 0xFF);
    } else { // LDT Data Segment
        gdt->LDT_DATA.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->LDT_DATA.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->LDT_DATA.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->LDT_DATA.access = access;
        gdt->LDT_DATA.granularity = 0xCF;
        gdt->LDT_DATA.base_high = (uint8_t)((Base >> 24) & 0xFF);
    }
    // Return an appropriate status (LOUSTATUS) or error code
}


LOUSTATUS Set_Global_Descriptor_Table_Segment(bool Code_Seg, uint64_t Base, uint64_t Limit, GDT* gdt) {
    uint8_t access = 0x9A; // Default: Code, Readable, Executable, Ring 0
    if (!Code_Seg) {
        access = 0x92; // Default: Data, Readable, Ring 0
    }

    if (Code_Seg) { // GDT Code Segment
        gdt->GDT_CODE.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->GDT_CODE.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->GDT_CODE.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->GDT_CODE.access = access;
        gdt->GDT_CODE.granularity = 0xCF;
        gdt->GDT_CODE.base_high = (uint8_t)((Base >> 24) & 0xFF);
    } else { // GDT Data Segment
        gdt->GDT_DATA.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->GDT_DATA.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->GDT_DATA.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->GDT_DATA.access = access;
        gdt->GDT_DATA.granularity = 0xCF;
        gdt->GDT_DATA.base_high = (uint8_t)((Base >> 24) & 0xFF);
    }
    // Return an appropriate status (LOUSTATUS) or error code
}


LOUSTATUS Set_Null_Segment(bool Code_Seg, uint64_t Base, uint64_t Limit, GDT* gdt) {
        gdt->NULL_DATA.limit_low = 0;
        gdt->NULL_DATA.base_low = 0;
        gdt->NULL_DATA.base_middle = 0;
        gdt->NULL_DATA.access = 0; // No access
        gdt->NULL_DATA.granularity = 0;
        gdt->NULL_DATA.base_high = 0;
    
}


LOUSTATUS Set_Call_Gate_Segment(bool Code_Seg, uint64_t Base, uint64_t Limit, GDT* gdt) {
    uint8_t access = 0x8C; // Default: Call Gate, Ring 0
    if (!Code_Seg) {
        // Data segments in call gates are not common. Adjust access rights as needed.
        access = 0x84; // Default: Data Segment, Ring 0
    }

    if (Code_Seg) { // Call Gate Code Segment
        gdt->CALL_GATE_CODE.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->CALL_GATE_CODE.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->CALL_GATE_CODE.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->CALL_GATE_CODE.access = access;
        gdt->CALL_GATE_CODE.granularity = 0;
        gdt->CALL_GATE_CODE.base_high = (uint8_t)((Base >> 24) & 0xFF);
    } else { // Call Gate Data Segment (if needed)
        gdt->CALL_GATE_DATA.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->CALL_GATE_DATA.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->CALL_GATE_DATA.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->CALL_GATE_DATA.access = access;
        gdt->CALL_GATE_DATA.granularity = 0;
        gdt->CALL_GATE_DATA.base_high = (uint8_t)((Base >> 24) & 0xFF);
    }
    // Return an appropriate status (LOUSTATUS) or error code
}


LOUSTATUS Set_Task_Gate_Segment(bool Code_Seg, uint64_t Base, uint64_t Limit, GDT* gdt) {
    uint8_t access = 0x85; // Default: Task Gate, Ring 0
    if (!Code_Seg) {
        // Data segments in task gates are not common. Adjust access rights as needed.
        access = 0x84; // Default: Data Segment, Ring 0
    }

    if (Code_Seg) { // Task Gate Code Segment
        gdt->TASK_GATE_CODE.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->TASK_GATE_CODE.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->TASK_GATE_CODE.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->TASK_GATE_CODE.access = access;
        gdt->TASK_GATE_CODE.granularity = 0;
        gdt->TASK_GATE_CODE.base_high = (uint8_t)((Base >> 24) & 0xFF);
    } else { // Task Gate Data Segment (if needed)
        gdt->TASK_GATE_DATA.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->TASK_GATE_DATA.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->TASK_GATE_DATA.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->TASK_GATE_DATA.access = access;
        gdt->TASK_GATE_DATA.granularity = 0;
        gdt->TASK_GATE_DATA.base_high = (uint8_t)((Base >> 24) & 0xFF);
    }
    // Return an appropriate status (LOUSTATUS) or error code
}


LOUSTATUS Set_Interrupt_Gate_Segment(bool Code_Seg, uint64_t Base, uint64_t Limit, GDT* gdt) {
    uint8_t access = 0x8E; // Default: Interrupt Gate, Ring 0
    if (!Code_Seg) {
        // Data segments in interrupt gates are not common. Adjust access rights as needed.
        access = 0x82; // Default: Data Segment, Ring 0
    }

    if (Code_Seg) { // Interrupt Gate Code Segment
        gdt->INTERRUPT_GATE_CODE.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->INTERRUPT_GATE_CODE.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->INTERRUPT_GATE_CODE.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->INTERRUPT_GATE_CODE.access = access;
        gdt->INTERRUPT_GATE_CODE.granularity = 0;
        gdt->INTERRUPT_GATE_CODE.base_high = (uint8_t)((Base >> 24) & 0xFF);
    } else { // Interrupt Gate Data Segment (if needed)
        gdt->INTERRUPT_GATE_DATA.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->INTERRUPT_GATE_DATA.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->INTERRUPT_GATE_DATA.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->INTERRUPT_GATE_DATA.access = access;
        gdt->INTERRUPT_GATE_DATA.granularity = 0;
        gdt->INTERRUPT_GATE_DATA.base_high = (uint8_t)((Base >> 24) & 0xFF);
    }
    // Return an appropriate status (LOUSTATUS) or error code
}


LOUSTATUS Set_Trap_Gate_Segment(bool Code_Seg, uint64_t Base, uint64_t Limit, GDT* gdt) {
    uint8_t access = 0x8F; // Default: Trap Gate, Ring 0
    if (!Code_Seg) {
        // Data segments in trap gates are not common. Adjust access rights as needed.
        access = 0x83; // Default: Data Segment, Ring 0
    }

    if (Code_Seg) { // Trap Gate Code Segment
        gdt->TRAP_GATE_CODE.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->TRAP_GATE_CODE.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->TRAP_GATE_CODE.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->TRAP_GATE_CODE.access = access;
        gdt->TRAP_GATE_CODE.granularity = 0;
        gdt->TRAP_GATE_CODE.base_high = (uint8_t)((Base >> 24) & 0xFF);
    } else { // Trap Gate Data Segment (if needed)
        gdt->TRAP_GATE_DATA.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->TRAP_GATE_DATA.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->TRAP_GATE_DATA.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->TRAP_GATE_DATA.access = access;
        gdt->TRAP_GATE_DATA.granularity = 0;
        gdt->TRAP_GATE_DATA.base_high = (uint8_t)((Base >> 24) & 0xFF);
    }
    // Return an appropriate status (LOUSTATUS) or error code
}


LOUSTATUS Set_Stack_Segment(bool Code_Seg, uint64_t Base, uint64_t Limit, GDT* gdt) {
    uint8_t access = 0x92; // Default: Data, Readable, Ring 0
    if (Code_Seg) {
        // Stack segments are not typically code segments. Adjust access rights as needed.
        access = 0x9A; // Default: Code, Readable, Executable, Ring 0
    }

    if (Code_Seg) { // Stack Code Segment (not typical)
        gdt->STACK_CODE.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->STACK_CODE.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->STACK_CODE.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->STACK_CODE.access = access;
        gdt->STACK_CODE.granularity = 0xCF;
        gdt->STACK_CODE.base_high = (uint8_t)((Base >> 24) & 0xFF);
    } else { // Stack Data Segment
        gdt->STACK_DATA.limit_low = (uint16_t)(Limit & 0xFFFF);
        gdt->STACK_DATA.base_low = (uint16_t)(Base & 0xFFFF);
        gdt->STACK_DATA.base_middle = (uint8_t)((Base >> 16) & 0xFF);
        gdt->STACK_DATA.access = access;
        gdt->STACK_DATA.granularity = 0xCF;
        gdt->STACK_DATA.base_high = (uint8_t)((Base >> 24) & 0xFF);
    }
    // Return an appropriate status (LOUSTATUS) or error code
}


LOUSTATUS Load_Gdt(GDT* gdt){
    
}
