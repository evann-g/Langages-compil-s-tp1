#include <stdio.h>
int main(void) {
    char prenom[] = "Evann";
    int age = 18;
    float taille = 1.70f;
    char initiale = 'E';
    printf("============================\n");
    printf("=     FICHE D'IDENTITE     =\n");
    printf("============================\n");
    printf("Prenom   : %s\n", prenom);
    printf("Nom      : %d\n", age);
    printf("Taille   : %.2f\n", taille);
    printf("Initiale : %c\n", initiale);
    printf("============================");
    // Completez l'affichage formate ici
    // %s pour les chaines, %d pour les entiers
    // %c pour un caractere, %.2f pour les flottants
    return 0;
}