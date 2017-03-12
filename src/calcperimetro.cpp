#include <iostream>
#include "calcperimetro.h"

using std::cout;
using std::endl;

void calcPerimetroTriangulo(float& base) {
	cout << "O perímetro do triângulo é: " << trianguloPerimetro(base) << endl;
}

void calcPerimetroRetangulo(float& base, float& altura) {
	cout << "O perímetro do retângulo é: " << retanguloPerimetro(base, altura) << endl;
}

void calcPerimetroQuadrado(float& base) {
	cout << "O perímetro do quadrado é: " << quadradoPerimetro(base) << endl;
}

void calcPerimetroCirculo(float& raio) {
	cout << "O perímetro do círculo é: " << circuloPerimetro(raio) << endl;
}