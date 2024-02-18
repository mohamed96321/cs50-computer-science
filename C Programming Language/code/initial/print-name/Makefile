CC = gcc
CFLAGS = -Wall -g
SRC_DIR = src
BIN_DIR = bin

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
TARGET = $(BIN_DIR)/program.exe

all: $(TARGET)

$(TARGET): $(SRC_FILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC_FILES)

clean:
	rm -f $(TARGET)
