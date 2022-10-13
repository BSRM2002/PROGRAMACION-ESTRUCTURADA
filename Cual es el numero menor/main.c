#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno, numeroDos;
    printf("Si me das dos numeros enteros, te dare el menor entre ellos!\n\n");
    printf("Ingresa el primer numero: ");
    scanf("%i", &numeroUno);
    printf("Ingresa el segundo numero: ");
    scanf("%i", &numeroDos);

    printf("\nEl numero menor es: ");
    if(numeroUno < numeroDos) {
        printf("%i",numeroUno);
    } else {
        printf("%i",numeroDos);
    }

    return 0;
}
