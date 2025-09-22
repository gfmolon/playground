#include <stdio.h>

int main() {

    int n, n2, achou, i, j, aux, limite, k, dados[5], procurar;

    k=0;
    limite = 0;
    while(limite < 5) { 
        printf("Informe um valor:");
        scanf("%d",&n);

        if (n < 0) {
            break;
        }
        dados[k] = n;
        k++;
        limite++;
    }

    printf("Dados inseridos:\n");
    for(i=0; i<k; i++) {
        printf("%d\n", dados[i]);
    }

    printf("Lista Ordenada:\n");
    for(i=0; i<k; i++) {
        for(j=0; j < k-1-i; j++) {
            if (dados[j] > dados[j+1]) {
                aux = dados[j];
                dados[j] = dados[j+1];
                dados[j+1] = aux;
            }
        }
    } 

    for(i=0; i<k; i++) {
        printf("%d\n",dados[i]);
    }

    printf("Procurar no vetor? (1/0)");
    scanf("%d",&procurar);
   
    achou = 0;
    if (procurar == 1) {
        printf("Informe um número que deseja procurar:\n");
        scanf("%d",&n2);

        for (i=0; i<k; i++) {
            if (dados[i] == n2) {
                achou++;
                break;
            }
        }

        if (achou) {
            printf("%d está na lista!\n", n2);
        }
        else {
            printf("Este número não está na lista.\n");
        }

    }

    if (k > 1) {
        // movendo uma casa a esquerda
        aux = dados[0];
        for(i=0; i<k-1; i++) {
            dados[i] = dados[i+1];
        }
        dados[k-1] = aux;

        for(i=0; i<k; i++) {
            printf("%d\n", dados[i]);
        }
    }

    return 0;
}
