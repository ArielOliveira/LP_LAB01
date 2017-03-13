/**
 * @file	perimetro.h
 * @brief	Arquivo cabecalho contendo a definicao das funções 
 * 			que calculam o perimetro de figuras geométricas espaciais
 * @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
 * @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
 * @since	12/03/2017
 * @date	21/03/2017
 */


#ifndef PERIMETRO_H
#define PERIMETRO_H


/**
 * @brief	Funcao que calcula o valor do perimetro do triangulo
 * @param	base BASE valor da base do triangulo
 */
float trianguloPerimetro(float& base);


/** 
 * @brief	Funcao que calcula o valor do perimetro do retangulo
 * @param	base BASE valor da base do retangulo
 * @param 	altura ALTURA valor da altura do retangulo
 */
float retanguloPerimetro(float& base, float& altura);


/** 
 * @brief	Funcao que calcula o valor do perimetro do quadrado
 * @param	base BASE valor da base do quadrado
 */
float quadradoPerimetro(float& base);


/** 
 * @brief	Funcao que calcula o valor do perimetro do circulo
 * @param	raio RAIO valor da base do circulo
 */
float circuloPerimetro(float& raio);

#endif