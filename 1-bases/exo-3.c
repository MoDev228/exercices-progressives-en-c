#include <stdio.h>

int main() {
    // Déclaration des variables
    float a, b;
    int etat;
    int c;

    printf("\n****** Opération sur deux nombres Réels a et b *****\n");

    do {
        printf("Entrer la valeur de a : ");
        etat = scanf("%f", &a);

        while((c = getchar()) != '\n'&& c != EOF);

        if (etat != 1) {
            printf("Saisie invalide: veuillez entrer un nombre valide !");
        }

    } while(etat != 1);
    do {
        printf("Entrer la valeur de b : ");
        etat = scanf("%f", &b);
        

        while((c = getchar()) != '\n' && c != EOF);

        if (etat != 1) {
            printf("Saisie invalide: veuillez entrer un nombre valide !\");
            printf("Saisie invalide: veuillez entrer un nombre valide !\");
        } 

    } while(etat != 1);

    printf("\n************* Résultats **************\n");
    printf("Addition : %.2f\n", a + b);
    printf("Multiplication : %.2f\n", a * b);
    printf("Soustraction : %.2f\n", a - b);

    if (b != 0) {

        printf("Division : %.2f\n", a / b);
    } else {
        printf("Division impossible par zéro (0)");
    }

    return 0;
}