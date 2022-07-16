#ifndef HUGERINTEGER_H
#define HUGERINTEGER_H

#include <iostream>
using std::cout; using std::endl; using std::ostream;

#include <string>
using std::string;

class HugerInteger{

friend ostream &operator<<(ostream &, const HugerInteger &);
friend HugerInteger operator+(HugerInteger obj1, HugerInteger obj2);

public:

  HugerInteger(): numArray(0){}
  const HugerInteger &operator=(const string &); //recebe uma string contendo o inteiro. O método deve verificar se realmente está recebendo um número

  HugerInteger &operator+=(HugerInteger);

  bool operator==(const HugerInteger &) const;
  bool operator!=(const HugerInteger &) const;
  bool operator>(const HugerInteger &) const;
  bool operator<(const HugerInteger &) const;
  bool operator>=(const HugerInteger &) const;
  bool operator<=(const HugerInteger &) const;

private:
  char array[40];
  int numArray;
  void tiraOzero(HugerInteger &); //Serve para a função add, tira o zero da primeira casa caso haja um
};


#endif