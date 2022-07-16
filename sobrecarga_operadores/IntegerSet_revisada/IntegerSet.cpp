#include "IntegerSet.h"

ostream &operator<<(ostream &out, const IntegerSet &obj){
  for(int i = 0; i < 100; i++){
    if(obj.array[i]){
      out << i << " ";
    }
  }return out;
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

IntegerSet &IntegerSet::operator<<(const int &num){
  if(num < 0 || num > 99){
    cout << "Número fora do conjunto!" << endl;
  }else{
    if(this->array[num]){
    cout << "Esse número já está no conjunto!" << endl;
    }else{
      this->array[num] = 1;
    }
  }return *this;
}

IntegerSet &IntegerSet::operator>>(const int &num){
  if(num < 0 || num > 99){
  cout << "Número fora do conjunto!" << endl;
  }else{
    if(!this->array[num]){
    cout << "Esse número já está fora do conjunto!" << endl;
    }else{
    this->array[num] = 0;
    }
  }return *this;
}

IntegerSet IntegerSet::operator|(const IntegerSet &obj) const{
  IntegerSet novo;
  for(int i = 0; i < 100; i++){
    if(this->array[i] || obj.array[i]){
      novo.array[i] = 1;}
  }return novo;
}

IntegerSet IntegerSet::operator&(const IntegerSet &obj) const{
  IntegerSet novo;
  for(int i = 0; i < 100; i++){
    if(this->array[i] & obj.array[i]){
      novo.array[i] = 1;}
  }return novo;
}
