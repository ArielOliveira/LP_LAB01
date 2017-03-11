#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using namespace std;

void menuChoice(int choice) {
	switch(choice) {

	}
}

void menu() {
	cout << "Calculadora de Geometria Plana e Espacial" << endl;
	cout << "(1) Triangulo equilatero" << endl;
	cout << "(2) Retangulo" << endl;
	cout << "(3) Quadrado" << endl;
	cout << "(4) Circulo" << endl;
	cout << "(5) Piramide com base quadrangular" << endl;
	cout << "(6) Cubo" << endl;
	cout << "(7) Paralelepipedo" << endl;
	cout << "(8) Esfera" << endl;
	cout << "(0) Sair" << endl;
	cout << endl;
	cout << "Digite a sua opcao: " << endl;
}

int main() {
	int choice;
	
	do {
		menu();
		cin >> choice;
		menuChoice(choice);	
	} while (choice);
	
	return 0;
}