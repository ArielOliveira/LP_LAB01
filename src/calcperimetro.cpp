#include <iostream>
#include "../include/calcperimetro.h"

using std::cin;
using std::cout;
using std::endl;

void calc_triangulo_perimetro(float& base) {
	cout << "O perímetro do triângulo é: " << trianguloPerimetro(base) << endl;
}

void calc_retangulo_perimetro(float& base, float& altura) {
	cout << "O perímetro do retângulo é: " << retanguloPerimetro(base, altura) << endl;
}

void calc_quadrado_perimetro(float& base) {
	cout << "O perímetro do quadrado é: " << quadradoPerimetro(base) << endl;
}

void calc_circulo_perimetro(float& raio) {
	cout << "O perímetro do círculo é: " << circuloPerimetro(raio) << endl;
}