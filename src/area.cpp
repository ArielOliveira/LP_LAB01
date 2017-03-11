#include <iostream>
#include <cmath>
#include "../include/area.h"

using std::cout;
using std::endl;

#define PI 3,1415
#define pythagoras(a,b) (pow(a,2) + pow(b,2))



void triangle(float base, float& area, float& p) {
	float height;
	height = pythagoras(base / 2, base);
	cout << height << endl;
	area = (base * height) / 2;
	cout << area << endl;
	p = base * 3;

}


