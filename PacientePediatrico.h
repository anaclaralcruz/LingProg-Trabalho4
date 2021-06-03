// Autora: Ana Clara Loureiro Cruz
// Data: 03-06-2021

/*  TRABALHO 4 - LING PROG  */
    // Criar um catalogo de gerenciamento de pacientes hospitalares

/* "PacientePediatrico.h" ------------------------------------------------- */
/* Inicializa a classe PacientePediatrico */

#include <string>
#include "Paciente.h"

using namespace std;

class PacientePediatrico: public Paciente {
    public:
        // Construtor
        PacientePediatrico(string, string, int, string);

        virtual string getInformacaoParticular() const;

    private:
        string nomeDoResponsavel;
        
};