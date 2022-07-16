#include <iostream>
using std::endl;

#include "cliente.h"

ostream &operator<<(ostream &out, const Cliente &a){
  out << "Cliente: " << a.nome << endl << "CPF: " << a.cpf << endl << "Telefone: " << a.telefone << endl << "Endereço: " << a.endereco;

  return out;
}