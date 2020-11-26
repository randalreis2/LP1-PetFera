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
	string getCor() const;
	//vector<Conta*> getContas() const;

	void getNome(); // Interface com o usuário
	void getCor(); // Interface com o usuário
	//void getCPF(); // Interface com o usuário (CRIAR BOTÕES) - Verde (Aves), Azul (aves, mamíferos e répteis), Vermelho (animais venenosos ou perigosos)
	//void getIdade(); // Interface com o usuário

private:


private:
	string nome;
	string cor;

};