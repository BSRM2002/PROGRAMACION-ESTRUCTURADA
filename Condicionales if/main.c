#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicoion if \n");

    float valA, valB, valC;
    valA =  valB = 100,

    printf("Primera condiciion \n");

    if(valA == valB);
        printf("Ambos son iguales \n");

    printf("Segunda condicion \n");

    if(valA == valB)
    {
        printf("Segunda condicion \n");
        valC = valA + valB;
        printf("Ademas la suma de ambos numeros es: %f \n", valC);
    }

    return 0;
}
