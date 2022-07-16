#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
using std::ostream;

#include "PessoaFisica.h"

class Funcionario : public PessoaFisica{

friend ostream &operator<<( ostream &, const Funcionario &);

public:

  Funcionario(const string &nome, const string &cpf, const string &matricula, const float &salario, const int &carga, const int &horas);

  float calculaSalarioBruto();

  void setMatricula(const string &matricula){this -> matricula = matricula;}
  string getMatricula(){return matricula;}

  void setSalario(const float &salario){this -> salario = salario;}
  float getSalario(){return salario;}

  void setCargaHoraria(const int &carga){this -> cargaHoraria = carga;}
  int getCargaHoraria(){return cargaHoraria;}

  void setHorasTrabalhadas(const int &horas);
  int getHorasTrabalhadas(){return horasTrabalhadas;}

protected:
  string matricula;
  float salario;
  int cargaHoraria;
  int horasTrabalhadas;

};

#endif