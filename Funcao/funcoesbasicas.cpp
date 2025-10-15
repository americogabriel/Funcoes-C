#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
// exemplos de funções simples que retornam algo tipo de valor

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
std::string retornapalavra() { //função que retorna uma string!
	setlocale(LC_ALL, "");
	char palavra[4] = {'L','u','a','\0'};
	return palavra;
}

void retornavoid() {
	setlocale(LC_ALL, "");
	std::cout << "Função void que retorna só um print";
}

int main() {
	setlocale(LC_ALL, "");

	std::cout << "Função para retornar uma letra: " << retornaletra() << std::endl;

	std::cout << "Função para retornar um inteiro: " << retornanumero() << std::endl;

	std::cout << "Função para retornar um float: " << retornaquebrado() << std::endl;

	std::cout << "Função para retornar uma palavra: " << retornapalavra() << std::endl;

	std::cout << "Função void que n retorna nada, só printa uma frase: ";
	retornavoid();

	
	
	return 0;
}