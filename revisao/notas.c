#include <stdio.h>

int main() {
    
    int valor;
    int resto, nota_100, nota_50, nota_1;

    printf("Informe o valor de notas:\n");
    scanf("%d",&valor);

    nota_100 = valor / 100;
    resto = valor % 100;

    nota_50 = resto / 50;
    resto = resto % 50;

    nota_1 = resto / 1;
    resto = resto % 1;

    printf("Notas 100: %d\n", nota_100);
    printf("Notas 50: %d\n", nota_50);
    printf("Notas 1: %d\n", nota_1);

}
