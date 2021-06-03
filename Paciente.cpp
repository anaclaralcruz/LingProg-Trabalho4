// Autora: Ana Clara Loureiro Cruz
// Data: 30-05-2021

/*  TRABALHO 4 - LING PROG  */
    // Criar um catalogo de gerenciamento de pacientes hospitalares

/* "Paciente.cpp" ------------------------------------------------- */
/* Contem os metodos referentes a classe Paciente */

#include "Paciente.h"

using namespace std ;

Paciente::Paciente (string novoNome, string novoGenero, int novaIdade) {
    this->nome = novoNome ;
    this->genero = novoGenero ;
    this->idade = novaIdade;
}

// Operadores
bool Paciente::operator<(Paciente & pacienteDireita) {
  if (this->nome < pacienteDireita.nome)
    return true;
  return false;
}

// Operador >
bool Paciente::operator>(Paciente & pacienteDireita) {
  if (this->nome > pacienteDireita.nome)
    return true;
  return false;
}

// Operador ==
bool Paciente::operator==(Paciente & pacienteDireita) {
  if (this->nome == pacienteDireita.nome)
    return true;
  return false;
}

// Retorna nome do no
string Paciente::getNome() {
    return this->nome;
}