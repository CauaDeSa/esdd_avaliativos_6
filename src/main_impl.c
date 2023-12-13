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
    scanf("%d", &numeroSus)

}


//     Questionario
//     Número SUS: xxxxxxxxxxx
//     Idade em anos: xxx
//     Traba. saúde: ( ) SIM ( ) NÃO
//     Indígena: ( ) SIM ( ) NÃO
//     Ribeirinho: ( ) SIM ( ) NÃO
//     Quilombola: ( ) SIM ( ) NÃO
//     Traba. Educação: ( ) SIM ( ) NÃO
//     Deficiência Severa: ( ) SIM ( ) NÃO
//     Força Segurança: ( ) SIM ( ) NÃO
//     Traba. Penitenciário: ( ) SIM ( ) NÃO
//     Detento: ( ) SIM ( ) NÃO

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