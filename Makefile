CC=gcc
CFLAGS=-g -Wall

all: hello

hello: hello_world.o
	$(CC) $(CFLAGS) hello_world.o -o hello

hello_world.o:  hello_world.c
	$(CC) $(CFLAGS) -c hello_world.c

clean:
	rm -f *.o hello 
