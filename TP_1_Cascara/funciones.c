#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float sumaValores (float x, float y) //Suma
{
    float re;
    re=x+y;
    printf("La suma entre %.2f y %.2f es %.2f\n", x, y, re);
    return re;
}

float restaValores(float x, float y)
{
    float re;
    re=x-y;
    printf("La resta entre %.2f y %.2f es %.2f\n", x, y, re);
    return re;
}

float divValores(float x, float y) // Divison
{
    float re;
    while (y==0)
    {
        printf("La division por 0 no esta permitida. Reingrese unicamente el segundo valor:");
        scanf("%f", &y);
    }
    re=x/y;
    printf("La division entre %.2f y %.2f es %.2f\n", x, y, re);
    return re;
}

float multiValores(float x, float y) // Multiplicacion
{
    float re;
    re=x*y;
    printf("La multiplicacion entre %.2f y %.2f es %.2f\n", x, y, re);
    return re;
}

float facValores(float x, double total, int contador)// Factorial
{
    contador=1;
    total=1;

    while(contador<=x)
    {
        total=total*contador;
        contador++;
    }

    printf("El factorial del numero %.2f es %f\n", x, total);
    return total;
}

float allValores(float x, float y)
{
     float total=1;
     int contador=1;

     sumaValores (x, y);
     restaValores(x, y);
     divValores(x, y);
     multiValores(x, y);
     facValores(x, total, contador);
     return total;
}
