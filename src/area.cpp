#include <cmath>
#include "../include/area.h"

#define PI 3.1415
#define pitagoras(a,b) (pow(a,2) - pow(b,2))

float trianguloArea(float& base) {
	float altura;
	altura = pitagoras(base / 2, base);
	altura = altura - (altura * 2);
	altura = sqrt(altura);
	
	return  (base * altura) / 2;
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
