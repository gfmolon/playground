#include <stdio.h>

int main() {

    int n[10], i, j;
    int a[10], k=0, aux, r=0; 
    int menor[10];
    int maior[10];
    int menor_n[10];
    int maior_n[10];

    for(i=0; i<10; i++) {
        printf("Informe codigo e idade:\n");
        scanf("%d %d", &n[i], &a[i]);
    }

    for(i=0; i<10; i++) {
        if(a[i] >= 18) {
            maior[k] = a[i];
            maior_n[k] = n[i];
            k++;
        } else {
            menor[r] = a[i];
            menor_n[r] = n[i];
            r++;
        }
    }

    for(i=0; i<k-1; i++) {
        for(j=0; j < k-1-i; j++) {
            if (maior[j] < maior[j+1]) {
                aux = maior[j];
                maior[j] = maior[j+1];
                maior[j+1] = aux;

                aux = maior_n[j];
                maior_n[j] = maior_n[j+1];
                maior_n[j+1] = aux;
            }}
        }
    
    printf("MAIORES DE IDADE:");
    for(i=0; i<k; i++) {
        printf("Codigo: %d, idade: %d\n", maior_n[i], maior[i]);
    }

    for(i=0; i<r-1; i++) {
        for(j=0; j < r-1-i; j++) {
            if (menor[j] < menor[j+1]) {
                aux = menor[j];
                menor[j] = menor[j+1];
                menor[j+1] = aux;

                aux = menor_n[j];
                menor_n[j] = menor_n[j+1];
                menor_n[j+1] = aux;
            }}
        }
    printf("\n");
    printf("MENORES DE IDADE:");
    for(i=0; i<r; i++) {
        printf("Codigo: %d, idade: %d\n", menor_n[i], menor[i]);
    }


}
