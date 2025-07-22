

#include <stdio.h>
#include <string.h>
#define N 5

typedef struct {
    int codigo;
    char frase[100];
} Registro;

int main() {
    Registro dados[N];
    Registro aux;
    int i, j;

    // Entrada de dados
    for(i = 0; i < N; i++) {
        printf("Informe um valor e depois uma frase:\n");
        scanf("%d", &dados[i].codigo);
        scanf("%s", dados[i].frase);  // se quiser com espaços, troque por fgets (posso mostrar)
    }

    // Exibição dos dados originais
    printf("\nDados informados:\n");
    for(i = 0; i < N; i++) {
        printf("Código: %d | Frase: %s\n", dados[i].codigo, dados[i].frase);
    }

    // Ordenação Bubble Sort (baseado no código)
    for(i = 0; i < N; i++) {
        for(j = 0; j < N - 1 - i; j++) {
            if(dados[j].codigo > dados[j+1].codigo) {
                aux = dados[j];
                dados[j] = dados[j+1];
                dados[j+1] = aux;
            }
        }
    }

    // Exibição dos dados ordenados
    printf("\nOrdem Crescente:\n");
    for(i = 0; i < N; i++) {
        printf("Código: %d | Frase: %s\n", dados[i].codigo, dados[i].frase);
    }

    return 0;
}
