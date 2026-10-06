#include <stdio.h>

int main(void) {
    float longueur, largeur, surface, perimetre;

    printf("\n****** Calcul de Périmètre et de Surface d’un rectangle ********\n");

    printf("Entrer la valeur de la longueur et la largeur (Ex: 10 5): ");
    scanf("%f %f", &longueur, &largeur);

    perimetre = (longueur + largeur) * 2;
    surface = longueur * largeur;

    printf("Le Périmètre est : %.2f m²\n", perimetre);
    printf("La Surface est : %.2f m²\n", surface);

    return 0;
}