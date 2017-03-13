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


/**\defgroup Calc_Volume 
 * @brief 	Cálculos dos volumes
 * @{
 * @fn 		float volumePiramide(float& base, float& altura)
 * @brief	Função que calcula o valor do volume da pirâmide
 * @param 	base BASE valor da base da pirâmide
 * @param	altura ALTURA valor da altura da pirâmide
 * @return	Volume da pirâmide
 */
float volumePiramide(float& base, float& altura) {
	return (pow(base,2) * altura) * 1/3;
}


/** 
 * @brief 	Função que calcula o valor do volume do cubo
 * @param 	aresta ARESTA valor da aresta do cubo
 * @return 	Volume do cubo
 */
float volumeCubo(float& aresta){
	return pow(aresta,3);
}


/** 
 * @brief 	Função que calcula o valor do volume do paralelepípedo
 * @param 	aresta1 ARESTA1 valor da aresta #1 do paralelepípedo
 * @param 	aresta2 ARESTA2 valor da aresta #2 do paralelepípedo
 * @param 	aresta3 ARESTA3 valor da aresta #3 do paralelepípedo
 * @return 	Valor do volume do paralelepípedo
 */
float volumeParalelepipedo(float& aresta1, float& aresta2, float& aresta3){
	return aresta1 * aresta2 * aresta3;
}


/** 
 * @brief 	Função que calcula o valor do volume da esfera
 * @param 	raio RAIO valor do raio do cubo
 * @return 	Volume da esfera
 */
float volumeEsfera(float& raio){
	return PI * pow(raio,3) * 4/3;
}
///@}