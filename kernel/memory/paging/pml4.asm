bits 32

section .bss
align 4096
page_table_l4:
    resq  512      ; Allocate space for the L4 table (PML4), containing one entry
page_table_l3:
    resq 512   ; 1024 entries for the L3 table (PDPT)
page_table_l2:
    resq  512; 524288 entries for the L2 table (PDT)


global page_table_l4
global page_table_l3  
global page_table_l2


bits 64