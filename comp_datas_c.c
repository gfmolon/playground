
#include <stdio.h>

int main() {
    int d, m, a;     
    int da, ma, aa;   
    int idade;

    printf("Informe a Data de Nascimento:\n");
    scanf("%d %d %d", &d, &m, &a);

    printf("Informe a Data Atual:\n");
    scanf("%d %d %d", &da, &ma, &aa);

    idade = aa - a;

    if (ma < m || (ma == m && da < d)) {
        idade = idade - 1;
    }

    if (idade >= 18) {
        printf("Maior de idade.\n");
    } else {
        printf("Menor de idade.\n");
    }

    return 0;
}
