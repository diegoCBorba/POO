#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
using std::ostream;

#include <string>
using std::string;

class Pessoa{
friend ostream &operator<<(ostream &out, const Pessoa &a){
  out << a.nome;

  return out;
}

public:
  
  Pessoa(const string &nome): nome(nome){}

  void setNome(const string &nome){this -> nome = nome;}
  string getNome(){return nome;}
    
protected:
  string nome;

};

#endif