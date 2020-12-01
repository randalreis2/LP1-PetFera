#include "sistema.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"

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
//	for (auto& conta : this->contas){delete conta;}
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
/*(Inserção, Alteração, Remoção e Consulta) Tratadores.*/
string 
Sistema::listarCadastroTra(){;
	return "Tratador";
}
string 
Sistema::listarCadastroVet(){
	return "Veterinário";
}

void 
Sistema::InsetTrat (){
	Tratador* tratp = new Tratador("Homer", "vermelho");
	cout << tratp;
	return;
}
void 
Sistema::InsetVet (){
	string nomeVet;
	string numCRMV;
	cout << "Insira o nome comleto do veterinario: ";
	cin >> nomeVet;
	cout << "Insira o numero do CRMV do veterinario: ";
	cin >> numCRMV;
	cout << endl
	
	Veterinario* vetp = new Veterinario(nomeVet, numCRMV);
	cout << &vetp;
	return;
}
void 
Sistema::Alteracao (){
	return ;
}
void 
Sistema::Remocao (){
	return ;
}
void 
Sistema::Consulta (){
	return ;
}

void menuCadastro(string& funcionario){
	return ;
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
//void 
//Sistema::testar(){
	//Sistema* petfera = new Sistema("Pet Fera","870");
	//petfera->addAnimal 
	//addVet (new Veterinario("Bart Simpson", "4815162342"));
	//addTra (new Tratador("Homer Simpson","1337"));
//	
	
//	this->adicionaEmpresa(vought);
//	this->listarEmpresas();

//	vought->listaEmpregados();
//}

void 
Sistema::pausar(){
	cout  << endl << "Pressione qualquer tecla para continuar...";
	cin.get();
	cin.ignore();
}
