// Autora: Ana Clara Loureiro Cruz
// Data: 30-05-2021

/*  TRABALHO 4 - LING PROG  */
    // Criar um catalogo de gerenciamento de pacientes hospitalares

/* "Arvore.h" ------------------------------------------------- */
/* Inicializa a classe Arvore */

//#include <iostream>
//#include <iomanip>
//#include <ostream>
#include "Paciente.h"

template <class T>
class Arvore {
  public:
    // Construtor
    Arvore(T *, Arvore * , Arvore * );

    // Destrutor
    ~Arvore();

    // Operadores
    Arvore* operator+=(T *);

    string getNomeDoNo();
    string getNomeDireito();
    string getNomeEsquerdo();


     T* no;

  private:
    Arvore* filhoDireita;
    Arvore* filhoEsquerda;
   
};