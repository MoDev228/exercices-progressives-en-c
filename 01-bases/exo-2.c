#include <stdio.h>

int main() {
    char message[] = "Soyez les Bienvenus !", nom[20];

    printf("Quel est votre nom : ? ");
    scanf("%s", nom);
    printf("%s, %s\n", nom, message);

    return 0;
}