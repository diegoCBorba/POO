#include "funcionario.h"

#include <iostream>
using std::endl;

ostream &operator<<(ostream &out, const Funcionario &a){
  out << "Nome: " << a.nome << endl << "CPF: " << a.cpf << endl << "Matricula: " << a.matricula << endl << "Salario: " << a.salario << endl << "Carga horaria: " << a.cargaHoraria << endl << "Horas trabalhadas: " << a.horasTrabalhadas;

  return out;
}

Funcionario::Funcionario(const string &nome, const string &cpf, const string &matricula, const float &salario, const int &carga, const int &horas): PessoaFisica(nome, cpf), matricula(matricula), salario(salario), cargaHoraria(carga), horasTrabalhadas(horas)
{
  setHorasTrabalhadas(horas);
}

float Funcionario::calculaSalarioBruto(){
  float resultado = ((getSalario() * getHorasTrabalhadas()) / getCargaHoraria());
  return resultado;
}

void Funcionario::setHorasTrabalhadas(const int &horas){
  if(getCargaHoraria() < getHorasTrabalhadas()){
    this -> horasTrabalhadas = getCargaHoraria();
  }else if(getHorasTrabalhadas() < 0){
    this -> horasTrabalhadas = 0;
  }else{
    this -> horasTrabalhadas = horas;
  }
}