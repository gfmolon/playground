#include <stdio.h>

int main() {

    int i, j;
    int tam = 5;
    int v[5] = {1,2,3,4,5};
    
    i=0;
    while(i<tam) {
        if(v[i] % 2 != 0) {
            for(j=i; j<tam -1; j++) {
                v[j] = v[j+1];
            }
            tam--;
        } else {
        i++;
        }
    }

    printf("Vetor Sem números pares e rotacionado:\n");
    for(i=0; i<tam; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}
