gym:gym.o
	gcc -g gym.o -o gym

gym.o:gym.c
	gcc -g -Wall -c gym.c

.PHONY:clean

clean:
	rm -f *.o *a.out core gym

.PHONY:all

all:gym clean
