
#include <stdio.h>

int main() {
    int i, j;

    // Matriz 3x4: 3 linhas, 4 colunas
    int a[3][4] = {
        {1, 2, 3, 4},     // linha 0
        {5, 6, 7, 8},     // linha 1
        {9, 10, 11, 12}   // linha 2
    };

    printf("Matriz completa:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%2d ", a[i][j]);  // imprime com 2 dígitos de largura
        }
        printf("\n");
    }

    printf("\nValores da diagonal (a[i][i]):\n");
    for(i = 0; i < 3; i++) {
        printf("a[%d][%d] = %d\n", i, i, a[i][i]);
    }

    return 0;
}
