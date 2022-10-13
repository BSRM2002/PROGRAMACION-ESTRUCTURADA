#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Multiplicacion de numeros de areglo \n");

   int integerValor[5];
   int resultado;
   int n = 5;


   for(int i = 0 ; i < n ; i++)
   {

    printf("   ingresa un valor:");
    scanf("%i", &integerValor[i]);

   }

   resultado = integerValor[0] * integerValor[1] * integerValor[2] * integerValor[3] * integerValor[4];

   printf("resultado final es: %i \n", resultado);

    return 0;
}
