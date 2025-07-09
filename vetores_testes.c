#include <stdio.h>

int main() {

    int j, i, k=0;
    int v[5] = {1,2,54,42,65};
    int v2[5] = {45,23,1,4,9999999};
    int v3[5];
    int achou, maior=v[0], somav1=0, somav2=0, maior_soma;

    for(i=0; i<5; i++) {
        achou = 0;
        for(j=0; j<5; j++) {
            // maior
            if(v[i] > maior) {
                maior = v[i];
            }
            if(v2[j]> maior) {
                maior = v2[j];
            }
            // elementos iguais
            if(v[i] == v2[j]) {
                achou = 1;
                break;
            }
        }
        if(achou) {
            v3[k++] = v[i];
        }
    }

    for(i=0; i<5; i++) {
        somav1 += v[i];
    }
    for(i=0; i<5; i++) {
        somav2 += v2[i];
    }

    printf("Vetor Final: %d\n", k);
    for(i=0; i<k; i++) {
        printf("i: %d ->  %d\n", i, v3[i]);
    }

    printf("Maior: %d\n", maior);
    if(somav1 > somav2) {
        maior_soma = somav1;
    } else {
        maior_soma = somav2;
    }
    printf("Soma conjunto 1: %d\n", somav1);
    printf("Soma conjunto 2: %d\n", somav2);
    printf("Maior Soma: %d\n", maior_soma); 
    
    return 0;
}
