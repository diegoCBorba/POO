#include <iostream>
using std::cout; using std::endl;

#include "ArrayList.h"

//Implementação das funções friend
ArrayList somaArray(ArrayList &array, const int &num){
  ArrayList res(10);
  for(int i = 0; i < array.pos; i++){
    res.add((num + array.arr[i]));
  }
  return res;
}

ArrayList subArray(ArrayList &array, const int &num){
  ArrayList res(10);
  for(int i = 0; i < array.pos; i++){
    res.add((array.arr[i]) - num);
  }
  return res;
}

ArrayList mulArray(ArrayList &array, const int &num){
  ArrayList res(10);
  for(int i = 0; i < array.pos; i++){
    res.add((num * array.arr[i]));
  }
  return res;
}

ArrayList divArray(ArrayList &array, const int &num){
  ArrayList res(10);
  for(int i = 0; i < array.pos; i++){
    res.add((array.arr[i]) / num);
  }
  return res;
}

//Implementação da classe
ArrayList::ArrayList(int tam) : pos(0)
  {
    if (tam > 0)
    {
      this->tam = tam;
      arr = new int[tam];
    }
    else
    {
      arr = nullptr;
      this->tam = 0;
    }
  }

ArrayList::ArrayList(const ArrayList &array): arr(nullptr), tam(array.tam), pos(array.pos){
  if(array.arr){
    arr = new int[tam];

    for(int i = 0; i < pos; i++){
      arr[i] = array.arr[i];}
  }
}

ArrayList::~ArrayList()
{
  if (arr)
    delete [] arr;
}

//sobrecarga de operador
const ArrayList &ArrayList::operator=(const ArrayList &obj){
  //Verificação: O objeto a ser copiado é igual ao que vai receber a cópia
  if(&obj != this){
    //Verificação: São do mesmo tamanho
    if(this -> tam != obj.tam){
      //Altera o tamanho e faz uma nova alocação do tamanho a ser copiado
      delete [] this -> arr;
      this -> tam = obj.tam;
      this -> arr = new int[this->tam];
    }
    // incrementa os elementos presentes da cópia no array
    this -> pos = obj.pos;
    for (int i = 0; i < this -> pos; i++){
      arr[i] = obj.arr[i];
    }
  }
  return *this;
}

ArrayList &ArrayList::add(int v)
{
  if (pos < tam)
    arr[pos++] = v;
  
  return *this;
}

int ArrayList::busca(const int &indice){
  if(indice < pos){
    return arr[indice];
  }else{
    cout << "Não existe nenhum número neste índice" << endl;
    return -1;
  }
}

void ArrayList::remove(const int &indice){
  if(indice < pos){
    for(int i = indice; i < (pos - 1); i++){
      arr[i] = arr[i + 1];
    }
    pos--;
  }
}

//Função recursiva que só para quando tiver removido todos os elementos iguais no array passado no argumento. 
void ArrayList::removeEl(const int &num){
  int indice = -1;
  for(int i = 0; i < pos; i++){
    if(arr[i] == num){
      indice = i;
    }
  }
  
  if(indice != -1){
    remove(indice);
    removeEl(num);
  }

}

void ArrayList::print() const{
  for (int i = 0 ; i < pos ; i++)
    std::cout << arr[i] << " ";
  std::cout << std::endl;
}