#pragma once

#include <vector>
#include <string>

using std::vector;
using std::string;

class Sistema{
public:
	Sistema(string loja, string cnpj);
	~Sistema();

	string getLoja() const;
	string getNumero() const;
	
	void addAnimal(); // Interface com o usuário
	void deleteAnimal(); // Interface com o usuário
	void editCadastroAnimal(); // Interface com o usuário
	void listarAnimais(); // Interface com o usuário

	string listarCadastroTra();//(Inserção, Alteração, Remoção e Consulta) Tratadores.
	string listarCadastroVet();//(Inserção, Alteração, Remoção e Consulta) Veterinários.

	void InsetTrat ();
	void InsetVet();C
	void Alteracao ();
	void Remocao ();
	void Consulta ();
	
	void menuCadastro(string& funcionario);
	void limpaTela();
	void pausar();

	void testar(); //Popular Programa

private:
	string loja;
	string cnpj;
};