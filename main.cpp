// Autora: Ana Clara Loureiro Cruz
// Data: 15-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Criar um catalogo de gerenciamento de filmes

/* "main.cpp" ------------------------------------------------- */
/* Funcao principal que contem o menu do programa */

#include <exception>
#include <iostream>
#include <string>
#include <limits>

#include "Paciente.h"
#include "Arvore.cpp"
#include "Cadastro.h"
#include "PacienteGinecologico.h"
#include "PacientePediatrico.h"
#include "Erros.h"

using namespace std;

int menuOperacao(){
    int opcaoMenu ;
    cout << endl << endl ;
    cout << "---------- MENU DE OPERACOES -----------" << endl;
    cout << " ______________________________________" << endl;
    cout << "| 1 | Adicionar Paciente Ginecologico  |" << endl;
    cout << "| 2 | Adicionar Paciente Pediatrico    |" << endl;
    cout << "| 3 | Buscar Paciente                  |" << endl;
    cout << "| 4 | Listar Pacientes no cadastro     |" << endl;
    cout << "|                                      |" << endl;
    cout << "| 0 | Sair                             |" << endl;
    cout << "|______________________________________|" << endl;
    cout << "O que deseja? (digite o numero) -> ";
    cin >> opcaoMenu ;
    cin.ignore();
    return opcaoMenu ;
}

int main() {
    Cadastro* cadastro = new Cadastro();
    int input = 5;
    while (input != 0){
        input = menuOperacao();
        switch (input) {
            case 1:{
                string nome, metodo, genero;
                int idade;
                Paciente *paciente;
                cout << "Insira o nome: ";
                getline(cin, nome);
                cout << "Insira a idade: ";
                cin >> idade;
                cout << "Insira o genero: ";
                cin >> genero;
                cout << "Insira o metodo contraceptivo do paciente (1 PALAVRA): ";
                cin >> metodo;
                cin.clear();

                paciente = new PacienteGinecologico(nome, genero, idade, metodo);
                cout << endl << "Adicionando o seguinte paciente: " << endl;
                cout << *paciente << paciente->getInformacaoParticular() << endl;
                try {
                 (*cadastro).insere(paciente);
                }catch(exception &e){
                    cout<<e.what()<<endl;
                } 
                break;
            }
            case 2:{
                string nome, genero, nomeResponsavel;
                int idade;
                Paciente *paciente;
                cout << "Insira o nome: ";
                getline(cin, nome);
                cout << "Insira a idade: ";
                cin >> idade;
                cout << "Insira o genero: ";
                cin >> genero;
                cout << "Insira o nome do responsavel (APENAS O PRIMEIRO NOME): ";
                cin >> nomeResponsavel;

                paciente = new PacientePediatrico(nome, genero, idade, nomeResponsavel);
                cout << endl << "Adicionando o seguinte paciente: " << endl;
                cout << *paciente << paciente->getInformacaoParticular() << endl;
                try{
                 cadastro->insere(paciente);
                }catch(exception &e){
                    cout<<e.what()<<endl;
                } 
               
                break;
            }
            case 3:{
                string nome;
                cout << "Qual o nome do paciente que voce procura? ";
                getline(cin, nome);
                try{
                    cadastro->busca(nome);
                }catch(exception &e){
                    cout<<e.what()<<endl;
                }  
                break;
            }
            case 4:{
                cadastro->imprime();
                break;
            }
            
            case 0:{
                cout<< "Programa Encerado"<< endl;
                return 0;
            }
            default:{
                cout<<"Opcao Inavalida"<<endl;
                break;
            }
            
        }     
    
    }
    return 0;
}