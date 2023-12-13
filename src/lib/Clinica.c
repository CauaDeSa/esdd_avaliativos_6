#include "../include/clinica.h"



int menu(int *cmd)
{

    printf("[1] Cadastrar paciente\n");
    printf("[2] Consultar pacientes cadastrados\n");
    printf("[3] Vacinar paciente\n");
    printf("[4] Consultar pacientes vacinados\n");
    printf("[0] Sair");

    scanf("%d", cmd);
}

void cadastrar(Pacientes list)
{
    int numero_sus;
    int idade;
    int aux;
    bool dados[9] = {false};
    char *tipos[9] = {
        "Trabalhador da área da Saúde",
        "Indígena",
        "Ribeirinho",
        "Quilombola",
        "Trabalha na área da Educação",
        "Tem deficiência severa",
        "Trabalha na área de Segurança",
        "Trabalha em segmento penitenciário",
        "É detento"};

    printf("Numero do SUS: ");
    scanf("%d", &numero_sus);

    printf("Idade: ");
    scanf("%d", &idade);

    for (int i = 0; i < 9; i++)
    {
        printf("%s [(1) Sim - (0) Não] : ", tipos[i]);
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

    queue_init(&pacientes);

    while (!queue_is_empty(list))
    {
        Paciente paciente = dequeue(list);
        snprintf(string, 1000, "%s\n%s", string, to_string_paciente(paciente));
        insert_priority_list(pacientes, paciente);
    }

    while(!queue_is_empty(pacientes)){
        Paciente paciente = dequeue(pacientes);
        insert_priority_list(list, paciente);
    }

    return string;
}

void vacinar(Pacientes list, Pilha vacinados)
{
    Paciente paciente = dequeue(list);
    enqueue(vacinados, paciente);
}

char* consultar_vacinados(Pilha vacinados){
    Pilha aux;
    char *string = (char *)malloc(sizeof(char) * 1000);
    stack_init(&aux);

    while(!stack_is_empty(vacinados)){
        Paciente paciente = pop(vacinados);

        snprintf(string, 1000, "%s\n%s", string, to_string_paciente(paciente));
        push(aux, paciente);
    }

    while(!stack_is_empty(aux)){
        Paciente paciente = pop(aux);
        push(vacinados, paciente);
    }

    return string;
}