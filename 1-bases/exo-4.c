#include <stdio.h>

int main() {
    float nombre;
    int statut;
    int c;


    do {
        printf("\n********** Nombre Reels (Float) ******\n");
        printf("Entrer le nombre : ");
        statut = scanf("%f", &nombre);

        while((c = getchar() != '\n') && c != EOF);
    
        if (statut != 1) {
            printf("Le nombre est invalide !\n");
        } 
        
    } while (statut != 1);
    
    printf("Le nombre est : %.2f\n", nombre);

    return 0;
}