#include <stdint.h>
#ifdef __x86_64__

//64 bit Registera

#include <stdint.h>

uint64_t get_cr3_value() {
    uint64_t cr3_value;
    // Inline assembly to read the value of CR3 into the cr3_value variable
    asm volatile ("mov %%cr3, %0" : "=r" (cr3_value));
    return cr3_value;
}



uint64_t get_rsp() {
    uint64_t rsp_value;
    asm volatile("mov %%rsp, %0" : "=r" (rsp_value));
    return rsp_value;
}

void set_rsp(uint64_t new_rsp_value) {
    asm volatile("mov %0, %%rsp" : : "r" (new_rsp_value));
}

uint64_t get_rbp() {
    uint64_t rbp_value;
    asm volatile("mov %%rbp, %0" : "=r" (rbp_value));
    return rbp_value;
}

void set_rbp(uint64_t new_rbp_value) {
    asm volatile("mov %0, %%rbp" : : "r" (new_rbp_value));
}

uint64_t get_rax() {
    uint64_t rax_value;
    asm volatile("mov %%rax, %0" : "=r" (rax_value));
    return rax_value;
}

void set_rax(uint64_t new_rax_value) {
    asm volatile("mov %0, %%rax" : : "r" (new_rax_value));
}

uint64_t get_rbx() {
    uint64_t rbx_value;
    asm volatile("mov %%rbx, %0" : "=r" (rbx_value));
    return rbx_value;
}

void set_rbx(uint64_t new_rbx_value) {
    asm volatile("mov %0, %%rbx" : : "r" (new_rbx_value));
}

uint64_t get_rcx() {
    uint64_t rcx_value;
    asm volatile("mov %%rcx, %0" : "=r" (rcx_value));
    return rcx_value;
}

void set_rcx(uint64_t new_rcx_value) {
    asm volatile("mov %0, %%rcx" : : "r" (new_rcx_value));
}

uint64_t get_rdx() {
    uint64_t rdx_value;
    asm volatile("mov %%rdx, %0" : "=r" (rdx_value));
    return rdx_value;
}

void set_rdx(uint64_t new_rdx_value) {
    asm volatile("mov %0, %%rdx" : : "r" (new_rdx_value));
}

uint64_t get_rsi() {
    uint64_t rsi_value;
    asm volatile("mov %%rsi, %0" : "=r" (rsi_value));
    return rsi_value;
}

void set_rsi(uint64_t new_rsi_value) {
    asm volatile("mov %0, %%rsi" : : "r" (new_rsi_value));
}


uint64_t get_rdi() {
    uint64_t rdi_value;
    asm volatile("mov %%rdi, %0" : "=r" (rdi_value));
    return rdi_value;
}

void set_rdi(uint64_t new_rdi_value) {
    asm volatile("mov %0, %%rdi" : : "r" (new_rdi_value));
}


uint32_t get_esp() {
    uint32_t esp_value;
    asm volatile("mov %%esp, %0" : "=r" (esp_value));
    return esp_value;
}

void set_esp(uint32_t new_esp_value) {
    asm volatile("mov %0, %%esp" : : "r" (new_esp_value));
}

// Similar adaptations for ebp, eax, ebx, ecx, edx, esi, edi
uint32_t get_ebp() {
    uint32_t ebp_value;
    asm volatile("mov %%ebp, %0" : "=r" (ebp_value));
    return ebp_value;
}

void set_ebp(uint32_t new_ebp_value) {
    asm volatile("mov %0, %%ebp" : : "r" (new_ebp_value));
}

// Example for eax
uint32_t get_eax() {
    uint32_t eax_value;
    asm volatile("mov %%eax, %0" : "=r" (eax_value));
    return eax_value;
}

void set_eax(uint32_t new_eax_value) {
    asm volatile("mov %0, %%eax" : : "r" (new_eax_value));
}

// 16 bit Registers

uint16_t get_ax() {
    uint16_t ax_value;
    asm("mov %%ax, %0" : "=r" (ax_value));
    return ax_value;
}

void set_ax(uint16_t new_ax_value) {
    asm volatile("mov %0, %%ax" : : "r" (new_ax_value));
}

uint16_t get_bx() {
    uint16_t bx_value;
    asm("mov %%bx, %0" : "=r" (bx_value));
    return bx_value;
}

void set_bx(uint16_t new_bx_value) {
    asm volatile("mov %0, %%bx" : : "r" (new_bx_value));
}

uint16_t get_cx() {
    uint16_t cx_value;
    asm("mov %%cx, %0" : "=r" (cx_value));
    return cx_value;
}

void set_cx(uint16_t new_cx_value) {
    asm volatile("mov %0, %%cx" : : "r" (new_cx_value));
}

uint16_t get_dx() {
    uint16_t dx_value;
    asm("mov %%dx, %0" : "=r" (dx_value));
    return dx_value;
}

void set_dx(uint16_t new_dx_value) {
    asm volatile("mov %0, %%dx" : : "r" (new_dx_value));
}

uint16_t get_si() {
    uint16_t si_value;
    asm("mov %%si, %0" : "=r" (si_value));
    return si_value;
}

void set_si(uint16_t new_si_value) {
    asm volatile("mov %0, %%si" : : "r" (new_si_value));
}

uint16_t get_di() {
    uint16_t di_value;
    asm("mov %%di, %0" : "=r" (di_value));
    return di_value;
}

void set_di(uint16_t new_di_value) {
    asm volatile("mov %0, %%di" : : "r" (new_di_value));
}

uint16_t get_bp() {
    uint16_t bp_value;
    asm("mov %%bp, %0" : "=r" (bp_value));
    return bp_value;
}

void set_bp(uint16_t new_bp_value) {
    asm volatile("mov %0, %%bp" : : "r" (new_bp_value));
}

uint16_t get_sp() {
    uint16_t sp_value;
    asm("mov %%sp, %0" : "=r" (sp_value));
    return sp_value;
}

void set_sp(uint16_t new_sp_value) {
    asm volatile("mov %0, %%sp" : : "r" (new_sp_value));
}

//Special Registers And commands

void cpuid(unsigned int code, unsigned int* eax, unsigned int* ebx, unsigned int* ecx, unsigned int* edx) {
    asm volatile("cpuid"
        : "=a" (*eax), "=b" (*ebx), "=c" (*ecx), "=d" (*edx)
        : "a" (code));
}

#endif



//TODO: Add\ Registers As Needed By The System
