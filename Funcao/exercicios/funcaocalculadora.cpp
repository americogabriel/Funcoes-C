#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <string>// importo a biblioteca que importa o tipo "string" para as vari�veis

// Criar uma fun��o que receba dois n�meros e realize alguma opera��o basica da calculadora(soma,multiplica��o,divis�o e subtra��o)
int calculadora(int x,int y,std::string op);

/*int main() {
	int num1, num2;
	std::string operacao;// crio uma vari�vel string, que seria varios char juntos

	std::cout << "Digite dois n�meros inteiros para realizar uma opera��o matem�tica: " << std::endl;
	std::cin >> num1 >> num2;

	std::cout << std::endl << "Digite uma opera��o dentre: S(soma),D(divis�o),M(multiplica��o),SU(subtra��o)" << std::endl;
	std::cin >> operacao;
	
	std::cout << calculadora(num1, num2, operacao);// chamo a fun��o com um print para retornar o valor que a fun��o retorna
	return 0;
}*/

int calculadora(int x,int y,std::string op) {// crio os parametros para serem usados dentro da fun��o com seus tipos
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
		std::cout << "Erro na escrita das Vari�veis";
		return 0;// Se der erro retorno 0 para n�o dar erro da fun��o n�o retornar nada
	}
}
