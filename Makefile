PROJECT = cctl

CC = gcc
CFLAGS += -std=c99 -pedantic -Wall -Wextra -Werror
LDFLAGS += -lm

SRC = $(PROJECT).c
OBJ = 

all: $(PROJECT)

debug: CFLAGS += -g
debug: $(PROJECT)

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $<

$(PROJECT): $(OBJ) $(PROJECT).c $(PROJECT).h
	$(CC) $(SRC) $(OBJ) $(LDFLAGS) -o $(PROJECT)

clean:
	rm $(PROJECT) *.o

