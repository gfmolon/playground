#include <stdio.h>

int main() {

    int v[9] = {0};
    int cont, i, ok, j, repetido;

    for(i=0; i<9; i++) { 
        printf("Informe um número:\n");
        scanf("%d", &v[i]);
    }

    ok = 0; 
    for(i=0; i<9; i++) {
        if(v[i] > 0 && v[i] < 10) {
           ok++; 
        }
    }

    repetido = 0;
    for(i=0; i<9; i++) {
        for(j=0; j<i; j++) {
            if (v[i] == v[j]) {
                repetido = 1;
                break;
            }
        }
    }

    if (ok == 9 && repetido == 0) {
        printf("1\n");
    } else {
        printf("0\n");
    }

}
