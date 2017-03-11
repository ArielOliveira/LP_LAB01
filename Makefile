PROG = ./bin/geometrica

INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
BIN_DIR = ./bin

CC = g++

RM = rm - rf

OBJS = ./build/main.o

CPPFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

$(PROG): $(OBJS)
	$(CC) $^ $(CPPFLAGS) -o $@

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(CC) -c $(CPPFLAGS) $^ -o $@

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*