#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"
#include "funciones.c"

int main()
{
    float num1=0;
    float num2=0;
    float total=0;
    int contador=0;
    char seguir='s';
    int opcion=0;
    int confirma;

    do
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n", num1);
        printf("2- Ingresar 2do operando (B=%.2f)\n", num2);
        printf("3- Calcular la suma (%.2f+%.2f)\n", num1, num2);
        printf("4- Calcular la resta (%.2f-%.2f)\n", num1, num2);
        printf("5- Calcular la division (%.2f/%.2f)\n", num1, num2);
        printf("6- Calcular la multiplicacion (%.2f*%.2f)\n", num1, num2);
        printf("7- Calcular el factorial (%.2f!)\n", num1);
        printf("8- Calcular todas las operaciones disponibles\n");
        printf("9- Salir\n\n");

        printf("** Elija la opcion deseada: ");
        scanf("%d",&opcion);

        while(opcion<1 || opcion>9)
        {
            printf("Error. Opcion no valida. Reingrese: ");
            scanf("%d", &opcion);
        }

        switch(opcion)
        {
            case 1:
                printf("Ingrese primer valor: ");
                scanf("%f", &num1);
                break;
            case 2:
                printf("Ingrese segundo valor: ");
                scanf("%f", &num2);
                break;
            case 3:
                sumaValores(num1, num2);
                system("pause");
                break;
            case 4:
                restaValores(num1, num2);
                system("pause");
                break;
            case 5:
                divValores(num1, num2);
                system("pause");
                break;
            case 6:
                multiValores(num1, num2);
                system("pause");
                break;
            case 7:
                facValores(num1, total, contador);
                system("pause");
                break;
            case 8:
                allValores(num1, num2);
                system("pause");
                break;
            case 9:
                printf("Usted eligio salir. Confirma salir? s/n\n");
                confirma= tolower(getche());
                if (confirma=='s')
                {
                    seguir = 'n';
                }
                break;
        }
        system("cls");
    }while (seguir=='s');

return 0;
}
