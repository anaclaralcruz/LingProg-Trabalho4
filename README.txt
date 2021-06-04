Autora: Ana Clara Loureiro Cruz
UFRJ - DEL - ENGENHARIA ELETRONICA E DE COMPUTACAO
Trabalho de Ling Prog
Programa feito em c++

------------------------- PROJETO PARA IMPLEMENTAR UM CADASTRO DE PACIENTES -----------------------------

Este programa tem como objetivo gerir um registro de pacientes.
No menu, estao seguintes funcionalidades:
1. Adicionar um paciente;
2. Buscar um paciente;
3. Listar os pacientes.

--------------------------------------- MANUAL DO PROGRAMA ---------------------------------------------

ULTILIZACAO
    - Abrir pasta
    - Compilar e linkeditar o programa usando o comando "make"
    - Inicializar o executavel "./trabalho"
    (um menu aparecera na tela com as opcoes)
    - insira o numero correspondente a opcao que deseja, o resultado aparecera na tela.

DADOS:
    Os dados serao zerados toda vez que o progrma for fechado.

------------------------------------------- IMPLEMENTACAO ---------------------------------------------
O cadastro guarda as informacoes em uma arvore binaria (implementada na classe Arvore), que funciona
como uma classe template, ou seja, podemos guardar objetos de diferentes tipos em seu corpo.
Cada paciente eh inserido com atributos globais de uma classe base (classe Paciente). Seus atributos
podem ser extendidos de acordo com a necessidade do usuario. Nesta pasta, ha 2 exemplos de pacientes 
especificos que podem ser adicionados ao cadastro (implementados nas classes PacienteGinecologico e
PacientePediatrico, usando o conceito de Polimorfismo).
Neste programa, ainda, fez-se o uso da classe Exception para tratamento de erros.

---------------------------------------------- ARQUIVOS -----------------------------------------------

"Arvore.cpp"                    Contem os metodos referentes a classe Template Arvore<T>
"Arvore.h"                      Inicializa a classe Template Arvore<T>
"Cadastro.cpp"                  Contem os metodos referentes a classe Cadastro
"Cadastro.h"                    Inicializa a classe Cadastro
"Erros.h"                       Contem as implementacoes das funcoes utilizando a classe <Exception>
"Paciente.cpp"                  Contem os metodos referentes a classe base Paciente
"Paciente.h"                    Inicializa a classe base Paciente
"PacienteGinecologico.cpp"      Contem os metodos referentes a classe PacienteGinecologico
"PacienteGinecologico.h"        Inicializa a classe PacienteGinecologico
"PacientePediatrico.cpp"        Contem os metodos referentes a classe PacientePediatrico
"PacientePediatrico.h"          Inicializa a classe PacientePediatrico
"main.cpp"                      Programa principal que contem o menu do programa
"Makefile"                      Realiza a compilacao e linkedicao do programa