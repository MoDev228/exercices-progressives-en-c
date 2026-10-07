#include <stdio.h>

void saluer(char nom[]) {
    printf("Bonjour %s !\n", nom);
}

int main(void) {

    saluer("Mohamed");

    return 0;
}