#include <iostream>
using std::cout; using std::endl;
#include "funcionario.h"

int main() {
  Funcionario f1("Diego", "11111111111", "1234", 5000.25, 30, 25);

  cout << f1 << endl;
  cout << f1.calculaSalarioBruto() << endl;
}