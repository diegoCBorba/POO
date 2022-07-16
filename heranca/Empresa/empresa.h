#ifndef EMPRESA_H
#define EMPRESA_H

#include "PessoaJuridica.h"
#include "funcionario.h"
#include "cliente.h"

class Empresa : public PessoaJuridica{

public:
  Empresa(const string &nome, const string &cnpj, const string &razaoSocial, const string &nomeFantasia);

  void armazenaFuncionario(const Funcionario &f);
  void armazenaCliente(const Cliente &f);
  void imprimeClientes();
  void imprimeFuncionarios();
  float calcularFolhaDePagamento();

protected:
  Funcionario lista_funcionarios[10];
  int numFuncionarios, numClientes;
  Cliente lista_cliente[10];

};

#endif