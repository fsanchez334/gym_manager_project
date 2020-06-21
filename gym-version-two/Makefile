main:main.o
	gcc -g -Wall main.o -o main

main.o:main.c
	gcc -c -Wall main.c

.PHONY:clean

clean:
	rm -f *.o a.out core main

.PHONY:all

all:main clean
