#include "include.h"
#include "paciente.h"

// Estrutura de dados para a pilha.
typedef struct stack *Pilha;

// Estrutura de dados para o nó da pilha.
typedef struct node *Node;

// Função para inicializar a pilha.
void init_stack(Pilha *p);

// Função para verificar se a pilha de vacinados está cheia.
bool is_full_stack(Pilha p);

// Função para verificar se a pilha de vacinados está vazia.
bool is_empty_stack(Pilha p);

// Função para inserir um paciente na pilha de vacinados.
void push(Pilha p, Paciente novo_paciente);

// Função para remover um paciente da pilha de vacinados.
Paciente pop(Pilha p);