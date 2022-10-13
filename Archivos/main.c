#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Archivos!\n");

    FILE *archivo;

    archivo = fopen("prueba 3.dat", "w");

    if (archivo != NULL)
    {
        printf("El archivo se a creado exitosamente. Comprueba en la carpeta que ha sido creada \n");
        fclose(archivo);
    }else
    {
        printf("El archivo no se a creado");
    }

    return 0;
}
