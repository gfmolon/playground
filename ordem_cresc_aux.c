#include <stdio.h> 

int main() {

    int n1, n2, n3, aux;

    printf("Escreva 3 valores:\n");
    scanf("%d %d %d", &n1, &n2, &n3);


    // ORDEM CRESCENTE //

    // n1 e n2
    if (n1 > n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    // n1 e n3
    if (n1 > n3) {
        aux = n1;
        n1 = n3;
        n3 = aux;
    }

    //n2 e n3
    if (n2 > n3) {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    printf("Maior: %d %d %d\n", n1, n2, n3);

}
