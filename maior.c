
#include <stdio.h>

int main() {

    int n1, n2, n3, maior;

    printf("Escreve 3 numeros diferentes:\n");
    scanf("%d %d %d",&n1,&n2, &n3);

    maior = n1;
    if(n2 > maior) {
        maior = n2;
    } 
    if (n3 > maior) { 
        maior = n3;
    }

    printf("Maior: %d\n", maior);

}
