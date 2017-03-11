#include <iostream>
#include "../include/calcperimetro.h"

using std::cin;
using std::cout;
using std::endl;

void calc_triangulo_perimetro(float& base) {
	cout << "O perímetro do trângulo é: " << trianguloPerimetro(base) << endl;
}

void calc_retangulo_perimetro(float& base, float& altura) {
	cout << "Digite a base para o retangulo: ";
	cin >> base;
	cout << endl;
	cout << "Digite a altura para o retangulo: ";
	cin >> altura;
	cout << endl;
	cout << "O perímetro do retângulo é: " << retanguloPerimetro(base, altura) << endl;
}

void calc_quadrado_perimetro(float& base) {
	cout << "Digite a base para o retangulo: ";
	cin >> base;
	cout << endl;
	cout << "O perímetro do quadrado é: " << retanguloPerimetro(base) << endl;
}

void calc_circulo_perimetro(float& raio) {
	cout << "Digite o raio do círculo: ";
	cin >> raio;
	cout << endl;
	cout << "O perímetro do círculo é: " << circuloPerimetro(raio) << endl;
}