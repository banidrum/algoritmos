int main () {

int n, l, space, asteriscos, i, j, k;

scanf("%d", &n);

asteriscos=1;
l=n;
space=n-1;

    for(k=1; k<=n; k++) {

    for (i=1; i<=space; i++)
        printf(" ");

    for (j=1; j<=asteriscos; j++)
        printf("* ");
        printf("\n");

        asteriscos++;
        space--;

    }

    asteriscos-=2;
    space=1;

    for(k=1; k<=n; k++) {

    for (i=1; i<=space; i++)
        printf(" ");

    for (j=1; j<=asteriscos; j++)
        printf("* ");
        printf("\n");

        asteriscos--;
        space++;
}

}



