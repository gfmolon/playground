#include <stdio.h>

int main() {

    int n[5];
    int i, j, cont, repetidos, mais_repetido;

    for(i=0; i<5; i++) {
        printf("Informe um valor:\n");
        scanf("%d",&n[i]);
    }

    repetidos = 0;
    for(i=0; i<5; i++) {
        cont = 0;
        for(j=0; j<5; j++) {
            if(n[i] == n[j]) {
                cont++;
            }
        }
        if (cont > repetidos) {
            repetidos = cont;
            mais_repetido = n[i];
        }
    }

    printf("Mais Repetido: %d -> %d vezes", mais_repetido, repetidos);
}
