#include <stdio.h>
#define N 10

void menu() {
    printf("Digite para começar:\n");
    printf("1 - Cadastrar Tarefa\n");
    printf("2 - Listar Tarefa\n");
    printf("3 - Excluir Tarefa (fazer)\n");
    printf("4 - Sair\n");
}

int cadastrar(char t[][100], int p[], int pos_inicio){
    int i=pos_inicio, sair;
    while(i < N) {
        printf("Descrição da Tarefa:\n");
        scanf("%s", t[i]); // char nao vai ponteiro ?
        printf("Prioridade de 1 a 3:\n");
        scanf("%d",&p[i]);
        i++;
        printf("Digite 0 para encerrar ou 1 para continuar:\n");
        scanf("%d",&sair);
        if(sair == 0) {
            break;
        } else if (sair == 1) { continue; } 
    }
    return i;
}

void listar(char t[][100], int p[], int max) {
    printf("****************************\n");
    for(int i=0; i<max; i++) {
        if (t[i][0] != '\0' && p[i] != 0) {
            printf("Tarefa: %s | Prioridade: %d\n",t[i] ,p[i]);
        }
    }
    printf("****************************\n");
}

int main() {
    int opcao, i;
    int cont=0;
    char t[N][100];
    int p[N];

    while(1) {
        printf("CRM v1.0 em C:\n\n");
        menu();
        scanf("%d",&opcao);
        if(opcao == 1) {
            cont = cadastrar(t,p, cont);
        }
        else if (opcao == 2) {
            listar(t,p,cont);
        }
        else if (opcao == 3) {
            printf("Excluir Tarefa.\n");
        } else {
            printf("Programa encerrado.\n");
            listar(t,p,cont);
            break;
        }
    }   
    
}
