#include <stdio.h>
int main(void) {
    int a = 17;
    int b = 5;
    printf("a=%d et b=%d    \n", a,b);
    printf("somme      : %d \n", a+b);
    printf("difference : %d \n", a-b);
    printf("produit    : %d \n", a*b);
    printf("quotient   : %d (entier) , %f (floatant)\n", a/b , (float)a/b);
    printf("reste      : %d \n", a%b);
    return 0;
}