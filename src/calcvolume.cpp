#include <iostream>
#include <cmath>
#include "calcvolume.h"
#include "volume.h"



using std::cin;
using std::cout;
using std::endl;

void calc_piramide_volume(float& base, float& altura){
	cout << "Digite o tamanho da base da piramide: ";
	cin >> base;
	cout <<	"Digite o tamanho da altura da piramide: ";
	cin >> altura;
	cout <<"Volume da Piramide: "<<volume_piramide(base, altura)<<endl<<endl;
}

void calc_cubo_volume(float& aresta){
	cout << "Digite o tamanho da aresta do cubo: ";
	cin >> aresta;
	cout << "Volume do Cubo: "<<volume_cubo(aresta)<<endl<<endl;
}

void calc_paralelepipedo_volume(float& aresta1, float& aresta2, float& aresta3){
	cout << "Digite o tamanho da aresta 1: ";
	cin >> aresta1;
	cout << "Digite o tamanho da aresta 2: ";
	cin >> aresta2;
	cout << "Digite o tamanho da aresta 3: ";
	cin >> aresta3;

	cout << "Volume do Paralelepipedo: "<<volume_paralelepipedo(aresta1, aresta2, aresta3)<<endl<<endl;

}

void calc_esfera_volume(float& raio){
	cout << "Digite o tamanho do raio: ";
	cin >> raio;
	cout << "Volume da Esfera: "<<volume_esfera(raio)<<endl<<endl;

}