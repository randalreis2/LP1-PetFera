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
	//vector<Conta*> getContas() const;
	
	void addAnimal(); // Interface com o usuário
	void deleteAnimal(); // Interface com o usuário
	void editCadastroAnimal(); // Interface com o usuário
	void listarAnimais(); // Interface com o usuário

	void listarAtividadesVet();//(Inserção, Alteração, Remoção e Consulta) Veterinários.
	void listarAtividadesTra();//(Inserção, Alteração, Remoção e Consulta) Tratadores.

private:


private:
	string loja;
	string cnpj;

};