FLAGS = -std=c99 -D_XOPEN_SOURCE=700 -lrt -Wall -Werror -Wextra


default: main.o func.o
	gcc -o test main.c func.o $(FLAGS)

main.o: main.c
	gcc -c main.c $(FLAGS)

func.o: func.c func.h
	gcc -c func.c $(FLAGS)

run: default
	./test

clear:
	$(RM) test *.o
