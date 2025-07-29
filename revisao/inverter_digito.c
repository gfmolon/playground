#include <stdio.h>

int main() {

    int n, orig, invert, resto;

    printf("Informe um valor:\n");
    scanf("%d",&n);

    orig = n;

    invert = 0;
    while(n != 0) {
        resto = n % 10;
        invert = (invert * 10) + resto;
        n /= 10;
    }

    printf("Valor: %d | Valor invertido: %d\n", orig, invert);

}
