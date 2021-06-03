// Autora: Ana Clara Loureiro Cruz
// Data: 30-05-2021

/*  TRABALHO 4 - LING PROG  */
    // Criar um catalogo de gerenciamento de pacientes hospitalares

/* "Arvore.cpp" ------------------------------------------------- */
/* Contem os metodos referentes a classe Arvore */

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
Arvore<T>::Arvore(T* n , Arvore* ponteiroDireita , Arvore* ponteiroEsquerda) {
  this->no = n;
  this->filhoDireita = ponteiroDireita;
  this->filhoEsquerda = ponteiroEsquerda;
}

// Destrutor
template <class T>
Arvore<T>::~Arvore() {
  delete filhoEsquerda;
  delete filhoDireita;
  delete no;
}

// Operador de adicao
template <class T>
Arvore<T>* Arvore<T>::operator+=(T* novoNo) {
  if (this->no == NULL) {
    this->no = novoNo;
    return this;
  }
  if (novoNo > this->no) {
    if (filhoDireita == NULL){
      filhoDireita = new Arvore<T>(novoNo, NULL, NULL);
      return filhoDireita;
    }
    return (*filhoDireita)+=novoNo;
  }

  if (novoNo < this->no) {
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
    return filhoEsquerda ? (*filhoDireita)(nome) : NULL;
  }
  if (nome > this->getNomeDoNo()){
    return filhoDireita ? (*filhoDireita)(nome) : NULL;
  }
  return this;
}

// Descobrir nome do no
template <class T>
string Arvore<T>::getNomeDoNo() {
  return this->no->getNome();
}