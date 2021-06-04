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


int Cadastro::insere (Paciente* novoPaciente) {
    if (*arvoreDePacientes += novoPaciente)
        return 1;
    return 0;
}

Paciente* Cadastro::busca (string nome) {
    Arvore<Paciente>* arvore = (*arvoreDePacientes)(nome);
    if ((*arvoreDePacientes)(nome) == NULL)
        return NULL;
    return arvore->getNo();
}

void Cadastro::imprime() {
    cout << *arvoreDePacientes;
}

