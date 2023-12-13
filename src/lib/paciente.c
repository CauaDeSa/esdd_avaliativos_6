#include "../include/paciente.h"

struct paciente
{
    int num_sus;
    int idade;
    int prioridade;
    int dados[9];
};

void criar_paciente(Paciente *p, int num_sus, int idade, bool dados[])
{
    *p = malloc(sizeof(struct paciente));
    (*p)->num_sus = num_sus;
    (*p)->idade = idade;
    (*p)->prioridade = 0;


    for (int i = 0; i < 9; i++)
    {
        (*p)->dados[i] = dados[i];
    }

    calcular_prioridade(*p);
}

void calcular_prioridade(Paciente p)
{

    int i = 0;
    while (p->prioridade != i){
        i++;

        if (i == 1){
            if (p->dados[i] == true) {
                p->prioridade = i;
            } else if (p->idade >= 60) {
                i++;
                p->prioridade = i;
            } else {
                i++;
            }
        } else {
            if (p->dados[i] == true) {
                p->prioridade = i;
            }
        }
    }
}

int get_prioridade(Paciente p)
{
    return p->prioridade;
}

char* to_string_paciente(Paciente p)
{
    char *string = malloc(sizeof(char) * 100);

    sprintf(string, "Número do SUS: %d\nIdade: %d\nPrioridade: %d\n", p->num_sus, p->idade, p->prioridade);

    return string;
}