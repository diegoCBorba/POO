#include "IntegerSet.h"

int main() {
  int lista[] = {1, 55, 6, 9 , 10};
  int lista_2[] = {5, 6, 11, 40, 10, 1, 33};
  IntegerSet a(lista, 5), b(lista_2, 7);
  
  a.print();
  a.deleteElement(55);
  a.insertElement(6);
  a.insertElement(58);
  cout << "Conjunto A e B: " << endl;
  a.print();
  b.print();
  cout << "União A e B:" << endl;
  auto c = unionOfSets(a, b);
  c.print();
  cout << "Interseção A e B:" << endl;
  auto d = intersectionOfSets(a,b);
  d.print();
}