#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos unidimensionales \n");

    int integerList[3];
    integerList[0] = 4;
    integerList[1] = 5;
    integerList[2] = 6;

    float floatList [] = {23.4, 34.5, 45.6, 21.8, 56.7};

    char charList[4];
    charList[0] = 'B';
    charList[1] = 'S';
    charList[2] = 'R';
    charList[3] = 'M';

    printf("\n Primer entero: \t\t %i", integerList[0]);
    printf("\n Primer flotante: \t\t %f", floatList[4]);
    printf("\n Lista de caracteres: \t\t %c%c%c%c. \n", charList[0], charList[1], charList[2], charList[3]);

    return 0;
}
