#include <stdio.h>

int main() {

    int v[5] = {1,2,3,4,5};
    int i, rot, aux, vai=0;

    printf("Rotacinar ?");
    scanf("%d",&rot);

    if (rot == 1) {
        while (v[0] != 5) {
            aux = v[0];
            for(i=0; i<4; i++) {
                v[i] = v[i+1];
            }
            v[4] = aux;
            vai++;
        }
        for(i=0; i<5; i++) {
            printf("%d\n", v[i]);
        }
        

    } else {
        printf("Programa encerrado.\n");
        return 1;
    }

}
