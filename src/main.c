#include "./include/include.h"
#include "./include/clinica.h"

int main()
{
    Pacientes list;
    Pilha vacinados;
    char *string;

    int cmd;

    init_queue(&list);
    init_stack(&vacinados);

    do {
        
        menu(&cmd);

        switch (cmd){
        case 0:
            printf("Saindo...\n");
            break;
        case 1:
            cadastrar(list);
            break;
        case 2:
            string = consultar(list);

            printf("----- FILA -----\n");
            printf("%s\n", string);
            printf("----------------\n");

            break;
        case 3:
            vacinar(list, vacinados);
            break;

        case 4: 
            string = consultar_vacinados(vacinados);

            printf("----- PILHA -----\n");
            printf("%s\n", string);
            printf("-----------------\n");

            break;

        default:
            printf("Comando inválido\n");
            break;
        }

    } while (cmd != 0);

    return 0;
}