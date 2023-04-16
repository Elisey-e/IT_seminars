%include "st_io.inc"
global _start

section .data


section .text

_start:
    A EQU 415
    B EQU 123
    
    xor eax, eax
    xor ebx, ebx
    xor ecx, ecx
    xor edx, edx

    mov ax, A
    mov bl, B
    mul bx

    movzx ecx, ax

    movzx eax, dx

    mov ebx, 100h
    mul ebx
    mul ebx
    add eax, ecx

    SIGNINT eax
    PUTCHAR 0xA

    FINISH
