#include <stdio.h>

int main() {

    int primos, primo_testado;
    int cont, primo_encontrado;
    int v[10], i, k=0;
    
    primos =0;
    primo_testado = 1;
    while (primos < 10) {

        cont=0;
        for (i=1; i<=primo_testado; i++) {
            if (primo_testado % i == 0) {
                cont++;
            }
        }

        if (cont == 2) {
            v[k] = primo_testado;
            k++;
            primos++;
        }
        primo_testado++;
    }

    printf("Primos a partir de 1:\n");

    for(i=0; i<k; i++) {
        printf("%d ",v[i]);
    }

}
