#include <stdio.h>
#include <string.h>

int main()
{

    char Alumno1[16]="Antonio";
    char Alumno2[16];
    char Lista[15][16];
    int longitud;

    printf("%s\n", Alumno1);

    printf("Dame tu nombre: ");
    //scanf("%s", Alumno2);

    fgets(Alumno2, sizeof(Alumno2), stdin);
    printf("%s", Alumno2);

    for(int i=0; i < 3; i++){

       printf("Dame el nombre: ");
       fgets(Lista[i], sizeof(Lista [i]), stdin);
    }

    for(int i=0; i < 3; i++){

        printf("%s\n", Lista[i]);

    }
    for(int i=0; i < 3; i++){

        longitud = strlen(Lista[i]);
        printf("La longitud de %s es de %d\n", Lista[i], longitud);

    }
    return 0;
}
