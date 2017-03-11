#include <iostream>
//#include calcarea.h
//#include calcperimetro.h
#include "calcvolume.h"


using std::cin;
using std::cout;
using std::endl;

using namespace std;

void menuChoice(int choice) {
	switch(choice) {
		case 1:
		 	//calc_triangulo_area();
			//calc_triangulo_perimeto(); 
			break;
		case 2:
			//calc_retangulo_area(); 
			//calc_retangulo_perimetro();
			break;
		case 3:
			//calc_quadrado_area();
			//calc_quadrado_perimetro();
			break;
		case 4:
			//calc_circulo_area();
			//calc_circulo_perimetro();
			break;
		case 5:
			//calc_piramide_area();
			calc_piramide_volume();
			break;
		case 6:
			//calc_cubo_area();
			calc_cubo_volume();
			break;
		case 7:
			//calc_paralelepipedo_area();
			calc_paralelepipedo_volume();
			break;
		case 8:
			//calc_esfera_area();
			calc_esfera_volume();
			break;

		default:
			break;
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

	menuChoice(choice);

	return 0;
}