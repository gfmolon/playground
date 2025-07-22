#include <stdio.h>
#define N 5

void listar_pecas(int v[], int max) {
    for(int i=0; i<max; i++) {
        printf("%d\n",v[i]);
    }
}

void cadastrar_pecas(int c[], int p[], int max) {
    for(int i=0; i<N; i++) {
        printf("Código:\n");
        scanf("%d",&c[i]);
        printf("Preço:\n");
        scanf("%d",&p[i]);
    }
}

int main() {

    int c[N];
    int p[N];
    int i, opcao, sair, cod, preco, achou;

    while(1) {
        printf("Digite 0 para adicionar peças:\n");
        printf("Digite 1 para listar as peças:\n");
        printf("Digite 2 para procurar por codigo:\n");
        scanf("%d",&opcao);
        if (opcao == 0) {
            cadastrar_pecas(c,p,N);
        }
        else if (opcao == 1) {
           listar_pecas(c, N);
           listar_pecas(p, N);
           printf("Deseja sair?\n (1/0)");
           scanf("%d",&sair);
           if (sair == 1) {
               printf("Programa Encerrado.\n");
               break;
           }
        }
        else if (opcao == 2) {
            printf("Qual o código?\n");
            scanf("%d",&cod);
            achou = 0;
            for(i=0; i<N; i++) {
                if(cod == c[i]) {
                    achou = 1;
                    preco = p[i];
                    break;
                }
            }
            if(achou) {
                printf("Código encontrado! %d com preço: %d\n", cod, preco);
            }
        }
    }

}
