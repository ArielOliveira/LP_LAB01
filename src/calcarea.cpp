#include <iostream>
#include "../include/calcarea.h"

using std::cin;
using std::endl;
using std::cout;


void calc_triangulo_area(float& base) {
	cout << "Digite a base para o triângulo: ";
	cin >> base;
	cout << endl;
	cout << "A área do triângulo é: " << trianguloArea(base) << endl;
}

void calc_retangulo_area(float& base, float& altura) {
	cout << "Digite a base para o retângulo: ";
	cin >> base;
	cout << endl;
	cout << "Digite a altura para o retângulo: ";
	cin >> altura;
	cout << endl;
	cout << "A área do retângulo é: " << retanguloArea(base, altura) << endl;
}


void calc_quadrado_area(float& base) {
	cout << "Digite a base para o quadrado: ";
	cin >> base;
	cout << endl;
	cout << "A área do quadrado é: " << quadradoArea(base) << endl;
}

void calc_circulo_area(float& raio) {
	cout << "Digite o raio do círculo: ";
	cin >> raio;
	cout << endl;
	cout << "A área do círculo é: " << circuloArea(raio) << endl;
}