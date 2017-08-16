/**
* @file 	main.cpp
* @brief 	Programa que recebe um valor inteiro e retorna
			o maior número primo anterior ao fatorial do
			valor recebido
* @details	Figuras geométricas planas possuem apenas área e 
*			perímetro. As espaciais não possuem perímetro
* @author	Ariel Oliveira (ariel.oliveira01@gmail.com)
* @since	10/08/2017
 * @date	15/08/2017
*/

#include <iostream>
#include <cstdlib>

#include "fatorial.h"
#include "primalidade.h"


/**
* @brief    Função que verifica se um dado char é inteiro
* @param	v V ponteiro de char que armazena um valor a ser convertido
*/
int isInt(char* v) {
	int i;
	for (i = 0; v[i] != '\0'; i++) {
		if (i > 1) return 0;
		if (v[i] < 48 || v[i] > 57) return 0;
	}
	return 1;
}

int main (int argc, char* argv[]) {
	int n;
	if (!(argc >= 1)) return 0;
	if (isInt(argv[1])) n = atoi(argv[1]);
 	else {
 		printf("Entrada Inválida!\n");
 		return 0;
	}
	n = fatorial(n);
 	printf("%i\n", maiorPrimo(n, (int)sqrt(n)));
	return 0;
}