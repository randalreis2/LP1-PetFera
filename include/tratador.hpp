#pragma once

#include <vector>
#include <string>

using std::vector;
using std::string;

class Tratador{
public:
	Tratador(string nome, string cor);
	~Tratador();

	string getNome() const;
	string getCRMV() const;
	//vector<Conta*> getContas() const;

	void cadastrarTratador(); // Interface com o usuário
	void cpf(); // Interface com o usuário
	void Cor(); // Interface com o usuário - verde (Aves), Azul (aves, mamíferos e répteis), Vermelho (animais venenosos ou perigosos)
	void idade(); // Interface com o usuário

private:


private:
	string nome;
	string cor;

};