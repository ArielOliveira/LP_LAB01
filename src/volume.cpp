/**
 * @file	volume.cpp
 * @brief	Arquivo corpo contendo a Implementação das funções 
 * 			que calculam o volume de figuras geométricas espaciais
 * @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
 * @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
 * @since	09/03/2017
 * @date	12/03/2017
 * @sa      volume.h
 */


#include <cmath>
#include "volume.h"

#define PI  3.1415


/** 
 * @brief	Funcao que calcula o valor do volume da piramide
 * @param 	base BASE valor da base da piramide
 * @param	altura ALTURA valor da altura da piramide
 * @return	Volume da piramide
 */
float volumePiramide(float& base, float& altura){
	return (pow(base,2) * altura) * 1/3;
}


/** 
 * @brief 	Funcao que calcula o valor do volume do cubo
 * @param 	aresta ARESTA valor da aresta do cubo
 * @return 	Volume do cubo
 */
float volumeCubo(float& aresta){
	return pow(aresta,3);
}


/** 
 * @brief 	Funcao que calcula o valor do volume do paralelepipedo
 * @param 	aresta1 ARESTA1 valor da aresta #1 do paralelepipedo
 * @param 	aresta2 ARESTA2 valor da aresta #2 do paralelepipedo
 * @param 	aresta3 ARESTA3 valor da aresta #3 do paralelepipedo
 * @return 	Valor do volume do paralelepipedo
 */
float volumeParalelepipedo(float& aresta1, float& aresta2, float& aresta3){
	return aresta1 * aresta2 * aresta3;
}


/** 
 * @brief 	Funcao que calcula o valor do volume da esfera
 * @param 	raio RAIO valor do raio do cubo
 * @return 	Volume da esfera
 */
float volumeEsfera(float& raio){
	return PI * pow(raio,3) * 4/3;
}