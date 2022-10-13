#include <stdio.h>
#include <stdlib.h>

char publicText[] = {"Texto en una variable global"};

void check()
{
    printf("\n imprimir desde la funcion: check: \n");

    printf("variable global: \n");
    printf("%s", publicText);

    printf("Variable local: /n");
    //printf("%s", privateText);
}

int main()
{

    printf("Variables globales!\n");

    char privateText[] = {"texto en una variable local.\n"};

    printf("variable global: \n");
    printf("%s", publicText);

    printf("Variable local: \n");
    printf("%s", privateText);

    check();

    return 0;
}
