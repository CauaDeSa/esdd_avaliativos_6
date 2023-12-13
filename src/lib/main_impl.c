#include "main.h"

int menu(){
    int cmd;

    printf("[0] Sair");
    printf("[1] Cadastrar paciente\n");
    printf("[2] Consultar pacientes cadastrados\n");
    //implementar outras funcoes

    scanf("%d", &cmd);

    return cmd;
}

void cadastrar(){
    int numeroSus;
    int idade;
    int aux;
    bool trabSaude;
    bool isIndigena;
    bool isRibeirinho;
    bool isQuilombola;
    bool trabEducacao;
    bool temDeficienciaSevera;
    bool forcaSeguranca;
    bool trabPenitenciaria;
    bool isDetento;

    printf("Numero do SUS: ");
    scanf("%d", &numeroSus);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Trabalhador da area da Saúde [(1) Sim - (0) Não] : ");
    scanf("%d", &aux);

    trabSaude = (aux == 1) ? true : false; 

    printf("E indígena [(1) Sim - (0) Não] : ");
    scanf("%d", &aux);

    isIndigena = (aux == 1) ? true : false; 

    printf("E ribeirinho [(1) Sim - (0) Não] : ");
    scanf("%d", &aux);

    isRibeirinho = (aux == 1) ? true : false; 

    printf("E quilombola [(1) Sim - (0) Não] : ");
    scanf("%d", &aux);

    isQuilombola = (aux == 1) ? true : false; 

    printf("Trabalha na area da educacao [(1) Sim - (0) Não] : ");
    scanf("%d", &aux);

    trabEducacao = (aux == 1) ? true : false; 

    printf("Tem deficiência severa [(1) Sim - (0) Não] : ");
    scanf("%d", &aux);

    temDeficienciaSevera = (aux == 1) ? true : false; 

    printf("Trabalha na area da seguranca [(1) Sim - (0) Não] : ");
    scanf("%d", &aux);

    forcaSeguranca = (aux == 1) ? true : false; 

    printf("Trabalha em segmento penitenciario [(1) Sim - (0) Não] : ");
    scanf("%d", &aux);

    trabPenitenciaria = (aux == 1) ? true : false; 

    printf("E detento [(1) Sim - (0) Não] : ");
    scanf("%d", &aux);

    isDetento = (aux == 1) ? true : false; 

    //implementar um cadastro e pôr na fila
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