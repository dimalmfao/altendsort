# simple makefile

CC = gcc
CFLAGS = -Wall -Wextra -std=c99

SRC = main.c
OBJ = $(SRC:.c=.o)
EXEC = output

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ) $(EXEC)
