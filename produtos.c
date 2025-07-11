#include <stdio.h>

int main() {

    int c[10];
    float p[10], maiscaro_p, maiscaro_c, aux, aux2;
    int i, j;

    //Ler Códigos dos produtos
    for(i=0; i<10; i++) {
        printf("Insira o código dos produtos:\n");
        scanf("%d",&c[i]);
    }

    //Ler Preços dos produtos
    for(i=0; i<10; i++) {
        printf("Insira o preço dos produtos:\n");
        scanf("%f",&p[i]);
    }

    //Exibir Códigos e Preços
    printf("Lista de Produtos:\n");
    for(i=0; i<10; i++) {
        printf("Produto: %d - Preço: %.2f\n", c[i], p[i]);
    }

    //Exibe Codigo e Produto mais caro
    maiscaro_p = p[0];
    maiscaro_c = c[0];
    for(i=0; i<10; i++) {
        if(p[i] > maiscaro_p) {
            maiscaro_p = p[i];
            maiscaro_c = c[i];
        }
    }
    printf("Produto mais caro: %d Valor: %.2f\n", maiscaro_c, maiscaro_p); 

    //Exibir Produtos e Nomes por ordem de preço decrescente
    //reordena - bubble sort
    printf("Lista de Produtos - Ordem de Preço>\n");
    for(i=0; i<10; i++) {
        for(j=0; j<9-i; j++) {
            if(p[j] < p[j+1]) {

                //ordem preços
                aux = p[j];
                p[j] = p[j+1];
                p[j+1] = aux;
    
                //ordem códigos 
                aux2 = c[j];
                c[j] = c[j+1];
                c[j+1] = aux2;
            }
        }
    }
    
    //exibe a lista reordana:
    for(i=0; i<10; i++) {
        printf("Produto: %d | Preço:%.2f\n", c[i], p[i]);
    }

    return 0;

}
