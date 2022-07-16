#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
using std::ostream;

#include "PessoaFisica.h"

class Cliente : public PessoaFisica {

friend ostream &operator<<(ostream &, const Cliente &);

public:

  //Para a classe Empresa
  Cliente():PessoaFisica("indefinido", "00000000000"), telefone("indefinido"), endereco("indefinido"){}

  Cliente(const string &nome, const string &cpf, const string &telefone, const string &endereco): PessoaFisica(nome, cpf), telefone(telefone), endereco(endereco){}

  void setTelefone(const string &telefone){this->telefone = telefone;}
  string getTelefone(){return telefone;}

  void setEndereco(const string &endereco){this->endereco = endereco;}
  string getEndereco(){return endereco;}
  
protected:
  string telefone;
  string endereco;
};

#endif