#include <iostream>
using std::cerr; using std::endl;

#include "Array.h"

ostream &operator<<(ostream &out , const Array &a)
{
  for (int i = 0 ; i < a.tam ; i++)
    out << a.arr[i] << " ";
  
  out << endl;

  return out;
}

istream &operator>>(istream &inp, Array &a)
{
  for (int i = 0 ; i < a.tam ; i++)
    inp >> a.arr[i];
  
  return inp;
}

Array::Array(int tam)
{
  this->tam = (tam > 0 ? tam : 10);

  arr = new int[this->tam];

  for (int i = 0 ; i < this->tam ; i++)
    arr[i] = 0;
}

Array::Array(const Array &obj) : tam(obj.tam)
{
  arr = new int[this->tam];

  for (int i = 0 ; i < this->tam ; i++)
    arr[i] = obj.arr[i];
}

Array::~Array()
{
  delete [] arr;
}

int Array::getSize() const
{
  return tam;
}

const Array &Array::operator=(const Array &obj)
{
  if (&obj != this) // evita auto-atribuição
  {
    if (this->tam != obj.tam)
    {
      delete [] this->arr;
      this->tam = obj.tam;
      this->arr = new int[this->tam];
    }

    for (int i = 0 ; i < this->tam ; i++)
      arr[i] = obj.arr[i];

  }

  return *this;
}

bool Array::operator==(const Array &obj) const
{
  if (this->tam != obj.tam)
    return false;

  for (int i = 0 ; i < this->tam ; i++)
    if (arr[i] != obj.arr[i])
      return false;
  
  return true;
}

int &Array::operator[](int i)
{
  if (i < 0 || i >= tam)
  {
    cerr << "Erro: Indice " << i << " fora de faixa." << endl;

    exit(1);
  }

  return arr[i];
}

int Array::operator[](int i) const
{
  if (i < 0 || i >= tam)
  {
    cerr << "Erro: Indice " << i << " fora de faixa." << endl;

    exit(1);
  }

  return arr[i];
}

Array Array::operator+(const Array &obj) const{
  Array novo(this->tam + obj.tam);
  for(int i = 0; i < this->tam; i++){
    novo.arr[i] = this->arr[i];
  }
  for(int i = 0; i < obj.tam; i++){
    novo.arr[i + tam] = obj.arr[i];
  }return novo;
}

Array &Array::operator+=(const Array &obj){
  *this = *this + obj;
  return *this;
}