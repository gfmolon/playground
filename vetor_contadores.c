#include <stdio.h>

int main() {

    int i, n;
    int v[11] = {0};

    for(i=0; i<100; i++) {
        printf("Informe o valor\n");
        scanf("%d",&n);

        if(n > 0 && n <= 10) {
            v[n]++;
        } else {
            i--;
        }
    }

    printf("Contador:\n");
    for(i=1; i<=10; i++) {
        printf("%d -> %d\n", i, v[i]);
    }

    return 0;
}
