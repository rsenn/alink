%.o: %.c
	gcc -c -o $@ $<

all: alink

alink.o combine.o util.o output.o objload.o coff.o cofflib.o : alink.h

alink: alink.o combine.o util.o output.o objload.o coff.o cofflib.o
	gcc -o $@ $^

clean:
	-rm *.o alink
