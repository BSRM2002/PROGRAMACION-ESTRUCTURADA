#include <stdio.h>
#include <stdlib.h>

int main()
{
    int calificacion;
    printf("Para saber si aprobo o no ingresa tu calificacion: ");
    scanf("%i", &calificacion);

    if(calificacion < 60) {
       printf("Estas reprobado! :(");s
    } else if (calificacion > 60 && calificacion <=90) {
        printf("Aprobaste!");
    } else if (calificacion > 90){
        printf("Aprobaste! :)");
    }

    return 0;
}
