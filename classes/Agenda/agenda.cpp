#include "agenda.h"
#include <iostream>

Agenda::Agenda(int tPessoas): numPessoas(0){
  if(tPessoas > 0){
    this->qtdePessoas = tPessoas;
    pessoas = new Pessoa[tPessoas];
  }
  else{
    pessoas = nullptr;
    this-> qtdePessoas = 1;
  }
}

Agenda::~Agenda(){
  if(pessoas)
    delete [] pessoas;
}
  
void Agenda::removePessoa(const string &nome){
  int indice_pessoa = buscaPessoa(nome);
  for(int i = indice_pessoa; i < numPessoas - 1; i++){
    pessoas[i] = pessoas[i+1];
  }
  numPessoas -= 1;
}

void Agenda::armazenaPessoa(const string &nome, const int &idade, const float &altura){
  if(numPessoas < qtdePessoas){
    Pessoa p(nome, idade, altura);
    pessoas[numPessoas] = p;
    this -> numPessoas += 1;
  }else{
    std::cout << "Número de pessoas lotadas na Agenda!" << std::endl;
  }
}

void Agenda::armazenaPessoa(const Pessoa &p){
    if(numPessoas < qtdePessoas){
    pessoas[numPessoas] = p;
    this -> numPessoas += 1;
  }else{
    std::cout << "Número de pessoas lotadas na Agenda!" << std::endl;}
}

int Agenda::buscaPessoa(const string &nome) const{
  for(int i = 0; i < numPessoas; i++){
    if(nome == pessoas[i].getNome()){
      std::cout << "A posição dessa pessoa é: " << i << std::endl;
      return i;
    }
  }std::cout << "Esse nome não está na lista" << std::endl;
}

void Agenda::imprimePessoa(const int &i) const{
  if(i >= 0 && i < numPessoas){
    std::cout << "Nome ["  << i << "]: "<< pessoas[i].getNome() << std::endl << "Idade [" << i << "]: " << pessoas[i].getIdade() << std::endl << "Altura [" << i << "]: " << pessoas[i].getAltura() << std::endl;
  }else{
    std::cout << "Esse indice ainda não foi definido." << std::endl;
  }
}

void Agenda::imprimePovo() const{
  for(int i = 0; i < numPessoas; i++){
    imprimePessoa(i);
  }
}