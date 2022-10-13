#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Reto arreglo e iteradores!!\n \n");

    int num;
    int aux = 0;

    printf("Ingrese el tamaño del arreglo : ");
    scanf("%i", &num);

    int array[num];
     for(int i = 0; i < num; i++){

        int value;

        printf("Valor [%i] : ", i);
        scanf("%i", &value);

        if( value > aux){
            aux = value;
        }
     }

     printf("\nEl valor mas grande que tiene el arreglo es : %i \n", aux);

    return 0;
}
