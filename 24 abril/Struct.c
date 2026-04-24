#include <stdio.h>

struct alumne
{
    char nombre[20];
    float calificacion;
    int Edad;
    int Act_Real;
    int Derecho;
};

int main()
{
    struct alumne pepe;
    struct alumne grupo[3];

    for(int i = 0; i<3; i++)
    {
        printf("Dame el nombre: ")
        fgets(grupo[i].nombre, 20, stdin);
    }

    printf("Nombre: ");
    fgets(pepe.nombre, 20,stdin);

    printf("Edad: ");
    scanf("%d", &pepe.Edad);

    printf("Promedio: ");
    scanf("%f", &pepe.calificacion);

    printf("El nombre es %s", pepe.nombre);
    printf("La edad es %d", pepe.Edad);
    printf("El promedio es es %f", pepe.calificacion);

    return 0;
}
