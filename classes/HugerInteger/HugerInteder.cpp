#include "HugerInteger.h"

void HugerInteger::input(const string &str){
  
  for(int i = 0; i < str.size(); i++){
    if(str[i] >= 48 && str[i] <= 57){
      if((str[i] != 48 && numArray != 0) || (str[i] != 48 && numArray == 0) || (str[i] == 48 && numArray != 0)){
        array[numArray] = str[i];
        numArray++;}
    }
  }
}

void HugerInteger::output(){
  for(int i = 0; i < numArray; i++){
    cout << array[i]; 
  }
  cout << endl;
}

void HugerInteger::tiraOzero(){
  if(this->array[0] == '0'){
    for(int i = 0; i < numArray - 1; i++){
      this->array[i] = this->array[i + 1];
    }this->numArray--;
  }
}

void HugerInteger::add(HugerInteger obj){
  HugerInteger copia;
  if(this -> numArray < obj.numArray){
    int zeros = obj.numArray - this->numArray;
    for(int i = 0; i < zeros; i++){
      copia.array[i] = '0';
      copia.numArray += 1;
    }
    for(int i = 0; i < this->numArray; i++){
      copia.array[i + zeros] = this->array[i];
      copia.numArray += 1;
    }

  int resultado = 0, resto = 0;
  for(int i = obj.numArray; i >= 0; i--){
    if(i != 0){
    //coloquei [i - 1] pois como está envolvendo uma adição adicionei mais uma casa, que vai ser o indice 0, então o start começa de uma casa a mais do que os numeros estão salvos
    int i1 = (int(obj.array[i - 1]) - 48), i2 = (int(copia.array[i - 1]) - 48);
    resultado = i1 + i2 + resto;
      if(resultado >= 10){
        resto = resultado / 10;
        resultado = resultado % 10;
      }else{
        resto = 0;
      }
        this->array[i] = resultado + 48;
      }else{
        //no indice zero como não tem numeros pra somar no resultado ele só atribui o valor do resto e salva o novo tamanho, obj maior + 1
        this->array[i] = resto + 48;
        this->numArray = obj.numArray + 1;
      }
    } 
  }else{ // Para casos: this->numArray == obj.numArray ou this->numArray > obj.numArray
    int zeros = this->numArray - obj.numArray;
    for(int i = 0; i < zeros; i++){
      copia.array[i] = '0';
      copia.numArray += 1;
    }
    for(int i = 0; i < obj.numArray; i++){
      copia.array[i + zeros] = obj.array[i];
      copia.numArray += 1;
    }
    int resultado = 0, resto = 0;
    for(int i = this->numArray; i >= 0; i--){
      if(i != 0){
      int i1 = (int(this->array[i - 1]) - 48), i2 = (int(copia.array[i - 1]) - 48);
      resultado = i1 + i2 + resto;
        if(resultado >= 10){
          resto = resultado / 10;
          resultado = resultado % 10;
        }else{
          resto = 0;
        }
          this->array[i] = resultado + 48;
        }else{
          this->array[i] = resto + 48;
          this->numArray += 1;}
    }
  }tiraOzero();
}

bool HugerInteger::isEqualTo(const HugerInteger &obj){
  if(this -> numArray != obj.numArray){
  return false;
  }
  for(int i = 0; i < numArray; i++){
    if(this -> array[i] != obj.array[i]){
      return false;
    }
  }
  return true;
}

bool HugerInteger::isNotEqualTo(const HugerInteger &obj){
  return !(isEqualTo(obj));
}

bool HugerInteger::isGreaterThan(const HugerInteger &obj){
  if(this -> numArray > obj.numArray){
    return true;
  }else if(this -> numArray == obj.numArray){
    for(int i = 0; i < numArray; i++){
      if(this -> array[i] < obj.array[i]){
        return false;
      }
    }
    return true;
  }else{
    return false;
  }
}

bool HugerInteger::isGreaterThanOrIqua(const HugerInteger &obj){
  if(isGreaterThan(obj) || isEqualTo(obj)){
    return true;
  }else{
    return false;
  }
}

bool HugerInteger::isLessThan(const HugerInteger &obj){
  if(this -> numArray < obj.numArray){
    return true;
  }else if(this -> numArray == obj.numArray){
    for(int i = 0; i < numArray; i++){
      if(this -> array[i] > obj.array[i]){
        return false;
      }
    }
    return true;
  }else{
    return false;
  }
}

bool HugerInteger::isLessThanOrIqua(const HugerInteger &obj){
  if(isLessThan(obj) || isEqualTo(obj)){
    return true;
  }else{
    return false;
  }
}