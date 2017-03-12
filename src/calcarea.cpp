#include <iostream>
#include "calcarea.h"

using std::cin;
using std::endl;
using std::cout;


void calcAreaTriangulo(float& base) {
	cout << "Digite a base para o triângulo: ";
	cin >> base;
	cout << endl;
	cout << "A área do triângulo é: " << trianguloArea(base) << endl;
}

void calcAreaRetangulo(float& base, float& altura) {
	cout << "Digite a base para o retângulo: ";
	cin >> base;
	cout << endl;
	cout << "Digite a altura para o retângulo: ";
	cin >> altura;
	cout << endl;
	cout << "A área do retângulo é: " << retanguloArea(base, altura) << endl;
}


void calcAreaQuadrado(float& base) {
	cout << "Digite a base para o quadrado: ";
	cin >> base;
	cout << endl;
	cout << "A área do quadrado é: " << quadradoArea(base) << endl;
}

void calcAreaCirculo(float& raio) {
	cout << "Digite o raio do círculo: ";
	cin >> raio;
	cout << endl;
	cout << "A área do círculo é: " << circuloArea(raio) << endl;

}

void calcAreaPiramide(float& base, float& altura){
	cout << "Digite o tamanho da aresta da base da pirâmide: ";
	cin >> base;
	cout <<	"Digite o tamanho da altura da pirâmide: ";
	cin >> altura;
	cout << endl;
	cout << "A área da pirâmide é: "<< areaPiramide(base, altura) << endl;
	cout << endl;
}

void calcAreaCubo(float& aresta) {
	cout << "Digite o tamanho da aresta do cubo: ";
	cin >> aresta;
	cout << endl;
	cout << "A área do cubo é: "<<areaCubo(aresta) << endl;
	cout << endl;
}

void calcAreaParalelepipedo(float& aresta1, float& aresta2, float& aresta3) {
	cout << "Digite o tamanho da aresta 1: ";
	cin >> aresta1;
	cout << "Digite o tamanho da aresta 2: ";
	cin >> aresta2;
	cout << "Digite o tamanho da aresta 3: ";
	cin >> aresta3;
	cout << endl;
	cout << "A área do paralelepípedo é: "<< areaParalelepipedo(aresta1, aresta2, aresta3) << endl;
	cout << endl;
}

void calcAreaEsfera(float& raio) {
	cout << "Digite o tamanho do raio: ";
	cin >> raio;
	cout << endl;
	cout << "A área da esfera é: "<< areaEsfera(raio) << endl;
	cout << endl;
}
