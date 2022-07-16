#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using std::ostream;

class Complex 
{

  //funções friend
  friend Complex soma(const Complex &, const Complex &);
  friend Complex sub(const Complex &, const Complex &);
  friend ostream &operator<<(ostream &, const Complex &);

public:
  Complex( int a = 0, int b = 0) : real(a), imaginaria(b) {}

  void print() const;
  Complex operator+(const Complex &) const; //soma o objeto com outro objeto Complex e cria e retorna um terceiro objeto que representa a soma
  Complex &operator+=(const Complex &); //soma o objeto invocador com outro objeto Complex
  Complex operator-(const Complex &) const; //subtrai o objeto com outro objeto Complex e cria e retorna um terceiro objeto que representa a diferença
  Complex &operator-=(const Complex &); //subtrai os objetos modificando o invocador
  Complex &operator++(); //incrementa a parte real em 1 / prefixado
  Complex operator++(int); //incrementa a parte real em 1 / poxfixado
  Complex &operator--(); //Decrementa a parte real em 1 / prefixado
  Complex operator--(int); //Decrementa a parte real em 1 / poxfixado

private:
  double real;
  double imaginaria;
};

#endif