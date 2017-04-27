int main () {

    int i, j, l;

    printf("Digite o numero de linhas: ");

    scanf("%d", &l);

    for (i=1; i<=l; i++) // imprime linhas
    {

    for(j=1; j<=i; j++) { // imprime colunhas

        printf("%d", i); //

      }

    printf("\n"); // quebra linha
    }



}
