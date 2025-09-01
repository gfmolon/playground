#include <stdio.h>

int main() {

    int n;
    int limite;
    int v[6] = {0};
    int i, igual_1; 

    i=0;
    limite=0;
    while (limite < 5) {
        printf("Digite um valor:\n");
        scanf("%d",&n);

        if (n < 1 || n > 6) {
            printf("Valor Inválido.\n");
        } else {
            v[n]++;
            limite++;
        }
    }
   

    printf("Resultados:\n");
    for(i=1; i<6; i++) {
        printf("%d -> %d\n", i, v[i]);
    }
   


    return 0;
}
