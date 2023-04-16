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
    mov esi, [list + ecx * 4 + 4]
loop_out:
    cmp esi, [list + ecx * 4]
    jge egh
    mov edi, ecx
    mov esi, [list + ecx * 4]
egh:
    loop loop_out

    mov edi, 2
    push edi

    mov ecx, edx
    mov esi, [list + ecx * 4 + 4]
loop_out1:
    cmp esi, [list + ecx * 4]
    jle egh2
    mov edi, ecx
    mov esi, [list + ecx * 4]
egh2:
    loop loop_out1

    mov edi, 5

    mov esi, edi

    mov eax, dword [list + 4 * edi - 4]
    pop edi
    mov ebx, dword [list + 4 * edi - 4]

    mov dword [list + 4 * esi - 4], ebx
    mov dword [list + 4 * edi - 4], eax

    PUTCHAR 0Ah

    mov ecx, edx
loop_sted:
    mov eax, [list + ecx * 4]
    UNSINT eax
    PUTCHAR 0Ah
    cmp ecx, 0
    dec ecx
    jne loop_sted

    FINISH

section .data
    list dw 100





