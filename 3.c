#include <stdio.h>
#include <stdlib.h>

int main() {

    int m;

    printf("Valor em decimal:\n");
    scanf("%d", &m);

    printf("Valor em octal:%o\n", toupper(m));
    printf("Valor em hexa:%x\n", m);

    return 0;
}