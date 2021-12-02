#include "funcoes.cpp"
#include <iostream>
#include <fstream>


int main (){
	
	int escolha = 0;
	int matricula = 0;
	std::string aluno = " ";
	int numMatricula = 0;
	int prova1 = 0;
	int prova2 = 0;
	int aep1 = 0;
	int aep2 = 0;
	
	
	while (escolha != 4){
		escolha = hud();
		switch (escolha) {
			case 1 :
				std::cout << "Digite o nome do aluno: \n";
				std::cin >> aluno;
				std::cout << "Digite o numero de matricula do aluno: \n"; 
				std::cin >> matricula;
				std::cout << "Aluno Cadastrado!\n";		
				break;
			case 2 :
				std::cout << "Aluno: " << aluno <<"\n" "Matricula: \n" << matricula;
				break;
			case 3:
				std::cout << "Digite o numero de matricula do aluno que deseja cadastras as notas: \n";
				std::cin >> numMatricula;
				if (numMatricula = matricula) {
					std::cout << "Digite a nota da prova 1 do aluno: \n";
					std::cin >> prova1;
					std::cout << "Digite a nota da AEP 1 do aluno: \n";
					std::cin >> aep1;
					std::cout << "Digite a nota da prova 2 do aluno: \n";
					std::cin >> prova2;
					std::cout << "Digite a nota da AEP 2 do aluno: \n";
					std::cin >> aep2;
					int media = (prova1 + prova2 + aep1 + aep2) / 2;
					if (media >= 60) {
						std::cout << "A media do aluno e: " << 	media << " e eles esta aprovado!\n" ;
					} else 	if (media < 60) {
						std::cout << "A media do aluno e: " << 	media << " e eles esta reprovado!\n";
					}
				} else {
					std::cout << "Aluno não encontrado";
					
				}

			case 4 :
				std::cout << "Sitema Encerrado! \n";
				break;								                       
	}
	
}
return 0;
}
				                                                   
				                   		  				                 