# Hola soy un comentario

default: main.c func.o
	gcc -o test main.c func.o

func.o: func.h func.c
	gcc -c func.c

run: default
	./test

clear:
	$(RM) test *.o
