#include <stdio.h>

int main () {

int n, i, j;

    scanf("%d", &n);

    for (j=1; j<=n; j++ ) // controla linhas

    {

    for (i=1; i<=j; i++) { // impressão, depende j
    printf("%d ", j*i);

    }
        printf("\n"); // depois de terminar impressão, quebra linha
    }


}
