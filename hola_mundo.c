#include <stdio.h>

int main(){
    char nombre[100];
    printf("Hola mundo!\n");

    printf("Introduce tu nombre: ");
    fgets(nombre, sizeof(nombre), stdin);

    printf("Hola %s",nombre);

    return 0;
}