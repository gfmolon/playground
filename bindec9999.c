
#include <stdio.h>

int main() {

    int n;
    int d1, d2, d3, d4, d5, d6;
    int soma;

    printf("Informe um número binário de até 6 dígitos:\n");
    scanf("%d",&n);

    d6 = n % 10;
    d5 = (n / 10) % 10;
    d4 = (n / 100) % 10;
    d3 = (n / 1000) % 10;
    d2 = (n / 10000) % 10;
    d1 = (n / 100000) % 10;

    soma = d1*32 + d2*16 + d3*8 + d4*4 + d5*2 + d6*1;

    printf("%d em decimal: %d\n", n, soma);



    return 0;
}
