#include <stdio.h>

int main () {

    int n, i, j, k, ast, spac;

    scanf("%d", &n);

    ast=1;
    spac=0;

    for(i=1; i<=n; i++) {

        for(j=0; j<spac; j++) {

            printf("_");
        }

        printf("*\n");
        spac++;

                }

        spac-=2;
        for(i=1; i<n; i++) {

        for(j=0; j<spac; j++) {

            printf("_");
        }

        printf("*\n");
        spac--;

                }

        }





