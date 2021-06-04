// Autora: Ana Clara Loureiro Cruz
// Data: 03-06-2021

/*  TRABALHO 4 - LING PROG  */
    // Criar um catalogo de gerenciamento de pacientes hospitalares

/* "Cadastro.cpp" ------------------------------------------------- */
/* Contem os metodos referentes a classe Cadastro */

#define OK  0
#define ERRO 1

#include <iostream>
#include <exception>
#include "Erros.h"
#include "Cadastro.h"

using namespace std;

Cadastro::Cadastro () {
    arvoreDePacientes = new Arvore<Paciente> (NULL, NULL, NULL);
};


void Cadastro::insere (Paciente* novoPaciente) noexcept(false){
    Arvore<Paciente> *arvore = *arvoreDePacientes += novoPaciente;
    if (arvore == NULL)
        throw PacienteJaCadastradoException();
    else
        cout << "Paciente adicionado com sucesso!" << endl ;
}

void Cadastro::busca (string nome) noexcept(false) {
    Arvore<Paciente>* arvore = (*arvoreDePacientes)(nome);
    if (arvore == NULL)
        throw PacientNaoEncontradoException();
    else
        cout << "Paciente encontrado!" << endl << *(arvore->getNo()) << endl ;
}

void Cadastro::imprime() {
    cout << *arvoreDePacientes;
}

