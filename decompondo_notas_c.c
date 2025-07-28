#include <stdio.h>

int main() {

    int valor, dois, cinco, dez, vinte, cinquenta, cem, um;
    int resto;

    printf("Informe um valor:\n");
    scanf("%d",&valor);
     
    cem = valor / 100;
    resto = valor % 100;

    cinquenta = resto / 50;
    resto = resto % 50;

    vinte = resto / 20;
    resto = resto % 20;

    dez = resto / 10;
    resto = resto % 10;

    cinco = resto / 5;
    resto = resto % 5;

    dois = resto / 2;
    resto = resto % 2;

    um = resto;

    printf("Resultado:\n");
    printf("Cem: %d\n", cem);
    printf("Cinquenta: %d\n", cinquenta);
    printf("Vinte: %d\n", vinte);
    printf("Dez: %d\n",dez);
    printf("Cinco: %d\n", cinco);
    printf("Dois: %d\n", dois);
}
