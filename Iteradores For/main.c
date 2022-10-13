#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iteradorres For \n");

    int upperLim, bottomLim;

    printf("imprimir en orden desendiente \n");

    printf("ingresa el limite superior \n");
    scanf("%i", &upperLim);

    printf("ingresa el limite inferior \n");
    scanf("%i", &bottomLim);

    for(int i = upperLim; i >= bottomLim; i--)
    {
       printf("Numero: %i \n", i);
    }


    return 0;
}
