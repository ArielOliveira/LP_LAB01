/**
 * @file	calcvolume.h
 * @brief	Arquivo cabecalho contendo a definicao das funções que solicitam
 *			ao usuário os dados necessários ao cálculo do volume da figura
 *			geométrica e chamam as funções que realizam essa operação
 * @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
 * @author	Ariel Oliveira ()
 * @since	12/03/2017
 * @date	21/03/2017
 * @sa 		volume.h
 */

#ifndef CALVOLUME_H
#define CALVOLUME_H

#include "volume.h"


/** 
 * @brief 	Funcao que imprime o valor do volume da piramide
 * @param 	base BASE valor da base da piramide
 * @param 	altura ALTURA valor da altura da piramide
 */
void calcVolumePiramide(float& base, float& altura);


/** 
 * @brief 	Funcao que imprime o valor do volume do cubo
 * @param 	aresta ARESTA valor da aresta do cubo
 */
void calcVolumeCubo(float& aresta);


/** 
 * @brief 	Funcao que imprime o valor do volume do paralelepipedo
 * @param 	aresta1 ARESTA1 valor da aresta #1 do paralelepipedo
 * @param 	aresta2 ARESTA2 valor da aresta #2 do paralelepipedo
 * @param 	aresta3 ARESTA3 valor da aresta #3 do paralelepipedo
 */
void calcVolumeParalelepipedo(float& aresta1, float& aresta2, float& aresta3);



/** 
 * @brief 	Funcao que imprime o valor do volume da esfera
 * @param 	raio RAIO valor do raio do cubo
 */
void calcVolumeEsfera(float& raio);


#endif 
