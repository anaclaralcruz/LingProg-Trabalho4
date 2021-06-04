// Autora: Ana Clara Loureiro Cruz
// Data: 30-05-2021

/*  TRABALHO 4 - LING PROG  */
    // Criar um catalogo de gerenciamento de pacientes hospitalares

/* "Arvore.h" ------------------------------------------------- */
/* Inicializa a classe Arvore */

#ifndef ARVORE_H
#define ARVORE_H
//#include <iostream>
//#include <iomanip>
#include <ostream>
//#include "Paciente.h"

using namespace std;

template <class T>
class Arvore {
  // Operadores globais
  template <class O>
  friend ostream &operator<<(ostream&, const Arvore<O> &);

  public:
    // Construtor
    Arvore(T *, Arvore<T> * , Arvore<T> *);

    // Destrutor
    //~Arvore();

    // Operadores
    Arvore* operator+=(T *);
    Arvore* operator()(string);

    T* getNo();

    string getNomeDoNo();
    string getNomeDireito();
    string getNomeEsquerdo();

  private:
    T* no;
    Arvore* filhoDireita;
    Arvore* filhoEsquerda;
   
};
#endif