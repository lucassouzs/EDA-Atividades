#include <stdio.h>

int main()
{
    int A, B, C;

    while(scanf("%d %d %d", &A, &B, &C) != EOF){
        if(A == 0 && B == 0 && C == 0){
            printf("%s", "empate");
        }
        else if(A == 1 && B == 0 && C == 0){
            printf("%s", "A");
        }
        else if(A == 0 && B == 1 && C == 0){
            printf("%s", "B");
        }
        else if(A == 0 && B == 0 && C == 1){
            printf("%s", "C");
        }
        else if(A == 0 && B == 1 && C == 1){
            printf("%s", "A");
        }
        else if(A == 1 && B == 0 && C == 1){
            printf("%s", "B");
        }
        else if(A == 1 && B == 1 && C == 0){
            printf("%s", "C");
        }
        else{
            printf("%s", "empate");
        }
        return 0;
    }
}