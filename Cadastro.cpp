// Autora: Ana Clara Loureiro Cruz
// Data: 03-06-2021

/*  TRABALHO 4 - LING PROG  */
    // Criar um catalogo de gerenciamento de pacientes hospitalares

/* "Cadastro.cpp" ------------------------------------------------- */
/* Contem os metodos referentes a classe Cadastro */

#define OK  0
#define ERRO 1

#include <iostream>
#include "Cadastro.h"

using namespace std;

Cadastro::Cadastro (Paciente* noInicial) {
    arvoreDePacientes = new Arvore<Paciente> (noInicial, NULL, NULL);
};


void Cadastro::insere (Paciente* novoPaciente) {
    *arvoreDePacientes += novoPaciente;
}

/*Paciente* Cadastro::busca (string nome) {
    return (*arvoreDePacientes)(nome);
}*/

void Cadastro::imprime() {
    cout << *arvoreDePacientes;
}

