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
    int opcion=0;
    int i;
    int confirma;
    int auxiliar;
    int contador=0;

    for (i=0;i<20;i++)
    {
        personas[i].estado=0;
    }

    do
    {
        printf("1- Agregar persona.\n");
        printf("2- Borrar persona.\n");
        printf("3- Imprimir lista ordenada por nombre.\n");
        printf("4- Imprimir grafico de edades.\n");
        printf("5- Salir del programa.\n");

        printf("\n** Elija una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("\n                        :: Ingreso de datos ::\n\n");
                //printf("Array: %d\n", personas[i].estado);
                printf("Ingrese el nombre: ");
                fflush(stdin);
                gets(personas[contador].nombre);

                printf("Ingrese la edad: ");
                fflush(stdin);
                scanf("%d", &personas[contador].edad);

                printf("Ingrese el DNI: ");
                fflush(stdin);
                scanf("%d", &personas[contador].dni);

                personas[contador].estado=1;
                //printf("Array: %d\n", personas[i].estado);
                contador++;

                printf("Carga efectuada con exito. Volvera al menu principal.\n");
                system("pause");
                break;
            case 2:
                printf("Ingrese el DNI de la persona a borrar: ");
                fflush(stdin);
                scanf("%d", &auxiliar);

                for (i=0;i<20;i++)
                {
                    if (personas[i].dni==auxiliar)
                    {
                        printf("El usuario '%s' ha sido borrado.\n", personas[i].nombre);
                        personas[i].estado=0;
                        break;
                    }
                }
                system("pause");
                break;
            case 3:
                printf("\n                        :: Listado ordenado alfabeticamente ::\n\n");
                ordenarPersonas(personas);
                mostrarPersonas(personas);
                system("pause");
                break;
            case 4:
                break;
            case 5:
                printf("Usted eligio salir. Desea salir? s/n: \n");
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
