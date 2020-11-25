#include "sistema.hpp"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void menuPrincipal(Sistema* si);
void limpaTela();
void pausar();

int main(int argc, char const *argv[]){

	Sistema* sisp = new Sistema("PetFera","554"); //101.100.110/0001-01

	menuPrincipal(sisp);

	delete sisp;

	return 0;
}

void menuPrincipal(Sistema* si) {
	char opcao;
	limpaTela();
	do {	 
		cout<< endl << "Opções: ";
		cout<< endl << "========";
		cout<< endl << "C - Cadastrar novo animal.";
		cout<< endl << "R - Remover um animal.";
		cout<< endl << "A - Alterar cadastro de um animal.";
		cout<< endl << "L - Listar cadastro de animais.";

		cout<< endl << "L - Listar cadastro de Tratadores.";
		cout<< endl << "L - Listar cadastro de Veterinários.";

		cout<< endl << endl << "X - Encerrar.";
		cout<< endl << endl << "Selecione a opção: ";

		cin >> opcao;

		limpaTela();
		 
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
			case 'X' :
			case 'x' :{ return;}
			break;
			default : cout << endl << "Opção inválida!";
		}
		cout << endl;

		pausar();
		limpaTela();
	
	} while (opcao != 'X' && opcao !='x');
}

void limpaTela(){
#if defined (_WIN32) && !defined (DEBUG)
    system("cls");
#elif (defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)) && !defined (DEBUG)
    system("clear");
#elif defined (__APPLE__) && !defined (DEBUG)
    system("clear");
#endif
}

void pausar(){
	cout << "Pressione qualquer tecla para continuar...";
	cin.get();
	cin.ignore();
}
