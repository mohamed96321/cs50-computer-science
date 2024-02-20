CC = gcc
CFLAGC = -g -Wall
LDFLAGC =
SRC_DIR = src
INCLUDE_DIR = include
OBJ_DIR = obj
BIN_DIR = bin

SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SOURCES))
EXECUTEABLE = $(BIN_DIR)/hello.exe

all: $(EXECUTEABLE)

$(EXECUTEABLE): $(OBJECTS)
	$(CC) $(LDFLAGC) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGC) -c -o $@ $< -I $(INCLUDE_DIR)

clean:
	rm -rf $(OBJ_DIR)

.PHONY: all clean
