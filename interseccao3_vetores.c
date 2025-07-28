#include <stdio.h>
#define N 10

int main() {

    int a[N], b[N], c[N], d[N];
    int i, j, achoub, achouc, jaexiste, k;

    for(i=0; i<N; i++) {
        printf("Informe o valor:\n");
        scanf("%d",&a[i]);
    }
    for(i=0; i<N; i++) {
        printf("Informe o valor:\n");
        scanf("%d",&b[i]);
    }
    for(i=0; i<N; i++) {
        printf("Informe o valor:\n");
        scanf("%d",&c[i]);
    }

    k=0;
    for(i=0; i<N; i++) {
        
        achoub = 0;
        for(j=0; j<N; j++) {
            if(a[i] == b[j]) {
                achoub++;
            }
        }

        achouc = 0;
        for(j=0; j<N; j++) {
            if(a[i] == c[j]) {
                achouc++;
            }
        }

        jaexiste=0;
        for(j=0; j<k; j++) {
            if (a[i] == d[j]) {
                jaexiste = 1;
                break;
            }
        } 

        if (achoub && achouc && !jaexiste) {
            d[k] = a[i];
            k++;
        }
    }

    printf("Valores em comum a partir do vetor A:\n");
    for(i=0; i<k; i++) {
        printf("%d\n",d[i]);
    }


}
