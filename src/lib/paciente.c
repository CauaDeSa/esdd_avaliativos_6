#include "../include/paciente.h"

struct paciente {
    int num_sus;
    int idade;
    int prioridade;
    int dados[9];
};

void criar_paciente(Paciente* p, int num_sus, int idade, bool dados[])
{
    *p = malloc(sizeof(struct paciente));
    (*p)->num_sus = num_sus;
    (*p)->idade = idade;
    (*p)->prioridade = -2;

    for (int i = 0; i < 9; i++) {
        (*p)->dados[i] = dados[i];
    }

    calcular_prioridade(*p);
}

void calcular_prioridade(Paciente p)
{

    int i = 0;
    bool find = false;

    if (p->idade >= 60) {
        if (p->dados[0] == true) {
            p->prioridade = 1;
            find = true;
        } else {
            p->prioridade = 2;
            find = true;
        }
    } else {
        while (!find && i < 10) {
            if (i == 1) {
                if (p->dados[i] == true) {
                    i++;
                    p->prioridade = i+1;
                    find = true;
                } else {
                    i++;
                }
            } else {
                if (p->dados[i] == true) {
                    p->prioridade = i+1;
                    find = true;
                }

                i++;
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
    char* string = malloc(sizeof(char) * 100);

    sprintf(string, "Numero do SUS: %d\nIdade: %d\nPrioridade: %d\n", p->num_sus, p->idade, p->prioridade);

    return string;
}