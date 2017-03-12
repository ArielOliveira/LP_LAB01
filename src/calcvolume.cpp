#include <iostream>
#include "calcvolume.h"

using std::cout;
using std::endl;

void calcVolumePiramide(float& base, float& altura) {
	cout <<"Volume da Pirâmide: "<< volumePiramide(base, altura) << endl;
}

void calcVolumeCubo(float& aresta) {
	cout << "Volume do Cubo: "<< volumeCubo(aresta) << endl;
}

void calcVolumeParalelepipedo(float& aresta1, float& aresta2, float& aresta3) {
	cout << "Volume do Paralelepípedo: "<< volumeParalelepipedo(aresta1, aresta2, aresta3) << endl;
}

void calcVolumeEsfera(float& raio) {
	cout << "Volume da Esfera: " << volumeEsfera(raio) << endl;
}