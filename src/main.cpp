#include <iostream>
#include "calcarea.h"
#include "calcvolume.h"
#include "calcperimetro.h"

using std::cin;
using std::cout;
using std::endl;

void triangulo() {
	float base;
	calc_triangulo_area(base);
	calc_triangulo_perimetro(base);
}

void retangulo() {
	float base, altura;
	calc_retangulo_area(base, altura); 
	calc_retangulo_perimetro(base, altura);
}

void quadrado() {
	float base;
	calc_quadrado_area(base);
	calc_quadrado_perimetro(base);
}

void circulo() {
	float raio;
	calc_circulo_area(raio);
	calc_circulo_perimetro(raio);
}

void piramide() {
	float base, altura;
	calc_piramide_area(base, altura);
	calc_piramide_volume(base, altura);
}

void cubo() {
	float aresta;
	calc_cubo_area(aresta);
	calc_cubo_volume(aresta);
}

void paralelepipedo() {
	float aresta1, aresta2, aresta3;
	calc_paralelepipedo_area(aresta1, aresta2, aresta3);
	calc_paralelepipedo_volume(aresta1, aresta2, aresta3);
}

void esfera() {
	float raio;
	calc_esfera_area(raio);
	calc_esfera_volume(raio);
}

void menuEscolha(int escolha) {
	switch(escolha) {
		case 1: 
			triangulo();		
		 	break;
		case 2:
			retangulo();
			break;
		case 3:
			quadrado();
			break;
		case 4:
			circulo();
			break;
		case 5:
			piramide();
			break;
		case 6:
			cubo();
			break;
		case 7:
			paralelepipedo();
			break;
		case 8:
			esfera();
			break;
		default:
			if (escolha > 8) cout << "Opção inválida!" << endl;
			break;
	}
}

void menu() {
	cout << "Calculadora de Geometria Plana e Espacial" << endl;
	cout << "(1) Triângulo equilátero" << endl;
	cout << "(2) Retângulo" << endl;
	cout << "(3) Quadrado" << endl;
	cout << "(4) Círculo" << endl;
	cout << "(5) Pirâmide com base quadrangular" << endl;
	cout << "(6) Cubo" << endl;
	cout << "(7) Paralelepípedo" << endl;
	cout << "(8) Esfera" << endl;
	cout << "(0) Sair" << endl;
	cout << endl;
	cout << "Digite a sua opção: ";
}

int main() {
	int escolha;
	
	do {
		menu();
		cin >> escolha;
		menuEscolha(escolha);	
	} while (escolha);
	cout << "Saindo..." << endl;

	return 0;
}