CC = gcc
CFLAGS = -Wall -std=c99 -pedantic -g
LDFLAGS = -lm

.PHONY: all clean

all: mean

mean: mean.o
	$(CC) mean.o -o mean $(LDFLAGS)

mean.o: mean.c
	$(CC) $(CFLAGS) -c mean.c

clean:
	rm -f mean mean.o
