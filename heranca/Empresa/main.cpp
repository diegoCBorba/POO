#include <iostream>
#include "empresa.h"

#include <iostream>
using std::cout; using std::endl;

int main(){
  Empresa Petrobras("Julia", "213-5", "Petróleo Brasileiro SA", "Petrobrás");;
  Funcionario f1("Diego", "11111111111", "1234", 5000.25, 30, 25);
  Cliente c("Pedro", "11111111111", "88998899", "Rua Pedro");

  for(int i = 0; i < 4; i++){
    Petrobras.armazenaCliente(c);
    Petrobras.armazenaFuncionario(f1);
  }
  Petrobras.imprimeFuncionarios();
  Petrobras.imprimeClientes();

  cout << Petrobras.calcularFolhaDePagamento() << endl;
}