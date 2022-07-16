#ifndef INTEGERSET_H
#define INTEGERSET_H

#include <iostream>
using std::cout; using std::endl; using std::ostream;

class IntegerSet{

friend ostream &operator<<(ostream &, const IntegerSet &); //imprime apenas os inteiros presentes no conjunto, separados por espaço

public:
  IntegerSet();
  IntegerSet(int arr[], const int &tam);

  IntegerSet &operator<<(const int &); //insere um novo inteiro k no conjunto (seta a posição k do array para 1). Uso: objetoIntegerSet << 2
  IntegerSet &operator>>(const int &); //remove um inteiro k do conjunto (seta a posição k do array para 0). Uso: objetoIntegerSet >> 2;
  IntegerSet operator|(const IntegerSet &) const;//faz a união de dois IntegerSet (conjuntos) e cria e retorna um terceiro conjunto que representa a união dos conjuntos. Uso: objA = objB | objC;
  IntegerSet operator&(const IntegerSet &) const;//faz a interseção de dois IntegerSet (conjuntos) e cria e retorna um terceiro que representa a intersecção. Uso: objA = objB & objC;

private:
  int array[100];
};

#endif