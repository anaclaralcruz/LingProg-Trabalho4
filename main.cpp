// Autora: Ana Clara Loureiro Cruz
// Data: 15-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Criar um catalogo de gerenciamento de filmes

/* "main.cpp" ------------------------------------------------- */
/* Funcao principal que contem o menu do programa */

#define OK                      0

#include <iostream>

#include "Arvore.cpp"

using namespace std ;

int main (){

    cout << "0\n" ;

    Paciente* caca = new Paciente ("Ana Clara", "F", 21);
    Paciente* dede = new Paciente ("Maria Helena", "F", 23);
    Paciente* patr = new Paciente ("Patricia", "F", 56);
    Paciente* edua  = new Paciente ("Eduardo", "M", 57);

    cout << "1\n" ;

    Arvore <Paciente> arvoreDePacientes(caca, NULL, NULL);


    arvoreDePacientes += caca ;
    arvoreDePacientes += dede ;
    arvoreDePacientes += patr ;
    arvoreDePacientes += edua ;

    //cout << arvoreDePacientes ;
    //cout << "Ana Clara: " << arvoreDePacientes.getNomeDoNo() << endl;
    //cout << "Maria Helena: " << arvoreDePacientes.getNomeDireito() << endl;
    //cout << "NULL: " << arvoreDePacientes.getNomeEsquerdo() << endl;
    cout << "PATRICIA:" << (arvoreDePacientes("Patricia") ? arvoreDePacientes("Patricia")->getNomeDoNo() : "NULL")<< endl;

    cout << endl;
}