#include <stdio.h>

int main() {

    int a, b, c, aux;

    printf("Informe os 3 valores:\n");
    scanf("%d%d%d",&a,&b,&c);

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

    printf("Crescente\n\n");
    printf("Em ordem: %d %d %d\n", a, b, c);


    return 0;
}
