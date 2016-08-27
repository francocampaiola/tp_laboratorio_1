#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

//prototipos
int sumaValores(int x, int y);
int restaValores(int x, int y);
int divValores(int x, int y);
int multiValores(int x, int y);
int facValores (int num1, float total, int contador);

int main() //principal
{
    int num1;
    int num2;
    float total;
    int contador;
    char seguir='s';
    int opcion=0;

    printf("Ingrese el primer valor: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &num2);

    while(seguir=='s')
    {
        printf("1- Calcular la suma (%d+%d)\n", num1, num2);
        printf("2- Calcular la resta (%d-%d)\n", num1, num2);
        printf("3- Calcular la division (%d/%d)\n", num1, num2);
        printf("4- Calcular la multiplicacion (%d*%d)\n", num1, num2);
        printf("5- Calcular el factorial del primer numero (%d!)\n", num1);
        printf("6- Calcular todas las operaciones (suma, resta, mulitplicacion, division, y factorial)\n");
        printf("7- Salir\n\n");

        printf("Elija un numero segun la opcion que desee: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                sumaValores(num1, num2);
                system("pause");
                break;
            case 2:
                restaValores(num1, num2);
                system("pause");
                break;
            case 3:
                divValores(num1, num2);
                system("pause");
                break;
            case 4:
                multiValores(num1, num2);
                system("pause");
                break;
            case 5:
                facValores(num1, total, contador);
                system("pause");
                break;
            case 6:
                todValores(num1, num2);
                system("pause");
                break;
            case 7:
                printf("Usted eligio salir\n");
                system("pause");
                seguir = 'n';
                break;
        }

    return 0;
    }
}
