gym:gym.o
	gcc -g gym.o -o gym

gym.o:gym.c
	gcc -g -Wall -c gym.c
