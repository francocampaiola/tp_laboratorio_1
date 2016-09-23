#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"

int main()
{
    ePersona personas[20];
    char seguir='s';
    int confirma;

    inicializarPersonas(personas, 20);

    do
    {
            switch(menu())
        {
            case 1:
                altaPersonas(personas, 20);
                system("pause");
                break;
            case 2:
                borrarPersona(personas, 20);
                break;
            case 3:
                printf("\n                               :: LISTADO ORDENADO ALFABETICAMENTE ::\n\n");
                ordenarPersonas(personas, 20);
                mostrarPersonas(personas, 20);
                system("pause");
                break;
            case 4:
                grafico(personas, 20);
                system("pause");
                break;
            case 5:
                printf("Usted eligio salir. Desea salir? s/n\n");
                confirma=tolower(getch());
                if (confirma=='s')
                {
                    seguir='n';
                    system("pause");
                    break;
                }
        }
        system("cls");
    }while(seguir=='s');

    return 0;
}
