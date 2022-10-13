#include <stdio.h>
#include <stdlib.h>

struct personalData
{
    char name[20];
    char lastName[20];
    int age;
};

int main()
{
    printf("Archivos! Guardar un archivo\n");

    struct personalData person;

    FILE *archivo;
    archivo = fopen("DatosPersonales001.dat", "wb");

    if (archivo != NULL)
    {

    fflush(stdin);

    printf("Leer datos: \n");
    printf("ingresar nombre: \n");
    gets(person.name);

    printf("ingresar apellido: \n");
    gets(person.lastName);

    printf("ingresar edad: \n");
    scanf("%i", &person.age);

    printf("imprimir datos: \n");
    printf("%s \n", person.name);
    printf("%s \n", person.lastName);
    printf("%i \n", person.age);

    fwrite(&person, sizeof(person), 1, archivo);

    fclose(archivo);
    }else
    {
        printf("No se ha podido crear el archivo");
    }



    return 0;
}
