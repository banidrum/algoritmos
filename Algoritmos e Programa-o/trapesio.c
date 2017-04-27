#include <stdio.h>

int main () {

    int n, i, j, k, spac, ast;

    scanf("%d", &n);

    ast = spac = n;

    for(k=1; k<=n; k++) {

    for(i=1; i<=spac; i++) {

        printf("  ");
        }

        for (j=1; j<=ast; j++) {

            printf("* ");

                }

            printf("\n");

            spac--;

            ast+=2;

            }
}
