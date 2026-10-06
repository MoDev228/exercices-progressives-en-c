#include <stdio.h>

int main(void)
{
    double r;
    const double PI = 3.141592653589793;
    int statut;
    char fin_de_ligne;

    printf("\n***** Calcul de l'Aire et de la Circonference d'un cercle *****\n");

    do {
        printf("Entrer le rayon du cercle : ");

        statut = scanf("%lf %c", &r, &fin_de_ligne);

        if (statut == EOF) {
            return 1;
        }

        if (statut != 2 || fin_de_ligne != '\n') {

            int c;
            while ((c = getchar()) != '\n' && c != EOF);

            printf("Saisie invalide !\n");
            statut = 0;
            continue;
        }

        if (r <= 0) {
            printf("Le rayon doit etre strictement positif !\n");
            statut = 0;
        }

    } while (statut == 0);

    printf("Aire = %.2lf\n", PI * r * r);
    printf("Circonference = %.2lf\n", 2 * PI * r);

    return 0;
}