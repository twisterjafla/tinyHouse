CC = gcc
CFLAGS = -I.

cfiles := utils.c
ofiles := utils.o 
hfiles :=
testFiles :=


%.o: %.c everything.h
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(ofiles)
	$(CC) -o $@ $^ $(CFLAGS)

	gcc client.o server.o -o a

client.o: client.c server.h
	gcc -c client.c

server.o: server.c server.h
	gcc -c server.c