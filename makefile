CC = gcc
CFLAGS = -Wall -g -pedantic

SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))
HEADS = $(wildcard *.h)


MAIN = main
all: $(MAIN)

%.o: %.c $(HEADS)
	$(CC) $(CFLAGS) -c $< -o $@

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	del *.o $(MAIN).exe