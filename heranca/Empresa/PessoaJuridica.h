#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include "Pessoa.h"

class PessoaJuridica : public Pessoa {

public:
  PessoaJuridica(const string &nome, const string &cnpj, const string &razaoSocial, const string &nomeFantasia): Pessoa(nome), cnpj(cnpj), razaoSocial(razaoSocial), nomeFantasia(nomeFantasia){}

  void setCNPJ(const string &cnpj){this->cnpj = cnpj;}
  string getCNPJ(){return cnpj;}

  void setRazaoSocial(const string &razao){this->razaoSocial = razao;}
  string getRazaoSocial(){return razaoSocial;}

  void setNomeFantasia(const string &nome){this->nomeFantasia = nome;}
  string getNomeFantasia(){return nomeFantasia;}

private:
  string cnpj;
  string razaoSocial;
  string nomeFantasia;

};

#endif