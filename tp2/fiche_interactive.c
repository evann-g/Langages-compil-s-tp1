#include <stdio.h>
int main(void) {
    int   age;
    float taille;
    char  prenom[30];
    printf("Quel est ton prenom ? ");
    scanf("%29s", prenom);
    printf("Quel age as-tu ? ");
    scanf("%d", &age);
    printf("quel est ta note moyenne ? ");
    scanf("%f", &taille);
    printf("Bonjour %s, %d ans, %.2f m.\n", prenom, age, taille);
    return 0;
}