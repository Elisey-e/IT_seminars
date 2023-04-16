global _start
%include "st_io.inc"

section .text
_start:
    PRINT "Введите количество чисел: "
    GETUN ecx
    mov edx, ecx
    mov ecx, edx
loop_st:
    GETUN eax
    mov [list + ecx * 4], eax
    cmp ecx, 0
    dec ecx
    jne loop_st

    mov ecx, edx
    dec ecx
loop_out:
    push ecx
    mov ecx, edx
    dec ecx
loop_in:
    mov eax, edx
    sub eax, ecx
    dec eax
    mov esi, eax
    mov eax, dword [list + 4 * esi + 4]
    mov ebx, dword [list + 4 * esi + 8]
    cmp eax, ebx
    jl endif
    mov dword [list + 4 * esi + 4], ebx
    mov dword [list + 4 * esi + 8], eax
endif:
    loop loop_in
    pop ecx
    loop loop_out
    PUTCHAR 0Ah
    mov ecx, edx
loop_sted:
    xor eax, eax
    mov ebx, edx
    sub ebx, ecx
    mov eax, [list + ebx * 4 + 4]
    UNSINT eax
    PUTCHAR 0Ah
    cmp ecx, 0
    dec ecx
    jne loop_sted

    FINISH

section .data
    list dw 100





