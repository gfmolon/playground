#include <stdio.h>

int main() {

    int cont, i, n;
    int v[11] = {0};

    cont = 0;
    while (cont < 30) {
        printf("Informe um valor:\n");
        scanf("%d",&n);
        if (n > 0 && n < 11) {
            v[n]++;
            cont++;
        }
    }

    printf("Resultado da lista:\n");
    if(cont > 0) {
        for(i=1; i<11; i++) {
            printf("Número: %d | Vezes: %d\n", i, v[i]);    
        }
    } 
}
