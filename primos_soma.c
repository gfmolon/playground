#include <stdio.h>

int main() {

    int n, candidato=1, candidato2=1;
    int i, j, cont, cont2, p=0, primo;

    printf("Digite um número.\n");
    scanf("%d",&n);

    if (n > 1 && n % 2 == 0) {
       
    while (p != 1) {

        candidato2 = n - candidato;
        primo = candidato + candidato2;
        
        cont = 0;
        for(i=2; i<=candidato; i++) {
            if(candidato % i == 0) {
                cont++;
            }    
        }
        cont2 = 0;
        for(j=1; j<=candidato2; j++) {
            if(candidato2 % j == 0) {
                cont2++;
            }
        }

        if(cont == 2 && cont2 == 2 && primo == n) {
            p = 1;
            break;
        }

        printf("%d = %d + %d\n", n, candidato, candidato2);
        candidato++;
    }   


    } else {
        printf("Número inválido.\n");
    }

}
