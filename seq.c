#include <stdio.h>

int main() {

    int n, proximo;
    float seq, p1, p2;
    
    printf("Informe o valor de \n");
    scanf("%d",&n);

    p1 = 1;
    p2 = 3;
    proximo = 0;
    while (proximo < n) {
       seq = p1 + p2; 
       printf("Seq: %.2f + %.2f = %.2f\n", seq, p1, p2);

       //atualiza os valores
        p1 = p2;
        p2 = seq;

       proximo++;
    } 



    return 0;
}
