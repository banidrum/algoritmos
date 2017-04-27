#include <stdio.h>

int main () {

int i=1, j, m, n;

scanf("%d", &n);

for (j=n; j>=1; j--) { // faz imprimir 9 vezes

for(i=j; i>=1; i--) {
    printf("%d ", i);
}


    printf("\n");
    }


}
