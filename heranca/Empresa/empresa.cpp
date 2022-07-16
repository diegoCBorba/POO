#include "empresa.h"
#include <iostream>
#include <string>

Empresa::Empresa(const string &nome, const string &cnpj, const string &razaoSocial, const string &nomeFantasia): PessoaJuridica(nome, cnpj, razaoSocial, nomeFantasia){
  numFuncionarios = 0;
  numClientes = 0;
}

void Empresa::armazenaFuncionario(const Funcionario &f){
  if(numFuncionarios < 10){
    lista_funcionarios[numFuncionarios] = f;
    this -> numFuncionarios += 1;
  }else{
    std::cout << "Numero de Funcionarios lotados" << std::endl;
  }
}

void Empresa::armazenaCliente(const Cliente &c){
  if(numClientes < 10){
    lista_cliente[numClientes] = c;
    this -> numClientes += 1;
  }else{
    std::cout << "Numero de Clientes lotados" << std::endl;
  }
}

void Empresa::imprimeFuncionarios(){
  std::string x = "_______________________________";
  std::cout << "Lista Funcionarios: " << std::endl;
  for(int i = 0; i < numFuncionarios; i++){
    std::cout << lista_funcionarios[i] << std::endl;
    std::cout << x << std::endl;
  }
}

void Empresa::imprimeClientes(){
  std::string x = "_______________________________";
  std::cout << "Lista Clientes: " << std::endl;
  for(int i = 0; i < numClientes; i++){
    std::cout << lista_cliente[i] << std::endl;
    std::cout << x << std::endl;
  }
}

float Empresa::calcularFolhaDePagamento(){
  float totalGasto = 0;
  if(numFuncionarios > 0){
    for(int i = 0; i < numFuncionarios; i++){
      totalGasto += lista_funcionarios[i].calculaSalarioBruto();
    }
    return totalGasto;
  }else{
    std::cout << "Sem funcionarios na Empresa" << std::endl;
    return totalGasto;
  }
}