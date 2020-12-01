#include "veterinario.hpp"

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;
using std::getline;

Veterinario::Veterinario(string nome, string CRMV):
		nome(nome), CRMV(CRMV), cargo("Veterinario"){ 
}
Veterinario::~Veterinario(){}

string Veterinario::getNome() const{
	return this->nome;
}
string Veterinario::getCRMV() const{
	return this->CRMV;
}
