#include <stdio.h>

int numero() {
    
    int n;

    printf("Forneça um número:\n");
    scanf("%d",&n);

    return n;
}


int main() {

    int n;

    n = numero();

    printf("Número digitado: %d\n",n);


    return 0;
}
