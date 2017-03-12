#include <iostream>
#include "calcvolume.h"

using std::cout;
using std::endl;

void calc_piramide_volume(float& base, float& altura) {
	cout <<"Volume da Pirâmide: "<< volume_piramide(base, altura) << endl;
}

void calc_cubo_volume(float& aresta) {
	cout << "Volume do Cubo: "<< volume_cubo(aresta) << endl;
}

void calc_paralelepipedo_volume(float& aresta1, float& aresta2, float& aresta3) {
	cout << "Volume do Paralelepípedo: "<< volume_paralelepipedo(aresta1, aresta2, aresta3) << endl;
}

void calc_esfera_volume(float& raio) {
	cout << "Volume da Esfera: " << volume_esfera(raio) << endl;
}