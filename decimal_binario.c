//decimal em binario

#include <stdio.h>

int main() {

    int n;
    printf("digite um decimal (0..63): ");
    scanf("%d", &n);

    int r0 =  n        % 2;   // resto da 1a divisão (2^0)
    int r1 = (n / 2)   % 2;   // resto da 2a divisão (2^1)
    int r2 = (n / 4)   % 2;   // resto da 3a divisão (2^2)
    int r3 = (n / 8)   % 2;   // resto da 4a divisão (2^3)
    int r4 = (n / 16)  % 2;   // resto da 5a divisão (2^4)
    int r5 = (n / 32)  % 2;   // resto da 6a divisão (2^5)

    // o binário é a sequência dos restos de baixo pra cima:
    printf("binario (6 bits): %d%d%d%d%d%d\n", r5, r4, r3, r2, r1, r0);

    // só pra confirmar a volta (binario -> decimal), também sem if/while:
    int decimal_confere = r5*(32) + r4*(16) + r3*(8) + r2*(4) + r1*(2) + r0*(1);
    printf("confere de volta: %d\n", decimal_confere);


    return 0;
}
