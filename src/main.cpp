#include "sistema.hpp"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void menuPrincipal(Sistema* si);
void menuConsultas(string& funcionario, Sistema* si);

int main(int argc, char const *argv[]){


	Sistema* sisp = new Sistema("PetFera","101.100.110/0001-01");
	menuPrincipal(sisp);

	delete sisp;

	return 0;
}

void menuPrincipal(Sistema* si) {
	//si->addVet (new Veterinario("Bart Simpson", "4815162342"));
	//si->addTra (new Tratador("Homer Simpson","1337"));
	char opcao;
	si->limpaTela();
	do {	 
		cout<< endl << "Opções: ";
		cout<< endl << "========";
		cout<< endl << "C - Cadastrar novo animal.";
		cout<< endl << "R - Remover um animal.";
		cout<< endl << "A - Alterar cadastro de um animal.";
		cout<< endl << "L - Listar cadastro de animais.";

		cout<< endl << "T - Listar cadastro de Tratadores.";
		cout<< endl << "V - Listar cadastro de Veterinários.";

		cout<< endl << endl << "X - Encerrar.";
		cout<< endl << endl << "Selecione a opção: ";

		cin >> opcao;
		si->pausar();
		si->limpaTela();
		 
		switch(opcao){
			case 'C' :
			case 'c' :{ si->addAnimal();}
			break;
			case 'R' :
			case 'r' :{ si->deleteAnimal();}
			break;
			case 'A' :
			case 'a' :{ si->editCadastroAnimal();}
			break;
			case 'L' :
			case 'l' :{ si->listarAnimais();}
			break;
			case 'T' :
			case 't' :{ si->listarCadastroTra();}
			break;
			case 'V' :
			case 'v' :{ si->listarCadastroVet();}
			break;
			case 'X' :
			case 'x' :{ return;}
			break;
			default : cout << endl << "Opção inválida!";
		}
		cout << endl;

		si->pausar();
		si->limpaTela();
	
	} while (opcao != 'X' && opcao !='x');
}

void menuConsultas(string& funcionario, Sistema* si){ 
	char opcao;
	//si->limpaTela();
	do {	 
		cout<< endl << "Opções: " ;
		cout<< endl << "========";
		cout<< endl << "I - Inserir novo " << funcionario <<"."; // Fazer modificação de FUNCIONARIO para veterinario ou tratador conforme caso.
		cout<< endl << "A - Alterar cadastro do " << funcionario <<".";
		cout<< endl << "R - Remoção do cadastro do " << funcionario <<".";
		cout<< endl << "C - Consultar cadastro do " << funcionario <<".";

		cout<< endl << endl << "X - Encerrar.";
		cout<< endl << endl << "Selecione a opção: ";

		cin >> opcao;

		si->limpaTela();
		 
		switch(opcao){
			case 'I' :
			case 'i' :{ si->Insercao();}
			break;
			case 'R' :
			case 'r' :{ si->Alteracao();}
			break;
			case 'A' :
			case 'a' :{ si->Remocao();}
			break;
			case 'L' :
			case 'l' :{ si->Consulta();}
			break;
			case 'X' :
			case 'x' :{ return;}
			break;
			default : cout << endl << "Opção inválida!";
		}
		cout << endl;

		si->pausar();
		si->limpaTela();
	}while (opcao != 'X' && opcao !='x');
}