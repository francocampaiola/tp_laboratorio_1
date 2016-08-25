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

int facValores(int x) //Revisar
{
    int i;
    int fac;
    for(i=1;i<=x;i++)
    {
        fac=x*(x-1);
        i++;
    }
    printf("El factorial del numero %d es %d\n", x, fac);
}

int todValores(int x, int y, int fac)
{
    int re1; //Declaracion de variables extra
    int re2;
    float re3;
    int re4;

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
}

