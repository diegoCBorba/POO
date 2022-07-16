#include <iostream>
using std::cout; using std::endl;

#include "ArrayList.h"

int main() {
  ArrayList al(10), res_sum(10); 
  
  al.add(1).add(2).add(10).add(20).add(2).add(2).add(4).add(2);
  
  al.print();
  //testando as funções
  res_sum = somaArray(al, 10); //testanto sobrecarga do "="
  res_sum.print();
  ArrayList res_sub(subArray(al, 2)); //testanto construtor de cópia
  res_sub.print();
  ArrayList res_mul = mulArray(al, 2);
  res_mul.print();
  ArrayList res_div = divArray(al, 2);
  res_div.print();
  
  al.remove(0);
  al.print();
  al.removeEl(2);
  al.print();

  return 0;
}