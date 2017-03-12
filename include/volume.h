#ifndef VOLUME_H
#define VOLUME_H

#include <iostream>
#include <cmath>

#define PI  3.1415

using std::cin;
using std::cout;
using std::endl;

float volume_piramide(float& base, float& altura);

float volume_cubo(float& aresta);

float volume_paralelepipedo(float& aresta1, float& aresta2, float& aresta3);

float volume_esfera(float& raio);


#endif