#include <stdio.h>

int main() {

    int d,m,a;
    int d2,m2,a2;
    int idade;

    printf("Informe dia mes e ano:\n");
    scanf("%d%d%d",&d,&m,&a);

    d2 = 18;
    m2 = 6;
    a2 = 2025;

    idade = a2 - a;

    if (m < m2) {
        idade--;
    } else if (m == m2 && d < d2) {
        idade--;
    }

    if (a >= a2) {
        printf("Erro.\n");
        return 1;
    }
       
    printf("Idade do indivíduo: %d\n", idade);


    return 0;
}
