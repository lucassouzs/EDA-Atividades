#include <stdio.h>
#include <stdlib.h>

int main() {

    float m;

    printf("Valor em metros:\n");
    scanf("%f", &m);

    printf("Valor em decimetros:%2.f\n", m*10);
    printf("Valor em centimetros:%2.f\n", m*100);
    printf("Valor em milimetros:%2.f\n", m*1000);

    return 0;
}