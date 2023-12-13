#include "include.h"

typedef struct paciente *Paciente;

// Função para criar um paciente, recebe como parâmetro o número do cartão do SUS, a idade e um vetor de booleanos com os dados do paciente.
void criar_paciente(Paciente *p, int num_sus, int idade, bool dados[10]);

// Função para calcular a prioridade do paciente, recebe como parâmetro o paciente.
void calcular_prioridade(Paciente p);

// Função para recuperar a prioridade do paciente, recebe como parâmetro o paciente.
int get_prioridade(Paciente p);