/**
 * @file	calcvolume.cpp
 * @brief	Arquivo de corpo contendo a implementacao das funções que 
 *			solicitam ao usuário os dados necessários ao cálculo do volume
 *			com a figura geométrica e chamam as funções que realizam essa operação
 * @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
 * @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
 * @since	09/03/2017
 * @date	12/03/2017
 * @sa		calcvolume.h
 */

#include <iostream>
#include "calcvolume.h"

using std::cout;
using std::endl;


/** 
 * @brief 	Funcao que imprime o valor do volume da piramide
 * @param 	base BASE valor da base da piramide
 * @param 	altura ALTURA valor da altura da piramide
 */
void calcVolumePiramide(float& base, float& altura) {
	cout <<"O volume da Pirâmide é: "<< volumePiramide(base, altura) << endl;
}


/** 
 * @brief 	Funcao que imprime o valor do volume do cubo
 * @param 	aresta ARESTA valor da aresta do cubo
 */
void calcVolumeCubo(float& aresta) {
	cout << "O volume do Cubo é: "<< volumeCubo(aresta) << endl;
}


/** 
 * @brief 	Funcao que imprime o valor do volume do paralelepipedo
 * @param 	aresta1 ARESTA1 valor da aresta #1 do paralelepipedo
 * @param 	aresta2 ARESTA2 valor da aresta #2 do paralelepipedo
 * @param 	aresta3 ARESTA3 valor da aresta #3 do paralelepipedo
 */
void calcVolumeParalelepipedo(float& aresta1, float& aresta2, float& aresta3) {
	cout << "O volume do Paralelepípedo é: "<< volumeParalelepipedo(aresta1, aresta2, aresta3) << endl;
}


/** 
 * @brief 	Funcao que imprime o valor do volume da esfera
 * @param 	raio RAIO valor do raio do cubo
 */
void calcVolumeEsfera(float& raio) {
	cout << "O volume da Esfera é: " << volumeEsfera(raio) << endl;
 }