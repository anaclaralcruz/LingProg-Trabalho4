// Autora: Ana Clara Loureiro Cruz
// Data: 30-05-2021

/*  TRABALHO 4 - LING PROG  */
    // Criar um catalogo de gerenciamento de pacientes hospitalares

/* "Paciente.h" ------------------------------------------------- */
/* Inicializa a classe Paciente */

#include <string>

using namespace std;

class Paciente {
    public:
        // Construtor
        Paciente(string, string, int);

        // Operadores
        bool operator<(Paciente &);
        bool operator>(Paciente &);
        bool operator==(Paciente &);

        string getNome();

    private:
        string nome, genero;
        int idade;
};