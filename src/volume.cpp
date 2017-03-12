/**
 * @file	volume.h
 * @brief	Arquivo cabecalho contendo a Implementação das funções 
 * 			que calculam o volume de figuras geométricas espaciais
 * @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
 * @author	Ariel Oliveira ()
 * @since	12/03/2017
 * @date	21/03/2017
 * @sa      volume.h
 */


#include <cmath>
#include "volume.h"

#define PI  3.1415


/** 
 * @brief Funcao que calcula o valor do volume da piramide
 * @param base valor da base da piramide
 * @param altura valor da altura da piramide
 * @return volume da piramide
 */
float volumePiramide(float &base, float &altura){
	return (pow(base,2) * altura) * 1/3;
}


/** 
 * @brief Funcao que calcula o valor do volume do cubo
 * @param aresta valor da aresta do cubo
 * @return volume do cubo
 */
float volumeCubo(float &aresta){
	return pow(aresta,3);
}


/** 
 * @brief Funcao que calcula o valor do volume do paralelepipedo
 * @param aresta1 valor da aresta #1 do paralelepipedo
 * @param aresta2 valor da aresta #2 do paralelepipedo
 * @param aresta3 valor da aresta #3 do paralelepipedo
 * @return valor do volume do paralelepipedo
 */

float volumeParalelepipedo(float &aresta1, float &aresta2, float &aresta3){
	return aresta1 * aresta2 * aresta3;
}


/** 
 * @brief Funcao que calcula o valor do volume da esfera
 * @param raio valor do raio do cubo
 * @return volume da esfera
 */
float volumeEsfera(float &raio){
	return PI * pow(raio,3) * 4/3;
}