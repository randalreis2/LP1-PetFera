#include "tratador.hpp"

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;
using std::getline;

Tratador::Tratador(string nome, string cor):
		nome(nome), cor(cor), cargo("Tratador"){}
Tratador::~Tratador(){}

string Tratador::getNome() const{
	return this->nome;
}

string Tratador::getCor() const{
	return this->cor;
}
