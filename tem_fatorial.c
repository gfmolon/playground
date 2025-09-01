#include <stdio.h>

int main() {

    int fat=1;
    int n; int i;


    printf("Diga qual valor voce quer saber se é fatorial de algum número:\n");
    scanf("%d",&n);

    i=1;
    while (fat < n) {
        i++;
        fat *= i;
    }

    if (fat == n) {
        printf(" %d é fatorial de %d\n", fat, i);
    } else {
        printf("Nada encontrado.\n");
    }

    return 0;
}
