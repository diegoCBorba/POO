#include "IntegerSet.h"

IntegerSet unionOfSets(const IntegerSet &obj1, const IntegerSet &obj2){
  IntegerSet novo;
  for(int i = 0; i < 100; i++){
    if(obj1.array[i] || obj2.array[i]){
      novo.array[i] = 1;}
  }
  return novo;
}

IntegerSet intersectionOfSets(const IntegerSet &obj1, const IntegerSet &obj2){
  IntegerSet novo;
  for(int i = 0; i < 100; i++){
    if(obj1.array[i] && obj2.array[i]){
      novo.array[i] = 1;}
  }
  return novo;
}

IntegerSet::IntegerSet(){
  for(int i = 0; i < 100; i++){
    array[i] = 0;
  }
}

IntegerSet::IntegerSet(int arr[], const int &tam){
  for(int i = 0; i < 100; i++){
    array[i] = 0;
  }
  for(int i = 0; i < tam; i++){
    array[arr[i]] = 1;
  }
}

void IntegerSet::insertElement(const int &num){
  if(this->array[num]){
    cout << "Esse número já está no conjunto!" << endl;
  }else{
    this->array[num] = 1;
  }
}

void IntegerSet::deleteElement(const int &num){
  if(!this->array[num]){
    cout << "Esse número já está fora do conjunto!" << endl;
  }else{
    this->array[num] = 0;
  }
}

void IntegerSet::print() const{
  cout << "Inteiros do conjunto:" << endl;
  for(int i = 0; i < 100; i++){
    if(this->array[i]){
      cout << i << " ";
    }
  }cout << endl;
}