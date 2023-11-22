//1. Desarrollar un algoritmo que cargue un vector con 50 números enteros y luego los muestre por pantalla.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,cant=50;
    int num[cant];

    srand(time(NULL));
    //Carga del vector
    for (i=0; i<cant; i++)
    {
        num[i]=rand()%100;
        printf("%d. %d\n",i+1,num[i]);
    }

    return 0;
}
