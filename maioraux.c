#include <stdio.h>

int main() {

    int a = 1, b = 5, c = 3;
    int aux;

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }

    if (a > c) {
        aux = a;
        a = c;
        c = aux;
    }

    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }

    printf("Ordem Crescente: %d %d %d\n", a, b,c );

}
