#include <stdio.h>

int main(void) {
    int nombre,scanStatut, e;
    char fin_de_ligne;

    printf("\n********* La Parité d’un nombre ******\n");

    do {
        printf("Entrer un nombre : ");
        scanStatut = scanf("%d", &nombre);

        if (scanStatut == EOF) {
            return 1;
        }
        
        
        if (scanStatut != 1) {
            
            while ((e = getchar()) != '\n' && e != EOF);
            
            printf("Saisie invalide !\n");
            scanStatut = 0;
        }
        
        if (nombre <= 0) {
            printf("Il faut que ce nombre soit superieur à zéro (0)\n");
            scanStatut = 0;
        }

    } while (scanStatut == 0);

    if (nombre % 2 == 0) {
        printf("%d est un nombre paire !\n", nombre);
    } else {
        printf("%d est un nombre impaire !\n", nombre);
    }
    
    return 0;
}