#include <stdio.h>

int main() {

    int n, resto, orig, invertido=0;

    printf("Digito:\n");
    scanf("%d",&n);
    orig = n;

    while(n != 0) {
        resto = n % 10;
        invertido = (invertido*10) + resto;
        n /= 10; 
    }

    printf("Número Invertido do %d:\n", orig);
    printf("%d",invertido);

}
