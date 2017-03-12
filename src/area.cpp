#include <cmath>
#include "area.h"

#define PI 3.1415
#define pitagoras(a,b) (pow(a,2) - pow(b,2))

float trianguloArea(float& base) {
	return  (base * sqrt(pitagoras(base / 2, base) - (pitagoras(base / 2, base) * 2))) / 2;
} 	

float retanguloArea(float& base, float& altura) {
	return base * altura;
}

float quadradoArea(float& lado) {
	return pow(lado,2);
}

float circuloArea(float& raio) {
	return PI * pow(raio,2);
}

float areaPiramide(float& base,float& altura){
	return (trianguloArea(base) * 4) + (base * base);
}

float areaCubo(float& aresta){
	return 6 * pow(aresta,2);
}

float areaParalelepipedo(float& aresta1,float& aresta2,float& aresta3){
	return (2 * aresta1 * aresta2) + (2 * aresta1 * aresta3) + (2 * aresta2 * aresta3);
}

float areaEsfera(float& raio){
	return 4 * PI * pow(raio,2);
}

