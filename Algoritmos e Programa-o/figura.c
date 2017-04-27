#include <stdio.h>

int main () {

    int i, j, n, k, l, spac, ast;

    scanf("%d", &n);

    spac = n;

    ast = 1;

    for (k=1; k<=n; k++) {

    for (i=1; i<=spac; i++) {
        printf(" ");
                    }

    for (j=1; j<=ast; j++) {
        printf("*");
            }

        printf("\n");

    spac--;
    ast++;

    }

    spac=n;
    ast--;

    for (k=1; k<=n; k++) {

    for (i=1; i<=spac; i++) {
        printf(" ");
                    }

    for (j=1; j<=ast; j++) {
        printf("*");
            }

        printf("\n");

    ast--;
s
                }




}



