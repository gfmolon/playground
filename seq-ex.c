#include <stdio.h>

int main() {

    int n, x;
    int i, cont, sinal;
    float soma, somador, resultado;

    printf("Informe o números da sequência:\n");
    scanf("%d",&n);

    printf("Valor do X:\n");
    scanf("%d",&x);

    sinal = 1;
    soma=0.0;
    cont=0;
    somador=1;
    while(cont < n) {
    
        resultado = x/somador * sinal;
        printf("Soma: %f\n", resultado);

        soma += resultado;
        somador += 2;     
        sinal *= -1;
        cont++;
    }

    printf("Soma dos termos: %.2f\n", soma);

    return 0;
}
