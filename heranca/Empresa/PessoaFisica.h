#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "Pessoa.h"

class PessoaFisica : public Pessoa {

public:
  PessoaFisica(const string &nome, const string &cpf): Pessoa(nome), cpf(cpf){}

  void setCPF(const string &cpf){this->cpf = cpf;}
  string getCPF(){return cpf;}
  
protected:
  string cpf;

};

#endif