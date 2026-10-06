#include <stdio.h>

int main(void) {
    int second, minute, heure;
    int scanStatut;
    char fin_de_ligne;

    printf("\n******* Conversion de temps ******\n");
    do {
        printf("\nEntrer la valeur du seconde (Ex: 10) : ");
        scanStatut = scanf("%d%c", &second, &fin_de_ligne);

        if (scanStatut == EOF) {
            return 1;
        }

        if (scanStatut != 2 || fin_de_ligne != '\n') {

            int e;
            while ((e = getchar()) != '\n' && e != EOF);
            
            printf("Saisie invalide ! (Saisissez un nombre valide)\n");
            scanStatut = 0;
            continue;
        }

        if (second < 0) {
            printf("Non ! seconde inférieur à zéro (0)\n");
            scanStatut = 0;
        }
    } while (scanStatut == 0);

    heure = second / 3600;
    minute = ( second % 3600 ) / 60;
    second = second % 60;

    printf("\nConversion :(HH:mn:s)  %dh : %dmn : %ds\n",heure, minute,second);

    return 0;
}