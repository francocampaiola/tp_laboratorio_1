#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"

int menu()
{
    int opcion;
    printf("\n                                           :: MENU DE OPCIONES ::\n");
    printf("1- Agregar persona.\n");
    printf("2- Borrar persona.\n");
    printf("3- Imprimir lista ordenada por nombre.\n");
    printf("4- Imprimir grafico de edades.\n");
    printf("5- Salir del programa.\n");

    printf("\n** Elija una opcion: ");
    scanf("%d",&opcion);
    if (opcion<1 || opcion>5)
    {
        printf("Opcion no valida. Debe estar entre 1 y 5.\n");
        system("pause");
    }
    return opcion;
}

void ordenarPersonas (ePersona x[], int tam)
{
    int i;
    int j;
    ePersona aux;

     for (i=0;i<tam-1;i++)
                {
                    for (j=i+1;j<tam;j++)
                        {
                       if (strcmp(x[i].nombre, x[j].nombre)>0)
                            {
                                aux=x[i];
                                x[i]=x[j];
                                x[j]=aux;
                            }
                        }
                }
}

void mostrarPersonas(ePersona x[], int tam)
{
    int i;
    for (i=0;i<tam;i++)
        {
            if(x[i].estado==1)
                {
                    mostrarPersona(x[i]);
                }
        }
}

void mostrarPersona (ePersona unaPersona)
{
    printf("\nDNI: %d\n", unaPersona.dni);
    printf("Nombre: %s\n", unaPersona.nombre);
    printf("Edad: %d\n\n", unaPersona.edad);
}

void inicializarPersonas(ePersona x[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
       x[i].estado=0;
    }
}

int obtenerEspacioLibre (ePersona x[], int tam)
{
    int indice=-1;
    int i;
    for (i=0;i<tam;i++)
    {
        if(x[i].estado ==0)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

int buscarPorDni (ePersona x[], int tam, int dni)
{
    int indice=-1;
    int i;

    for (i=0;i<tam;i++)
    {
        if(x[i].dni == dni)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

void altaPersonas(ePersona x[], int tam)
{
    int esta;
    int indice;
    int dni=0;
    int aux;
    char auxCad[50];
    indice=obtenerEspacioLibre(x, tam);

    if (indice==-1)
    {
        printf("\nSe alcanzo el limite permitido de ingreso de personas.\n\n");
    }
    else
        {
            printf("\nIngrese DNI de la persona: ");
            fflush(stdin);
            scanf("%d", &aux);
            while (aux<0 || aux>99999999)
            {
                printf("Error. El DNI debe estar entre 0 y 99,999,999. Reingrese: ");
                fflush(stdin);
                scanf("%d", &aux);
            }
            dni=aux;

            esta=buscarPorDni(x, tam, dni);
            if (esta!=-1)
            {
                printf("La persona de DNI %d ya se encuentra en sistema.\n", dni);
            }
            else
            {
                x[indice].dni=dni;
                printf("Ingrese el nombre de la persona: ");
                fflush(stdin);
                gets(auxCad);
                while (strlen(auxCad)>25)
                {
                    printf("Nombre demasiado largo. Reingrese: ");
                    fflush(stdin);
                    gets(auxCad);
                }
                strcpy(x[indice].nombre, auxCad);
                printf("Ingrese edad: ");
                fflush(stdin);
                scanf("%d", &aux);
                while (aux<0 || aux>120)
                {
                    printf("Error. La edad debe estar entre 0 y 120. Reingrese: ");
                    fflush(stdin);
                    scanf("%d", &aux);
                }
                x[indice].edad=aux;
                x[indice].estado=1;
                printf("\nPersona ingresada al sistema con exito!! Volvera al menu principal.\n\n");
            }
        }
}

void borrarPersona(ePersona x[], int tam)
{
    int confirma;
    int indice;
    int dni;

    printf("\nIngrese DNI de la persona a borrar: ");
    fflush(stdin);
    scanf("%d", &dni);

    indice=buscarPorDni(x, tam, dni);
    if (indice==-1)
    {
        printf("La persona de DNI %d no esta cargada en sistema.\n", dni);
    }
    else
        {
            mostrarPersona(x[indice]);
            printf("Usted va a borrar a %s, esta seguro del cambio? s/n\n", x[indice].nombre);
            confirma=tolower(getch());
            if (confirma=='s')
            {
                x[indice].estado=2;
            }
            else
            {
                printf("\nSe ha cancelado la supresion de la persona en el sistema.\n");
            }
        }
    system("pause");
}

void grafico(ePersona x[], int tam)
{
    int i;
    int contador18;
    int contador19a35;
    int contador35;
    int flag=0;
    int mayor;

    contador18=contador19a35=contador35=0;

            for(i=0;i<20;i++)
                {
                    if(x[i].estado==1 && x[i].edad < 19)
                                contador18++;
                    if(x[i].estado==1 && x[i].edad > 18 && x[i].edad < 36)
                                contador19a35++;
                    if(x[i].estado==1 && x[i].edad > 35)
                                contador35++;
                }

                if(contador18 >= contador19a35 && contador18 >= contador35)
                {
                     mayor = contador18;
                }

                else
                {
                        if (contador19a35 >= contador18 && contador19a35 >= contador35)
                        {
                            mayor = contador19a35;
                        }

                        else
                        {
                            mayor = contador35;
                        }
                }


                for(i=mayor;i>0;i--)
                {
                    if(i<=contador18)
                    {
                        printf("*");
                    }

                    if(i<=contador19a35)
                    {
                        flag=1;
                        printf("\t*");
                    }

                    if(i<=contador35)
                    {
                        if(flag==0)
                            printf("\t\t*");
                        if(flag==1)
                            printf("\t*");

                    }
                    printf("\n");
                }
                printf("\n\n--------------------");
                printf("\n<18\t19-35\t 35>\n\n");
}
