#include <stdio.h>

int main(void) {
    int a;
    int b;

    printf("********* Echange de contenu de deux Variables ********\n");
    printf("Entrer une valeur pour a : ");
    scanf("%d", &a);
    printf("Entrer une valeur pour b : ");
    scanf("%d", &b);
    
    printf("a = %d\nb = %d\n", a, b);
    int c = a;
    a = b;
    b = c;
    printf("***** Après échange ********\n");
    printf("a = %d\nb = %d\n", a, b);

    return 0;
}
