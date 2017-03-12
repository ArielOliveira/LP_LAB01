#include <cmath>
#include "volume.h"

#define PI  3.1415

float volumePiramide(float &base, float &altura){
	return (pow(base,2) * altura) * 1/3;
}

float volumeCubo(float &aresta){
	return pow(aresta,3);
}

float volumeParalelepipedo(float &aresta1, float &aresta2, float &aresta3){
	return aresta1 * aresta2 * aresta3;
}

float volumeEsfera(float &raio){
	return PI * pow(raio,3) * 4/3;
}