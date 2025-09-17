#include <stdio.h>

int livros(int livros[], int tamanho) {
    int i; 

    printf("Forneça com o codigo dos seus livros favoritos.\n");
    for(i=0; i<5; i++) {
        scanf("%d",&livros[i]);
    }

    return livros[5];
}

int main() {

    int lista[5], i;

    livros(lista, 5);


    printf("Livros Cadastrados:\n");
    for (i=0; i<5; i++) {
        printf("%d",lista[i]);
    }


    return 0;
}
