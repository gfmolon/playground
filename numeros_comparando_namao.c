#include <stdio.h>

int main() {

    int v1 = 2, v2 = 3, v4=1, v3 = 5, v5 = 10, v6=12;
    int aux;

    if (v1 > v2) {
        aux = v1;
        v1 = v2;
        v2 = aux;
    }

    if (v1 > v3) {
        aux = v1;
        v1 = v3;
        v3 = aux;
    }

    if (v1 > v4) {
        aux = v1;
        v1 = v4;
        v4 = aux;
    }

    if (v1 > v5) {
        aux = v1;
        v1 = v5;
        v5 = aux;
    }

    if (v1 > v6) {
        aux = v1;
        v1 = v6;
        v6 = aux;
    }

    if (v2 > v3) {
        aux = v2;
        v2 = v3;
        v3 = aux;
    }

    if (v2 > v4) {
        aux = v2;
        v2 = v4;
        v4 = aux;
    }

    if (v2 > v5) {
        aux = v2;
        v2 = v5;
        v5 = aux;
    }

    if (v2 > v6) {
        aux = v2;
        v2 = v6;
        v6 = aux;
    }

    if (v3 > v4) {
        aux = v3;
        v3 = v4;
        v4 = aux;
    }
    
    if (v4 > v5) {
        aux = v4;
        v4 = v5;
        v5 = aux;
    }

    if (v4 > v6) {
        aux = v4;
        v4 = v6;
        v6 = aux;
    }

    if(v5 > v6) {
        aux = v5;
        v5 = v6;
        v6 = aux;
    }


    printf("Ordem Crescente: %d %d %d %d %d %d \n", v1, v2, v3,v4,v5,v6);



    
}
