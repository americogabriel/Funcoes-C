#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
// Criar uma fun��o que limpe a tela quando o usu�rio mostrar interesse em limp�-la, limpando os c�digos antigos que est�o no terminal.

void limpartela() {//Fun��o void que n�o retorna nada, somente ativa a fun��o "system("CLS") que limpa a tela do terminal
	system("CLS");
}

int main() {
	setlocale(LC_ALL, "");

	std::string limpar;
	std::string parar;
	int count;

	std::cout << "Iniciando Contagem de 1 � 50..." << std::endl;

	for (count = 1; count <= 50; count++) {
		std::cout << count << std::endl;
		if (count % 2 == 0) {
			std::cout << "Voc� deseja interromper a contagem? (Sim/Nao)" << std::endl;
			std::cin >> parar;
			if (parar == "Sim") {
				std::cout << "Fim do c�digo!";
				break;
			}
			std::cout << std::endl << "Voc� deseja limpar a tela? (Sim/Nao)" << std::endl;
			std::cin >> limpar;

			if (limpar == "Sim") {
				limpartela();
			}
		}
		
	}
	return 0;
}