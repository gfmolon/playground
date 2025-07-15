#include <stdio.h>

int main() {

    int v[3] = {1,2,3};
    int achou=0, i, n;

    printf("Informe um número pra buscar na sequência secreta..\n");
    scanf("%d",&n);

    // verifica se n está na sequência
    for(i=0; i<3; i++) {
            if(v[i] == n) {
                achou = 1;
        }
    }

        if(achou) {
            printf("%d está na sequência.\n", n);
        } else {
            printf("%d não ta na sequência.\n", n);
        }



}
