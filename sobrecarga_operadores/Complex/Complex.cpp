#include <iostream>
using std::cout; using std::endl;

#include "Complex.h"

//implementações das funções friend

Complex sub(const Complex &c1, const Complex &c2)
{
  Complex res;
  res.real = c1.real - c2.real;
  res.imaginaria = c1.imaginaria - c2.imaginaria; 
  return res;
}

ostream &operator<<(ostream &out, const Complex &obj){
  out << obj.real << (obj.imaginaria >= 0 ? " +" : " ") << obj.imaginaria << "*i" << endl;
  return out;
}

//metodos
Complex Complex::operator+(const Complex &obj) const{
  Complex res;
  res.real = this->real + obj.real;
  res.imaginaria = this->imaginaria + obj.imaginaria; 
  return res;
}

Complex Complex::operator-(const Complex &obj) const{
  Complex res;
  res.real = this->real - obj.real;
  res.imaginaria = this->imaginaria - obj.imaginaria; 
  return res;
}

Complex &Complex::operator+=(const Complex &obj){
  *this = *this + obj;
  return *this;
}

Complex &Complex::operator-=(const Complex &obj){
  *this = *this - obj;
  return *this;
}

Complex &Complex::operator++(){
  this->real++;
  return *this;
}

Complex Complex::operator++(int){
  Complex novo = *this;
  novo.real++;
  return novo;
}

Complex &Complex::operator--(){
  this->real--;
  return *this;
}

Complex Complex::operator--(int){
  Complex novo = *this;
  novo.real--;
  return novo;
}