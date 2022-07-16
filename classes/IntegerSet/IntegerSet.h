#ifndef INTEGERSET_H
#define INTEGERSET_H

#include <iostream>
using std::cout; using std::endl;

class IntegerSet{

friend IntegerSet unionOfSets(const IntegerSet &, const IntegerSet &); // recebe dois IntegerSet (conjuntos) e cria e retorna um terceiro conjunto que representa a união dos conjuntos

friend IntegerSet intersectionOfSets(const IntegerSet &, const IntegerSet &); // recebe dois IntegerSet (conjuntos) e cria e retorna um terceiro conjunto que representa a interseção dos conjuntos

public:
  IntegerSet();
  IntegerSet(int arr[], const int &tam);
  void insertElement(const int &num); //insere um novo inteiro k no conjunto (seta a posição k do array para 1)
  void deleteElement(const int &num); //deleta um inteiro k do conjunto (seta a posição k do array para 0)
  void print() const; //imprime apenas os inteiros presentes no conjunto, separados por espaço

private:
  int array[100];

};

#endif