#include <stdio.h>

int main() {

    int matricula;
    float media, p1, p2, p3, p4;
    float aux;

    printf("Informe a matrícula:\n");
    scanf("%d",&matricula);

    printf("Notas:\n");
    scanf("%f%f%f%f",&p1,&p2,&p3,&p4);

    if(p1 > p2) {
        aux = p1;
        p1 = p2;
        p2 = aux;
    }

    if(p1 > p3) {
        aux = p1;
        p1 = p3;
        p3 = aux;
    }

    if (p1 > p4) {
        aux = p1;
        p1 = p4;
        p4 = aux;
    }

    if (p2 > p3) {
        aux = p2;
        p2 = p3;
        p3 = aux;
    } 

    if (p2 > p4) {
        aux = p2;
        p2 = p4;
        p4 = aux;
    }

    if (p3 > p4) {
        aux = p3;
        p3 = p4;
        p4 = aux;
    }

    media = (p2+p3+p4)/3;

    printf("Código do aluno: %d\n", matricula);
    printf("Média: %.2f\n", media);
    if (media >= 6) {
        printf("Aprovado.\n");
    } else {
        printf("Reprovado.\n");
    }

    return 0;
}
