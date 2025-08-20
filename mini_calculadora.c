#include <stdio.h>

int main() {

    int n1, n2, soma, subtracao, divisao, multiplicacao;
    char op;

    printf("Informe o primeiro operador:\n");
    scanf("%d",&n1);

    printf("Informe o tipo de operação: (+ - * /)\n");
    scanf(" %c",&op);
    if (op != '+' && op != '-' && op != '*' && op != '/') {
        printf("Operador inválido.\n");
        return 1;
    }

    printf("Informe o segundo operador:\n");
    scanf("%d",&n2);

    printf("Resultado:\n\n");
    if (op == '+') {
        soma = n1+n2;
        printf("%d\n", soma);
    } 

    if (op == '-') {
        subtracao = n1-n2;
        printf("%d\n", subtracao);
    }

    if (op == '/') {
        divisao = n1/n2;
        printf("%d\n", divisao);
    }

    if (op == '*') {
        multiplicacao = n1*n2;
        printf("%d\n",multiplicacao);
    }



}
