#include <stdio.h>

int main() {

    int a, b, c, i;
    int aux, n;

    for(i=0; i <3; i++) {
        printf("Informe um valor:\n");
        scanf("%d",&n);
        if(i == 0) {
            a = n;
        } else if (i == 1) {
            b = n;
        } else if (i == 2) {
            c = n;
        }

    }
    printf("A: %d B: %d C: %d \n",a,b,c);

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }

    if (a > c) {
        aux = a;
        a = c;
        c = aux;
    }

    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }

    printf("Números em ordem:\n");
    printf("A: %d B: %d C: %d \n",a,b,c);

}
