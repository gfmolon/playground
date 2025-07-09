#include <stdio.h>

int main() {
    
    int v[5], limite=0, n, i, pos=0;

    while(limite <= 5) {
        printf("Informe um valor\n");
        scanf("%d", &n);
        if(n != 0) {
            v[pos++] = n;
        } else {
            printf("Você digitou 0;\n");
            break;
        }
        limite++;
    }

    printf("Limite: %d\n", limite);
    printf("Itens Lançados:\n");
    for(i=0; i<pos; i++) {
        printf("i:%d / v[i]: %d, pos: %d\n", i, v[i], pos);
    } 
    
    return 0;
}
