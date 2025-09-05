#include <stdio.h>

int main() {

    int n;
    int d100, d50, d1;
    int resto;

    printf("Informe o valor:\n");
    scanf("%d",&n);

    d100 = n / 100;
    resto = n % 100;

    d50 = resto / 50;
    resto = resto % 50;

    d1 = resto / 1;
    resto = resto % 1;

    printf("Valor: %d\n",n);
    printf("Notas de 100: %d\n", d100);
    printf("Notas de 50: %d\n", d50);
    printf("Notas de 1: %d\n",d1);


    return 0;
}
