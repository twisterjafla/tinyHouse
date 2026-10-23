


IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib

LIBS=-lm

cfiles = utils.c


_DEPS = everything.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o utils.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: main.o utils.o
	$(CC) -o $@ $^ $(CFLAGS)

main.o: utils.o
utils.o: 

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 