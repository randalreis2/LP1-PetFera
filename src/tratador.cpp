#include "tratador.hpp"

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;
using std::getline;

Tratador::Tratador(string nome, string Cor):
		nome(nome), cor(cor){
}
Tratador::~Tratador(){
//	for (auto& conta : this->contas){
//		delete conta;
//	}
}
string Tratador::getNome() const{
	return this->nome;
}
string Tratador::getCor() const{
	return this->cor;
}
string Tratador::getCargo(){
	return this->cargo;
}
