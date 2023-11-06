#include <stdio.h>
#include <stdlib.h>

/** 1. Faça um programa em "C" que lê dois valores e imprime:
 - se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
 - se o primeiro valor for maior que o segundo a lista de valores do segundo até o primeiro em ordem decrescente;
 - se ambos forem iguais a mensagem "valores iguais".**/

int main() {

    int i, a, b;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    if(a < b) {
        printf("Lista de valores de %d ate o %d:\n", a, b);
        for (i = a; i <= b; i++) {
            printf("%d\n", i);
        }   
    } else if (b < a) {
        printf("Valores de %d ate %d em ordem decrescente:\n", b, a);
        for (i = b; i >= a; i--) {
            printf("%d\n ", i);
        }
    } else {
        printf("Os dois valores sao iguais.\n");
    }

    return 0;
}