CPP = g++
CPPFLAGS = -Wall

OBJS = main.o Arvore.o Cadastro.o Paciente.o PacienteGinecologico.o PacientePediatrico.o 

trabalho: $(OBJS)
	$(CPP) $(CPPFLAGS) -o $@ $(OBJS)