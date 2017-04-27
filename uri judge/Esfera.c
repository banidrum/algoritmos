#include <stdio.h>

int main () {

    double raio, fr;

    scanf("%lf", &raio);

    fr = 4/3.0*3.14159*raio*raio*raio;

    printf("VOLUME = %.3lf", fr);

}
