section .data
    fpu_control_word dq 0x037F ; Set FPU control word to default value (e.g., rounding to nearest, full precision)

section .text
    global init_fpu
    extern fpu_control_word

init_fpu:
    sub rsp, 8          ; Align stack
    fninit              ; Initialize FPU (clears all status flags)
    fldcw [fpu_control_word] ; Load FPU control word
    add rsp, 8          ; Restore stack
    ret