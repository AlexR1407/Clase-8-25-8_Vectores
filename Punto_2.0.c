/* 2. Desarrollar un algoritmo que cargue un vector con 50 elementos y luego informe por pantalla:
    a. El cuarto elemento.
    b. El segundo elemento.
    c. Los elementos en orden invertido.
    d. El producto entre el primero y el último elemento.
    e. Los elementos de índice par.
    f. Los elementos de índice impar. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void carga_vector(int cant,int *num);
void menu(int cant,int *num);
void cuarto_elemento(int cant,int *num);
void imprimir_vector(int cant, int *num);

int main()
{
    int cant=10;
    int num[cant];

    //Se llama a la función
    menu(cant,num);

    return 0;
}
void carga_vector(int cant,int *num)
{
    srand(time(NULL));
    //Carga del vector
    for (int i=0; i<cant; i++)
    {
        *(num+i)=rand()%100;
    }
}
void imprimir_vector(int cant, int *num)
{
    carga_vector(cant, num);
        for (int i=0; i<cant; i++)
        {
            printf("%d. %d\n",i+1,*(num+i));
        }
        printf("\n");

}
void menu(int cant,int *num)
{
    imprimir_vector(cant,num);

    char opc='A';

    printf("Elegir opc: \n");
    printf("	a. El cuarto elemento.\n");
    printf("	b. El segundo elemento.\n");
    printf("	c. Los elementos en orden invertido.\n");
    printf("	d. El producto entre el primero y el último elemento.\n");
    printf("	e. Los elementos de indice par.\n");
    printf("	f. Los elementos de indice impar.\n");
    printf("	g. Todos los numeros.\n");
    printf("Opc: ");
    scanf("%c",&opc);
    printf("\n");

    switch(opc)
    {
    case 'a':
        //system("cls");
        cuarto_elemento(cant,num);
        break;
    case 'g':
        //system("cls");

        break;
    }
}
void cuarto_elemento(int cant,int *num)
{
    carga_vector(cant,num);
    printf("Cuarto elemento: %d\n",*(num+3));
}
