/**
 * @file	perimetro.cpp
 * @brief	Arquivo cabeçalho contendo a definição das funções 
 * 			que calculam o perímetro de figuras geométricas planas
 * @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
 * @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
 * @since	12/03/2017
 * @date	21/03/2017
 * @sa		perimetro.h
 */


#include "perimetro.h"

#define PI 3.1415


/**\defgroup Calc_Perimetro
 * @brief 	Cálculos dos perímetros
 * @{
 * @fn 		float trianguloPerimetro(float& base)
 * @brief	Função que calcula o valor do perímetro do triângulo
 * @param	base BASE valor da base do triângulo
 */
float trianguloPerimetro(float& base) {
	return base * 3;
}


/** 
 * @brief	Função que calcula o valor do perímetro do retângulo
 * @param	base BASE valor da base do retângulo
 * @param 	altura ALTURA valor da altura do retângulo
 */
float retanguloPerimetro(float& base, float& altura) {
	return 2 * (base + altura);
}


/** 
 * @brief	Função que calcula o valor do perímetro do quadrado
 * @param	base BASE valor da base do quadrado
 */

float quadradoPerimetro(float& base) {
	return 4 * base;
}


/** 
 * @brief	Função que calcula o valor do perímetro do círculo
 * @param	raio RAIO valor da base do círculo
 */

float circuloPerimetro(float& raio) {
	return 2 * PI * raio;
}
///@}