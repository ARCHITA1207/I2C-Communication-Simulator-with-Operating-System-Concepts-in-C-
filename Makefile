CC=gcc
CFLAGS=-Wall -Iinclude
SRC=$(wildcard src/*.c)
TARGET=i2c_simulator
all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)
clean:
	rm -f $(TARGET)
