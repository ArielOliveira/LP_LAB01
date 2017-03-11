teste: main.o calcvolume.o volume.o
	g++ main.o calcvolume.o volume.o -Wall -pedantic -ansi -std=c++11 -o teste