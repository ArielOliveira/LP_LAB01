#include "../include/perimetro.h"

#define PI 3.1415

float trianguloPerimetro(float& base) {
	return base * 3;
}

float retanguloPerimetro(float& base, float& altura) {
	return 2 * (base + altura);
}

float retanguloPerimetro(float& base) {
	return 4 * base;
}

float circuloPerimetro(float& raio) {
	return 2 * PI * raio;
}