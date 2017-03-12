#include "volume.h"

float volume_piramide(float &base, float &altura){
	return (pow(base,2) * altura) * 1/3;
}

float volume_cubo(float &aresta){
	return pow(aresta,3);
}

float volume_paralelepipedo(float &aresta1, float &aresta2, float &aresta3){
	return aresta1 * aresta2 * aresta3;
}

float volume_esfera(float &raio){
	return PI * pow(raio,3) * 4/3;
}