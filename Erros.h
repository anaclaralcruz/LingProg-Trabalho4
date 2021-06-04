// Autora: Ana Clara Loureiro Cruz
// Data: 03-06-2021

/*  TRABALHO 4 - LING PROG  */
    // Criar um catalogo de gerenciamento de pacientes hospitalares

/* "Erros.h" ------------------------------------------------- */
/* Inicializa Exception errors */

#include <exception>

class PacienteJaCadastradoException : public std::exception {
  virtual const char *what() const throw()
  {
    return "Paciente ja cadastrado.";
  }
};

class PacientNaoEncontradoException : public std::exception {
  virtual const char *what() const throw()
  {
    return "Paciente nao encontrado.";
  }
};