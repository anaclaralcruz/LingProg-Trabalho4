// Autora: Ana Clara Loureiro Cruz
// Data: 15-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Criar um catalogo de gerenciamento de filmes

/* "main.cpp" ------------------------------------------------- */
/* Funcao principal que contem o menu do programa */

#define OK                      0
#define ERRO                    1

#include <iostream>

#include "Cadastro.h"
#include "Arvore.cpp"
#include "PacienteGinecologico.h"
#include "PacientePediatrico.h"

using namespace std ;

int main (){
    
    Paciente* caca = new Paciente ("Ana Clara", "F", 21);
    Paciente* prim = new Paciente ("Adriano", "F", 10);
    Paciente* jose = new Paciente ("Joelson", "M", 23);
    Paciente* bruno = new Paciente ("Bruno", "M", 100);

    //Arvore<Paciente>* arvoreDePacientes = new Arvore<Paciente>(caca,NULL,NULL);
    Cadastro cadastro (caca);
    //cout << arvoreDePacientes << endl;
    //cout << "Maria Helena: " << arvoreDePacientes.getNomeDireito() << endl;
    //cout << "NULL: " << arvoreDePacientes.getNomeEsquerdo() << endl; 

    cadastro.insere(jose);
    cadastro.insere(prim);
    cadastro.insere(bruno);

    cout << cadastro.insere(bruno) << endl;
  //  cadastro.imprime();

    cout << cadastro.busca("Ana") << endl;


    //cadastro.busca("Ana");




    //cout << "0\n" ;

    //Paciente *paciente1;
    //Paciente *paciente2;
    //paciente1 = new PacienteGinecologico("Ana Clara", "F", 21, "pilula");
    //paciente2 = new PacientePediatrico("Ana Clara", "F", 21, "Patricia");
    //paciente = &pacienteGinecologico;
    //Paciente caca = new PacienteGinecologico("Ana Clara", "F", 21, "pilula");
   // PacienteGinecologico* dede = new PacienteGinecologico ("Maria Helena", "F", 23, "coito interrompido");
   // PacienteGinecologico* patr = new PacienteGinecologico ("Patricia", "F", 56, "diafragma");
   // PacienteGinecologico* edua  = new PacienteGinecologico ("Eduardo", "M", 57, "camisinha");

    //cout << "1\n" ;

    //cout << paciente1->getInformacaoParticular() << endl;
    //cout << paciente2->getInformacaoParticular() << endl;
    //Arvore <PacienteGinecologico> arvoreDePacientes(caca, NULL, NULL);


    //arvoreDePacientes += caca ;
    //arvoreDePacientes += dede ;
    //arvoreDePacientes += patr ;
    //arvoreDePacientes += edua ;

    //cout << arvoreDePacientes ;
    //cout << "Ana Clara: " << arvoreDePacientes.getNomeDoNo() << endl;
    //cout << "Maria Helena: " << arvoreDePacientes.getNomeDireito() << endl;
    //cout << "NULL: " << arvoreDePacientes.getNomeEsquerdo() << endl;
    //cout << "PATRICIA:" << (arvoreDePacientes("Patricia") ? arvoreDePacientes("Patricia")->getNomeDoNo() : "NULL")<< endl;

    cout << endl;
}