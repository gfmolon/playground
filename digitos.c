#include <stdio.h>

int main() {

    int n = 1234;
    int d1, d2, d3, d4;
    int orig, resto, somanumeros;

    d4 = n % 10;
    d3 = (n / 10) % 10;
    d2 = (n / 100) % 10;
    d1 = (n / 1000) % 10;

    printf("Número: %d\n",n);

    printf("Número dividido: %d %d %d %d\n", d1, d2, d3, d4);

    orig = n;

    somanumeros = 0;
    while ( n != 0) {
        resto = n % 10;
        somanumeros += resto;
        n /= 10;
    }

    printf("Soma dos números: %d\n", somanumeros);

}
