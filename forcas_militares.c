#include <stdio.h>

int maior_18(int idade) {
    if (idade >= 18) {
        return 1;
    } else {
        return 0;
    }
        
}

int main() {

    int n, idade;

    printf("Informe a sua idade:\n");
    scanf("%d",&n);

    idade = n;

    if (maior_18(idade)) {
        printf("Pode ir para as forças militares.\n");
    } else {
        printf("Você precisa amadurecer.\n");
    }

    return 0;
}
