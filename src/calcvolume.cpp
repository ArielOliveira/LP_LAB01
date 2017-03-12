#include <iostream>
#include "calcvolume.h"

using std::cout;
using std::endl;

void calcVolumePiramide(float& base, float& altura) {
	cout <<"O volume da Pirâmide é: "<< volumePiramide(base, altura) << endl;
}

void calcVolumeCubo(float& aresta) {
	cout << "O volume do Cubo é: "<< volumeCubo(aresta) << endl;
}

void calcVolumeParalelepipedo(float& aresta1, float& aresta2, float& aresta3) {
	cout << "O volume do Paralelepípedo é: "<< volumeParalelepipedo(aresta1, aresta2, aresta3) << endl;
}

void calcVolumeEsfera(float& raio) {
	cout << "O volume da Esfera é: " << volumeEsfera(raio) << endl;
 }