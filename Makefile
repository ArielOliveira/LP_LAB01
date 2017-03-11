PROG = geometrica

CC = g++

RM = rm - rf

INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
BIN_DIR = ./bin

OBJS = build/main.o

CPPFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(BIN_DIR)/$@ $^

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(CC) -c $(CPPFLAGS) -o $^ $@

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*