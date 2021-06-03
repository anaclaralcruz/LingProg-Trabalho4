// Autora: Ana Clara Loureiro Cruz
// Data: 03-06-2021

/*  TRABALHO 4 - LING PROG  */
    // Criar um catalogo de gerenciamento de pacientes hospitalares

/* "PacienteGinecologico.h" ------------------------------------------------- */
/* Inicializa a classe PacienteGinecologico */

#include <string>
#include "Paciente.h"

using namespace std;

class PacienteGinecologico: public Paciente {
    public:
        // Construtor
        PacienteGinecologico(string, string, int, string);

        virtual string getInformacaoParticular() const;

    private:
        string metodoContraceptivo;
        
};