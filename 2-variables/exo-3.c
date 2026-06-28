#include <stdio.h>

int main(void) {
    float x, a, b;

    printf("\n****** Calcul de x^2 et x^3 *******\n");
    printf("Entrer la valeur de x : ");
    scanf("%f", &x);

    a = x * x;
    b = x * x * x;

    printf("x^2 = %.2f\nx^3 = %.2f\n", a, b);

    return 0;

}