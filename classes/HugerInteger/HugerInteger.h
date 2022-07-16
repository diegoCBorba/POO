#ifndef HUGERINTEGER_H
#define HUGERINTEGER_H

#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

class HugerInteger{

public:

  HugerInteger(): numArray(0){}

  void input(const string &str); //recebe uma string contendo o inteiro. O método deve verificar se realmente está recebendo um número
  void output(); //imprime o número na saída padrão
  void add(HugerInteger obj); //soma objeto com outro HugeInteger 

  bool isEqualTo(const HugerInteger &obj); // ==
  bool isNotEqualTo(const HugerInteger &obj); // !=
  bool isGreaterThan(const HugerInteger &obj); // >
  bool isLessThan(const HugerInteger &obj); // <
  bool isGreaterThanOrIqua(const HugerInteger &obj); // >=
  bool isLessThanOrIqua(const HugerInteger &obj); // <=

private:
  char array[40];
  int numArray;
  void tiraOzero(); //Serve para a função add, tira o zero da primeira casa caso haja um
};


#endif