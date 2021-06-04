// Autora: Ana Clara Loureiro Cruz
// Data: 30-05-2021

/*  TRABALHO 4 - LING PROG  */
    // Criar um catalogo de gerenciamento de pacientes hospitalares

/* "Paciente.h" ------------------------------------------------- */
/* Inicializa a classe Paciente */
#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>

using namespace std;

class Paciente {
    // Operadores globais
    friend ostream &operator<<(ostream&, Paciente &);

    public:
        // Construtor
        Paciente(string, string, int);

        // Operadores
        bool operator<(Paciente &);
        bool operator>(Paciente &);
        bool operator==(Paciente &);

        string getNome();

        virtual string getInformacaoParticular() const;

    private:
        string nome, genero;
        int idade;
};
#endif