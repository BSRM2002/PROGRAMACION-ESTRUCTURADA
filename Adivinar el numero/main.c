#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valA;
    printf("Adivina un nuemro del 1 al 10\n");
    scanf("%i",&valA);

    if (valA == 5)
        printf("Eres genial,Adininaste el numero");
    else
        printf("No adivinaste el numero");
    return 0;
}
