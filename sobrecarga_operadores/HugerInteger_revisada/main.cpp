#include <iostream>
#include "HugerInteger.h"

int main() {
  HugerInteger d, c, b, a;
  char i[] = "55";

  a = "5697";
  b = "5698";
  c = "000asjdjalsdasd465448asdas,.68";
  d = "5697";
  cout << c;
  cout << b;
  //c.add(b);
  cout << (a == b) << endl; // == (false = 0)
  cout << (a != b) << endl; // != (true = 1)
  cout << (a > b) << endl; // > (false = 0)
  cout << (a < b) << endl; // < (true = 1)
  cout << (a >= b) << endl; // >= (false = 0)
  cout << (a >= d) << endl; // >= (true = 1)
  cout << (a <= b) << endl; // <= (true = 1)
  cout << (a <= d) << endl; // <= (true = 1)
  
  b += b;
  cout << b;
  HugerInteger e = b + b;
  cout << e;
}