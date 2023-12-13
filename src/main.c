#include "main.h"

int main()
{
    int cmd;

    printf("----- Sistema de Operacionalização da Vacinação contra a Covid-19 -----\n");
    
    cmd = menu();

    while (cmd != 0){

        switch (cmd)
        {
        case 1:
            cadastrar();
            break;
        
        default:
            break;
        }
    }

    return 0;
}