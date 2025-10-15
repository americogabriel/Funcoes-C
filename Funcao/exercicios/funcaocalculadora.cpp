#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <string>// importo a biblioteca que importa o tipo "string" para as variáveis

// Criar uma função que receba dois números e realize alguma operação basica da calculadora(soma,multiplicação,divisão e subtração)
int calculadora(int x,int y,std::string op);

/*int main() {
	int num1, num2;
	std::string operacao;// crio uma variável string, que seria varios char juntos

	std::cout << "Digite dois números inteiros para realizar uma operação matemática: " << std::endl;
	std::cin >> num1 >> num2;

	std::cout << std::endl << "Digite uma operação dentre: S(soma),D(divisão),M(multiplicação),SU(subtração)" << std::endl;
	std::cin >> operacao;
	
	std::cout << calculadora(num1, num2, operacao);// chamo a função com um print para retornar o valor que a função retorna
	return 0;
}*/

int calculadora(int x,int y,std::string op) {// crio os parametros para serem usados dentro da função com seus tipos
	if (op == "S") {
		return (x + y);
	}
	else if(op == "D") {
		return (x / y);
	}
	else if (op == "M") {
		return (x * y);
	}
	else if (op == "SU") {
		return (x - y);
	}
	else {
		std::cout << "Erro na escrita das Variáveis";
		return 0;// Se der erro retorno 0 para não dar erro da função não retornar nada
	}
}
