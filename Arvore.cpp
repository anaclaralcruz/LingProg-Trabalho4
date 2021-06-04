// Autora: Ana Clara Loureiro Cruz
// Data: 30-05-2021

/*  TRABALHO 4 - LING PROG  */
    // Criar um catalogo de gerenciamento de pacientes hospitalares

/* "Arvore.cpp" ------------------------------------------------- */
/* Contem os metodos referentes a classe Arvore */

#ifndef ARVORE_CPP
#define ARVORE_CPP

#include "Arvore.h"

using namespace std ;

// Operador de impressao
template<class O>
ostream &operator<<(ostream &output, const Arvore<O> &arvore){
  if (arvore.filhoEsquerda != NULL){
    output<<(*arvore.filhoEsquerda);
  }
  output << *arvore.no;
  if (arvore.filhoDireita != NULL){
    output << (*arvore.filhoDireita);
  }
  return output;
}

// Construtor
template <class T>
Arvore<T>::Arvore(T* n , Arvore<T>* ponteiroDireita , Arvore<T>* ponteiroEsquerda) {
  this->no = n;
  this->filhoDireita = ponteiroDireita;
  this->filhoEsquerda = ponteiroEsquerda;
}

// Destrutor
/*template <class T>
Arvore<T>::~Arvore() {
  delete filhoEsquerda;
  delete filhoDireita;
  delete no;
} */

// Operador de adicao
template <class T>
Arvore<T>* Arvore<T>::operator+=(T* novoNo) {
  if (novoNo->getNome() > this->no->getNome()) {
    if (filhoDireita == NULL){
      filhoDireita = new Arvore<T>(novoNo, NULL, NULL);
      return filhoDireita;
    }
    return (*filhoDireita)+=novoNo;
  }

  if (novoNo->getNome() < this->no->getNome()) {
    if (filhoEsquerda == NULL) {
      filhoEsquerda = new Arvore<T>(novoNo, NULL, NULL);
      return filhoEsquerda;
    }
    return (*filhoEsquerda) += novoNo;
  }
  
  return NULL;
}

// Operador de busca
template <class T>
Arvore<T>* Arvore<T>::operator()(string nome) {
  if (nome < this->getNomeDoNo()){
    if (!filhoEsquerda)
      return NULL;
    return (*filhoEsquerda)(nome);
  }
  if (nome > this->getNomeDoNo()){
    if (!filhoDireita)
      return NULL;
    return (*filhoDireita)(nome);
  }
  if (nome == this->getNomeDoNo())
    return this;
  return NULL;
}

// Devolver o no
template <class T>
T* Arvore<T>::getNo() {
  return this->no;
}

// Descobrir nome do no
template <class T>
string Arvore<T>::getNomeDoNo() {
  return this->no->getNome();
}
#endif