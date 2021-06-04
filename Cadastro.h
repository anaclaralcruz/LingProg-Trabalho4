// Autora: Ana Clara Loureiro Cruz
// Data: 30-05-2021

/*  TRABALHO 4 - LING PROG  */
    // Criar um catalogo de gerenciamento de pacientes hospitalares

/* "Cadastro.h" ------------------------------------------------- */
/* Inicializa a classe Cadastro */

#include <exception>

#include "Arvore.cpp"
#include "Paciente.h"

using namespace std;


class Cadastro{
  public:
    Cadastro();

    void insere(Paciente*) noexcept(false);
    void busca(string) noexcept(false);
    void imprime();

  private:
    Arvore<Paciente>* arvoreDePacientes;
    
};