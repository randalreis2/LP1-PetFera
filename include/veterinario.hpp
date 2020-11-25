#pragma once

#include <vector>
#include <string>

using std::vector;
using std::string;

class Veterinario{
public:
	Veterinario(string nome, string CRMV);
	~Veterinario();

	string getNome() const;
	string getCRMV() const;
	//vector<Conta*> getContas() const;

	void cadastrarVeterinario(); // Interface com o usuário
	void cpf(); // Interface com o usuário
	void CRMV(); // Interface com o usuário
	void idade(); // Interface com o usuário
	void cargo(); // Interface com o usuário

private:


private:
	string nome;
	string CRMV;

};