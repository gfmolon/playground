#include <stdio.h>
#include <string.h>
#define N 5

int main() {

    int v[N];
    int i, j, aux;
    char aux2[100];
    char f[N][100];

    for(i=0; i<N; i++) {
        printf("Informe um valor e depois uma frase:\n");
        scanf("%d",&v[i]);
        scanf("%s",f[i]);
    }

    for(i=0; i<N; i++) {
        printf("Código:%d | Frase: %s\n", v[i], f[i]);
    }

    printf("Ordem Crescente:\n");
    for(i=0; i<N; i++) {
        for(j=0; j<N-1-i; j++) {
            if (v[j] > v[j+1]) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;

                strcpy(aux2, f[j]);
                strcpy(f[j], f[j+1]);
                strcpy(f[j+1], aux2);
            }
        }
    }
    printf("\n\n");
    for(i=0; i<N; i++) {
        printf("Código:%d | Frase: %s\n", v[i], f[i]);
    }
    
}
