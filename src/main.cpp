/**
* @file 	main.cpp
* @brief 	Programa que cálcula área, perímetro e volume
*			 de figuras geométricas planas e espaciais
* @details	Figuras geométricas planas possuem apenas área e 
*			perímetro. As espaciais não possuem perímetro
* @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
* @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
* @since	09/03/2017
* @date		12/03/2017
*/

#include <iostream>
#include <limits>
#include "calcarea.h"
#include "calcvolume.h"
#include "calcperimetro.h"

using std::cin;
using std::cout;
using std::endl;
using std::streamsize;


/**\defgroup Figuras_Planas_Inicialização
* @{
* @fn 	    void triangulo()
* @brief  	Inicializa cálculos para o triângulo
*/
void triangulo() {
	float base;
	calcAreaTriangulo(base);
	calcPerimetroTriangulo(base);
}

/**
* @brief    Inicializa cálculos para o retângulo
*/
void retangulo() {
	float base, altura;
	calcAreaRetangulo(base, altura); 
	calcPerimetroRetangulo(base, altura);
}
/**
* @brief 	Inicializa cálculos para o quadrado
*/
void quadrado() {
	float base;
	calcAreaQuadrado(base);
	calcPerimetroQuadrado(base);
}

/**
* @brief 	Inicializa cálculos para o circulo
*/
void circulo() {
	float raio;
	calcAreaCirculo(raio);
	calcPerimetroCirculo(raio);
}
//@}

/**\defgroup Figuras_Espaciais_Inicialização
* @{
* @fn 	 	void piramide()
* @brief 	Inicializa cálculos para a piramide
*/
void piramide() {
	float base, altura;
	calcAreaPiramide(base, altura);
	calcVolumePiramide(base, altura);

}

/**
* @brief 	Inicializa cálculos para o cubo
*/
void cubo() {
	float aresta;
	calcAreaCubo(aresta);
	calcVolumeCubo(aresta);
}

/**
* @brief 	Inicializa cálculos para o paralelepípedo
*/
void paralelepipedo() {
	float aresta1, aresta2, aresta3;
	calcAreaParalelepipedo(aresta1, aresta2, aresta3);
	calcVolumeParalelepipedo(aresta1, aresta2, aresta3);
}

/**
* @brief	Inicializa cálculos para a esfera
*/
void esfera() {
	float raio;
	calcAreaEsfera(raio);
	calcVolumeEsfera(raio);
	
}
///@}

void menu() {
	cout << "-----------------------------------------" << endl;
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

void continua(char* s) {
    cin.clear();
    std::cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
	cout << "--------------------------------------" << endl;
	cout << "Digite C para comecar um novo calculo: ";
	cin.get(s, 2);
}

void menuEscolha(int escolha) {
	char s[2];
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
			break;
	}
	
	cout << endl;
	
	do { 
		continua(s);				
	} while (s[0]!='c' && s[0]!='C');

}

int main() {
	int escolha;
	system("clear");
	
	do {
		menu();
		cin >> escolha;
		system("clear");
		if (escolha <= 8 && escolha > 0) menuEscolha(escolha);
		system("clear");
	} while (escolha);
	cout << "Saindo..." << endl;

	return 0;
}