#include "sistema.hpp"

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;
using std::getline;


Sistema::Sistema(string loja, string cnpj):
		loja(loja), cnpj(cnpj){
}
Sistema::~Sistema(){
//	for (auto& conta : this->contas){
//		delete conta;
//	}
}

string
Sistema::getLoja() const{
	return this->loja;
}

string 
Sistema::getNumero() const{
	return this->cnpj;
}

void 
Sistema::addAnimal(/*Conta* nova*/){
	return ;
}

void 
Sistema::deleteAnimal(){
	return ;
}

void
Sistema::editCadastroAnimal(){
	return ;
}

void 
Sistema::listarAnimais(){
	return ;
}

void 
Sistema::listarAtividadesVet(){
	return ; /*(Inserção, Alteração, Remoção e Consulta) Veterinários.*/
}
	
void 
Sistema::listarAtividadesTra(){
	return ; /*(Inserção, Alteração, Remoção e Consulta) Tratadores.*/
}
void 
Sistema::limpaTela(){
	#if defined (_WIN32) && !defined (DEBUG)
	    system("cls");
	#elif (defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)) && !defined (DEBUG)
	    system("clear");
	#elif defined (__APPLE__) && !defined (DEBUG)
	    system("clear");
	#endif
}
void 
Sistema::pausar(){
	cout << "Pressione qualquer tecla para continuar...";
	cin.get();
	cin.ignore();
}

void 
Sistema::testar(){
	Sistema* petfera = new Sistema("Pet Fera","870");
	//petfera->addAnimal 
	//petfera->addVet (new Veterinario("Bart Simpson", "4815162342");
	//petfera->addTra (new Tratador("Homer Simpson","1337");
//	
	
//	this->adicionaEmpresa(vought);
//	this->listarEmpresas();

//	vought->listaEmpregados();
}
	