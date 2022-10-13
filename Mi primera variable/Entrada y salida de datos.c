#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA;
    float floatA;
    char letterA;

    printf("Ingersa el valor del numero entero A: ");

    scanf("%i", &integerA);

    printf("Ingersa el valor del numero float A: ");

    scanf("%f", &floatA);

    printf("Ingersa el valor del numero caracter A: ");

    scanf(" %c", &letterA);

    printf("\nEl entero A es: %i", integerA);
    printf("\nEl flotante A es: %f", floatA);
    printf("\nEl caracter A es: %c", letterA);

    return 0;
}
