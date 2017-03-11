#include <iostream>
#include "../include/calcarea.h"

using std::cin;
using std::endl;
using std::cout;


void calc_triangulo_area(float& base) {
	cout << "Digite a base para o triangulo: ";
	cin >> base;
	cout << endl;
	cout << "A área do trangulo é: " << trianguloArea(base) << endl;
}

