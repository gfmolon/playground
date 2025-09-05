#include <stdio.h>

int main() {

    int a, b, c;
    int maior;

    a = 500;
    b = 255;
    c = 78;
    printf("%d %d %d\n", a, b, c);
    printf("Qual é o maior?\n");

    maior = a;

    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }

    printf("Maior: %d\n",maior);

}
