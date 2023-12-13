#include "include.h"

// Estrutura de dados para a fila de pacientes.
typedef struct queue *Pacientes;

// Estrutura de dados para o nó da fila de pacientes.
typedef struct node *Node;

// Função para inicializar a fila de pacientes.
void init_queue(Pacientes *list);

// Função para verificar se a fila está cheia.
bool isFull(Pacientes list);

// Função para verificar se a fila está vazia.
bool isEmpty(Pacientes list);

// Função para inserir um paciente prioritariamente na fila de pacientes.
void insert_priority_list(Pacientes list, Paciente novo_paciente);

// Função para remover um paciente da fila de pacientes.
Paciente dequeue(Pacientes list);