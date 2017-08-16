#include <iostream>
using std::cin;
using std::endl;
using std::cout;

#include "calcula.h"

/**\defgroup Figuras_Planas_Imprime_Area
 * @brief   Resultados dos cálculos das 
 *			áreas das figuras planas
 * @{
 * @fn 		void calcAreaTriangulo(float& base)
 * @brief 	Função que imprime o valor da área do triângulo
 * @param 	base BASE valor da base do triângulo
 */
void calcAreaTriangulo(float& base) {
	cout << "Digite a base para o triângulo: ";
	cin >> base;
	cout << endl;
	cout << "A área do triângulo é: " << trianguloArea(base) << endl;
	cout << endl;
}

/** 
 * @brief 	Função que imprime o valor da área do retângulo
 * @param 	base BASE valor da base do retângulo
 * @param 	altura ALTURA valor da altura do retângulo
 */
void calcAreaRetangulo(float& base, float& altura) {
	cout << "Digite a base para o retângulo: ";
	cin >> base;
	cout << endl;
	cout << "Digite a altura para o retângulo: ";
	cin >> altura;
	cout << endl;
	cout << "A área do retângulo é: " << retanguloArea(base, altura) << endl;
	cout << endl;
}

/** 
 * @brief 	Função que imprime o valor da área do quadrado
 * @param 	base BASE valor da base do quadrado
 */
void calcAreaQuadrado(float& base) {
	cout << "Digite a base para o quadrado: ";
	cin >> base;
	cout << endl;
	cout << "A área do quadrado é: " << quadradoArea(base) << endl;
	cout << endl;
}

/** 
 * @brief 	Função que imprime o valor da área do círculo
 * @param 	base BASE valor da base do círculo
 */
void calcAreaCirculo(float& raio) {
	cout << "Digite o raio do círculo: ";
	cin >> raio;
	cout << endl;
	cout << "A área do círculo é: " << circuloArea(raio) << endl;
	cout << endl;

}

///@}

/**\defgroup Figuras_Espaciais_Imprime_Area
 * @brief 	Resultados dos cálculos das 
 *			áreas das figuras espaciais
 * @{
 * @fn 		void calcAreaPiramide(float& base, float& altura)
 * @brief 	Função que imprime o valor da área da pirâmide
 * @param 	base BASE valor da base da pirâmide
 * @param 	altura ALTURA valor da altura da pirâmide
 */
void calcAreaPiramide(float& base, float& altura) {
	cout << "Digite o tamanho da aresta da base da pirâmide: ";
	cin >> base;
	cout <<	"Digite o tamanho da altura da pirâmide: ";
	cin >> altura;
	cout << endl;
	cout << "A área da pirâmide é: "<< areaPiramide(base, altura) << endl;
	cout << endl;
}

/** 
 * @brief Função que imprime o valor da área do círculo
 * @param base BASE valor da base do círculo
 */
void calcAreaCubo(float& aresta) {
	cout << "Digite o tamanho da aresta do cubo: ";
	cin >> aresta;
	cout << endl;
	cout << "A área do cubo é: "<<areaCubo(aresta) << endl;
	cout << endl;
}

/** 
 * @brief Função que imprime o valor da área do paralelepípedo
 * @param aresta1 ARESTA1 valor da aresta #1 do paralelepípedo
 * @param aresta2 ARESTA2 valor da aresta #2 do paralelepípedo
 * @param aresta3 ARESTA3 valor da aresta #3 do paralelepípedo
 */
void calcAreaParalelepipedo(float& aresta1, float& aresta2, float& aresta3) {
	cout << "Digite o tamanho da aresta 1: ";
	cin >> aresta1;
	cout << "Digite o tamanho da aresta 2: ";
	cin >> aresta2;
	cout << "Digite o tamanho da aresta 3: ";
	cin >> aresta3;
	cout << endl;
	cout << "A área do paralelepípedo é: "<< areaParalelepipedo(aresta1, aresta2, aresta3) << endl;
	cout << endl;
}

/** 
 * @brief Função que imprime o valor da área do círculo
 * @param raio RAIO valor da base do círculo
 */
void calcAreaEsfera(float& raio) {
	cout << "Digite o tamanho do raio: ";
	cin >> raio;
	cout << endl;
	cout << "A área da esfera é: "<< areaEsfera(raio) << endl;
	cout << endl;
}
///@}

/**\defgroup Figuras_Planas_Imprime_Perimetro
 * @brief	Resultados dos cálculos dos perímetros
 * @{
 * @fn 		void calcPerimetroTriangulo(float& base)
 * @brief	Funcao que imprime o valor do perimetro do triangulo
 * @param	base BASE valor da base do triangulo
 */
void calcPerimetroTriangulo(float& base) {
	cout << "O perímetro do triângulo é: " << trianguloPerimetro(base) << endl;
}


/** 
 * @brief	Funcao que imprime o valor do perimetro do retangulo
 * @param	base BASE valor da base do retangulo
 * @param	altura ALTURA valor da altura do retangulo
 */
void calcPerimetroRetangulo(float& base, float& altura) {
	cout << "O perímetro do retângulo é: " << retanguloPerimetro(base, altura) << endl;
}


/** 
 * @brief	Funcao que imprime o valor do perimetro do quadrado
 * @param	base BASE valor da base do quadrado
 */
void calcPerimetroQuadrado(float& base)	 {
	cout << "O perímetro do quadrado é: " << quadradoPerimetro(base) << endl;
}


/** 
 * @brief	Funcao que imprime o valor do perimetro do circulo
 * @param	base BASE valor da base do circulo
 */
void calcPerimetroCirculo(float& raio) {
	cout << "O perímetro do círculo é: " << circuloPerimetro(raio) << endl;
}
///@}

/**\defgroup Figuras_Espaciais_Imprime_Volume
 * @brief 	Resultados dos cálculos dos volumes
 *			das figuras espaciais
 * @{
 * @fn 		void calcVolumePiramide(float& base, float& altura)
 * @brief 	Função que imprime o valor do volume da pirâmide
 * @param 	base BASE valor da base da pirâmide
 * @param 	altura ALTURA valor da altura da pirâmide
 */
void calcVolumePiramide(float& base, float& altura) {
	cout <<"O volume da Pirâmide é: "<< volumePiramide(base, altura) << endl;
}


/** 
 * @brief 	Função que imprime o valor do volume do cubo
 * @param 	aresta ARESTA valor da aresta do cubo
 */
void calcVolumeCubo(float& aresta) {
	cout << "O volume do Cubo é: "<< volumeCubo(aresta) << endl;
}


/** 
 * @brief 	Função que imprime o valor do volume do paralelepípedo
 * @param 	aresta1 ARESTA1 valor da aresta #1 do paralelepípedo
 * @param 	aresta2 ARESTA2 valor da aresta #2 do paralelepípedo
 * @param 	aresta3 ARESTA3 valor da aresta #3 do paralelepípedo
 */
void calcVolumeParalelepipedo(float& aresta1, float& aresta2, float& aresta3) {
	cout << "O volume do Paralelepípedo é: "<< volumeParalelepipedo(aresta1, aresta2, aresta3) << endl;
}


/** 
 * @brief 	Função que imprime o valor do volume da esfera
 * @param 	raio RAIO valor do raio do cubo
 */
void calcVolumeEsfera(float& raio) {
	cout << "O volume da Esfera é: " << volumeEsfera(raio) << endl;
 }
 ///@}