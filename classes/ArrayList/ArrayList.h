#ifndef ARRAYLIST_H
#define ARRAYLIST_H

class ArrayList
{

  //Funções friend
  friend ArrayList somaArray(ArrayList &, const int &); //recebe um objeto ArrayList por referência e um valor inteiro a ser somado a todos os elementos
  friend ArrayList subArray(ArrayList &, const int &); //recebe um objeto ArrayList por referência e um valor inteiro para subtrair todos os elementos
  friend ArrayList mulArray(ArrayList &, const int &); //recebe um objeto ArrayList por referência e um valor inteiro para multiplicar todos os elementos
  friend ArrayList divArray(ArrayList &, const int &); //recebe um objeto ArrayList por referência e um valor inteiro para dividir todos os elementos

public:
  ArrayList(int); //construtor-padrão
  ArrayList(const ArrayList &); //construtor de cópia
  ~ArrayList(); // destrutor

  // sobrecarga de operador
  const ArrayList &operator=(const ArrayList &);

  ArrayList &add(int);

  void print() const;
  int busca(const int &); //recebe um índice e, caso exista elemento naquele índice, retorne o respectivo elemento
  void remove(const int &); //recebe um índice e, caso exista elemento naquele índice, remova o respectivo elemento
  void removeEl(const int &); //recebe um elemento e, caso ele exista, remova todas as ocorrências deste

private:
  int *arr;
  int tam;
  int pos;
};

#endif