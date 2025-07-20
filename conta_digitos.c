#include <stdio.h>

int main() {

    int n, orig;
    int i;
    int cont_digitos = 0;

    printf("Digite um número\n");
    scanf("%d",&n);
    orig = n;

    while(n != 0) {
        cont_digitos++;
        n /= 10;
    }

    printf("Dígitos: %d\n", cont_digitos);
}
