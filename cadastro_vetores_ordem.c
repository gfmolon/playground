#include <stdio.h>

int main() {

    int v[5];
    int n, i,j, aux, imeiro, limite;

    limite = 0;
    while(n != 0 && limite < 5) {
        printf("Informe um valor");
        scanf("%d",&n);
        v[limite] = n;
        limite++;
    }

    printf("Valores Cadastrados:\n");
    for(i=0; i<limite; i++) {
       printf("%d\n",v[i]); 
    }

    printf("Valores em ordem:\n");

    for(i=0; i<limite; i++) {
        for(j=0; j<(limite-1)-i; j++) {
            if(v[j] > v[j+1]) {
               aux = v[j];
               v[j] = v[j+1];
               v[j+1] = aux;
            }
        }
    }

    for(i=0; i<limite; i++) {
        printf("%d\n",v[i]);
    }

}
