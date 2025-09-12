#include <stdio.h>

int main() {

    int n, i, resto, soma_digitos, maior_soma;

    maior_soma = 0;
    for(i=0; i<10; i++) {
        printf("Digite um número:\n");
        scanf("%d",&n);

        soma_digitos = 0;
        while(n > 0) {
            resto = n % 10;
            soma_digitos += resto;
            printf("%d -> Soma: %d\n", resto, soma_digitos);
            n /= 10;
        }

        if (soma_digitos > maior_soma) {
            maior_soma = soma_digitos;
        }
    }

        printf("Maior soma encontrada: %d\n", maior_soma);

    return 0;
}
