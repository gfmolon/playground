#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1, n2, n3;
    int maior1, maior2;

    printf("Informe três números.\n");
    scanf("%d%d%d",&n1,&n2,&n3);

    maior1 = (n1 + n2 + abs(n1 - n2)) / 2;
    maior2 = (maior1 + n3 + abs(maior1 - n3)) / 2;

    printf("O maior dos Três é : %d\n", maior2);


}
