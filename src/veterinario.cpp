#include "veterinario.hpp"

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;
using std::getline;


Veterinario::Veterinario(string nome, string CRMV):
		loja(nome), cnpj(CRMV){
}
Veterinario::~Veterinario(){
//	for (auto& conta : this->contas){
//		delete conta;
//	}
}

string
Veterinario::getLoja() const{
	return this->nome;
}

string 
Veterinario::getNumero() const{
	return this->CRMV;
}
