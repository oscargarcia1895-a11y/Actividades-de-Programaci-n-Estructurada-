#include <stdio.h>

void par(int a);
void sumyres(int b, int c);

int main(){

    int a;
    int b;
    int c;
    int opcion;

    printf("Seleccione lo que quiere hacer: \n1.Par\n2.Suma y Resta\n3.Salir\n");
    scanf("%d", &opcion);

    switch(opcion){

        case 1:
            printf("Dame un numero: ");
            scanf("%d", &a);
            par(a);
        break;
        case 2:
            printf("Dame el primer numero: ");
            scanf("%d", &b);
            printf("Dame el segundo numero: ");
            scanf("%d", &c);
            sumyres(b,c);
        break;
        case 3:
            printf("Adios");
        break;
        default:
            printf("Opcion invalida");
        break;
    }
    return 0;
}

void par(int a){

    int r = 0;

    r = a % 2;

    if(r == 0){

        printf("Es par");

    } else{

        printf("No es par");

    }
}

void sumyres(int b, int c){

    int sum = 0;
    int res = 0;

    sum = b + c;
    res = b - c;

    printf("El resultado de la suma es: %d\n", sum);
    printf("El resultado de la resta es: %d", res);
}
