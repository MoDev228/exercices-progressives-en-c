#include <stdio.h>

int main(void) {
    int nombre;

    printf("\n********* Table de Multiplication *********\n");
    printf("Entrer le nombre : ");
    scanf("%d", &nombre);
    for (int i = 0; i <= 10; i++) {
        printf("%d * %d = %d\n", nombre, i, nombre * i);
    }

    return 0;
}