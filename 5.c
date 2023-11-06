#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int a;
    int b;
    int r;

    printf("Primeiro valor:\n");
    scanf("%d", &a);

    printf("Segundo valor:\n");
    scanf("%d", &b);

    // a)
    r = a + b;
    printf("A + B = %d\n", r);

    // b)
    r = a*(b*b);
    printf("A x (B^2) = %d\n", r);

    // c)
    r = a*a;
    printf("A^2 = %d\n", r);

    // d)
    r = sqrt((a*a) + (b*b));
    printf("Raiz de (A^2 + B^2) = %d\n", r);

    // e)
    r = sin(a - b);
    printf("Seno de (A - B) = %d\n", r);

    // f)
    r = fabs(a);
    printf("Modulo de A = %d\n", r);

    return 0;
}