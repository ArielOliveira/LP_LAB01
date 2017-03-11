PROG = ./bin/geometrica

INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
BIN_DIR = ./bin

CC = g++

RM = rm - rf

OBJS = ./build/main.o ./build/area.o ./build/calcarea.o ./build/calcvolume.o ./build/volume.o  ./build/calcperimetro.o ./build/perimetro.o

CPPFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

$(PROG): $(OBJS)
	$(CC) $^ $(CPPFLAGS) -o $@

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp 
	$(CC) -c $(CPPFLAGS) $^ -o $@

$(OBJ_DIR)/area.o: $(SRC_DIR)/area.cpp
	$(CC) -c $(CPPFLAGS) $^ -o $@

$(OBJ_DIR)/calcarea.o: $(SRC_DIR)/calcarea.cpp
	$(CC) -c $(CPPFLAGS) $^ -o $@

$(OBJ_DIR)/calcvolume.o: $(SRC_DIR)/calcvolume.cpp
	$(CC) -c $(CPPFLAGS) $^ -o $@

$(OBJ_DIR)/volume.o: $(SRC_DIR)/volume.cpp
	$(CC) -c $(CPPFLAGS) $^ -o $@

$(OBJ_DIR)/calcperimetro.o: $(SRC_DIR)/calcperimetro.cpp
	$(CC) -c $(CPPFLAGS) $^ -o $@

$(OBJ_DIR)/perimetro.o: $(SRC_DIR)/perimetro.cpp
	$(CC) -c $(CPPFLAGS) $^ -o $@

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*

