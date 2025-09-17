#include <stdio.h>

int main() {
    
    int n, i,qt, soma;
    printf("Informe o valor de n:\n");
    scanf("%d",&n);

    qt=0;
    soma =0;
    for(i=1; i<=n; i++) {
        if (n % i == 0) {
            soma += i;
            qt++;
        }
    }

    printf("Soma dos divisores de %d: %d\n", n, soma);
    printf("Quantidade de Divisores: %d\n", qt);

    return 0;
}
