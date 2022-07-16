#include <iostream>
using std::cout; using std::endl;

#include "pessoa.h"

const void Pessoa::print(){
  cout << "Nome: " << getNome() << endl << "Idade: " << getIdade() << endl << "Altura: " << getAltura() << endl;
}