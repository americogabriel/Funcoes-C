#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
// Criar uma função que limpe a tela quando o usuário mostrar interesse em limpá-la, limpando os códigos antigos que estão no terminal.

void limpartela() {//Função void que não retorna nada, somente ativa a função "system("CLS") que limpa a tela do terminal
	system("CLS");
}

int main() {
	setlocale(LC_ALL, "");

	std::string limpar;
	std::string parar;
	int count;

	std::cout << "Iniciando Contagem de 1 à 50..." << std::endl;

	for (count = 1; count <= 50; count++) {
		std::cout << count << std::endl;
		if (count % 2 == 0) {
			std::cout << "Você deseja interromper a contagem? (Sim/Nao)" << std::endl;
			std::cin >> parar;
			if (parar == "Sim") {
				std::cout << "Fim do código!";
				break;
			}
			std::cout << std::endl << "Você deseja limpar a tela? (Sim/Nao)" << std::endl;
			std::cin >> limpar;

			if (limpar == "Sim") {
				limpartela();
			}
		}
		
	}
	return 0;
}