/**
 * @file	fatorial.cpp
 * @brief	Arquivo contendo a implementação da função
 * 			que calcula o fatorial do número inteiro inserido
 * 			pelo usuário
 * @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
 * @since	10/08/2017
 * @date	15/08/2017
 */


#include "fatorial.h"

/**
* @brief    Função que calcula o fatorial de um dado número
* @param	n N inteiro a ser calculado
*/
int fatorial(int n) {
	if (n == 1) return n;
	return n * fatorial(n-1);
}