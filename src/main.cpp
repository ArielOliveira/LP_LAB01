#include <iostream>
#include "calcarea.h"
#include "calcvolume.h"
#include "calcperimetro.h"

using std::cin;
using std::cout;
using std::endl;

void triangulo() {
	float base;
	calcAreaTriangulo(base);
	calcPerimetroTriangulo(base);
}

void retangulo() {
	float base, altura;
	calcAreaRetangulo(base, altura); 
	calcPerimetroRetangulo(base, altura);
}

void quadrado() {
	float base;
	calcAreaQuadrado(base);
	calcPerimetroQuadrado(base);
}

void circulo() {
	float raio;
	calcAreaCirculo(raio);
	calcPerimetroCirculo(raio);
}

void piramide() {
	float base, altura;
	calcAreaPiramide(base, altura);
	calcVolumePiramide(base, altura);
}

void cubo() {
	float aresta;
	calcAreaCubo(aresta);
	calcVolumeCubo(aresta);
}

void paralelepipedo() {
	float aresta1, aresta2, aresta3;
	calcAreaParalelepipedo(aresta1, aresta2, aresta3);
	calcVolumeParalelepipedo(aresta1, aresta2, aresta3);
}

void esfera() {
	float raio;
	calcAreaEsfera(raio);
	calcVolumeEsfera(raio);
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
	cout << endl;
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