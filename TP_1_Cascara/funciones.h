#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#endif

int sumaValores(int x, int y) //Suma
{
    int re;
    re=x + y;
    printf("La suma entre %d y %d es %d\n", x, y, re);
}

int restaValores(int x, int y) //Resta
{
    int re;
    re=x - y;
    printf("La resta entre %d y %d es %d\n", x, y, re);
}

int divValores(int x, int y) // Divison
{
    float re;
    while (y==0)
    {
        printf("La division por 0 no esta permitida. Reingrese UNICAMENTE el segundo valor:");
        scanf("%d", &y);
    }
    re=(float)x/y;
    printf("La division entre %d y %d es %.f\n", x, y, re);
}

int multiValores(int x, int y) // Multiplicacion
{
    int re;
    re=x * y;
    printf("La multiplicacion entre %d y %d es %d\n", x, y, re);
}

int facValores(int i, float total, int contador)// Factorial
{
    contador=1;
    total=1;

    while(contador<=i)
    {
        total=total*contador;
        contador++;
    }

    printf("El factorial del numero %d es %.1f\n", i, total);
}

int todValores(int x, int y)
{
    int re1; //Declaracion de variables extra
    int re2;
    float re3;
    int re4;
    int re5;
    float total=1;
    int contador=1;

    re1=x + y;//suma
    printf("La suma entre %d y %d es %d\n", x, y, re1);

    re2=x - y;//resta
    printf("La resta entre %d y %d es %d\n", x, y, re2);

    while (y==0)//validacion de 0
    {
    printf("La division por 0 no esta permitida. Reingrese UNICAMENTE el segundo valor:");
    scanf("%d", &y);
    }
    re3=(float)x/y; //division
    printf("La division entre %d y %d es %.2f\n", x, y, re3);

    re4=x * y; //multiplicacion
    printf("La multiplicacion entre %d y %d es %d\n", x, y, re4);

    while(contador<=x) //factorial
    {
        total=total*contador;
        contador++;
    }
    printf("El factorial del numero %d es %.1f\n", x, total);
}

