CC = gcc
CFLAGS = -g -O2 -pipe


%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

all: alink

alink.o combine.o util.o output.o objload.o coff.o cofflib.o : alink.h

alink: alink.o combine.o util.o output.o objload.o coff.o cofflib.o
	$(CC) -o $@ $^

clean:
	-rm *.o alink
