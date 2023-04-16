%include "st_io.inc"
global _start

section .text
_start:

    xor eax, eax
    xor ebx, ebx
    xor ecx, ecx
    GETUN eax
    mov edx, eax
    mov bl, 12
    div bl
    mov cl, ah
    cmp cl, 0
    jne end_ptr
    mov cl, 12
end_ptr:
    sub edx, ecx
    mov eax, edx
    mov bl, 12
    div bl
    mov bl, al
    xor ax, ax
    mov al, bl
    UNSINT eax
    PUTCHAR ':'
    UNSINT ecx
    PUTCHAR 0Ax

    FINISH

section .bss
    z resd 1
