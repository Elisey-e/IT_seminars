CC=nasm
SOURCES=lesson4/3.asm
OBJECTS=$(SOURCES:.asm=.o)
LISTS=$(SOURCES:.asm=.lst)
EXECUTABLE=$(SOURCES:.asm=)

all:
	nasm -f elf $(SOURCES) -o $(OBJECTS)
	ld -m elf_i386 $(OBJECTS) -o $(EXECUTABLE)
	./$(EXECUTABLE)