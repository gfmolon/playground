
#include <stdio.h>

int main() {

    int a, b, c;

    printf("Informe os números:\n");
    scanf("%d%d%d",&a,&b,&c);

    if ( (a < b+c) && (b < a+c) && (c < b + a) ) {
        printf("Triangulo identificado!\n");

        if (a == b && b == c) {
            printf("Equilátero!\n");
        } else if ( a != b && b != c && c != a) {
            printf("Escaleno! (Todos diferentes) \n");
        } else {
            printf("Isósceles.\n (Dois lados iguais)\n");
        }

    } else {
        printf("Isso não é um triangulo.\n");
    }




    return 0;
}
