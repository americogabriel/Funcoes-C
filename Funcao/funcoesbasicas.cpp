#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
// exemplos de fun��es simples que retornam algo tipo de valor

char retornaletra() {
	char letra = 'G';
	return letra;
}
int retornanumero() {
	int numero = 5;
	return numero;
}
float retornaquebrado() {
	float numero = 9.5;
	return numero;
}
std::string retornapalavra() { //fun��o que retorna uma string!
	setlocale(LC_ALL, "");
	char palavra[4] = {'L','u','a','\0'};
	return palavra;
}

void retornavoid() {
	setlocale(LC_ALL, "");
	std::cout << "Fun��o void que retorna s� um print";
}

int main() {
	setlocale(LC_ALL, "");

	std::cout << "Fun��o para retornar uma letra: " << retornaletra() << std::endl;

	std::cout << "Fun��o para retornar um inteiro: " << retornanumero() << std::endl;

	std::cout << "Fun��o para retornar um float: " << retornaquebrado() << std::endl;

	std::cout << "Fun��o para retornar uma palavra: " << retornapalavra() << std::endl;

	std::cout << "Fun��o void que n retorna nada, s� printa uma frase: ";
	retornavoid();

	
	
	return 0;
}