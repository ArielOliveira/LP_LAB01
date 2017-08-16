/**
 * @file	perimetro.h
 * @brief	Arquivo cabeçalho contendo a definição das funções 
 * 			que calculam o perímetro de figuras geométricas planas
 * @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
 * @since	10/08/2017
 * @date	15/08/2017
 */


#ifndef PERIMETRO_H
#define PERIMETRO_H


/**
 * @brief	Função que calcula o valor do perímetro do triângulo
 * @param	base BASE valor da base do triângulo
 */
float trianguloPerimetro(float& base);


/** 
 * @brief	Função que calcula o valor do perímetro do retângulo
 * @param	base BASE valor da base do retângulo
 * @param 	altura ALTURA valor da altura do retângulo
 */
float retanguloPerimetro(float& base, float& altura);


/** 
 * @brief	Função que calcula o valor do perímetro do quadrado
 * @param	base BASE valor da base do quadrado
 */
float quadradoPerimetro(float& base);


/** 
 * @brief	Função que calcula o valor do perímetro do círculo
 * @param	raio RAIO valor da base do círculo
 */
float circuloPerimetro(float& raio);

#endif