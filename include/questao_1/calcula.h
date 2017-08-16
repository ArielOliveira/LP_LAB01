/**
 * @file	calcula.h
 * @brief	Arquivo cabeçalho contendo a definição das funções que solicitam
 *			ao usuário os dados necessários para o cálculo da área, perímetroe volume com a figura
 *			geométrica e chamam as funções que realizam essa operação
 * @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
 * @since	10/08/2017
 * @date	15/08/2017
 * @sa 		area.h
 */

#ifndef CALCAREA_H
#define CALCAREA_H

#include "area.h"
#include "perimetro.h"
#include "volume.h"

/** 
 * @brief Função que imprime o valor da área do triângulo
 * @param base BASE valor da base do triângulo
 */
void calcAreaTriangulo(float& base);

/** 
 * @brief Função que imprime o valor da área do retângulo
 * @param base BASE valor da base do retângulo
 * @param altura ALTURA valor da altura do retângulo
 */
void calcAreaRetangulo(float& base, float& altura);

/** 
 * @brief Função que imprime o valor da área do quadrado
 * @param base BASE valor da base do quadrado
 */
void calcAreaQuadrado(float& base);

/** 
 * @brief Função que imprime o valor da área do círculo
 * @param base BASE valor da base do círculo
 */
void calcAreaCirculo(float& raio);

/** 
 * @brief Função que imprime o valor da área da pirâmide
 * @param base BASE valor da base da pirâmide
 * @param altura ALTURA valor da altura da pirâmide
 */
void calcAreaPiramide(float& base, float& altura);

/** 
 * @brief Função que imprime o valor da área do círculo
 * @param base BASE valor da base do círculo
 */
void calcAreaCubo(float& aresta);


// ###############################################################################################

/** 
 * @brief Função que imprime o valor da área do paralelepípedo
 * @param aresta1 ARESTA1 valor da aresta #1 do paralelepípedo
 * @param aresta2 ARESTA2 valor da aresta #2 do paralelepípedo
 * @param aresta3 ARESTA3 valor da aresta #3 do paralelepípedo
 */
void calcAreaParalelepipedo(float& aresta1, float& aresta2, float& aresta3);

/** 
 * @brief Função que imprime o valor da área do círculo
 * @param raio RAIO valor da base do círculo
 */
void calcAreaEsfera(float& raio);

/** 
 * @brief Função que imprime o valor da área do triângulo
 * @param base BASE valor da base do triângulo
 */
void calcAreaTriangulo(float& base);

/** 
 * @brief Função que imprime o valor da área do retângulo
 * @param base BASE valor da base do retângulo
 * @param altura ALTURA valor da altura do retângulo
 */
void calcAreaRetangulo(float& base, float& altura);

/** 
 * @brief Função que imprime o valor da área do quadrado
 * @param base BASE valor da base do quadrado
 */
void calcAreaQuadrado(float& base);

/** 
 * @brief Função que imprime o valor da área do círculo
 * @param base BASE valor da base do círculo
 */
void calcAreaCirculo(float& raio);

/** 
 * @brief Função que imprime o valor da área da pirâmide
 * @param base BASE valor da base da pirâmide
 * @param altura ALTURA valor da altura da pirâmide
 */
void calcAreaPiramide(float& base, float& altura);

/** 
 * @brief Função que imprime o valor da área do círculo
 * @param base BASE valor da base do círculo
 */
void calcAreaCubo(float& aresta);

/** 
 * @brief Função que imprime o valor da área do paralelepípedo
 * @param aresta1 ARESTA1 valor da aresta #1 do paralelepípedo
 * @param aresta2 ARESTA2 valor da aresta #2 do paralelepípedo
 * @param aresta3 ARESTA3 valor da aresta #3 do paralelepípedo
 */
void calcAreaParalelepipedo(float& aresta1, float& aresta2, float& aresta3);

/** 
 * @brief Função que imprime o valor da área do círculo
 * @param raio RAIO valor da base do círculo
 */
void calcAreaEsfera(float& raio);

// ##############################################################################################

/** 
 * @brief	Funcao que imprime o valor do perimetro do triangulo
 * @param	base BASE valor da base do triangulo
 */
void calcPerimetroTriangulo(float& base);


/** 
 * @brief	Funcao que imprime o valor do perimetro do retangulo
 * @param	base BASE valor da base do retangulo
 * @param	altura ALTURA valor da altura do retangulo
 */
void calcPerimetroRetangulo(float& base, float& altura);


/** 
 * @brief	Funcao que imprime o valor do perimetro do quadrado
 * @param	base BASE valor da base do quadrado
 */
void calcPerimetroQuadrado(float& base);


/** 
 * @brief	Funcao que imprime o valor do perimetro do circulo
 * @param	base BASE valor da base do circulo
 */
void calcPerimetroCirculo(float& raio);

// ###############################################################################################

/** 
 * @brief 	Função que imprime o valor do volume da pirâmide
 * @param 	base BASE valor da base da pirâmide
 * @param 	altura ALTURA valor da altura da pirâmide
 */
void calcVolumePiramide(float& base, float& altura);


/** 
 * @brief 	Função que imprime o valor do volume do cubo
 * @param 	aresta ARESTA valor da aresta do cubo
 */
void calcVolumeCubo(float& aresta);


/** 
 * @brief 	Função que imprime o valor do volume do paralelepípedo
 * @param 	aresta1 ARESTA1 valor da aresta #1 do paralelepípedo
 * @param 	aresta2 ARESTA2 valor da aresta #2 do paralelepípedo
 * @param 	aresta3 ARESTA3 valor da aresta #3 do paralelepípedo
 */
void calcVolumeParalelepipedo(float& aresta1, float& aresta2, float& aresta3);



/** 
 * @brief 	Função que imprime o valor do volume da esfera
 * @param 	raio RAIO valor do raio do cubo
 */
void calcVolumeEsfera(float& raio);


#endif