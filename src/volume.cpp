#include <iostream>
#include <cmath>
#include "volume.h"

#define PI  3.14

using std::cin;
using std::cout;
using std::endl;

float volume_piramide(float &base, float &altura){
	return (base * altura) * 1/3;
}

float volume_cubo(float &aresta){
	return aresta * aresta * aresta;
}

float volume_paralelepipedo(float &aresta1, float &aresta2, float &aresta3){
	return aresta1 * aresta2 * aresta3;
}

float volume_esfera(float &raio){
	return PI * raio * 4/3;
}