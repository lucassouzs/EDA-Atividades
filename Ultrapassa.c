#include <stdio.h>

int main() {
    int v[1000];
    int limite, numero, soma = 0, i = 0, j;

    while (1) {
        scanf("%d", &numero);
        if (numero == 0) {
            break;
        }
        v[i++] = numero;
    }

    scanf("%d", &limite);

    for (j = 0; j < i; j++) {
        soma = 0;
        for (int k = j; k < i; k++) {
            soma += v[k];
            if (soma > limite) {
                for (int l = k; l >= j; l--) {
                    printf("%d\n", v[l]);
                }
                break;
            }
        }
    }

    return 0;
}