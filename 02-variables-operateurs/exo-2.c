#include <stdio.h>

int main(void) {
    float note1, note2, note3, somme, moyenne;

    printf("\n****** Calcul de la moyenne de trois notes *******\n");
    printf("Entrer les trois notes (Ex: 12 13 17): ");
    scanf("%f %f %f", &note1, &note2, &note3);

    somme = (note1 + note2 + note3);
    moyenne = somme / 3;

    printf("La moyenne est de %.2f / 20\n", moyenne);

    return 0;
}