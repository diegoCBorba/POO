#include "IntegerSet.h"

int main() {
  int lista[] = {1, 55, 6, 9 , 10};
  int lista_2[] = {5, 6, 11, 40, 10, 1, 33};
  IntegerSet a(lista, 5), b(lista_2, 7);
  
  cout << a << endl;
  a >> 55;
  a >> 55;
  a << 6;
  a << 58;
  cout << "Conjunto A e B: " << endl;
  cout << a << endl;
  cout << b << endl;
  cout << "União A e B:" << endl;
  auto c = a | b;
  cout << c << endl;
  cout << "Interseção A e B:" << endl;
  auto d = a & b;
  cout << d << endl;
}