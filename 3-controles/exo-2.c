#include <stdio.h>

int main(void) {
    float nombre1, nombre2, nombre3;
    int scanStatut, e;
    char fin_de_ligne;

    printf("\n******* Comparaison de trois nombres ********\n");

    do {
        printf("Entrer les trois nombres (Ex: 12 3 68) : ");
        scanStatut = scanf("%f %f %f", &nombre1, &nombre2, &nombre3);

        if (scanStatut == EOF) {
            return 1;
        }

        if (scanStatut != 3 ) {

            while ((e = getchar()) != '\n' && e != EOF);

            printf("Saisie invalide !");
            scanStatut = 0;
        } 
        

    } while ( scanStatut == 0);

    if (nombre1 >= nombre2 && nombre1 >= nombre3) {
        printf("%.2f est le plus grand nombre !\n", nombre1);
    } else if (nombre1 <= nombre2 && nombre2 >= nombre3) {
        printf("%.2f est le plus grand nombre !\n", nombre2);
    } else {
        printf("%.2f est le plus grand nombre !\n", nombre3);
    }

    return 0;
}