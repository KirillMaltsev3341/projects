TARGET = menu
CC = gcc
CFLAGS = -Wall -g -std=gnu99

SRC = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(SRC))

$(TARGET) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm $(TARGET) *.o