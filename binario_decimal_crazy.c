#include <stdio.h>

int main() {
    
    int n, orig, qt, d1, d2, d3, d4, d5, d6, soma;

    printf("Digite um número binário de até 6 dígitos:\n");
    scanf("%d",&n);
    
    orig = n;

    qt = 0;
    while (n != 0) {
        qt++;
        n /= 10;
    }

    if (qt >= 1 && qt <= 6) {
       // binario para decimal -> 
       
       // 1. separa todos dígitos
        // 2. somar com as potencias a partir da direita.
        //
        // 123456
        d6 = orig % 10;
        d5 = (orig / 10) % 10;
        d4 = (orig / 100) % 10;
        d3 = (orig / 1000) % 10;
        d2 = (orig / 10000) % 10;
        d1 = (orig / 100000) % 10;

        soma = d1*(2*2*2*2*2) + d2*(2*2*2*2) + d3*(2*2*2) + d4*(2*2) + d5*(2) + d6*(1);
        printf("%d em binário é %d em decimal.\n", orig, soma);

    }

    return 0;
}
