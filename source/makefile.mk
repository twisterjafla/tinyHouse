


IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj/
LDIR =../lib

LIBS=-lm

cfiles = utils.c


_DEPS = everything.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o utils.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


%.o: %.c 
	$(CC) -c -o obj/$@ $< $(CFLAGS)


main: main.o utils.o
	$(CC) -o $@ $^ $(CFLAGS)

main.o: utils.o
utils.o: 

tempTest: utils.o
	echo hello world
	$(CC) -o tests/$@ tests/tempTest.c obj/$^ $(CFLAGS)
	./tests/tempTest

test: utils.o
	echo hello world
	$(CC) -o tests/$@ tests/test.c obj/$^ $(CFLAGS)
	./tests/test



.PHONY: clean
clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 