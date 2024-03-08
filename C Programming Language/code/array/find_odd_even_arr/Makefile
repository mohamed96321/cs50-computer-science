CC = gcc # FOR C++ WILL MAKE IT: CXX = g++
CFLAGS = -g -Wall -Werror # FOR C++ WILL MAKE IT: CXXFLAGS = -g -Wall -Werror
LDFLAGS = -lm
SRC_DIR = src
INCLUDE_DIR = include
BIN_DIR = bin
OBJ_DIR = obj

SOURCES = $(wildcard $(SRC_DIR)/*.c) # Update file extension to .cpp
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SOURCES)) # Update file extension to .cpp
EXECUTABLE = $(BIN_DIR)/run

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^ # FOR C++ WILL MAKE IT: $(CXX) $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c # Update file extension to .cpp
	$(CC) $(CFLAGS) -c -o $@ $< -I $(INCLUDE_DIR) # FOR C++ WILL MAKE IT: $(CXX) $(CXXFLAGS) -c -o $@ $< -I

clean:
	rm -f $(EXECUTABLE) $(OBJECTS)

.PHONY: all clean
