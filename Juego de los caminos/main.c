#include <stdio.h>
#include <stdlib.h>

int main()
{
    int way;

    printf("Te encuentras en un sueno y tienes tres caminos. \n");


    printf("Escribe 1 si quieres ir por el camino de dulces \n");
    printf("Escribe 2 si quieres ir por el camino de madera \n");
    printf("Escribe 3 si quieres ir por el camino de gatitos \n");
    scanf("%i", &way);


        switch(way)
        {
        case 1:
            printf("Los dulces asesinos hicieron que no puedas despertar nunca \n");
            break;

        case 2:
            printf("Unos arboles interrupieron tu camino, escoge otro camino");
            break;

        case 3:
            printf("Los gatitos lindos te llevan a una puerta y al cruzarla te despiertas! \nfelicidades! \n ");
            break;

        default:
            printf("Solo puedes escoger uno de los tres caminos!! \n");
        }

    return 0;
}
