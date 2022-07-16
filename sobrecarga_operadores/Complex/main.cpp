#include <iostream>
using std::cout; using std::endl;

#include "Complex.h"

int main() {

  Complex c1(10,5), c2(5,-5), res;
  
  c1 += c2;
  cout << "c1 = ";
  cout << c1 << endl;

  cout << "c1++ = ";
  cout << c1++ << endl;

  cout << "++c1 = ";
  cout << ++c1 << endl;

  cout << "c1-- = ";
  cout << c1-- << endl;

  cout << "--c1 = ";
  cout << --c1 << endl;
  
  cout << "Somando..." << endl;
  res = c1 + c2;
  cout << "res = ";
  cout << res << endl;

  c1 -= c2;
  cout << "c1 = ";
  cout << c1 << endl;
  
  cout << "Subtraindo..." << endl;
  res = c1 - c2;

  cout << "res = ";
  cout << res;

  return 0;
}