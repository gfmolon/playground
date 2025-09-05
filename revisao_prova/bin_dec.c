#include <stdio.h>

int main() {

    int n, resultado;
    int d1, d2, d3, d4, d5, d6;


    printf("Informe o número em binario\n");
    scanf("%d",&n);

    d6 = (n / 1) % 10;
    d5 = (n / 10) % 10;
    d4 = (n / 100) % 10;
    d3 = (n / 1000) % 10;
    d2 = (n / 10000) % 10;
    d1 = (n / 100000) % 10;

    resultado = d6*1 + d5*2 + d4*4 + d3*8 + d2*16 + d1*32;

    printf("Número em decimal: %d\n",resultado);

    return 0;
}
