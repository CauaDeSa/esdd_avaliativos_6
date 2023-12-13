#include "../include/clinica.h"
#include "../include/paciente.h"
#include "../include/queue.h"

void init_clinica()
{
    int cmd;

    do {
        
        menu(&cmd);

        switch (cmd){
        case 0:
            printf("Saindo...\n");
            break;
        case 1:
            cadastrar();
            break;
        case 2:
            consultar();
            break;
        default:
            printf("Comando inválido\n");
            break;
        }

    } while (cmd != 0);
    
}

int menu(int *cmd)
{

    printf("[0] Sair");
    printf("[1] Cadastrar paciente\n");
    printf("[2] Consultar pacientes cadastrados\n");
    // implementar outras funcoes

    scanf("%d", cmd);
}

void cadastrar()
{
    int numero_sus;
    int idade;
    int aux;
    bool dados[10] = {false};
    char *tipos[10] = {
        "Trabalhador da área da Saúde",
        "Indígena",
        "Ribeirinho",
        "Quilombola",
        "Trabalha na área da Educação",
        "Tem deficiência severa",
        "Trabalha na área de Segurança",
        "Trabalha em segmento penitenciário",
        "É detento"
    };

    printf("Numero do SUS: ");
    scanf("%d", &numero_sus);

    printf("Idade: ");
    scanf("%d", &idade);

    for (int i = 0; i < 10; i++)
    {
        printf("%s [(1) Sim - (0) Não] : ", tipos[i]);
        scanf("%d", &aux);
        dados[i] = (aux == 1) ? true : false;
    }

    Paciente paciente;
    criar_paciente(&paciente, numero_sus, idade, dados);

    enqueue(paciente);
    // implementar um cadastro e pôr na fila
}

//     Ordem de prioridade
//     1 Trabalhadores da saúde
//     2 Idosos (idade acima de 60 anos)
//     3 População indígena
//     4 População ribeirinha e quilombola
//     5 Grupo com comorbidades
//     6 Trabalhadores da educação
//     7 Pessoas com deficiência permanente severa
//     8 Força de segurança e salvamento
//     9 Funcionários do sistema penitenciário
//     10 População privada de liberdade