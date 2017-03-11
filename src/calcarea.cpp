#include <iostream>
#include "../include/calcarea.h"

using std::cin;
using std::endl;
using std::cout;


void calcRequest(int choice) {
	switch(choice) {
		case 1: float base, area, p;
				cout << "Digite a base para o triangulo:";
				cin >> base;
				cout << endl;
				triangle(base, area, p);
				cout << "A área do trangulo é: " << area << endl;
				cout << "O perimetro do triangulo é: " << p << endl;
			break;
	}
}

