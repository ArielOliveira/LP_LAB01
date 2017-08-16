/**
 * @file	primalidade.cpp
 * @brief	Arquivo corpo contendo a implementação da função 
 * 			recursiva que calcula o maior número primo
 * 			anterior a um determinado inteiro
 * @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
 * @since	10/08/2017
 * @date	15/08/2017
 */

#include "primalidade.h"

/**
* @brief    Função que calcula o fatorial de um dado número
* @param	n N inteiro a ser calculado
*/
int maiorPrimo(int n, int k) {
	if (n % 2 == 0) return maiorPrimo(n-1, (int)sqrt(n-1));
	if (n % k == 0) return maiorPrimo(n-1, (int)sqrt(n-1));
	else if (k > 2) return maiorPrimo(n, k-1);
	return n;
}