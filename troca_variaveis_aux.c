#include <stdio.h>

int main() {
    
    int v1, v2, v3, aux;

    printf("informe v1, v2, v3");
    scanf("%d %d %d",&v1, &v2, &v3);

    printf("V1: %d\n", v1);
    printf("V2: %d\n", v2);
    printf("V3: %d\n", v3);

    //ajuste
    aux = v2;
    v2 = v1;
    v1 = v3;
    v3 = aux;

    printf("INVERSÃO:\n");
    printf("V1: %d\n", v1);
    printf("V2: %d\n", v2);
    printf("V3: %d\n", v3);
}
