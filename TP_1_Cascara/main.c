#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"
#include "funciones.c"

int main() //Principal
{
    int num1=0;
    int num2=0;
    float total=0;
    int contador=0;
    char seguir='s';
    int opcion;
    int confirma;

    do{
        printf("1- Ingrese el primer numero (%d):\n", num1);
        printf("2- Ingrese el segundo numero (%d):\n", num2);
        printf("3- Calcular la suma (%d+%d)\n", num1, num2);
        printf("4- Calcular la resta (%d-%d)\n", num1, num2);
        printf("5- Calcular la division (%d/%d)\n", num1, num2);
        printf("6- Calcular la multiplicacion (%d*%d)\n", num1, num2);
        printf("7- Calcular el factorial del primer numero (%d!)\n", num1);
        printf("8- Calcular todas las operaciones (suma, resta, mulitplicacion, division, y factorial)\n");
        printf("9- Salir\n\n");

        printf("Elija la opcion que desee: ");
        scanf("%d",&opcion);

        while (opcion<1 || opcion>9)
        {
            printf("Error. Opcion no valida. Reingrese: ");
            scanf("%d", &opcion);
        }
            switch(opcion)
            {
            case 1:
                printf("Ingrese primer valor: ");
                scanf("%d", &num1);
                break;
            case 2:
                printf("Ingrese segundo valor: ");
                scanf("%d", &num2);
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
                todValores(num1, num2);
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
    }while(seguir=='s');
return 0;
}

