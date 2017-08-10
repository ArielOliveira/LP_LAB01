questao_1 = ./bin/geometrica
questao_2 = ./bin/questao_2
questao_3 = ./bin/questao_3

INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
BIN_DIR = ./bin
DOC_DIR = ./doc

CC = g++

RM = rm -rf

OBJS_Q1 = ./build/main.o ./build/area.o ./build/calcarea.o ./build/calcvolume.o ./build/volume.o  ./build/calcperimetro.o ./build/perimetro.o

CPPFLAGS = -Wall -pedantic -ansi -std=c++11

.PHONY: doxy clean go questao_1

questao_1: $(questao_1)

$(questao_1): CPPFLAGS += -I. -I$(INC_DIR)/questao_1/
$(questao_1): $(OBJ_DIR) $(OBJS_Q1)
	$(CC) $(OBJS_Q1) $(CPPFLAGS) -o $@

$(OBJ_DIR)/main.o: $(SRC_DIR)/questao_1/main.cpp 
	$(CC) -c $(CPPFLAGS) $^ -o $@

$(OBJ_DIR)/area.o: $(SRC_DIR)/questao_1/area.cpp $(INC_DIR)/questao_1/area.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/calcarea.o: $(SRC_DIR)/questao_1/calcarea.cpp $(INC_DIR)/questao_1/calcarea.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/calcvolume.o: $(SRC_DIR)/questao_1/calcvolume.cpp $(INC_DIR)/questao_1/calcvolume.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/volume.o: $(SRC_DIR)/questao_1/volume.cpp $(INC_DIR)/questao_1/volume.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/calcperimetro.o: $(SRC_DIR)/questao_1/calcperimetro.cpp $(INC_DIR)/questao_1/calcperimetro.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/perimetro.o: $(SRC_DIR)/questao_1/perimetro.cpp $(INC_DIR)/questao_1/perimetro.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR):
	mkdir $@

doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*

go: 
	$(PROG)

