#include "../include/stack.h"

struct node
{
    Paciente paciente;
    Node next;
};

struct stack
{
    int size;
    Node top;
};

void init_stack(Pilha *p)
{
    *p = malloc(sizeof(struct stack));
    (*p)->size = 0;
    (*p)->top = NULL;
}

bool is_full_stack(Pilha p)
{
    return false;
}

bool is_empty_stack(Pilha p)
{
    return p->top == NULL;
}

void push(Pilha p, Paciente novo_paciente)
{
    if (p != NULL)
    {
        Node new_node = malloc(sizeof(struct node));
        new_node->paciente = novo_paciente;

        if (p->top == NULL)
        {
            //Lista vazia, insere o nó na lista e altera o next para NULL.
            new_node->next = NULL;
            p->top = new_node;
        }
        else
        {
            //Insere o novo antes do walker.
            new_node->next = p->top;
            p->top = new_node;
        }
        p->size++;
    }
}

Paciente pop(Pilha p)
{
    if (p != NULL && p->top != NULL)
    {
        Node walker = p->top;
        p->top = walker->next;
        p->size--;
        return walker->paciente;
    }
    return NULL;
}