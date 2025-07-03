#include <stdio.h>

int main() {

    int v[5];
    int i, j, aux;

    for(i=0; i<5; i++) {
        printf("Numero\n");
        scanf("%d",&v[i]);
    }

    for(i=0; i<5; i++) {
        for(j=0; j<4-i; j++) {
            if( v[j] > v[j+1]) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }

    for(i=0; i<5; i++) {
        printf("%d\n",v[i]);
    }

    return 0;
}
