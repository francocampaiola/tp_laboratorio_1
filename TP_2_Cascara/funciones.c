#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

void ordenarPersonas (ePersona x[])
{
    int i;
    int j;
    ePersona aux;

     for (i=0;i<19;i++)
                {
                    for (j=i+1;j<20;j++)
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

void mostrarPersonas(ePersona x[])
{
    int i;
    for (i=0;i<20;i++)
                        {
                            if(x[i].estado!=0)
                            {
                                printf("Nombre: %s\n", x[i].nombre);
                                printf("Edad: %d\n", x[i].edad);
                                printf("DNI: %d\n\n", x[i].dni);
                            }
                        }
}

