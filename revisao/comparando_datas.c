#include <stdio.h>

int main() {

    int d1,m1,a1;
    int d2,m2,a2;

    printf("Compare as duas datas:\n");

    printf("Digite a data 1:\n");
    scanf("%d%d%d", &d1,&m1,&a1);

    printf("Digite a data 2:\n");
    scanf("%d%d%d", &d2,&m2,&a2);

    if ((a1 > a2) || (a1 == a2 && m1 > m2) || (a1 == a2 && m1 == m2 && d1 > d2)) {
        printf("Maior data: %d/%d/%d\n", d1, m1, a1);
        printf("Menor data: %d/%d/%d\n", d2,m2,a2);
    } else {
        printf("Maior data: %d/%d/%d\n", d2, m2, a2);
        printf("Menor data: %d/%d/%d\n", d1, m1, a1);
    }

}
