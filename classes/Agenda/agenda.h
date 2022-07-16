#ifndef AGENDA_H
#define AGENDA_H

#include <string>
using std::string;

#include "pessoa.h"

// Agenda melhorada, esta utiliza alocação de memória, e pode definir o tamanho da agenda desejada.
class Agenda{

public:
   Agenda(int tPessoas = 1);
   ~Agenda();

   void armazenaPessoa(const string &nome, const int &idade, const float &altura);
   void armazenaPessoa(const Pessoa &p);

   void removePessoa(const string &nome);

   int buscaPessoa(const string &nome) const; // informa em que posição da agenda está a pessoa
   void imprimePovo() const; // imprime todos os dados de todas as pessoas da agenda
   void imprimePessoa(const int &i) const; // imprime os dados da pessoa que está na posição 'i' da agenda

private:
    Pessoa *pessoas;
    int qtdePessoas;
    int numPessoas;
};

#endif