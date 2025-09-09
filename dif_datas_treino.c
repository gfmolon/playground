#include <stdio.h>

int main() {

    int d1, m1, a1, d2, m2, a2; 
    int diferenca;

    printf("Informe a data inicial:\n");
    scanf("%d%d%d",&d1,&m1,&a1);

    printf("Informe a data final:\n");
    scanf("%d%d%d",&d2,&m2,&a2);

    if (d1 < 1 || d1 > 30) {
        printf("Erro.\n");
        return 1;
    }
    if (d2 < 1 || d2 > 30 ) {
        printf("Erro.\n");
        return 1;
    }

    if (m1 < 1 || m1 > 12) {
        printf("Erro.\n");
        return 1;
    }

    if (m2 < 1 || m2 > 12) {
        printf("Erro.\n");
        return 1;
    }

    if (a1 < 1 || a1 > 9999) {
        printf("Erro.\n");
        return 1;
    }

    if (a2 < 1 || a2 > 9999) {
        printf("Erro.\n");
        return 1;
    }


    diferenca = a2 - a1;

    if ((m1 > m2) || (m1 == m2) && d1 > d2) {
        diferenca--;
    }

    printf("Diferença: %d\n", diferenca);



    return 0;
}
