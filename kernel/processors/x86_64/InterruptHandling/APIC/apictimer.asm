bits 64

section .data
    APIC dq 0

    APIC_APICID     equ 20h
    APIC_APICVER    equ 30h
    APIC_TASKPRIOR  equ 80h
    APIC_EOI        equ 0B0h
    APIC_LDR        equ 0D0h
    APIC_DFR        equ 0E0h
    APIC_SPURIOUS   equ 0F0h
    APIC_ESR        equ 280h
    APIC_ICRL       equ 300h
    APIC_ICRH       equ 310h
    APIC_LVT_TMR    equ 320h
    APIC_LVT_PERF   equ 340h
    APIC_LVT_LINT0  equ 350h
    APIC_LVT_LINT1  equ 360h
    APIC_LVT_ERR    equ 370h
    APIC_TMRINITCNT equ 380h
    APIC_TMRCURRCNT equ 390h
    APIC_TMRDIV     equ 3E0h
    APIC_LAST       equ 38Fh
    APIC_DISABLE    equ 10000h
    APIC_SW_ENABLE  equ 100h
    APIC_CPUFOCUS   equ 200h
    APIC_NMI        equ (4<<8)
    TMR_PERIODIC    equ 20000h
    TMR_BASEDIV     equ (1<<20)

section .text

global SetApicTimerOneShot

SetApicTimerOneShot:
    ; Move the value of rcx (APIC base address) into the memory location referenced by APIC
    mov [APIC], rcx

    ; ebx = 0xFFFFFFFF;
    xor     ebx, ebx
    dec     ebx

    ; Initialize PIT Ch 2 in one-shot mode
    ; Waiting 1 sec could slow down boot time considerably,
    ; so we'll wait 1/100 sec, and multiply the counted ticks
    mov     dx, 61h
    in      al, dx
    and     al, 0fdh
    or      al, 1
    out     dx, al
    mov     al, 10110010b
    out     43h, al
    ; 1193180/100 Hz = 11931 = 2e9bh
    mov     al, 9bh         ; LSB
    out     42h, al
    in      al, 60h         ; short delay
    mov     al, 2eh         ; MSB
    out     42h, al
    ; Reset PIT one-shot counter (start counting)
    in      al, dx
    and     al, 0feh
    out     dx, al          ; gate low
    or      al, 1
    out     dx, al          ; gate high
    ; Reset APIC timer (set counter to -1)
    mov     dword [rcx + APIC_TMRINITCNT], ebx
    ; Now wait until PIT counter reaches zero
.wait:
    in      al, dx
    and     al, 20h
    jz      .wait
    ; Stop APIC timer
    mov     dword [rcx + APIC_LVT_TMR], APIC_DISABLE
    ; Now do the math...
    xor     eax, eax
    xor     ebx, ebx
    dec     eax
    ; Get current counter value
    mov     ebx, dword [rcx + APIC_TMRCURRCNT]
    ; It is counted down from -1, make it positive
    sub     eax, ebx
    inc     eax
    ; We used divide value different than 1, so now we have to multiply the result by 16
    shl     eax, 4          ; *16
    xor     edx, edx
    ; Moreover, PIT did not wait a whole sec, only a fraction, so multiply by that too
    mov     ebx, 100        ; *PITHz
    mul     ebx
    ; ----- edx:eax now holds the CPU bus frequency -----
    ; Now calculate timer counter value of your choice
    ; This means that tasks will be preempted 1000 times in a second. 100 is popular too.
    mov     ebx, 1000
    xor     edx, edx
    div     ebx
    ; Again, we did not use divide value of 1
    shr     eax, 4          ; /16
    ; Sanity check, min 16
    cmp     eax, 010h
    jae     .check
    mov     eax, 010h
.check:
    ; Now eax holds appropriate number of ticks, use it as APIC timer counter initializer
    mov     dword [rcx + APIC_TMRINITCNT], eax
    ; Finally re-enable timer in periodic mode
    mov     dword [rcx + APIC_LVT_TMR], TMR_PERIODIC
    ; Setting divide value register again not needed by the manuals
    ; Although I have found buggy hardware that required it
    mov     dword [rcx + APIC_TMRDIV], 03h

ret
