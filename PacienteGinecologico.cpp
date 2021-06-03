// Autora: Ana Clara Loureiro Cruz
// Data: 03-06-2021

/*  TRABALHO 4 - LING PROG  */
    // Criar um catalogo de gerenciamento de pacientes hospitalares

/* "PacienteGinecologico.h" ------------------------------------------------- */
/* Contem os metodos referentes a classe PacienteGinecologico */

#include "PacienteGinecologico.h"
#include "Paciente.h"
#include <string>

using namespace std;

PacienteGinecologico::PacienteGinecologico(string nome, string genero, int idade, string novoMetodoContraceptivo):
  Paciente(nome, genero, idade){
    this->metodoContraceptivo = novoMetodoContraceptivo;
  }

string PacienteGinecologico::getInformacaoParticular() const {
  string s = "Metodo contraceptivo: " + this->metodoContraceptivo;
  return s;
}