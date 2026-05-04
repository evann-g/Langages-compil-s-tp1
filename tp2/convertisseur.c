#include <stdio.h>
int main(void) {
    int   choix;
    double   choix_2;
    printf("1 : Kilometres → Miles\n");
    printf("2 : Kilogrammes → Livres (pounds)\n");
    printf("3 : Degres Celsius → Fahrenheit\n");
    printf("4 : Quitter\n");
    scanf("%d", &choix);
    
    start:
    switch (choix)
    {
    case 1:
        printf("Kilometres → Miles\n");
        printf("Choisi ton nombre de kilometres\n");
        printf("->");
        scanf("%lf", &choix_2);
        printf("cela fait %f miles\n", choix_2*0.621371);
        goto start;
    case 2:
        printf("Kilogrammes -> Livres\n");
        printf("Choisi ton nombre de kilogramme\n");
        printf("->");
        scanf("%lf", &choix_2);
        printf("cela fait %f livres\n", choix_2*2.20462);
        goto start;
    case 3:
        printf("Celsius -> Fahrenheit\n");
        printf("Choisi ton nombre de celsius\n");
        printf("->");
        scanf("%lf", &choix_2);
        printf("cela fait %f Fahrenheit\n", choix_2*9.0 / 5.0 + 32.0);
        goto start;
    default:
        break;
    }
    return 0;
}