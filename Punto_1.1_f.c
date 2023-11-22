//1. Desarrollar un algoritmo que cargue un vector con 50 números enteros y luego los muestre por pantalla.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fiveticent();

int main()
{
    int cant=50;
    int num[cant];

    //Función llamada
    fiveticent(num,cant);

    return 0;
}
void fiveticent(int numr[],int cant)
{
    int i;

    srand(time(NULL));
    //Cargar vector
    for (i=0; i<cant; i++)
    {
        numr[i]=rand()%100;
        printf("%d. %d\n",i+1,numr[i]);
    }
}
