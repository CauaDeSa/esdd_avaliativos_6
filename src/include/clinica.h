#include "include.h"
#include "paciente.h"
#include "queue.h"
#include "stack.h"

// Função responsável por exibir o menu principal, permitindo a escolha de uma opção e chamanado a função correspondente.
int menu(int*);

// Função responsável por exibir o menu de cadastro.
void cadastrar();

// Função responsável por exibir os pacientes cadastrados.
char* consultar(Pacientes list);

// Função responsável por exibir os pacientes já vacinados.
char* consultar_vacinados(Pilha vacinados);

// Função responsável por exibir os pacientes vacinados.
void vacinar(Pacientes list, Pilha vacinados);