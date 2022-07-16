#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;

class Pessoa{

public:

  Pessoa(const string &nome): nome(nome){}

  void setNome(const string &nome){this -> nome = nome;}
  string getNome(){return nome;}
    
protected:
  string nome;

};

#endif