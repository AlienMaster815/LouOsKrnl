#include <stdint.h>
#ifdef __x86_64__
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
#endif

//TODO: Add Registers As Needed By The System
