
#include <stdio.h>

int main() {
    int c[100];       // Códigos
    float p[100];     // Preços
    int quant = 0;    // Quantidade de produtos cadastrados
    int n, i, sair = 1;
    float pr;

    while (quant < 100) {
        printf("Informe o código do produto:\n");
        scanf("%d", &n);
        c[quant] = n;

        printf("Informe o preço do produto:\n");
        scanf("%f", &pr);
        p[quant] = pr;

        quant++;

        printf("Digite 0 para sair ou outro número para continuar:\n");
        scanf("%d", &sair);
        if (sair == 0) {
            break;
        }
    }

    printf("\nLista de Itens:\n");
    for (i = 0; i < quant; i++) {
        printf("Produto: %d | Preço: %.2f\n", c[i], p[i]);
    }

    return 0;
}
