#include <iostream>
#include <fstream>

int hud () {
	
	int opcao = 0;
	
	std::cout << "\n Por favor digite o numero da opcao desejada: ";
	std::cout << "\n 1. Cadastar novo aluno. ";
	std::cout << "\n 2. Ver lista de alunos e suas respectivas informacoes. ";
	std::cout << "\n 3. Cadastrar notas de alunos. ";
	std::cout << "\n 4. Finalizar Sitema\n";	
	std::cin >> opcao;
	system("cls");
	return opcao;
}