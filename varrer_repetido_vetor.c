#include <stdio.h>

int main() {

    int i, v[5], k, j, rep;

    for(i=0; i<5; i++) {
        printf("Adicionar no vetor:\n");
        scanf("%d",&v[i]);
    }

    // Retirar elementos repetidos
    k=0;
    for(i=0; i<5; i++) {
        rep = 0;
        for(j=0; j<k; j++) {
            if (v[i] == v[j]) {
                rep = 1;
                break;
            }
        }

        if (!rep) {
            v[k] = v[i];
            k++;
        }

    }

    // Ver elementos Não Repetidos.
    printf("Elementos não repetidos:\n");
    for(i=0; i<k; i++) {
        printf("%d\n", v[i]);
    }

}
