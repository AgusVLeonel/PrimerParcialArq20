nasm -f elf32 read.asm
nasm -f elf32 write.asm
gcc -c -m32 main.c
gcc -m32 -fno-builtin read.o write.o main.o -o programa
