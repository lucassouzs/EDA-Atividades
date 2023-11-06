#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int v;
    int i;
    int r;

    for (v = 1; v < 10; v++)
    {    
        printf("Tabuada do: %d\n", v);
        for (i = 0; i < 10; i++)
        {
            r = v * i;
            printf("%dx%d = %d\n", v, i, r);
        }
        printf("\n");
    }

    return 0;
}