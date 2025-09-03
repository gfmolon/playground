#include <stdio.h>

int main() {
    
    int m, recuperacao;
    float p1, p2, p3, mh, mh2, p4, menor_nota;
    
    printf("Informe um número referente a matrícula e as 3 notas:\n");
    scanf("%d%f%f%f",&m,&p1,&p2,&p3);

    if (p1 == 0 || p2 == 0 || p3 == 0) {
        mh = 0;
    } else {   
        mh = 3.0 / (1.0/p1 + 1.0/p2 + 1.0/p3);
    }

    printf("Matrícula: %d\n",m);
    printf("Média: %.2f\n",mh);
    if (mh < 6) {
        printf("Reprovado. (Vai pra análise de recuperação.)\n");
    } else {
        printf("Aprovado.\n");
    }

    menor_nota = p1;
    if (p2 < menor_nota) {
        menor_nota = p2;
    }
    if (p3 < menor_nota) {
        menor_nota = p3;
    }

    if (mh < 6) {
        printf("Analisando..\n");

        //p1
        if (p1 == menor_nota) {
            mh2 = 3.0 / (1.0/10.0 + 1.0/p2 + 1.0/p3);
            if (mh2 >= 6) {
                printf("Quarta prova:\n");
                scanf("%f",&p4);
                
                mh2 = 3.0 / (1.0/p4 + 1.0/p2 + 1.0/p3);
                if (mh2 >= 6 ) {
                    printf("Recuperação..\n");
                    printf("Nota: %.2f\n", p4 );
                    printf("Média: %.2f\n", mh2);
                    if (mh2 >= 6) {
                        printf("Aprovado. Yuhull..\n");
                    }
                }

            }
        }

        //p2
        if (p2 == menor_nota) {
            mh2 = 3.0 / (1.0/p1 + 1.0/10.0 + 1.0/p3);
            if (mh2 >= 6) {
                printf("Quarta prova:\n");
                scanf("%f",&p4);
                
                mh2 = 3.0 / (1.0/p1 + 1.0/p4 + 1.0/p3);
                if (mh2 >= 6 ) {
                    printf("Recuperação..\n");
                    printf("Nota: %.2f\n", p4 );
                    printf("Média: %.2f\n", mh2);
                    if (mh2 >= 6) {
                        printf("Aprovado. Yuhull..\n");
                    }
                }

            }
        }
        
        //p3
        if (p3 == menor_nota) {
            mh2 = 3.0 / (1.0/p1 + 1.0/p2 + 1.0/10.0);
            if (mh2 >= 6) {
                printf("Quarta prova:\n");
                scanf("%f",&p4);
                
                mh2 = 3.0 / (1.0/p1 + 1.0/p2 + 1.0/p4);
                if (mh2 >= 6 ) {
                    printf("Recuperação..\n");
                    printf("Nota: %.2f\n", p4 );
                    printf("Média: %.2f\n", mh2);
                    if (mh2 >= 6) {
                        printf("Aprovado. Yuhull..\n");
                    }
                }

            }
        }

    }

    return 0;
}
