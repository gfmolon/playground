#include <stdio.h>
#define N 9999

int main() {

    int n, i, cont, tentativas;
    int d[N], k;

    k=0;
    tentativas = 1;

    while(tentativas <= 10) {
        printf("Tentativa n -> %d\n", tentativas);
        printf("Informe o valor e eu te digo se é primo ou não:\n");
        scanf("%d",&n);

        printf("Número digitado: %d\n\n", n);
        
        cont = 0;
        k=0;
        for(i=1; i<=n; i++) {
            if (n % i == 0) {
                d[k] = i;
                k++;
                cont++;
            }
        }

        if (cont == 2) {
            printf("Primo encontrado. Pois tem 2 divisores.\n");
            printf("Divisores encontrados:\n");
            for (i=0; i<k; i++) {
                printf("%d\n", d[i]);
            }

            printf("------\n\nPrograma encerrado.\n");
            break;
        } else {
            printf("Não é primo. Pois tem %d divisores.\n", cont);
            printf("Divisores encontrados:\n");
            for (i=0; i<k; i++) {
                printf("%d\n", d[i]);
            }
            tentativas++;
        }

    }

    return 0;
}
