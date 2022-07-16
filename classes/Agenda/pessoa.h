#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;

//Classe simples simulando uma Pessoa: nome, idade e altura.
class Pessoa{

public:

Pessoa(){}

Pessoa(const string &nome, const int &idade, const float &altura) : nome(nome), idade(idade), altura(altura) {}

void setNome(const string &nome){this -> nome = nome;}
void setIdade(const int &idade){this -> idade = idade;}
void setAltura(const float &altura){this -> altura = altura;}

string getNome() const{return nome;}
int getIdade() const{return idade;}
float getAltura() const{return altura;}

const void print();

private:
  string nome;
  int idade;
  float altura;

};

#endif