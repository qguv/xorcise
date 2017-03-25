CC = gcc
CFLAGS = -std=gnu90 -Wall -Wextra -Werror
SRC = xorcise.c
OBJ = ${SRC:.c=.o}

all: xorcise

xorcise: $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^

clean:
	@echo cleaning
	rm -f $(OBJ) xorcise

.PHONY: all clean
