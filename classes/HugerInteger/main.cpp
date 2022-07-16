#include <iostream>
#include "HugerInteger.h"

int main() {
  HugerInteger d, c, b, a;
  char i[] = "55";

  a.input("5697");
  b.input("5698");
  c.input("000asjdjalsdasd465448asdas,.68");
  d.input("5697");
  c.output();
  b.output();
  //c.add(b);
  cout << a.isEqualTo(b) << endl; // == (false = 0)
  cout << a.isNotEqualTo(b) << endl; // != (true = 1)
  cout << a.isGreaterThan(b) << endl; // > (false = 0)
  cout << a.isLessThan(b) << endl; // < (true = 1)
  cout << a.isGreaterThanOrIqua(b) << endl; // >= (false = 0)
  cout << a.isGreaterThanOrIqua(d) << endl; // >= (true = 1)
  cout << a.isLessThanOrIqua(b) << endl; // <= (true = 1)
  cout << a.isLessThanOrIqua(d) << endl; // <= (true = 1)
  
  b.add(b);
  b.output();
}