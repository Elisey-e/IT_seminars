%include "st_io.inc"
global _start

section .text

_start:
    PRINT "INPUT NUM(SIGNED): "
    GETSIG ebx
    PRINT "INPUT NUM(UNSIGNED): "
    GETUN ecx
    PRINT "INPUT CHAR: "
    GETCHAR

    PRINT "OUTPUT NUM(SIGNED): "
    SIGNINT ebx
    PUTCHAR 0xA
    PRINT "OUTPUT NUM(UNSIGNED): "
    UNSINT ecx
    PUTCHAR 0xA
    PRINT "OUTPUT CHAR: "
    PUTCHAR al
    PUTCHAR 0xA

    FINISH
