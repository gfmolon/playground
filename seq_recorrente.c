#include <stdio.h>

int main() {
int p0 = 1, p1 = 0, p2 = 0, p3=0;
int atual, n;

printf("Sequência:\n");

printf("valor:\n");
scanf("%d",&n);

    while(1) {
        atual = p0 + p1 + p2 + p3;
        
        if (atual == n || p0 == n || p1 == n || p2 == n || p3 == n) {
            printf("Pertence a sequência.\n");
            break;
        }

        p0 = p1;
        p1 = p2;
        p2 = p3;
        p3 = atual;
    }

}
