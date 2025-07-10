
#include <stdio.h>

int main() {

    int cod[50];
    int vit[50];
    int emp[50];
    int i, n, total = 0;

    for(i = 0; i < 50; i++) {
        printf("Cód do Time (0 para parar):\n");
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        cod[total] = n;
        total++;
    }

    for(i = 0; i < total; i++) {
        printf("Empates do time %d:\n", cod[i]);
        scanf("%d", &emp[i]);
    }

    for(i = 0; i < total; i++) {
        printf("Vitórias do time %d:\n", cod[i]);
        scanf("%d", &vit[i]);
    }

    printf("\nResumo dos times:\n");
    for(i = 0; i < total; i++) {
        printf("Time %d - Empates: %d pontos | Vitórias: %d\n pontos", cod[i], emp[i]*1, vit[i]*3);
    }

    return 0;
}
