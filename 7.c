#include <stdio.h>
#include <stdlib.h>

int main() {

    float a, r;

    printf("Digite o preco do produto: ");
    scanf("%f", &a);

    if (a < 100) {
        r = a * 1.10;
    } else if(a >= 100) {
        r = a * 1.20;
    }

    printf("Valor inflacionado: %.2f\n", r);
    return 0;
}