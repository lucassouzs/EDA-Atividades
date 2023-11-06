#include <stdio.h>

int main() {
    int L, D, K, P;

    scanf("%d %d", &L, &D);

    scanf("%d %d", &K, &P);

    int numero_pedagios = L / D;

    if (L >= 1 && L <= 10000 && D >= 1 && D <= 10000) {
        numero_pedagios++;
    }

    int custo_total = numero_pedagios * P + L * K;

    printf("%d\n", custo_total);

    return 0;
}