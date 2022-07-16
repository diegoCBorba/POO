#include "agenda.h"
#include <iostream>
using std::cout; using std::endl;

int main () {
	char linha[] = "---------------------------------------------\n";
	Agenda A(14);


  A.armazenaPessoa("Abel", 22, 1.78); 
  A.armazenaPessoa("Thiago", 22, 1.78); 
  A.armazenaPessoa("Diego", 22, 1.78); 
  A.armazenaPessoa("Vitor", 22, 1.78); 
  
	A.imprimePovo();
	cout << linha;

	int posicao = A.buscaPessoa("Abel");
	if (posicao >= 0)
    	A.imprimePessoa(posicao);
	cout << linha;

	A.removePessoa("Diego");
	A.imprimePovo();
	cout << linha;
	
 	return 0;
}
