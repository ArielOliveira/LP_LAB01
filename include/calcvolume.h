/**
 * @file	calcvolume.h
 * @brief	Arquivo cabecalho contendo a definicao das funções que solicitam
 *			ao usuário os dados necessários ao cálculo do volume com a figura
 *			geométrica e chamam as funções que realizam essa operação
 * @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
 * @author	Ariel Oliveira ()
 * @since	12/03/2017
 * @date	21/03/2017
 */

#ifndef CALVOLUME_H
#define CALVOLUME_H

#include "volume.h"


/** 
 * @brief Funcao que imprime o valor do volume da piramide
 * @param base valor da base da piramide
 * @param altura valor da altura da piramide
 * @return sem definicao de retorno
 */
void calcVolumePiramide(float& base, float& altura);


/** 
 * @brief Funcao que imprime o valor do volume do cubo
 * @param aresta valor da aresta do cubo
 * @return sem definicao de retorno
 */
void calcVolumeCubo(float& aresta);


/** 
 * @brief Funcao que imprime o valor do volume do paralelepipedo
 * @param aresta1 valor da aresta #1 do paralelepipedo
 * @param aresta2 valor da aresta #2 do paralelepipedo
 * @param aresta3 valor da aresta #3 do paralelepipedo
 */
void calcVolumeParalelepipedo(float& aresta1, float& aresta2, float& aresta3);



/** 
 * @brief Funcao que imprime o valor do volume da esfera
 * @param raio valor do raio do cubo
 * @return sem definicao de retorno
 */
void calcVolumeEsfera(float& raio);


#endif 