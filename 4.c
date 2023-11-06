#include <stdio.h>
#include <stdlib.h>

int dd();
int ii();

int main() {

    int v;

    printf("Escolha uma variavel:\n");
    printf("1: Double\n");
    printf("2: Int\n");
    scanf("%d", &v);

    if (v == 1){
        dd();
    } else if (v == 2){
        ii();
    } else {
        printf("Nenhuma opcao encontrada.");
    }

    return 0;
}

int dd() {
    double f;
    double r;

    printf("Valor em graus Fahrenheit:\n");
    scanf("%lf", &f);

    r = ((f-32)*5/9); 

    printf("Valor (Double) em graus Celsius:%lf\n", r);
}

int ii() {
    int f;
    int r;

    printf("Valor em graus Fahrenheit:\n");
    scanf("%d", &f);

    r = ((f-32)*5/9); 

    printf("Valor (Int) em graus Celsius:%d\n", r);
}