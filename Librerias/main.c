#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    printf("Librerias!\n");

    float firstValue = 10;
    float secondVvalue = 15;
    float result;
    int option;

    printf("Soy una calculadora! \n");
    printf("Que operacion deseas realizar? \n");
    printf("1. suma \n");
    printf("2. resta \n");
    printf("3. multiplicacion \n");
    printf("4. divicion \n");
    printf("Elige una opcion \n");

    scanf("%i", &option);

    switch(option)
    {
    case 1:
        result = addition(firstValue, secondVvalue);
        break;

    case 2:
        result = substraction(firstValue, secondVvalue);
        break;

    case 3:
        result = multication(firstValue, secondVvalue);
        break;

    case 4:
        result = division(firstValue, secondVvalue);
        break;
    }

    printf("El resultado de la operacion es: %f", result);

    return 0;
}
