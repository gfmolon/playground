#include <stdio.h>

int main() {

    int d1, m1, a1;
    int d2, m2, a2;
    int diferenca;


    printf("Data de nascimento:\n");
    scanf("%d%d%d",&d1,&m1,&a1);

    printf("Data atual:\n");
    scanf("%d%d%d",&d2,&m2,&a2);

    // validando data
    
    if (d1 <= 0 || d1 > 31) {
        printf("Dia inválido.\n");
        return 1;
    }

    if (m1 <= 0 || m1 > 12) {
        printf("Mês inválido.\n");
        return 1;
    }

    if (a1 <= 0 || a1 > 9999) {
        printf("Ano inválido.\n");
        return 1;
    }


    //

    diferenca = a2 - a1;

    if (m1 > m2) {
        diferenca--;
    }
    else if (m1 == m2 && d1 > d2) {
        diferenca--;
    }

    printf("Data1: %d %d %d\n", d1, m1, a1);
    printf("Data2: %d %d %d\n\n",d2,m2,a2);


    printf("Diferença idade: %d\n", diferenca);

    return 0;
}
