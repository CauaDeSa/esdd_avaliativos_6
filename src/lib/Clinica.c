#include "../include/clinica.h"



int menu(int *cmd)
{

    printf("[1] Cadastrar paciente\n");
    printf("[2] Consultar pacientes cadastrados\n");
    printf("[3] Vacinar paciente\n");
    printf("[4] Consultar pacientes vacinados\n");
    printf("[0] Sair\n");

    scanf("%d", cmd);
}

void cadastrar(Pacientes list)
{
    int numero_sus;
    int idade;
    int aux;
    bool dados[9] = {false};
    char *tipos[9] = {
        "Trabalhador da area da Saude",
        "Indigena",
        "Ribeirinho",
        "Quilombola",
        "Trabalha na area da Educacao",
        "Tem deficiencia severa",
        "Trabalha na area de Seguranca",
        "Trabalha em segmento penitenciario",
        "Eh detento"};

    printf("Numero do SUS: ");
    scanf("%d", &numero_sus);

    printf("Idade: ");
    scanf("%d", &idade);

    for (int i = 0; i < 9; i++)
    {
        printf("%s [(1) Sim - (0) Nao] : ", tipos[i]);
        scanf("%d", &aux);
        dados[i] = (aux == 1) ? true : false;
    }

    Paciente paciente;
    criar_paciente(&paciente, numero_sus, idade, dados);
    
    insert_priority_list(list, paciente);
}

char* consultar(Pacientes list)
{
    Pacientes pacientes;
    char *string = (char *)malloc(sizeof(char) * 1000);
    snprintf(string, 1000, "");

    init_queue(&pacientes);
    while (!is_empty_queue(list))
    {
        Paciente paciente = dequeue(list);
        snprintf(string, 1000, "%s\n%s", string, to_string_paciente(paciente));
        insert_priority_list(pacientes, paciente);
    }

    while(!is_empty_queue(pacientes)){
        Paciente paciente = dequeue(pacientes);
        insert_priority_list(list, paciente);
    }

    return string;
}

void vacinar(Pacientes list, Pilha vacinados)
{
    Paciente paciente = dequeue(list);
    push(vacinados, paciente);
}

char* consultar_vacinados(Pilha vacinados){
    Pilha aux;
    char *string = (char *)malloc(sizeof(char) * 1000);
    init_stack(&aux);

    while(!is_empty_stack(vacinados)){
        Paciente paciente = pop(vacinados);

        snprintf(string, 1000, "%s\n%s", string, to_string_paciente(paciente));
        push(aux, paciente);
    }

    while(!is_empty_stack(aux)){
        Paciente paciente = pop(aux);
        push(vacinados, paciente);
    }

    return string;
}