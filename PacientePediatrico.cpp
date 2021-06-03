// Autora: Ana Clara Loureiro Cruz
// Data: 03-06-2021

/*  TRABALHO 4 - LING PROG  */
    // Criar um catalogo de gerenciamento de pacientes hospitalares

/* "PacientePediatrico.h" ------------------------------------------------- */
/* Contem os metodos referentes a classe PacientePediatrico */

#include "PacientePediatrico.h"
#include "Paciente.h"

using namespace std;

PacientePediatrico::PacientePediatrico(string nome, string genero, int idade, string novoNomeDoResponsavel):
  Paciente(nome, genero, idade){
    this->nomeDoResponsavel = novoNomeDoResponsavel;
  }

string PacientePediatrico::getInformacaoParticular() const {
  string s = "Nome do responsavel: " + this->nomeDoResponsavel;
  return s;
}