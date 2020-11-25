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

void listarAtividadesVet(){
	return ; /*(Inserção, Alteração, Remoção e Consulta) Veterinários.*/
}
	
void listarAtividadesTra(){
	return ; /*(Inserção, Alteração, Remoção e Consulta) Tratadores.*/
}
