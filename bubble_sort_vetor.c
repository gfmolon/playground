#include <stdio.h>

int main () {

    int i, j, aux;
    int v[10];

    printf("Coleta de dados:\n");
    for(i=0; i<10; i++) {
        printf("Informe o valor\n");
        scanf("%d",&v[i]);
    }

    printf("Processamento:\n");
    for(i=0; i<10; i++) {
        for(j=0; j < 9-i; j++) {
            if(v[j] > v[j+1]) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
            
        }
    }

    printf("Ordem Crescente:\n");
    for(i=0; i<10; i++) {
        printf("%d\n",v[i]);
    }

    return 0;

}
