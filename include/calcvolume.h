#ifndef CALVOLUME_H
#define CALVOLUME_H

#include <iostream>
#include "volume.h"
using std::cin;
using std::cout;
using std::endl;

void calc_piramide_volume(float& base, float& altura);

void calc_cubo_volume(float& aresta);

void calc_paralelepipedo_volume(float& aresta1, float& aresta2, float& aresta3);

void calc_esfera_volume(float& raio);


#endif 